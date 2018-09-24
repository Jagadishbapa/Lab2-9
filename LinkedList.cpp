// LinkedList.cpp

// tom bailey   0745  5 oct 2010
// Definition of methods for the List class.

#include "LinkedList.h"

#include <utility>


List::List()
	: first_(NULL)
{
}


List::List(const List & other)
	: first_(clone(other.first_))
{
}


List::~List()
{
	while (!empty())
	{
		removeFirst();
	}
}

const List & List::operator=(const List & other)
{
	// check for list = list
	if (&other != this)
	{
		// clear the current contents of this List
		this -> ~List();
		// and get a copy of other
		first_ = clone(other.first_);
	}

	return *this;
}

bool List::operator==(const List &rhs){
    if(this->size() == 0 && rhs.size() == 0){return true;}//both empty
    if(this->size() != rhs.size()){return false;}//sizes not the same

    //Node* lptr = this->next_;
    //Node* rptr = rhs->next_;

    Node* lptr = this->first_;
    Node* rptr = rhs.first_;

	double lEntry = lptr->entry_;
    double rEntry = rptr->entry_;

	while (lptr != NULL && rptr != NULL)
	{
        if(lEntry != rEntry){
            return false;
        }

        lptr = lptr->next_;
        rptr = rptr->next_;
        lEntry = lptr->entry_;
        rEntry = rptr->entry_;
	}

  	return true;
}


bool List::empty() const
{
	return first_ == NULL;
}


void List::insertAsFirst(double x)
{
	first_ = new Node(x, first_);
}

void List::insertAsLast(double x)
{
    if (empty())
    {
        first_ = new Node(x);
    }
    else
    {
        Node* node = first_;
        while (node->next_ != NULL)
            node = node->next_;

        // `node` is now the last node in the list, so we
        // set it's `next_` to a new node with the desired value.

        node->next_ = new Node(x);
    }
}


double List::removeFirst()
{
	double item = first_->entry_;
	Node * tempPtr = first_;
	first_ = first_->next_;
	delete tempPtr;
	return item;
}

ulong List::size() const
{
    ulong result = 0;

    Node* node = first_;

    while (node != NULL)
    {
        node = node->next_;
        result++;
    }

    return result;
}

double List::sum() const
{
    Node* node = first_;
    double result = 0.0;

    while (node != NULL)
    {
        result += node->entry_;
        node = node->next_;
    }

    return result;
}

void List::print(ostream & outfile) const
{
	outfile << "[ ";
	if (!empty())
	{
		// The first entry is printed separately because no comma
		// is needed.
		outfile << first_->entry_;
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			outfile << ", " << ptr->entry_;
			ptr = ptr->next_;
		}
	}
	outfile << " ] ";
}


// Iterative version of clone.
// This version walks down the linked structure making a
//   new Node for each double in the structure.
Node * List::clone(Node * ptr)
{
	if (ptr == NULL)
	{
		return NULL;
	}
	Node * first = new Node(ptr->entry_);
	Node * last = first;
	ptr = ptr->next_;
	while (ptr != NULL)
	{
		last->next_ = new Node(ptr->entry_);
		last = last->next_;
		ptr = ptr->next_;
	}
	return first;
}


//// Recursive version of clone.
//// This version handles two cases, a linked structure with
////   no Nodes, and a linked structure with one or more
////   Nodes.
//Node * List::clone( Node * ptr )
//{
//   if( ptr == NULL )
//   {
//      return NULL;
//   }
//   return new Node( ptr->entry_, clone( ptr->next_ ) );
//}


ostream & operator<<(ostream & outfile, const List & list)
{
	list.print(outfile);
	return outfile;
}

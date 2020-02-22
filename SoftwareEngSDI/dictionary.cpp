#include "dictionary.h"

namespace Containers
{

	struct Dictionary::Node
	{
		Key key;
		Item item;
		Node* nextNode;
		Node(Key k, Item i)
		{
			item = i;
			key = k;
			nextNode = nullptr;
		}
	};

	// Dictionary Destructor
	Dictionary::~Dictionary()
	{

	}

	// Dictionary insert method
	bool Dictionary::insert(Key key, Item item) 
	{
		// pass in head as the entry node for going through the list
		return insertRecurssion(key, item, head);
	}

	// Dictionary insert recurssion worker method
	bool Dictionary::insertRecurssion(Key key, Item item, Node*& node)
	{
		// check if current node is not a nullptr
		if (node != nullptr)
		{
			if (node->key == key)
			{
				// update item for key in dictionary and return false
				node->item = item;
				return false;
			}
			else
			{
				// if key is not in dictionary, go through to next node
				return insertRecurssion(key, item, node->nextNode);
			}
		}
		else
		{
			// create a new node if it is a nullptr
			node = new Node(key, item);
			return true;
		}
		return false;
	}

	// Dictionary lookup method
	Dictionary::Item* Dictionary::lookup(Key key)
	{
		return nullptr;
	}

	// Dictionary remove method
	bool Dictionary::remove(Key key)
	{
		return false;
	}

}
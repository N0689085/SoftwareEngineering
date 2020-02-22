#pragma once

#include <iostream>

namespace Containers 
{
	class Dictionary 
	{
	public:
		using Key = std::string;
		using Item = std::string;
		Dictionary() {
			head = nullptr;
		};
		~Dictionary();
		bool insert(Key, Item);
		Item* lookup(Key);
		bool remove(Key);
	private:
		struct Node;
		Node* head;
		static bool insertRecurssion(Key, Item, Node*&);
		static Item* lookupRec(Key, Node*&);

	};
}
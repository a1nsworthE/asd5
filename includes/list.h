//
// Created by xed22 on 29.09.2022.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "node.h"

typedef struct list {
    node *begin;
    node *end;
    size_t size;
} list;

bool isEmpty(list l);

size_t size(list l);

list createEmptyList();

void pushBack(list *l, int value);

void pushFront(list *l, int value);

void inputList(list *l, size_t n);

node *next(list *l);

void outputList(list l);

int getElement(list l, size_t position);

node getNode(list l, size_t position);

node *getLinkNode(list l, size_t position);


void add(list *l, int value, size_t position);

#endif //LIST_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ALP_SIZE 26

struct TrieNode {
    struct TrieNode* children[ALP_SIZE];
    bool isEndOfWord;
};

struct TrieNode* createNode() {
    struct TrieNode* node = (struct TrieNode*)malloc(sizeof(struct TrieNode));
    node->isEndOfWord = false;

    for (int i = 0; i < ALP_SIZE; i++) {
        node->children[i] = NULL;
    }

    return node;
}

void insertWord(struct TrieNode* root, const char* word) {
    struct TrieNode* current = root;

    for (int i = 0; word[i] != '\0'; i++) {
        int index = word[i] - 'a';

        if (current->children[index] == NULL) {
            current->children[index] = createNode();
        }

        current = current->children[index];
    }

    current->isEndOfWord = true;
}

void printWords(struct TrieNode* node, char* buffer);

void findWords(struct TrieNode* root, const char* prefix) {
    struct TrieNode* current = root;

    for (int i = 0; prefix[i] != '\0'; i++) {
        int index = prefix[i] - 'a';

        if (current->children[index] == NULL) {
            return;
        }

        current = current->children[index];
    }

    char buffer[100];
    strcpy(buffer, prefix);
    printWords(current, buffer);
}

void printWords(struct TrieNode* node, char* buffer) {
    if (node->isEndOfWord) {
        printf("%s\n", buffer);
    }

    for (int i = 0; i < ALP_SIZE; i++) {
        if (node->children[i] != NULL) {
            buffer[strlen(buffer)] = i + 'a';
            printWords(node->children[i], buffer);
            buffer[strlen(buffer) - 1] = '\0';
        }
    }
}

int main() {
    const char* words[] = {"apple", "application", "banana", "art", "ball", "cat"};
    int size = sizeof(words) / sizeof(words[0]);

    struct TrieNode* root = createNode();

    for (int i = 0; i < size; i++) {
        insertWord(root, words[i]);
    }

    const char* prefix = "app";
    printf("'%s' ile başlayan kelimeler:\n", prefix);
    findWords(root, prefix);

    return 0;
}

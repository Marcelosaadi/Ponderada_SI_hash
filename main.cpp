#include <iostream>
#include <list>
#include <string>

using namespace std;

class produto {
private:
  int Preco;
  std::string Nome;

public:
  produto() {
    this->Preco = -1;
    this->Nome = "";
  }

  produto(int Preco, std::string Nome) {
    this->Preco = Preco;
    this->Nome = Nome;
  }

  string getNome() const { return Nome; }

  int getPreco() const { return Preco; }

  bool operator==(const produto &other) const {
    return (Preco == other.Preco) && (Nome == other.Nome);
  }
};

class Hash {
public:
  Hash(int max);
  ~Hash();
  bool isFull() const;
  int getLength() const;
  void retrieveItem(produto &Produto, bool &found);
  void insertItem(produto Produto);
  void deleteItem(produto Produto);
  void print();
  int getHash(produto Produto);

private:
  int max;
  int length;
  list<produto> *table;
};

Hash::Hash(int max) {
  length = 0;
  this->max = max;
  table = new list<produto>[max];
}

Hash::~Hash() { delete[] table; }

bool Hash::isFull() const { return (length == max); }

int Hash::getLength() const { return length; }

void Hash::insertItem(produto Produto) {
  int location = getHash(Produto);
  table[location].push_back(Produto);
  length++;
}

void Hash::retrieveItem(produto &Produto, bool &found) {
  int location = getHash(Produto);
  for (auto it = table[location].begin(); it != table[location].end(); ++it) {
    if (*it == Produto) {
      found = true;
      return;
    }
  }
  found = false;
}

void Hash::deleteItem(produto Produto) {
  int location = getHash(Produto);
  table[location].remove(Produto);
  length--;
}

int Hash::getHash(produto Produto) {
  int hash = 0;
  for (char c : Produto.getNome()) {
    hash += c;
  }
  return hash % max;
}

void Hash::print() {
  for (int i = 0; i < max; i++) {
    cout << i << ": ";
    for (auto it = table[i].begin(); it != table[i].end(); ++it) {
      cout << it->getNome() << "," << it->getPreco() << " -> ";
    }
    cout << "NULL" << endl;
  }
}

int main() {
    Hash hash_table(5);

    string nomes[10] = {"caneta", "corrimao", "xicara", "copo", "gaveta" , "lapis", "corracha", "caderno", "livro", "mochila"};
    int precos[10] = {10, 20, 30, 10, 2, 5, 10, 10, 20, 30};
    for (int i = 0; i < 10; i++) {
        produto Produto = produto(precos[i], nomes[i]);
        hash_table.insertItem(Produto);
    }
    hash_table.print();

    return 0;
}
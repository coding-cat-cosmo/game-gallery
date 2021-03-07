#include "../header/gamegallery.hpp"
#include <string>
using namespace std;

    GameGallery::~GameGallery() {
        delete gallery;
        delete file;
        delete how_search;
        delete how_sort;
    }

    void GameGallery::save(string save_file="games.JSON") {
        file->fileName = save_file;
        file->gallery = this->gallery;
        file->save();
        cout << "the Video Game data has been saved.\n\n ";
    }

    void GameGallery::load(string load_file="games.JSON") {
        file->fileName = load_file;
        this->gallery = file->load();
        cout << "the Video Game data has been loaded.\n\n ";
    }

    void GameGallery::setSearch(Searcher* search) {
        delete how_search;
        how_search = search;
    }

    void GameGallery::setSort(Sorter* sort) {
        delete how_sort;
        how_sort = sort;
    }

    VideoGame GameGallery::search(string key) const {
        return how_search->search(key);
    }

    void GameGallery::sort() {
        how_sort->sort();
    }

    void GameGallery::addGame(VideoGame* newGame) {
        gallery->add(newGame);
    }

    void GameGallery::delGame(VideoGame* badGame) {
        if (how_search(badGame) == nullptr) {
            cout << "Video Game that is trying to be deleted does not exist in this database.\n\n";
            return;
        }
        else {
            gallery->delete(badGame);
        }
    }

    void GameGallery::print() const {
        cout << "Collection:\n" << gallery->print() << "\nfile name:\n" << file->fileName << endl << endl;
    }

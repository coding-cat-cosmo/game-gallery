#ifndef GAMEGALLERY_HPP
#define GAMEGALLERY_HPP

class GameGallery {
    private:
    Collection* gallery;
    Filemanip* file;
    Searcher* how_search;
    Sorter* how_sort;

    public:
    GameGallery() : gallery(new Collection()), file(new Filemanip()), how_search(new Search_Name()), how_sort(new Sort_Name()) {}
    //might change filemanip based on how its done later
    GameGallery(Collection* gal, Filemanip* file_in, Searcher* search, Sorter* sort) : gallery(gal), file(file_in),
     how_search(search), how_sort(sort) {}
    ~GameGallery();
    void save(string save_file);
    void load(string load_file);
    void setSearch(Searcher* search);
    void setSort(Sorter* sort);
    VideoGame search() const;
    void sort();
    void print() const;
};

#endif //GAMEGALLERY_HPP

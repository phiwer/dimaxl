
class Item
{
 public:
  Item(const float start_point, const float end_point);

  float Length() const;

 private:
  float start_point_;
  float end_point_;
};

class DiMaxL 
{
 public:
  int GetIntervals() const;
  int GetPoints() const;

  void Solve();


 private:
  int intervals_;
  int points_;
};


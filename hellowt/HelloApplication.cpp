#include "HelloApplication.hpp"


HelloApplication::HelloApplication(const Wt::WEnvironment& env)
  : WApplication(env)
{
  setTitle("Hello world");                            // application title

  root()->addWidget(Wt::cpp14::make_unique<Wt::WText>("Enter a Number: ")); // show some text
  nameEdit_ = root()->addWidget(Wt::cpp14::make_unique<Wt::WLineEdit>()); // allow text input
  nameEdit_->setFocus();                              // give focus

  auto greetBut = root()->addWidget(Wt::cpp14::make_unique<Wt::WPushButton>("Add."));
 
                                                      // create a button
  greetBut->setMargin(10, Wt::Side::Left);                   // add 5 pixels margin

  root()->addWidget(Wt::cpp14::make_unique<Wt::WBreak>());    // insert a line break
  greeting_ = root()->addWidget(Wt::cpp14::make_unique<Wt::WText>()); // empty text

  /*
   * Connect signals with slots
   *
   * - simple Wt-way: specify object and method
   */
  greetBut->clicked().connect(this, &HelloApplication::greet);

  /*
   * - using an arbitrary function object, e.g. useful to bind
   *   values with std::bind() to the resulting method call
   */
  nameEdit_->enterPressed().connect(std::bind(&HelloApplication::greet, this));

  /*
   * - using a lambda:
   */
  greetBut->clicked().connect([&]() {
          nameEdit_ = root()->addWidget(Wt::cpp14::make_unique<Wt::WLineEdit>());
          // total = std::stoi(nameEdit_->text()) + oldTotal;
         std::cerr << "Your total Number is: " << total; });
}

void HelloApplication::greet()
{
  /*
   * Update the text, using text input into the nameEdit_ field.
   */
  greeting_->setText("Your total is: " + nameEdit_->text());
}

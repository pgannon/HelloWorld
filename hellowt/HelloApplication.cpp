#include "HelloApplication.hpp"

HelloApplication::HelloApplication(const Wt::WEnvironment& env)
  : WApplication(env)
{
  setTitle("Hello world");                            // application title

  root()->addWidget(Wt::cpp14::make_unique<Wt::WText>("Hey! What's your name?")); // show some text

  nameEdit_ = root()->addWidget(Wt::cpp14::make_unique<Wt::WLineEdit>()); // allow text input
  nameEdit_->setFocus();                              // give focus

  auto greetBut = root()->addWidget(Wt::cpp14::make_unique<Wt::WPushButton>("Greet me."));
 
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
  greetBut->clicked().connect([=]() { 
          std::cerr << "Hello there, " << nameEdit_->text() << + ". How are you?"
                    << std::endl;
          auto goodBut = root()->addWidget(Wt::cpp14::make_unique<Wt::WPushButton>("Good"));
      goodBut->setMargin(5, Wt::Side::Left);
      });
}

void HelloApplication::greet()
{
  /*
   * Update the text, using text input into the nameEdit_ field.
   */
  greeting_->setText("Hello there, " + nameEdit_->text());
}

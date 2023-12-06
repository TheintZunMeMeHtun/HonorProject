#include "homepage.h"
#include "ui_homepage.h"
#include "menwindow.h"
#include "womenwindow.h"
#include "ecocdeals.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QScrollArea>
#include <QGridLayout>
#include <QPixmap>


Homepage::Homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Homepage)

{
    ui->setupUi(this);
        QPixmap search("/Users/theintzun/Downloads/018428d1e3407a96da8665a62f85ca7e.jpg");
        ui->label_5_search->setPixmap(search);

        QPixmap pix("/Users/theintzun/Downloads/451ac9ac6fd294b8b929a010958f75fa.jpg");
        ui->label_2_pic1->setPixmap(pix);

        QPixmap pix1("/Users/theintzun/Downloads/c7e74cc33b0dd999facd9c5daaae20db.jpg");
    ui->label_3_pic3->setPixmap(pix1);

        QPixmap pix2("/Users/theintzun/Downloads/1774728327e8e8e4c375390ab856c85b.jpg");
    ui->label_4_pic4->setPixmap(pix2);

        QPixmap pix3("/Users/theintzun/Downloads/2ec6cb3f0a6d09b4b63dfb47d8b234f8.jpg");
    ui->label_5_pic5->setPixmap(pix3);

        QPixmap pix4("/Users/theintzun/Downloads/EcoWardrobe-01.jpg");
    ui->label_logo_2->setPixmap(pix4);

        QPixmap pix5("/Users/theintzun/Downloads/945d2d3715f0b727519aebca169cf585.jpg");
        ui->label_6pic6->setPixmap(pix5);

        QPixmap pix6("/Users/theintzun/Downloads/9fa0fda461b87091af1816a98f413438.jpg");
        ui->label_7pic7->setPixmap(pix6);

        QPixmap pix7("/Users/theintzun/Downloads/fashion-design-class.jpg");
        ui->label_8pic8->setPixmap(pix7);

        connect(this, &Homepage::closeWindow, this, &Homepage::close);
        menwindow *menWin = new menwindow(this);
        connect(menWin, &menwindow::showHomepage, this, &Homepage::show);
        womenwindow *womenWin = new womenwindow(this);
        connect(womenWin, &womenwindow::showHomepage, this, &Homepage::show);
        Ecocdeals *ecodeals = new Ecocdeals(this);
        connect(ecodeals, &Ecocdeals::showHomepage, this, &Homepage::show);



    // Create the main layout
    /*QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // Header with logo and menu
    QHBoxLayout *headerLayout = new QHBoxLayout();
    QLabel *logoLabel = new QLabel();
    logoLabel->setPixmap(QPixmap(":/path/to/logo")); // Set the path to your logo image
    headerLayout->addWidget(logoLabel);

    // Add menu buttons
    QPushButton *womenButton = new QPushButton("Women");
    QPushButton *menButton = new QPushButton("Men");
    QPushButton *salesButton = new QPushButton("Christmas Sales");
    headerLayout->addWidget(womenButton);
    headerLayout->addWidget(menButton);
    headerLayout->addWidget(salesButton);

    // Add search bar
    QLineEdit *searchBar = new QLineEdit();
    searchBar->setPlaceholderText("Search");
    headerLayout->addWidget(searchBar);

    // Add header to main layout
    mainLayout->addLayout(headerLayout);

    QLabel *appNameLabel = new QLabel("Eco Wardrobe");
    appNameLabel->setAlignment(Qt::AlignCenter); // Center the text
    // Set font size and weight
    QFont appNameFont = appNameLabel->font();
    appNameFont.setPointSize(24); // Example font size
    appNameFont.setBold(true); // Make the font bold
    appNameLabel->setFont(appNameFont);

    // Content Area
    QScrollArea *scrollArea = new QScrollArea(this); // Use a scroll area for the content
    QWidget *contentWidget = new QWidget();
    QGridLayout *contentLayout = new QGridLayout(contentWidget);

    // Populate contentLayout with your content widgets, images, labels, etc.
    // ...

    // Assuming each section in the content area is in a grid layout
    // Section for the Christmas deals banner
    QLabel *christmasDealsLabel = new QLabel();
    christmasDealsLabel->setPixmap(QPixmap(":/images/christmas_deals.png")); // Set the path to your deals image
    christmasDealsLabel->setScaledContents(true); // Ensure the pixmap scales with the label size
    contentLayout->addWidget(christmasDealsLabel, 0, 0, 1, 2); // Span two columns

    // Section for the eco-friendly fabric
    QLabel *ecoFriendlyLabel = new QLabel("Eco Friendly Fabric\nbest choices for a\nsustainable closet");
    // Set font, style, or any other properties to ecoFriendlyLabel
    contentLayout->addWidget(ecoFriendlyLabel, 1, 0);

    // Image for the eco-friendly fabric
    QLabel *ecoFriendlyImageLabel = new QLabel();
    ecoFriendlyImageLabel->setPixmap(QPixmap(":/images/eco_friendly.png"));
    contentLayout->addWidget(ecoFriendlyImageLabel, 1, 1);

    // Section for "Make BMCC Green"
    QLabel *makeBMCCGreenLabel = new QLabel("Make BMCC Green\nWe commit that our Products are truly made from BMCC recycles to\npromote environmental sustainability within the fashion community at BMCC");
    // Set font, style, or any other properties to makeBMCCGreenLabel
    contentLayout->addWidget(makeBMCCGreenLabel, 2, 0, 1, 2); // Span two columns

    // About our materials section
    QLabel *aboutMaterialsLabel = new QLabel("About our materials\n\"Eco Wardrobe proudly incorporates recycled materials...");
    // Set font, style, or any other properties to aboutMaterialsLabel
    contentLayout->addWidget(aboutMaterialsLabel, 3, 0, 1, 2); // Span two columns

    // The above widgets need to be styled and possibly laid out with more detail.
    // For example, you might want to set specific sizes, margins, or add more widgets for a closer match to your design.

    // ...

    // Don't forget to handle the layout's alignment and spacing:
    contentLayout->setAlignment(Qt::AlignTop);
    contentLayout->setHorizontalSpacing(10);
    contentLayout->setVerticalSpacing(10);

    // ...


    scrollArea->setWidget(contentWidget);
    scrollArea->setWidgetResizable(true);
    mainLayout->addWidget(scrollArea);

    // Footer with contact info and policies
    QHBoxLayout *footerLayout = new QHBoxLayout();
    QLabel *contactInfo = new QLabel("Contact us: ecowardrobe.ew@gmail.com | 999-999-9999");
    footerLayout->addWidget(contactInfo);

    QPushButton *privacyButton = new QPushButton("Privacy Policy");
    QPushButton *returnButton = new QPushButton("Return Policy");
    QPushButton *shippingButton = new QPushButton("Shipping Policy");
    footerLayout->addWidget(privacyButton);
    footerLayout->addWidget(returnButton);
    footerLayout->addWidget(shippingButton);

    // Add footer to main layout
    mainLayout->addLayout(footerLayout);

    // Set the main layout to the window
    this->setLayout(mainLayout);*/
}

Homepage::~Homepage()
{
    delete ui;
}


void Homepage::on_pushButton_men_clicked()
{
    menwindow Men;
    Men.setModal(true);
    emit closeWindow();
    Men.exec();
}


void Homepage::on_pushButton_2_Women_clicked()
{
    womenwindow Women;
    Women.setModal(true);
    emit closeWindow();
    Women.exec();
}



void Homepage::on_pushButton_3_EcoCDeals_clicked()
{
    Ecocdeals deals;
    deals.setModal(true);
    emit closeWindow();
    deals.exec();
}


void Homepage::on_pushButton_4_Christmasdeals_clicked()
{
    Ecocdeals deals;
    deals.setModal(true);
    emit closeWindow();
    deals.exec();
}


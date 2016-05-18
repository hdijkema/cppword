#ifndef CPPWORD_H
#define CPPWORD_H

#include "cppword_global.h"

#include "cppword_documentproperties.h"
#include "cppword_section.h"
#include "cppword_section_settings.h"

#include <QList>

class CPPWORDSHARED_EXPORT CppWord
{
private:
    CppWord_DocumentProperties  _properties;
    QString                      _defaultFontName;
    int                          _defaultFontSize;
    QList<CppWord_Section>      _sectionCollection;

public:
    CppWord();

public:
    CppWord_DocumentProperties getProperties();
    CppWord &                  setProperties(CppWord_DocumentProperties value);

    CppWord_Section &          createSection(CppWord_Section_Settings settings = CppWord_Section_Settings::null());

    QString                    getDefaultFontName();
    void                       setDefaultFontName(QString pValue);

    int                        getDefaultFontSize();
    void                       setDefaultFontSize(int pt);

    void                       addParagraphStyle(QString stylename, QList<CppWord_Style> styles);


public:
};

#endif // CPPWORD_H






//    /**
//     * Adds a paragraph style definition to styles.xml
//     *
//     * @param $styleName string
//     * @param $styles array
//     */
//    public function addParagraphStyle($styleName, $styles) {
//        PHPWord_Style::addParagraphStyle($styleName, $styles);
//    }

//    /**
//     * Adds a font style definition to styles.xml
//     *
//     * @param $styleName string
//     * @param $styles array
//     */
//    public function addFontStyle($styleName, $styleFont, $styleParagraph = null) {
//        PHPWord_Style::addFontStyle($styleName, $styleFont, $styleParagraph);
//    }

//    /**
//     * Adds a table style definition to styles.xml
//     *
//     * @param $styleName string
//     * @param $styles array
//     */
//    public function addTableStyle($styleName, $styleTable, $styleFirstRow = null) {
//        PHPWord_Style::addTableStyle($styleName, $styleTable, $styleFirstRow);
//    }

//    /**
//     * Adds a heading style definition to styles.xml
//     *
//     * @param $titleCount int
//     * @param $styles array
//     */
//    public function addTitleStyle($titleCount, $styleFont, $styleParagraph = null) {
//        PHPWord_Style::addTitleStyle($titleCount, $styleFont, $styleParagraph);
//    }

//    /**
//     * Adds a hyperlink style to styles.xml
//     *
//     * @param $styleName string
//     * @param $styles array
//     */
//    public function addLinkStyle($styleName, $styles) {
//        PHPWord_Style::addLinkStyle($styleName, $styles);
//    }

//    /**
//     * Get sections
//     * @return PHPWord_Section[]
//     */
//    public function getSections() {
//        return $this->_sectionCollection;
//    }

//    /**
//     * Get section count
//     * @return int
//     */
//    private function _countSections() {
//        return count($this->_sectionCollection);
//    }

//    /**
//     * Load a Template File
//     *
//     * @param string $strFilename
//     * @return PHPWord_Template
//     */
//    public function loadTemplate($strFilename) {
//        if(file_exists($strFilename)) {
//            $template = new PHPWord_Template($strFilename);
//            return $template;
//        } else {
//            trigger_error('Template file '.$strFilename.' not found.', E_ERROR);
//        }
//    }
//}

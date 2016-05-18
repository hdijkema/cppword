#include "cppword.h"


CppWord::CppWord()
{
    //_properties = CppWord_DocumentProperties();
    _defaultFontName = "Arial";
    _defaultFontSize = 20;
}

CppWord_DocumentProperties CppWord::getProperties()
{
    return _properties;
}

CppWord &CppWord::setProperties(CppWord_DocumentProperties value)
{
    _properties = value;
    return *this;
}

CppWord_Section &CppWord::createSection(CppWord_Section_Settings settings)
{
    int sectionCount = _sectionCollection.size() + 1;
    _sectionCollection.append(CppWord_Section(sectionCount, settings));
    return _sectionCollection[sectionCount - 1];
}

QString CppWord::getDefaultFontName()
{
    return _defaultFontName;
}

void CppWord::setDefaultFontName(QString pValue)
{
    _defaultFontName = pValue;
}

int CppWord::getDefaultFontSize()
{
    return _defaultFontSize;
}

void CppWord::setDefaultFontSize(int pt)
//        $pValue = $pValue * 2;
//        $this->_defaultFontSize = $pValue;

{
    _defaultFontSize = pt;
}

void CppWord::addParagraphStyle(QString stylename, QList<CppWord_Style> styles)
//    public function addParagraphStyle($styleName, $styles) {
//        PHPWord_Style::addParagraphStyle($styleName, $styles);
//    }
{
    CppWord_Style::addParagraphStyle(stylename, styles);
}

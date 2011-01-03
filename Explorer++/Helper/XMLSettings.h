#ifndef XMLSETTINGS_INCLUDED
#define XMLSETTINGS_INCLUDED

#import <msxml3.dll> raw_interfaces_only

namespace NXMLSettings
{
	MSXML2::IXMLDOMDocument	*DomFromCOM();
	void	WriteStandardSetting(MSXML2::IXMLDOMDocument *pXMLDom,MSXML2::IXMLDOMElement *pGrandparentNode,TCHAR *szElementName,TCHAR *szAttributeName,TCHAR *szAttributeValue);
	VARIANT VariantString(const WCHAR *str);
	void	AddWhiteSpaceToNode(MSXML2::IXMLDOMDocument* pDom,BSTR bstrWs,MSXML2::IXMLDOMNode *pNode);
	void	AppendChildToParent(MSXML2::IXMLDOMNode *pChild, MSXML2::IXMLDOMNode *pParent);
	void	AddAttributeToNode(MSXML2::IXMLDOMDocument *pXMLDom,MSXML2::IXMLDOMElement *pParentNode,const WCHAR *wszAttributeName,const WCHAR *wszAttributeValue);
	void	CreateElementNode(MSXML2::IXMLDOMDocument *pXMLDom,MSXML2::IXMLDOMElement **pParentNode,MSXML2::IXMLDOMElement *pGrandparentNode,WCHAR *szElementName,WCHAR *szAttributeName);
	WCHAR	*EncodeBoolValue(BOOL bValue);
	BOOL	DecodeBoolValue(WCHAR *wszValue);
	WCHAR	*EncodeIntValue(int iValue);
	int		DecodeIntValue(WCHAR *wszValue);
	COLORREF	ReadXMLColorData(MSXML2::IXMLDOMNode *pNode);
	Gdiplus::Color	ReadXMLColorData2(MSXML2::IXMLDOMNode *pNode);
	HFONT	ReadXMLFontData(MSXML2::IXMLDOMNode *pNode);
}

#endif
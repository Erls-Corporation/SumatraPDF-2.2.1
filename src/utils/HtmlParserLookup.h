/* Copyright 2012 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

// This file is auto-generated by generate-htmlparserlookup.py

#ifndef HtmlParserLookup_h
#define HtmlParserLookup_h

enum HtmlTag {
    Tag_A, Tag_Abbr, Tag_Acronym, Tag_Area, Tag_Audio,
    Tag_B, Tag_Base, Tag_Basefont, Tag_Blockquote, Tag_Body,
    Tag_Br, Tag_Center, Tag_Code, Tag_Col, Tag_Dd,
    Tag_Div, Tag_Dl, Tag_Dt, Tag_Em, Tag_Font,
    Tag_Frame, Tag_H1, Tag_H2, Tag_H3, Tag_H4,
    Tag_H5, Tag_H6, Tag_Head, Tag_Hr, Tag_Html,
    Tag_I, Tag_Image, Tag_Img, Tag_Input, Tag_Lh,
    Tag_Li, Tag_Link, Tag_Mbp_Pagebreak, Tag_Meta, Tag_Nav,
    Tag_Object, Tag_Ol, Tag_P, Tag_Pagebreak, Tag_Param,
    Tag_Pre, Tag_S, Tag_Section, Tag_Small, Tag_Span,
    Tag_Strike, Tag_Strong, Tag_Style, Tag_Sub, Tag_Subtitle,
    Tag_Sup, Tag_Svg, Tag_Table, Tag_Td, Tag_Th,
    Tag_Title, Tag_Tr, Tag_Tt, Tag_U, Tag_Ul,
    Tag_Video, Tag_NotFound
};

enum AlignAttr {
    Align_Center, Align_Justify, Align_Left, Align_Right, Align_NotFound
};

HtmlTag         FindHtmlTag(const char *name, size_t len);
bool            IsTagSelfClosing(HtmlTag item);
bool            IsInlineTag(HtmlTag item);
AlignAttr       FindAlignAttr(const char *name, size_t len);
uint32_t        FindHtmlEntityRune(const char *name, size_t len);

#endif

/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2014 Facebook, Inc. (http://www.facebook.com)     |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_EXT_DOMDOCUMENT_H_
#define incl_HPHP_EXT_DOMDOCUMENT_H_

#include "hphp/runtime/base/base-includes.h"
#include <memory>
#include "hphp/runtime/ext/ext_domdocument_includes.h"
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_dom_document_create_element(
  const Variant& obj, const String& name, const String& value = null_string);
Variant f_dom_document_create_document_fragment(const Variant& obj);
Variant f_dom_document_create_text_node(const Variant& obj, const String& data);
Variant f_dom_document_create_comment(const Variant& obj, const String& data);
Variant f_dom_document_create_cdatasection(const Variant& obj, const String& data);
Variant f_dom_document_create_processing_instruction(
  const Variant& obj, const String& target, const String& data = null_string);
Variant f_dom_document_create_attribute(const Variant& obj, const String& name);
Variant f_dom_document_create_entity_reference(const Variant& obj, const String& name);
Variant f_dom_document_get_elements_by_tag_name(
  const Variant& obj, const String& name);
Variant f_dom_document_import_node(
  const Variant& obj, const Object& importednode, bool deep = false);
Variant f_dom_document_create_element_ns(
  const Variant& obj, const String& namespaceuri, const String& qualifiedname,
  const String& value = null_string);
Variant f_dom_document_create_attribute_ns(
  const Variant& obj, const String& namespaceuri, const String& qualifiedname);
Variant f_dom_document_get_elements_by_tag_name_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_document_get_element_by_id(const Variant& obj, const String& elementid);
Variant f_dom_document_normalize_document(const Variant& obj);
Variant f_dom_document_save(
  const Variant& obj, const String& file, int64_t options = 0);
Variant f_dom_document_savexml(
  const Variant& obj, const Object& node = null_object, int64_t options = 0);
Variant f_dom_document_validate(const Variant& obj);
Variant f_dom_document_xinclude(const Variant& obj, int64_t options = 0);
Variant f_dom_document_save_html(const Variant& obj, const Object& node = null_object);
Variant f_dom_document_save_html_file(const Variant& obj, const String& file);
Variant f_dom_document_schema_validate_file(
  const Variant& obj, const String& filename);
Variant f_dom_document_schema_validate_xml(const Variant& obj, const String& source);
Variant f_dom_document_relaxng_validate_file(
  const Variant& obj, const String& filename);
Variant f_dom_document_relaxng_validate_xml(const Variant& obj, const String& source);
Variant f_dom_node_insert_before(
  const Variant& obj, const Object& newnode, const Object& refnode = Object());
Variant f_dom_node_replace_child(
  const Variant& obj, const Object& newchildobj, const Object& oldchildobj);
Variant f_dom_node_remove_child(const Variant& obj, const Object& node);
Variant f_dom_node_append_child(const Variant& obj, const Object& newnode);
Variant f_dom_node_has_child_nodes(const Variant& obj);
Variant f_dom_node_clone_node(const Variant& obj, bool deep = false);
Variant f_dom_node_normalize(const Variant& obj);
Variant f_dom_node_is_supported(
  const Variant& obj, const String& feature, const String& version);
Variant f_dom_node_has_attributes(const Variant& obj);
Variant f_dom_node_is_same_node(const Variant& obj, const Object& node);
Variant f_dom_node_lookup_prefix(const Variant& obj, const String& prefix);
Variant f_dom_node_is_default_namespace(
  const Variant& obj, const String& namespaceuri);
Variant f_dom_node_lookup_namespace_uri(
  const Variant& obj, const String& namespaceuri);
Variant f_dom_nodelist_item(const Variant& obj, int64_t index);
Variant f_dom_namednodemap_get_named_item(const Variant& obj, const String& name);
Variant f_dom_namednodemap_item(const Variant& obj, int64_t index);
Variant f_dom_namednodemap_get_named_item_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_characterdata_substring_data(
  const Variant& obj, int64_t offset, int64_t count);
Variant f_dom_characterdata_append_data(const Variant& obj, const String& arg);
Variant f_dom_characterdata_insert_data(
  const Variant& obj, int64_t offset, const String& data);
Variant f_dom_characterdata_delete_data(
  const Variant& obj, int64_t offset, int64_t count);
Variant f_dom_characterdata_replace_data(
  const Variant& obj, int64_t offset, int64_t count, const String& data);
Variant f_dom_attr_is_id(const Variant& obj);
Variant f_dom_element_get_attribute(const Variant& obj, const String& name);
Variant f_dom_element_set_attribute(
  const Variant& obj, const String& name, const String& value);
Variant f_dom_element_remove_attribute(const Variant& obj, const String& name);
Variant f_dom_element_get_attribute_node(const Variant& obj, const String& name);
Variant f_dom_element_set_attribute_node(const Variant& obj, const Object& newattr);
Variant f_dom_element_remove_attribute_node(const Variant& obj, const Object& oldattr);
Variant f_dom_element_get_elements_by_tag_name(const Variant& obj, const String& name);
Variant f_dom_element_get_attribute_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_element_set_attribute_ns(
  const Variant& obj, const String& namespaceuri, const String& name,
  const String& value);
Variant f_dom_element_remove_attribute_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_element_get_attribute_node_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_element_set_attribute_node_ns(const Variant& obj, const Object& newattr);
Variant f_dom_element_get_elements_by_tag_name_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_element_has_attribute(const Variant& obj, const String& name);
Variant f_dom_element_has_attribute_ns(
  const Variant& obj, const String& namespaceuri, const String& localname);
Variant f_dom_element_set_id_attribute(
  const Variant& obj, const String& name, bool isid);
Variant f_dom_element_set_id_attribute_ns(
  const Variant& obj, const String& namespaceuri, const String& localname, bool isid);
Variant f_dom_element_set_id_attribute_node(
  const Variant& obj, const Object& idattr, bool isid);
Variant f_dom_text_split_text(const Variant& obj, int64_t offset);
Variant f_dom_text_is_whitespace_in_element_content(const Variant& obj);
Variant f_dom_xpath_register_ns(
  const Variant& obj, const String& prefix, const String& uri);
Variant f_dom_xpath_query(
  const Variant& obj, const String& expr, const Object& context = null_object);
Variant f_dom_xpath_evaluate(
  const Variant& obj, const String& expr, const Object& context = null_object);
Variant f_dom_xpath_register_php_functions(
  const Variant& obj, const Variant& funcs = uninit_null());
Variant f_dom_import_simplexml(const Object& node);

Variant php_dom_create_object(xmlNodePtr obj, p_DOMDocument doc,
                              bool owner = false);
///////////////////////////////////////////////////////////////////////////////
// class DOMNode

FORWARD_DECLARE_CLASS(DOMNode);
class c_DOMNode : public ExtObjectDataFlags<ObjectData::UseGet|
                                            ObjectData::UseSet|
                                            ObjectData::UseIsset|
                                            ObjectData::HasClone> {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMNode)

  // need to implement
  c_DOMNode(Class* cls = c_DOMNode::classof())
    : ExtObjectDataFlags(cls)
    , m_node(nullptr)
  {}
  ~c_DOMNode() {}
  public: void t___construct();
  public: Variant t_appendchild(const Object& newnode);
  public: Variant t_clonenode(bool deep = false);
  public: int64_t t_getlineno();
  public: bool t_hasattributes();
  public: bool t_haschildnodes();
  public: Variant t_insertbefore(const Object& newnode, const Object& refnode = Object());
  public: bool t_isdefaultnamespace(const String& namespaceuri);
  public: bool t_issamenode(const Object& node);
  public: bool t_issupported(const String& feature, const String& version);
  public: Variant t_lookupnamespaceuri(const String& namespaceuri);
  public: Variant t_lookupprefix(const String& prefix);
  public: void t_normalize();
  public: Variant t_removechild(const Object& node);
  public: Variant t_replacechild(const Object& newchildobj, const Object& oldchildobj);
  public: Variant t_c14n(bool exclusive = false, bool with_comments = false,
                         const Variant& xpath = uninit_null(),
                         const Variant& ns_prefixes = uninit_null());
  public: Variant t_c14nfile(
    const String& uri, bool exclusive = false, bool with_comments = false,
    const Variant& xpath = uninit_null(), const Variant& ns_prefixes = uninit_null());
  public: Variant t_getnodepath();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



public:
  static c_DOMNode* Clone(ObjectData* obj);
  virtual p_DOMDocument doc() { return m_doc;}
  p_DOMDocument m_doc;
  xmlNodePtr m_node;
};

///////////////////////////////////////////////////////////////////////////////
// class DOMAttr

FORWARD_DECLARE_CLASS(DOMAttr);
class c_DOMAttr : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMAttr)

  // need to implement
  c_DOMAttr(Class* cls = c_DOMAttr::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMAttr() {}
  public: void t___construct(
    const String& name, const String& value = null_string);
  public: bool t_isid();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMCharacterData

FORWARD_DECLARE_CLASS(DOMCharacterData);
class c_DOMCharacterData : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMCharacterData)

  // need to implement
  c_DOMCharacterData(Class* cls = c_DOMCharacterData::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMCharacterData() {}

  public: void t___construct();
  public: bool t_appenddata(const String& arg);
  public: bool t_deletedata(int64_t offset, int64_t count);
  public: bool t_insertdata(int64_t offset, const String& data);
  public: bool t_replacedata(int64_t offset, int64_t count, const String& data);
  public: String t_substringdata(int64_t offset, int64_t count);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMComment

FORWARD_DECLARE_CLASS(DOMComment);
class c_DOMComment : public c_DOMCharacterData {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMComment)

  // need to implement
  c_DOMComment(Class* cls = c_DOMComment::classof())
    : c_DOMCharacterData(cls)
  {}
  ~c_DOMComment() {}
  public: void t___construct(const String& value = null_string);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMText

FORWARD_DECLARE_CLASS(DOMText);
class c_DOMText : public c_DOMCharacterData {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMText)

  // need to implement
  c_DOMText(Class* cls = c_DOMText::classof())
    : c_DOMCharacterData(cls)
  {}
  ~c_DOMText() {}

  public: void t___construct(const String& value = null_string);
  public: bool t_iswhitespaceinelementcontent();
  public: Variant t_splittext(int64_t offset);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMCdataSection

FORWARD_DECLARE_CLASS(DOMCdataSection);
class c_DOMCdataSection : public c_DOMText {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMCdataSection)

  c_DOMCdataSection(Class* cls = c_DOMCdataSection::classof())
    : c_DOMText(cls)
  {}
  ~c_DOMCdataSection() {}
  public: void t___construct(const String& value);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMDocument

FORWARD_DECLARE_CLASS(DOMDocument);
class c_DOMDocument : public c_DOMNode, public Sweepable {
 public:
  DECLARE_CLASS(DOMDocument)

  // need to implement
  c_DOMDocument(Class* cls = c_DOMDocument::classof());
  ~c_DOMDocument();

  public: void t___construct(
    const String& version = null_string, const String& encoding = null_string);
  public: Variant t_createattribute(const String& name);
  public: Variant t_createattributens(
    const String& namespaceuri, const String& qualifiedname);
  public: Variant t_createcdatasection(const String& data);
  public: Variant t_createcomment(const String& data);
  public: Variant t_createdocumentfragment();
  public: Variant t_createelement(
    const String& name, const String& value = null_string);
  public: Variant t_createelementns(
    const String& namespaceuri, const String& qualifiedname,
    const String& value = null_string);
  public: Variant t_createentityreference(const String& name);
  public: Variant t_createprocessinginstruction(
    const String& target, const String& data = null_string);
  public: Variant t_createtextnode(const String& data);
  public: Variant t_getelementbyid(const String& elementid);
  public: Variant t_getelementsbytagname(const String& name);
  public: Variant t_getelementsbytagnamens(
    const String& namespaceuri, const String& localname);
  public: Variant t_importnode(const Object& importednode, bool deep = false);
  public: Variant t_load(const String& filename, int64_t options = 0);
  public: Variant t_loadhtml(const String& source);
  public: Variant t_loadhtmlfile(const String& filename);
  public: Variant t_loadxml(const String& source, int64_t options = 0);
  public: void t_normalizedocument();
  public: bool t_registernodeclass(
    const String& baseclass, const String& extendedclass);
  public: bool t_relaxngvalidate(const String& filename);
  public: bool t_relaxngvalidatesource(const String& source);
  public: Variant t_save(const String& file, int64_t options = 0);
  public: Variant t_savehtml(const Object& node = null_object);
  public: Variant t_savehtmlfile(const String& file);
  public: Variant t_savexml(const Object& node = null_object, int64_t options = 0);
  public: bool t_schemavalidate(const String& filename);
  public: bool t_schemavalidatesource(const String& source);
  public: bool t_validate();
  public: Variant t_xinclude(int64_t options = 0);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



public:
  virtual p_DOMDocument doc() { return this;}
  bool m_formatoutput;
  bool m_validateonparse;
  bool m_resolveexternals;
  bool m_preservewhitespace;
  bool m_substituteentities;
  bool m_stricterror;
  bool m_recover;
  Array m_classmap;
  std::auto_ptr<XmlNodeSet> m_orphans;
  bool m_owner;

private:
  Variant save_html_or_xml(bool as_xml, const Object& node = null_object);
};

///////////////////////////////////////////////////////////////////////////////
// class DOMDocumentFragment

FORWARD_DECLARE_CLASS(DOMDocumentFragment);
class c_DOMDocumentFragment : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMDocumentFragment)

  // need to implement
  c_DOMDocumentFragment(Class* cls = c_DOMDocumentFragment::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMDocumentFragment() {}

  public: void t___construct();
  public: bool t_appendxml(const String& data);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMDocumentType

FORWARD_DECLARE_CLASS(DOMDocumentType);
class c_DOMDocumentType : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMDocumentType)

  // need to implement
  c_DOMDocumentType(Class* cls = c_DOMDocumentType::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMDocumentType() {}
  public: void t___construct();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMElement

FORWARD_DECLARE_CLASS(DOMElement);
class c_DOMElement : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMElement)

  c_DOMElement(Class* cls = c_DOMElement::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMElement() {}
  public: void t___construct(
    const String& name, const String& value = null_string,
    const String& namespaceuri = null_string);
  public: String t_getattribute(const String& name);
  public: Variant t_getattributenode(const String& name);
  public: Object t_getattributenodens(
    const String& namespaceuri, const String& localname);
  public: String t_getattributens(
    const String& namespaceuri, const String& localname);
  public: Object t_getelementsbytagname(const String& name);
  public: Object t_getelementsbytagnamens(
    const String& namespaceuri, const String& localname);
  public: bool t_hasattribute(const String& name);
  public: bool t_hasattributens(
    const String& namespaceuri, const String& localname);
  public: bool t_removeattribute(const String& name);
  public: Variant t_removeattributenode(const Object& oldattr);
  public: Variant t_removeattributens(
    const String& namespaceuri, const String& localname);
  public: Variant t_setattribute(const String& name, const String& value);
  public: Variant t_setattributenode(const Object& newattr);
  public: Variant t_setattributenodens(const Object& newattr);
  public: Variant t_setattributens(
    const String& namespaceuri, const String& name, const String& value);
  public: Variant t_setidattribute(const String& name, bool isid);
  public: Variant t_setidattributenode(const Object& idattr, bool isid);
  public: Variant t_setidattributens(
    const String& namespaceuri, const String& localname, bool isid);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMEntity

FORWARD_DECLARE_CLASS(DOMEntity);
class c_DOMEntity : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMEntity)

  c_DOMEntity(Class* cls = c_DOMEntity::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMEntity() {}
  public: void t___construct();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMEntityReference

FORWARD_DECLARE_CLASS(DOMEntityReference);
class c_DOMEntityReference : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMEntityReference)

  // need to implement
  c_DOMEntityReference(Class* cls = c_DOMEntityReference::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMEntityReference() {}
  public: void t___construct(const String& name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMNotation

FORWARD_DECLARE_CLASS(DOMNotation);
class c_DOMNotation : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMNotation)

  // need to implement
  c_DOMNotation(Class* cls = c_DOMNotation::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMNotation() {}
  public: void t___construct();
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMProcessingInstruction

FORWARD_DECLARE_CLASS(DOMProcessingInstruction);
class c_DOMProcessingInstruction : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMProcessingInstruction)

  // need to implement
  public: c_DOMProcessingInstruction(Class* cls = classof());
  public: ~c_DOMProcessingInstruction();
  public: void t___construct(
    const String& name, const String& value = null_string);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMNameSpaceNode

FORWARD_DECLARE_CLASS(DOMNameSpaceNode);
class c_DOMNameSpaceNode : public c_DOMNode {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMComment)

  // need to implement
  c_DOMNameSpaceNode(Class* cls = c_DOMNameSpaceNode::classof())
    : c_DOMNode(cls)
  {}
  ~c_DOMNameSpaceNode() {}
  public: void t___construct();



};



///////////////////////////////////////////////////////////////////////////////
// class DOMNodeIterator

FORWARD_DECLARE_CLASS(DOMNodeIterator);
class c_DOMNodeIterator : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(DOMNodeIterator)

  // need to implement
  c_DOMNodeIterator(Class* cls = c_DOMNodeIterator::classof());
  ~c_DOMNodeIterator();
  public: void t___construct();
  public: Variant t_current();
  public: Variant t_key();
  public: Variant t_next();
  public: Variant t_rewind();
  public: Variant t_valid();



public:
  void reset_iterator();
  void set_iterator(ObjectData* o, dom_iterable *objmap);

  Object m_o;
  dom_iterable *m_objmap;
  ArrayIter m_iter;
  int m_index;
  Object m_curobj;
};

///////////////////////////////////////////////////////////////////////////////
// class DOMNamedNodeMap

FORWARD_DECLARE_CLASS(DOMNamedNodeMap);
class c_DOMNamedNodeMap
    : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet
                                |ObjectData::UseIsset>
    , public dom_iterable {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMNamedNodeMap)

  // need to implement
  c_DOMNamedNodeMap(Class* cls = c_DOMNamedNodeMap::classof())
    : ExtObjectDataFlags(cls)
  {}
  ~c_DOMNamedNodeMap() {}
  public: void t___construct();
  public: Variant t_getnameditem(const String& name);
  public: Variant t_getnameditemns(
    const String& namespaceuri, const String& localname);
  public: Variant t_item(int64_t index);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);
  public: Variant t_getiterator();



};

///////////////////////////////////////////////////////////////////////////////
// class DOMNodeList

FORWARD_DECLARE_CLASS(DOMNodeList);
class c_DOMNodeList
    : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet
                                |ObjectData::UseIsset>
    , public dom_iterable {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMNodeList)

  // need to implement
  c_DOMNodeList(Class* cls = c_DOMNodeList::classof())
    : ExtObjectDataFlags(cls)
  {}
  ~c_DOMNodeList() {}
  public: void t___construct();
  public: Variant t_item(int64_t index);
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);
  public: Variant t_getiterator();



};

///////////////////////////////////////////////////////////////////////////////
// class DOMImplementation

FORWARD_DECLARE_CLASS(DOMImplementation);
class c_DOMImplementation : public ExtObjectData {
 public:
  DECLARE_CLASS_NO_SWEEP(DOMImplementation)

  // need to implement
  c_DOMImplementation(Class* cls = c_DOMImplementation::classof())
    : ExtObjectData(cls)
  {}
  ~c_DOMImplementation() {}

  public: void t___construct();
  public: Variant t_createdocument(
    const String& namespaceuri = null_string,
    const String& qualifiedname = null_string,
    const Object& doctypeobj = null_object);
  public: Variant t_createdocumenttype(
    const String& qualifiedname = null_string,
    const String& publicid = null_string, const String& systemid = null_string);
  public: bool t_hasfeature(const String& feature, const String& version);



};

///////////////////////////////////////////////////////////////////////////////
// class DOMXPath

FORWARD_DECLARE_CLASS(DOMXPath);
class c_DOMXPath
    : public ExtObjectDataFlags<ObjectData::UseGet|ObjectData::UseSet
                                |ObjectData::UseIsset>
    , public Sweepable {
 public:
  DECLARE_CLASS(DOMXPath)

  // need to implement
  c_DOMXPath(Class* cls = c_DOMXPath::classof());
  ~c_DOMXPath();
  public: void t___construct(const Variant& doc);
  public: Variant t_evaluate(const String& expr, const Object& context = null_object);
  public: Variant t_query(const String& expr, const Object& context = null_object);
  public: bool t_registernamespace(const String& prefix, const String& uri);
  public: Variant t_registerphpfunctions(const Variant& funcs = uninit_null());
  public: Variant t___get(Variant name);
  public: Variant t___set(Variant name, Variant value);
  public: bool t___isset(Variant name);



 public:
  xmlNodePtr m_node;
  p_DOMDocument m_doc;
  Array m_node_list;
  int m_registerPhpFunctions;
  Array m_registered_phpfunctions;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // incl_HPHP_EXT_DOMDOCUMENT_H_

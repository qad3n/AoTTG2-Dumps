// Type: CustomLogic.Editor.Models.XmlInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/XmlInfo.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.Editor.Models.XmlInfo$$get_Summary
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Summary (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x3f7ac70

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Summary
          (CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Summary_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Summary
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Summary (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7ac80

void CustomLogic_Editor_Models_XmlInfo__set_Summary
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Summary_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Remarks
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Remarks (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x3f7ac90

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Remarks
          (CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Remarks_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Remarks
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Remarks (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7aca0

void CustomLogic_Editor_Models_XmlInfo__set_Remarks
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Remarks_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Remarks_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Code
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Code (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x3f7acb0

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Code
          (CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Code_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Code
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Code (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7acc0

void CustomLogic_Editor_Models_XmlInfo__set_Code
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Code_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Code_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Returns
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Returns (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x3f7acd0

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Returns
          (CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Returns_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Returns
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Returns (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7ace0

void CustomLogic_Editor_Models_XmlInfo__set_Returns
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Returns_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Returns_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$FromTypeXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromTypeXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, const MethodInfo* method);
// 0x3f7acf0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromTypeXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  MethodInfo *in_R8;
  
  if (DAT_05703f44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_XmlDocumentUtils);
    il2cpp_init_method_metadata(&TypeInfo_XmlInfo);
    il2cpp_init_method_metadata(&"summary");
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"remarks");
    il2cpp_init_method_metadata(&"");
    DAT_05703f44 = '\x01';
  }
  __this = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_glue(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                     (xmlDocument,type,"summary","",in_R8);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&__this->fields,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                       (xmlDocument,type,"remarks","",in_R8);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                       (xmlDocument,type,"code","",in_R8);
    (__this->fields)._Code_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.Models.XmlInfo$$FromConstructorXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromConstructorXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_ConstructorInfo_o* ctorInfo, const MethodInfo* method);
// 0x3f7ae40

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromConstructorXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_ConstructorInfo_o *ctorInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_05703f45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_XmlDocumentUtils);
    il2cpp_init_method_metadata(&TypeInfo_XmlInfo);
    il2cpp_init_method_metadata(&"summary");
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"remarks");
    il2cpp_init_method_metadata(&"");
    DAT_05703f45 = '\x01';
  }
  __this = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_glue(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                     (xmlDocument,type,ctorInfo,"summary","",in_R9);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&__this->fields,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                       (xmlDocument,type,ctorInfo,"remarks","",in_R9);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                       (xmlDocument,type,ctorInfo,"code","",in_R9);
    (__this->fields)._Code_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.Models.XmlInfo$$FromPropertyXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromPropertyXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x3f7af90

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromPropertyXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_PropertyInfo_o *propertyInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_05703f46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_XmlDocumentUtils);
    il2cpp_init_method_metadata(&TypeInfo_XmlInfo);
    il2cpp_init_method_metadata(&"summary");
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"remarks");
    il2cpp_init_method_metadata(&"");
    DAT_05703f46 = '\x01';
  }
  __this = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_glue(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                     (xmlDocument,type,propertyInfo,"summary","",in_R9);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&__this->fields,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (xmlDocument,type,propertyInfo,"remarks","",in_R9);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (xmlDocument,type,propertyInfo,"code","",in_R9);
    (__this->fields)._Code_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.Models.XmlInfo$$FromFieldXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromFieldXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_FieldInfo_o* fieldInfo, const MethodInfo* method);
// 0x3f7b0e0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromFieldXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_FieldInfo_o *fieldInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_05703f47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_XmlDocumentUtils);
    il2cpp_init_method_metadata(&TypeInfo_XmlInfo);
    il2cpp_init_method_metadata(&"summary");
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"remarks");
    il2cpp_init_method_metadata(&"");
    DAT_05703f47 = '\x01';
  }
  __this = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_glue(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                     (xmlDocument,type,fieldInfo,"summary","",in_R9);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&__this->fields,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (xmlDocument,type,fieldInfo,"remarks","",in_R9);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (xmlDocument,type,fieldInfo,"code","",in_R9);
    (__this->fields)._Code_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.Models.XmlInfo$$FromMethodXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromMethodXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x3f7b230

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromMethodXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (DAT_05703f48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_XmlDocumentUtils);
    il2cpp_init_method_metadata(&TypeInfo_XmlInfo);
    il2cpp_init_method_metadata(&"returns");
    il2cpp_init_method_metadata(&"summary");
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"remarks");
    il2cpp_init_method_metadata(&"");
    DAT_05703f48 = '\x01';
  }
  __this = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_glue(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                     (xmlDocument,type,methodInfo,"summary","",in_R9);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&__this->fields,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"remarks","",in_R9);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"code","",in_R9);
    (__this->fields)._Code_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Code_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"returns","",in_R9);
    (__this->fields)._Returns_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&(__this->fields)._Returns_k__BackingField,pSVar1);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.Models.XmlInfo$$.ctor
// il2cpp: void CustomLogic_Editor_Models_XmlInfo___ctor (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x3f7ae30

void CustomLogic_Editor_Models_XmlInfo___ctor
               (CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



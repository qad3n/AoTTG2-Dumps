// Type: CustomLogic.Editor.Models.XmlInfo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/XmlInfo.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.XmlInfo$$get_Summary
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Summary (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
CustomLogic_Editor_Models_XmlInfo__get_Summary(CustomLogic_Editor_Models_XmlInfo_o* __this, MethodInfo* method)

{
  return (__this->fields)._Summary_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Summary
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Summary (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
CustomLogic_Editor_Models_XmlInfo__set_Summary(CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Summary_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Summary_k__BackingField,value);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Remarks
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Remarks (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
CustomLogic_Editor_Models_XmlInfo__get_Remarks(CustomLogic_Editor_Models_XmlInfo_o* __this, MethodInfo* method)

{
  return (__this->fields)._Remarks_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Remarks
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Remarks (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180c8de30

void
CustomLogic_Editor_Models_XmlInfo__set_Remarks(CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Remarks_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Remarks_k__BackingField,value);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Code
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Code (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
CustomLogic_Editor_Models_XmlInfo__get_Code(CustomLogic_Editor_Models_XmlInfo_o* __this, MethodInfo* method)

{
  return (__this->fields)._Code_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Code
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Code (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180ace2f0

void
CustomLogic_Editor_Models_XmlInfo__set_Code(CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Code_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Code_k__BackingField,value);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Returns
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Returns (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_o*
CustomLogic_Editor_Models_XmlInfo__get_Returns(CustomLogic_Editor_Models_XmlInfo_o* __this, MethodInfo* method)

{
  return (__this->fields)._Returns_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Returns
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Returns (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180584ca0

void
CustomLogic_Editor_Models_XmlInfo__set_Returns(CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Returns_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Returns_k__BackingField,value);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$FromTypeXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromTypeXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, const MethodInfo* method);
// 0x182106630

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromTypeXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_Models_XmlInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"summary");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"remarks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a6d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_Editor_Models_XmlInfo);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_Editor_XmlDocumentUtils->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                     (xmlDocument,type,"summary","",(MethodInfo *)0x0);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Summary_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                       (xmlDocument,type,"remarks","",(MethodInfo *)0x0);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                       (xmlDocument,type,"code","",(MethodInfo *)0x0);
    (__this->fields)._Code_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.Models.XmlInfo$$FromConstructorXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromConstructorXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_ConstructorInfo_o* ctorInfo, const MethodInfo* method);
// 0x182106040

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromConstructorXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_ConstructorInfo_o *ctorInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_Models_XmlInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"summary");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"remarks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_Editor_Models_XmlInfo);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_Editor_XmlDocumentUtils->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                     (xmlDocument,type,ctorInfo,"summary","",(MethodInfo *)0x0)
  ;
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Summary_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                       (xmlDocument,type,ctorInfo,"remarks","",
                        (MethodInfo *)0x0);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                       (xmlDocument,type,ctorInfo,"code","",
                        (MethodInfo *)0x0);
    (__this->fields)._Code_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.Models.XmlInfo$$FromPropertyXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromPropertyXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x1821064c0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromPropertyXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_PropertyInfo_o *propertyInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_Models_XmlInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"summary");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"remarks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a6f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_Editor_Models_XmlInfo);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_Editor_XmlDocumentUtils->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                     (xmlDocument,type,propertyInfo,"summary","",
                      (MethodInfo *)0x0);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Summary_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (xmlDocument,type,propertyInfo,"remarks","",
                        (MethodInfo *)0x0);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (xmlDocument,type,propertyInfo,"code","",
                        (MethodInfo *)0x0);
    (__this->fields)._Code_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.Models.XmlInfo$$FromFieldXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromFieldXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_FieldInfo_o* fieldInfo, const MethodInfo* method);
// 0x1821061b0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromFieldXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,System_Reflection_FieldInfo_o *fieldInfo,
          MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_Models_XmlInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"summary");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"remarks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_Editor_Models_XmlInfo);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_Editor_XmlDocumentUtils->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                     (xmlDocument,type,fieldInfo,"summary","",(MethodInfo *)0x0
                     );
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Summary_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (xmlDocument,type,fieldInfo,"remarks","",
                        (MethodInfo *)0x0);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (xmlDocument,type,fieldInfo,"code","",
                        (MethodInfo *)0x0);
    (__this->fields)._Code_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.Models.XmlInfo$$FromMethodXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromMethodXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x182106320

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromMethodXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_Editor_Models_XmlInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"returns");
    il2cpp_codegen_initialize_runtime_metadata(&"summary");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"remarks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346a71 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_Editor_Models_XmlInfo);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_Editor_XmlDocumentUtils->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_Editor_XmlDocumentUtils);
  }
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                     (xmlDocument,type,methodInfo,"summary","",
                      (MethodInfo *)0x0);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Summary_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"remarks","",
                        (MethodInfo *)0x0);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"code","",
                        (MethodInfo *)0x0);
    (__this->fields)._Code_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Code_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"returns","",
                        (MethodInfo *)0x0);
    (__this->fields)._Returns_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Returns_k__BackingField,pSVar1);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.Models.XmlInfo$$.ctor
// il2cpp: void CustomLogic_Editor_Models_XmlInfo___ctor (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_Editor_Models_XmlInfo___ctor(CustomLogic_Editor_Models_XmlInfo_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: CustomLogic.Editor.Models.XmlInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/XmlInfo.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.XmlInfo$$get_Summary
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Summary (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x4287150

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Summary(CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Summary_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Summary
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Summary (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4287160

void CustomLogic_Editor_Models_XmlInfo__set_Summary
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Summary_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Remarks
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Remarks (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x4287170

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Remarks(CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Remarks_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Remarks
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Remarks (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4287180

void CustomLogic_Editor_Models_XmlInfo__set_Remarks
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Remarks_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Remarks_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Code
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Code (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x4287190

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Code(CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Code_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Code
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Code (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x42871a0

void CustomLogic_Editor_Models_XmlInfo__set_Code
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Code_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Code_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$get_Returns
// il2cpp: System_String_o* CustomLogic_Editor_Models_XmlInfo__get_Returns (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x42871b0

System_String_o *
CustomLogic_Editor_Models_XmlInfo__get_Returns(CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  return (__this->fields)._Returns_k__BackingField;
}


// CustomLogic.Editor.Models.XmlInfo$$set_Returns
// il2cpp: void CustomLogic_Editor_Models_XmlInfo__set_Returns (CustomLogic_Editor_Models_XmlInfo_o* __this, System_String_o* value, const MethodInfo* method);
// 0x42871c0

void CustomLogic_Editor_Models_XmlInfo__set_Returns
               (CustomLogic_Editor_Models_XmlInfo_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Returns_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Returns_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.XmlInfo$$FromTypeXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromTypeXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, const MethodInfo* method);
// 0x42871d0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromTypeXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,MethodInfo *method)

{
  CustomLogic_Editor_Models_XmlInfo_o *__this;
  System_String_o *pSVar1;
  CustomLogic_Editor_Models_XmlInfo_o *extraout_RAX;
  System_Xml_XmlDocument_o *__this_00;
  
  if (g_data_057adcb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb2 = '\x01';
  }
  __this = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = xmlDocument;
  pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                     (xmlDocument,type,"summary","",(MethodInfo *)0x0);
  if (__this != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this->fields)._Summary_k__BackingField = pSVar1;
    il2cpp_runtime_helper_022b4080(&__this->fields,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                       (xmlDocument,type,"remarks","",(MethodInfo *)0x0);
    (__this->fields)._Remarks_k__BackingField = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Remarks_k__BackingField,pSVar1);
    pSVar1 = CustomLogic_Editor_XmlDocumentUtils__GetTypeNodeText
                       (xmlDocument,type,"code","",(MethodInfo *)0x0);
    (__this->fields)._Code_k__BackingField = pSVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Code_k__BackingField,pSVar1);
    return __this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.Models.XmlInfo$$FromConstructorXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromConstructorXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_ConstructorInfo_o* ctorInfo, const MethodInfo* method);
// 0x4287330

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromConstructorXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_ConstructorInfo_o *ctorInfo,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppClass *pIVar3;
  System_Xml_DomNameTable_o **ppSVar4;
  System_Xml_XmlLinkedNode_o **ppSVar5;
  CustomLogic_Editor_Models_XmlInfo_o *pCVar6;
  System_String_o *pSVar7;
  System_Xml_DomNameTable_o *pSVar8;
  System_Type_o *pSVar9;
  System_Xml_XmlLinkedNode_o *pSVar10;
  CustomLogic_Editor_Models_XmlInfo_o *__this_00;
  CustomLogic_Editor_Models_XmlInfo_o *extraout_RAX;
  System_Reflection_PropertyInfo_o *property;
  System_Reflection_FieldInfo_o *field;
  System_Reflection_MethodInfo_o *methodInfo;
  undefined4 uVar11;
  System_Type_o *type_00;
  System_Xml_XmlDocument_o *pSVar12;
  System_Xml_XmlDocument_o *pSVar13;
  System_Xml_DomNameTable_o *__this_01;
  
  if (g_data_057adcb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb3 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = type;
  pSVar12 = xmlDocument;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                     (xmlDocument,type,ctorInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                       (xmlDocument,type,ctorInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetConstructorNodeText
                       (xmlDocument,type,ctorInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb4 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  type_00 = pSVar9;
  pSVar13 = pSVar12;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                     (pSVar12,pSVar9,property,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (pSVar12,pSVar9,property,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (pSVar12,pSVar9,property,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb5 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = type_00;
  pSVar12 = pSVar13;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                     (pSVar13,type_00,field,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (pSVar13,type_00,field,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (pSVar13,type_00,field,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"returns");
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb6 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = pSVar12;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                     (pSVar12,pSVar9,methodInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (pSVar12,pSVar9,methodInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (pSVar12,pSVar9,methodInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (pSVar12,pSVar9,methodInfo,"returns","",(MethodInfo *)0x0);
    (pCVar6->fields)._Returns_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Returns_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"Characters.");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb7 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar13,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppSVar4 = &(pSVar13->fields).domNameTable;
  (pSVar13->fields).domNameTable = pSVar8;
  __this_01 = (System_Xml_DomNameTable_o *)ppSVar4;
  il2cpp_runtime_helper_022b4080();
  pSVar8 = (pSVar13->fields).domNameTable;
  if (pSVar8 == (System_Xml_DomNameTable_o *)0x0) goto label_04287b03;
  *(undefined4 *)((long)&pSVar8[7].monitor + 4) = 0x3f800000;
  __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pSVar8[7].fields.count;
  __this_01 = (System_Xml_DomNameTable_o *)0x0;
  if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04287b03;
  System_Collections_Generic_Dictionary_object__float___Clear(__this,MethodInfo_Void_Clear);
  __this_01 = *ppSVar4;
  if (__this_01 != (System_Xml_DomNameTable_o *)0x0) {
    pIVar3 = (Il2CppClass *)__this_01->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
      bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
      goto label_04287a9a;
      pSVar9 = System_Object__GetType((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (pSVar9 == (System_Type_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                (*(pSVar9->klass->vtable)._3_ToString.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._3_ToString.method);
      ppSVar5 = &(pSVar13->fields).lastChild;
      (pSVar13->fields).lastChild = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      pSVar10 = (pSVar13->fields).lastChild;
      __this_01 = (System_Xml_DomNameTable_o *)0x0;
      if (pSVar10 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)pSVar10,"Shifter","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      __this_01 = (System_Xml_DomNameTable_o *)0x0;
      if (*ppSVar5 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)*ppSVar5,"Characters.","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
    }
    else {
      (pSVar13->fields).lastChild = "Titan";
    }
    il2cpp_runtime_helper_022b4080(&(pSVar13->fields).lastChild);
  }
label_04287a9a:
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  __this_01 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  *(int32_t *)&(pSVar8->fields).entries = 0;
  if (pSVar8 != (System_Xml_DomNameTable_o *)0x0) {
    (pSVar8->fields).ownerDocument = pSVar13;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).ownerDocument,pSVar13);
    pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)pSVar13,(System_Collections_IEnumerator_o *)pSVar8,
                        (MethodInfo *)0x0);
    return pCVar6;
  }
label_04287b03:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  __this_00 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  uVar11 = 0;
  pCVar6 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields)._Summary_k__BackingField = 0;
  if (__this_00 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this_00->fields)._Code_k__BackingField = (System_String_o *)__this_01;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._Code_k__BackingField,__this_01);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  *(undefined4 *)&(pCVar6->fields)._Summary_k__BackingField = uVar11;
  return extraout_RAX;
}


// CustomLogic.Editor.Models.XmlInfo$$FromPropertyXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromPropertyXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x4287480

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromPropertyXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_PropertyInfo_o *propertyInfo,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppClass *pIVar3;
  System_Xml_DomNameTable_o **ppSVar4;
  System_Xml_XmlLinkedNode_o **ppSVar5;
  CustomLogic_Editor_Models_XmlInfo_o *pCVar6;
  System_String_o *pSVar7;
  System_Xml_DomNameTable_o *pSVar8;
  System_Type_o *pSVar9;
  System_Xml_XmlLinkedNode_o *pSVar10;
  CustomLogic_Editor_Models_XmlInfo_o *__this_00;
  CustomLogic_Editor_Models_XmlInfo_o *extraout_RAX;
  System_Reflection_FieldInfo_o *field;
  System_Reflection_MethodInfo_o *methodInfo;
  undefined4 uVar11;
  System_Type_o *type_00;
  System_Xml_XmlDocument_o *pSVar12;
  System_Xml_XmlDocument_o *xmlDocument_00;
  System_Xml_DomNameTable_o *__this_01;
  
  if (g_data_057adcb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb4 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = type;
  pSVar12 = xmlDocument;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                     (xmlDocument,type,propertyInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (xmlDocument,type,propertyInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetPropertyNodeText
                       (xmlDocument,type,propertyInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb5 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  type_00 = pSVar9;
  xmlDocument_00 = pSVar12;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                     (pSVar12,pSVar9,field,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (pSVar12,pSVar9,field,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (pSVar12,pSVar9,field,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"returns");
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb6 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = xmlDocument_00;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                     (xmlDocument_00,type_00,methodInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument_00,type_00,methodInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument_00,type_00,methodInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument_00,type_00,methodInfo,"returns","",(MethodInfo *)0x0);
    (pCVar6->fields)._Returns_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Returns_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"Characters.");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb7 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar12,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppSVar4 = &(pSVar12->fields).domNameTable;
  (pSVar12->fields).domNameTable = pSVar8;
  __this_01 = (System_Xml_DomNameTable_o *)ppSVar4;
  il2cpp_runtime_helper_022b4080();
  pSVar8 = (pSVar12->fields).domNameTable;
  if (pSVar8 == (System_Xml_DomNameTable_o *)0x0) goto label_04287b03;
  *(undefined4 *)((long)&pSVar8[7].monitor + 4) = 0x3f800000;
  __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pSVar8[7].fields.count;
  __this_01 = (System_Xml_DomNameTable_o *)0x0;
  if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04287b03;
  System_Collections_Generic_Dictionary_object__float___Clear(__this,MethodInfo_Void_Clear);
  __this_01 = *ppSVar4;
  if (__this_01 != (System_Xml_DomNameTable_o *)0x0) {
    pIVar3 = (Il2CppClass *)__this_01->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
      bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
      goto label_04287a9a;
      pSVar9 = System_Object__GetType((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      if (pSVar9 == (System_Type_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                (*(pSVar9->klass->vtable)._3_ToString.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._3_ToString.method);
      ppSVar5 = &(pSVar12->fields).lastChild;
      (pSVar12->fields).lastChild = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      pSVar10 = (pSVar12->fields).lastChild;
      __this_01 = (System_Xml_DomNameTable_o *)0x0;
      if (pSVar10 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)pSVar10,"Shifter","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      __this_01 = (System_Xml_DomNameTable_o *)0x0;
      if (*ppSVar5 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)*ppSVar5,"Characters.","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
    }
    else {
      (pSVar12->fields).lastChild = "Titan";
    }
    il2cpp_runtime_helper_022b4080(&(pSVar12->fields).lastChild);
  }
label_04287a9a:
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  __this_01 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  *(int32_t *)&(pSVar8->fields).entries = 0;
  if (pSVar8 != (System_Xml_DomNameTable_o *)0x0) {
    (pSVar8->fields).ownerDocument = pSVar12;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).ownerDocument,pSVar12);
    pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)pSVar12,(System_Collections_IEnumerator_o *)pSVar8,
                        (MethodInfo *)0x0);
    return pCVar6;
  }
label_04287b03:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  __this_00 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  uVar11 = 0;
  pCVar6 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields)._Summary_k__BackingField = 0;
  if (__this_00 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this_00->fields)._Code_k__BackingField = (System_String_o *)__this_01;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._Code_k__BackingField,__this_01);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  *(undefined4 *)&(pCVar6->fields)._Summary_k__BackingField = uVar11;
  return extraout_RAX;
}


// CustomLogic.Editor.Models.XmlInfo$$FromFieldXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromFieldXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_FieldInfo_o* fieldInfo, const MethodInfo* method);
// 0x42875d0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromFieldXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,System_Reflection_FieldInfo_o *fieldInfo,
          MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppClass *pIVar3;
  System_Xml_DomNameTable_o **ppSVar4;
  System_Xml_XmlLinkedNode_o **ppSVar5;
  CustomLogic_Editor_Models_XmlInfo_o *pCVar6;
  System_String_o *pSVar7;
  System_Xml_DomNameTable_o *pSVar8;
  System_Type_o *pSVar9;
  System_Xml_XmlLinkedNode_o *pSVar10;
  CustomLogic_Editor_Models_XmlInfo_o *__this_00;
  CustomLogic_Editor_Models_XmlInfo_o *extraout_RAX;
  System_Reflection_MethodInfo_o *methodInfo;
  undefined4 uVar11;
  System_Xml_XmlDocument_o *xmlDocument_00;
  System_Xml_XmlDocument_o *__this_01;
  System_Xml_DomNameTable_o *__this_02;
  
  if (g_data_057adcb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb5 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = type;
  xmlDocument_00 = xmlDocument;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                     (xmlDocument,type,fieldInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (xmlDocument,type,fieldInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetFieldNodeText
                       (xmlDocument,type,fieldInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"returns");
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb6 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = xmlDocument_00;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                     (xmlDocument_00,pSVar9,methodInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument_00,pSVar9,methodInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument_00,pSVar9,methodInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument_00,pSVar9,methodInfo,"returns","",(MethodInfo *)0x0);
    (pCVar6->fields)._Returns_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Returns_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"Characters.");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb7 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppSVar4 = &(__this_01->fields).domNameTable;
  (__this_01->fields).domNameTable = pSVar8;
  __this_02 = (System_Xml_DomNameTable_o *)ppSVar4;
  il2cpp_runtime_helper_022b4080();
  pSVar8 = (__this_01->fields).domNameTable;
  if (pSVar8 == (System_Xml_DomNameTable_o *)0x0) goto label_04287b03;
  *(undefined4 *)((long)&pSVar8[7].monitor + 4) = 0x3f800000;
  __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pSVar8[7].fields.count;
  __this_02 = (System_Xml_DomNameTable_o *)0x0;
  if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04287b03;
  System_Collections_Generic_Dictionary_object__float___Clear(__this,MethodInfo_Void_Clear);
  __this_02 = *ppSVar4;
  if (__this_02 != (System_Xml_DomNameTable_o *)0x0) {
    pIVar3 = (Il2CppClass *)__this_02->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
      bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
      goto label_04287a9a;
      pSVar9 = System_Object__GetType((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (pSVar9 == (System_Type_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                (*(pSVar9->klass->vtable)._3_ToString.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._3_ToString.method);
      ppSVar5 = &(__this_01->fields).lastChild;
      (__this_01->fields).lastChild = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      pSVar10 = (__this_01->fields).lastChild;
      __this_02 = (System_Xml_DomNameTable_o *)0x0;
      if (pSVar10 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)pSVar10,"Shifter","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      __this_02 = (System_Xml_DomNameTable_o *)0x0;
      if (*ppSVar5 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)*ppSVar5,"Characters.","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
    }
    else {
      (__this_01->fields).lastChild = "Titan";
    }
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).lastChild);
  }
label_04287a9a:
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  __this_02 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  *(int32_t *)&(pSVar8->fields).entries = 0;
  if (pSVar8 != (System_Xml_DomNameTable_o *)0x0) {
    (pSVar8->fields).ownerDocument = __this_01;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).ownerDocument,__this_01);
    pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)pSVar8,
                        (MethodInfo *)0x0);
    return pCVar6;
  }
label_04287b03:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  __this_00 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  uVar11 = 0;
  pCVar6 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields)._Summary_k__BackingField = 0;
  if (__this_00 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this_00->fields)._Code_k__BackingField = (System_String_o *)__this_02;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._Code_k__BackingField,__this_02);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  *(undefined4 *)&(pCVar6->fields)._Summary_k__BackingField = uVar11;
  return extraout_RAX;
}


// CustomLogic.Editor.Models.XmlInfo$$FromMethodXml
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_XmlInfo__FromMethodXml (System_Xml_XmlDocument_o* xmlDocument, System_Type_o* type, System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x4287720

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_XmlInfo__FromMethodXml
          (System_Xml_XmlDocument_o *xmlDocument,System_Type_o *type,
          System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppClass *pIVar3;
  System_Xml_DomNameTable_o **ppSVar4;
  System_Xml_XmlLinkedNode_o **ppSVar5;
  CustomLogic_Editor_Models_XmlInfo_o *pCVar6;
  System_String_o *pSVar7;
  System_Xml_DomNameTable_o *pSVar8;
  System_Type_o *pSVar9;
  System_Xml_XmlLinkedNode_o *pSVar10;
  CustomLogic_Editor_Models_XmlInfo_o *__this_00;
  CustomLogic_Editor_Models_XmlInfo_o *extraout_RAX;
  undefined4 uVar11;
  System_Xml_XmlDocument_o *__this_01;
  System_Xml_DomNameTable_o *__this_02;
  
  if (g_data_057adcb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlDocumentUtils);
    il2cpp_runtime_helper_023445d0(&TypeInfo_XmlInfo);
    il2cpp_runtime_helper_023445d0(&"returns");
    il2cpp_runtime_helper_023445d0(&"summary");
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"remarks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb6 = '\x01';
  }
  pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_XmlInfo);
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_XmlDocumentUtils + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = xmlDocument;
  pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                     (xmlDocument,type,methodInfo,"summary","",(MethodInfo *)0x0);
  if (pCVar6 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (pCVar6->fields)._Summary_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"remarks","",(MethodInfo *)0x0);
    (pCVar6->fields)._Remarks_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Remarks_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"code","",(MethodInfo *)0x0);
    (pCVar6->fields)._Code_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Code_k__BackingField,pSVar7);
    pSVar7 = CustomLogic_Editor_XmlDocumentUtils__GetMethodNodeText
                       (xmlDocument,type,methodInfo,"returns","",(MethodInfo *)0x0);
    (pCVar6->fields)._Returns_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Returns_k__BackingField,pSVar7);
    return pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"Characters.");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb7 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppSVar4 = &(__this_01->fields).domNameTable;
  (__this_01->fields).domNameTable = pSVar8;
  __this_02 = (System_Xml_DomNameTable_o *)ppSVar4;
  il2cpp_runtime_helper_022b4080();
  pSVar8 = (__this_01->fields).domNameTable;
  if (pSVar8 == (System_Xml_DomNameTable_o *)0x0) goto label_04287b03;
  *(undefined4 *)((long)&pSVar8[7].monitor + 4) = 0x3f800000;
  __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pSVar8[7].fields.count;
  __this_02 = (System_Xml_DomNameTable_o *)0x0;
  if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04287b03;
  System_Collections_Generic_Dictionary_object__float___Clear(__this,MethodInfo_Void_Clear);
  __this_02 = *ppSVar4;
  if (__this_02 != (System_Xml_DomNameTable_o *)0x0) {
    pIVar3 = (Il2CppClass *)__this_02->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
      bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
      goto label_04287a9a;
      pSVar9 = System_Object__GetType((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (pSVar9 == (System_Type_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                (*(pSVar9->klass->vtable)._3_ToString.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._3_ToString.method);
      ppSVar5 = &(__this_01->fields).lastChild;
      (__this_01->fields).lastChild = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      pSVar10 = (__this_01->fields).lastChild;
      __this_02 = (System_Xml_DomNameTable_o *)0x0;
      if (pSVar10 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)pSVar10,"Shifter","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
      il2cpp_runtime_helper_022b4080(ppSVar5);
      __this_02 = (System_Xml_DomNameTable_o *)0x0;
      if (*ppSVar5 == (System_Xml_XmlLinkedNode_o *)0x0) goto label_04287b03;
      pSVar10 = (System_Xml_XmlLinkedNode_o *)
                System_String__Replace_3af9030
                          ((System_String_o *)*ppSVar5,"Characters.","",(MethodInfo *)0x0);
      *ppSVar5 = pSVar10;
    }
    else {
      (__this_01->fields).lastChild = "Titan";
    }
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).lastChild);
  }
label_04287a9a:
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  pSVar8 = (System_Xml_DomNameTable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  __this_02 = pSVar8;
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  *(int32_t *)&(pSVar8->fields).entries = 0;
  if (pSVar8 != (System_Xml_DomNameTable_o *)0x0) {
    (pSVar8->fields).ownerDocument = __this_01;
    il2cpp_runtime_helper_022b4080(&(pSVar8->fields).ownerDocument,__this_01);
    pCVar6 = (CustomLogic_Editor_Models_XmlInfo_o *)
             UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                       ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)pSVar8,
                        (MethodInfo *)0x0);
    return pCVar6;
  }
label_04287b03:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  __this_00 = (CustomLogic_Editor_Models_XmlInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  uVar11 = 0;
  pCVar6 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields)._Summary_k__BackingField = 0;
  if (__this_00 != (CustomLogic_Editor_Models_XmlInfo_o *)0x0) {
    (__this_00->fields)._Code_k__BackingField = (System_String_o *)__this_02;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._Code_k__BackingField,__this_02);
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  *(undefined4 *)&(pCVar6->fields)._Summary_k__BackingField = uVar11;
  return extraout_RAX;
}


// CustomLogic.Editor.Models.XmlInfo$$.ctor
// il2cpp: void CustomLogic_Editor_Models_XmlInfo___ctor (CustomLogic_Editor_Models_XmlInfo_o* __this, const MethodInfo* method);
// 0x4287320

void CustomLogic_Editor_Models_XmlInfo___ctor(CustomLogic_Editor_Models_XmlInfo_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



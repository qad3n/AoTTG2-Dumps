// Type: CustomLogic.Editor.CustomLogicReflectionUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicReflectionUtils.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicType
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType (System_Type_o* type, const MethodInfo* method);
// 0x4280cd0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType(System_Type_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  System_String_o **member;
  
  member = (System_String_o **)type;
  if (g_data_057adc79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    member = &"CustomLogic";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc79 = '\x01';
  }
  if (type != (System_Type_o *)0x0) {
    a = (System_String_o *)
        (*(type->klass->vtable)._24_unknown.methodPtr)(type,(type->klass->vtable)._24_unknown.method);
    bVar1 = System_String__op_Equality(a,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_(type,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return bVar1;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicProperty
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x4280d50

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adc7a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    g_data_057adc7a = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0(member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicMethod
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod (System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x4280d90

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod
          (System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adc7b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_CLMethodAttribute);
    g_data_057adc7b = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)methodInfo,0,MethodInfo_Boolean_HasAttribute_CLMethodAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Type_o* type, const MethodInfo* method);
// 0x4280dd0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete(System_Type_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adc7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    g_data_057adc7c = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_(type,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x4280e10

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete_4180e10
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adc7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    g_data_057adc7d = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0(member,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Type_o* type, const MethodInfo* method);
// 0x4280e50

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage(System_Type_o *type,MethodInfo *method)

{
  Il2CppType *pIVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar4;
  MethodInfo_2522A10 *pMVar5;
  char cVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  System_Reflection_MethodBase_o *pSVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar10;
  System_String_o *pSVar11;
  long *plVar12;
  System_Type_o *pSVar13;
  Newtonsoft_Json_JsonSerializerSettings_o *pNVar14;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this;
  Il2CppClass *pIVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition_o *value;
  System_Collections_Generic_List_string__o *pSVar17;
  Il2CppClass *pIVar18;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar19;
  CustomLogic_Editor_Models_CLProperty_array *pCVar20;
  System_String_array *pSVar21;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_TSource__o *pSVar22;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar23;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  uint uVar24;
  Il2CppClass *clType;
  System_Collections_Generic_List_string__o *pSVar25;
  Il2CppClass *pIVar26;
  MethodInfo_2522A10 *pMVar27;
  MethodInfo_2522A10 *pMVar28;
  MethodInfo_2522A10 *pMVar29;
  System_String_o **ppSVar30;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *__this_01;
  
  if (g_data_057adc7e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    il2cpp_runtime_helper_023445d0(&"Obsolete");
    g_data_057adc7e = '\x01';
  }
  if (g_data_057adc7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    g_data_057adc7c = '\x01';
  }
  bVar7 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_(type,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  if ((char)bVar7 == '\0') {
    return g_data_057b9c00->static_fields->Empty;
  }
  pIVar8 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_(type,0,MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar18 = pIVar8[1].klass;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar18,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pIVar18 = "Obsolete";
    }
    return (System_String_o *)pIVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    il2cpp_runtime_helper_023445d0(&"Obsolete");
    g_data_057adc7f = '\x01';
  }
  if (g_data_057adc7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    g_data_057adc7d = '\x01';
  }
  bVar7 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
                    ((System_Reflection_MemberInfo_o *)type,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  if ((char)bVar7 == '\0') {
    return g_data_057b9c00->static_fields->Empty;
  }
  pIVar8 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object__24ef820
                     ((System_Reflection_MemberInfo_o *)type,0,MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar18 = pIVar8[1].klass;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar18,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pIVar18 = "Obsolete";
    }
    return (System_String_o *)pIVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (type != (System_Type_o *)0x0) {
    pSVar9 = (System_Reflection_MethodBase_o *)(*(type->klass->vtable)._24_unknown.methodPtr)();
    if (pSVar9 != (System_Reflection_MethodBase_o *)0x0) {
      bVar7 = System_Reflection_MethodBase__get_IsStatic(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (System_String_o *)CONCAT71((int7)(CONCAT44(extraout_var,bVar7) >> 8),1);
      }
    }
    pSVar9 = (System_Reflection_MethodBase_o *)
             (*(type->klass->vtable)._26_unknown.methodPtr)(type,1,(type->klass->vtable)._26_unknown.method);
    if (pSVar9 == (System_Reflection_MethodBase_o *)0x0) {
      return (System_String_o *)0x0;
    }
    bVar7 = System_Reflection_MethodBase__get_IsStatic(pSVar9,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar30 = (System_String_o **)type;
  if (g_data_057adc80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    ppSVar30 = &"\"";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc80 = '\x01';
  }
  if (type != (System_Type_o *)0x0) {
    cVar6 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (type,(type->klass->vtable)._14_GetCustomAttributes.method);
    if (cVar6 == '\0') {
      return g_data_057b9c00->static_fields->Empty;
    }
    lVar10 = (*(type->klass->vtable)._13_GetCustomAttributes.methodPtr)
                       (type,(type->klass->vtable)._13_GetCustomAttributes.method);
    if (lVar10 == 0) {
      return "null";
    }
    pSVar11 = (System_String_o *)
              (*(type->klass->vtable)._13_GetCustomAttributes.methodPtr)
                        (type,(type->klass->vtable)._13_GetCustomAttributes.method);
    if ((pSVar11 != (System_String_o *)0x0) && (pSVar11->klass == g_data_057b9c00)) {
      pSVar11 = System_String__Concat_3af7150("\"",pSVar11,"\"",(MethodInfo *)0x0);
      return pSVar11;
    }
    plVar12 = (long *)(*(type->klass->vtable)._13_GetCustomAttributes.methodPtr)();
    ppSVar30 = (System_String_o **)type;
    if (plVar12 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar12 + 0x168);
      pSVar11 = (System_String_o *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (plVar12,*(undefined8 *)(*plVar12 + 0x170),UNRECOVERED_JUMPTABLE_00);
      return pSVar11;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ParamArrayAttribute);
    g_data_057adc81 = '\x01';
  }
  handle.fields.value = TypeRef_ParamArrayAttribute.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar18 = (Il2CppClass *)0x0;
  pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((System_Type_o *)ppSVar30 != (System_Type_o *)0x0) {
    vtableDispatch = (((System_Type_o *)ppSVar30)->klass->vtable)._15_get_MetadataToken.methodPtr;
    pSVar11 = (System_String_o *)
              (*vtableDispatch)
                        (ppSVar30,pSVar13,0,
                         (((System_Type_o *)ppSVar30)->klass->vtable)._15_get_MetadataToken.method,
                         vtableDispatch);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DefaultContractResolver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonSerializerSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adc82 = '\x01';
  }
  pNVar14 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(pNVar14,(MethodInfo *)0x0);
  __this = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this,(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_CamelCaseNamingStrategy);
  clType = (Il2CppClass *)0x0;
  pIVar26 = pIVar15;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor_3dc84d0
            ((Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)pIVar15,(MethodInfo *)0x0);
  if (__this != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    pIVar26 = (Il2CppClass *)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField;
    *(Il2CppClass **)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField = pIVar15;
    il2cpp_runtime_helper_022b4080();
    clType = pIVar15;
    if (pNVar14 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (pNVar14->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this;
      il2cpp_runtime_helper_022b4080(&(pNVar14->fields)._Converters_k__BackingField,__this);
      Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(pNVar14,1,(MethodInfo *)0x0);
      Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(pNVar14,1,(MethodInfo *)0x0);
      (((Il2CppClass *)handle.fields.value)->_1).namespaze = (char *)pNVar14;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).namespaze,pNVar14);
      pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ClassDefinition);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar16,MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
      pIVar1 = &(((Il2CppClass *)handle.fields.value)->_1).byval_arg;
      (((Il2CppClass *)handle.fields.value)->_1).byval_arg.data = pSVar16;
      il2cpp_runtime_helper_022b4080(pIVar1);
      System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
      pIVar26 = (Il2CppClass *)&(((Il2CppClass *)handle.fields.value)->_1).name;
      ((CustomLogic_Editor_Models_CLType_Fields *)&(((Il2CppClass *)handle.fields.value)->_1).name)->
      _ObsoleteMessage_k__BackingField = (System_String_o *)pIVar18;
      clType = pIVar18;
      il2cpp_runtime_helper_022b4080();
      if (pIVar18 != (Il2CppClass *)0x0) {
        pSVar11 = (System_String_o *)(pIVar18->_1).namespaze;
        pIVar15 = clType;
        if (0 < (int)pSVar11) {
          uVar24 = 0;
          pMVar23 = extraout_RDX;
          do {
            clType = pIVar15;
            if ((uint)pSVar11 <= uVar24) goto label_0428152b;
            clType = (&(pIVar18->_1).byval_arg.data)[(int)uVar24];
            if (clType == (Il2CppClass *)0x0) goto label_04281526;
            __this_01 = pIVar1->data;
            pIVar15 = (Il2CppClass *)(clType->_1).namespaze;
            pIVar26 = (Il2CppClass *)handle.fields.value;
            value = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertToClassDefinition
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)
                               handle.fields.value,(CustomLogic_Editor_Models_CLType_o *)clType,pMVar23);
            if (__this_01 == (Il2CppClass *)0x0) goto label_04281526;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pIVar15,(Il2CppObject *)value,MethodInfo_Void_set_Item);
            uVar24 = uVar24 + 1;
            pSVar11 = (System_String_o *)(pIVar18->_1).namespaze;
            pMVar23 = extraout_RDX_00;
            pIVar26 = __this_01;
          } while ((int)uVar24 < (int)pSVar11);
        }
        if (0 < (int)pSVar11) {
          lVar10 = 0;
          clType = pIVar15;
          do {
            if ((uint)pSVar11 <= (uint)lVar10) goto label_0428152b;
            pvVar3 = (&(pIVar18->_1).byval_arg.data)[lVar10];
            if ((pvVar3 == (void *)0x0) || (pIVar26 = pIVar1->data, pIVar26 == (Il2CppClass *)0x0))
            goto label_04281526;
            pIVar15 = *(Il2CppClass **)((long)pvVar3 + 0x18);
            pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)pIVar26,
                                (Il2CppObject *)pIVar15,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
            if ((*(char *)((long)pvVar3 + 0x2a) != '\0') && (*(long *)((long)pvVar3 + 0x40) != 0)) {
              pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              clType = MethodInfo_List_1_System_String;
              pIVar26 = pIVar15;
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pIVar15,
                         (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
              lVar4 = MethodInfo_Void_Add;
              if ((*(long *)((long)pvVar3 + 0x40) == 0) || (pIVar15 == (Il2CppClass *)0x0)) goto label_04281526;
              clType = *(Il2CppClass **)(*(long *)((long)pvVar3 + 0x40) + 0x18);
              piVar2 = (int *)((long)&(pIVar15->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pSVar11 = ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar15->_1).name)->
                        _ObsoleteMessage_k__BackingField;
              if (pSVar11 == (System_String_o *)0x0) goto label_04281526;
              uVar24 = *(uint *)&(pIVar15->_1).namespaze;
              if (uVar24 < *(uint *)&pSVar11[1].klass) {
                *(uint *)&(pIVar15->_1).namespaze = uVar24 + 1;
                pIVar26 = (Il2CppClass *)(&pSVar11[1].monitor + (int)uVar24);
                (&pSVar11[1].monitor)[(int)uVar24] = clType;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIVar26 = pIVar15;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)clType,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              if (pIVar8 == (Il2CppObject *)0x0) goto label_04281526;
              pIVar26 = (Il2CppClass *)(pIVar8 + 3);
              pIVar8[3].klass = pIVar15;
              il2cpp_runtime_helper_022b4080();
            }
            uVar24 = *(uint *)&(pIVar18->_1).namespaze;
            pSVar11 = (System_String_o *)(ulong)uVar24;
            lVar10 = lVar10 + 1;
            clType = pIVar15;
          } while ((int)lVar10 < (int)uVar24);
        }
        return pSVar11;
      }
    }
  }
label_04281526:
  il2cpp_runtime_helper_022b2c90();
label_0428152b:
  il2cpp_runtime_helper_022b2ca0();
  pMVar23 = extraout_RDX_01;
  ppSVar30 = (System_String_o **)pIVar26;
  if (g_data_057adc88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClassDefinition);
    ppSVar30 = (System_String_o **)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc88 = '\x01';
    pMVar23 = extraout_RDX_02;
  }
  pIVar18 = clType;
  pSVar17 = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ExtractTypeParameters
                      ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar30,
                       (CustomLogic_Editor_Models_CLType_o *)clType,pMVar23);
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    ppSVar30 = &"extension";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc85 = '\x01';
  }
  if (clType != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(clType->_1).byval_arg.bits + 3) == '\0') {
      if ((char)(clType->_1).byval_arg.bits == '\0') {
        ppSVar30 = &"class";
      }
      else {
        ppSVar30 = &"extension";
      }
    }
    else {
      ppSVar30 = &"component";
    }
    pSVar11 = *ppSVar30;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ClassDefinition);
    pIVar18 = (Il2CppClass *)0x0;
    ppSVar30 = (System_String_o **)pIVar15;
    System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
    if (pIVar15 != (Il2CppClass *)0x0) {
      ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar15->_1).name)->_ObsoleteMessage_k__BackingField =
           pSVar11;
      il2cpp_runtime_helper_022b4080((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar15->_1).name,pSVar11);
      ppSVar30 = (System_String_o **)&(pIVar15->_1).namespaze;
      (pIVar15->_1).namespaze = (char *)(clType->_1).namespaze;
      il2cpp_runtime_helper_022b4080();
      pvVar3 = (clType->_1).byval_arg.data;
      if (pvVar3 == (void *)0x0) {
        pIVar18 = (Il2CppClass *)0x0;
      }
      else {
        pIVar18 = *(Il2CppClass **)((long)pvVar3 + 0x10);
      }
      if (pIVar26 != (Il2CppClass *)0x0) {
        pIVar18 = (Il2CppClass *)
                  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__NormalizeDescription
                            ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar30,
                             (System_String_o *)pIVar18,method_00);
        ppSVar30 = &(pIVar15->_1).byval_arg.data;
        (pIVar15->_1).byval_arg.data = pIVar18;
        il2cpp_runtime_helper_022b4080();
        if (pSVar17 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar25 = (System_Collections_Generic_List_string__o *)0x0;
          if (0 < (pSVar17->fields)._size) {
            pSVar25 = pSVar17;
          }
          *(System_Collections_Generic_List_string__o **)&(pIVar15->_1).byval_arg.bits = pSVar25;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).byval_arg.bits);
          *(System_String_array **)&(pIVar15->_1).this_arg.bits = (System_String_array *)(clType->_1).name;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).this_arg.bits);
          pCVar19 = (CustomLogic_Editor_Models_CLConstructor_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).declaringType,
                               method_01);
          (pIVar15->_1).declaringType = (Il2CppClass *)pCVar19;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).declaringType,pCVar19);
          pCVar20 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (clType->_1).generic_class,method_02);
          (pIVar15->_1).parent = (Il2CppClass *)pCVar20;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).parent,pCVar20);
          pIVar18 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).parent,method_03);
          (pIVar15->_1).element_class = pIVar18;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).element_class,pIVar18);
          pIVar18 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (clType->_1).typeMetadataHandle,method_04);
          (pIVar15->_1).castClass = pIVar18;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).castClass,pIVar18);
          pCVar20 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertConstructors
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (CustomLogic_Editor_Models_CLConstructor_array *)(clType->_1).castClass,
                               method_05);
          (pIVar15->_1).generic_class = pCVar20;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).generic_class,pCVar20);
          return (System_String_o *)pIVar15;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar18;
  if (g_data_057adc83 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    ppSVar30 = &"vscode-json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc83 = '\x01';
  }
  if (pIVar18 != (Il2CppClass *)0x0) {
    pSVar11 = System_String__Concat_3af7150
                        ("vscode-json/",(System_String_o *)(pIVar18->_1).namespaze,".json",
                         (MethodInfo *)0x0);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar18 = pIVar26;
  if (g_data_057adc84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc84 = '\x01';
  }
  if ((pIVar26 != (Il2CppClass *)0x0) &&
     (pSVar16 = (((Il2CppClass *)ppSVar30)->_1).byval_arg.data,
     pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar16,(Il2CppObject *)(pIVar26->_1).namespaze,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    pNVar14 = (Newtonsoft_Json_JsonSerializerSettings_o *)(((Il2CppClass *)ppSVar30)->_1).namespaze;
    if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10(pIVar8,1,pNVar14,(MethodInfo *)0x0);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar18;
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"extension");
    g_data_057adc85 = '\x01';
  }
  if (pIVar18 != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(pIVar18->_1).byval_arg.bits + 3) != '\0') {
      return "component";
    }
    if (*(char *)&(pIVar18->_1).byval_arg.bits == '\0') {
      return "class";
    }
    return "extension";
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_NormalizeDescription_b__6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_NormalizeDescription_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"\r");
    g_data_057adc86 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar26,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_04281baf:
    return g_data_057b9c00->static_fields->Empty;
  }
  pMVar27 = (MethodInfo_2522A10 *)0x3;
  pIVar8 = TypeInfo_string;
  pSVar21 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar28 = "\r\n";
  if (pSVar21 != (System_String_array *)0x0) {
    pMVar5 = pMVar27;
    if ((int)pSVar21->max_length != 0) {
      pIVar8 = (Il2CppObject *)pSVar21->m_Items;
      pSVar21->m_Items[0] = (System_String_o *)"\r\n";
      il2cpp_runtime_helper_022b4080();
      pMVar29 = "\r";
      pMVar5 = pMVar28;
      if (1 < (uint)pSVar21->max_length) {
        pIVar8 = (Il2CppObject *)(pSVar21->m_Items + 1);
        pSVar21->m_Items[1] = (System_String_o *)"\r";
        il2cpp_runtime_helper_022b4080();
        pMVar27 = "\n";
        pMVar5 = pMVar29;
        if (2 < (uint)pSVar21->max_length) {
          pIVar8 = (Il2CppObject *)(pSVar21->m_Items + 2);
          pSVar21->m_Items[2] = (System_String_o *)"\n";
          il2cpp_runtime_helper_022b4080();
          if (pIVar26 != (Il2CppClass *)0x0) {
            pSVar21 = System_String__Split_3afab90((System_String_o *)pIVar26,pSVar21,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (selector == (System_Func_TSource__TResult__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
              System_Func_object__object____ctor();
              lVar10 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__TResult__o **)(lVar10 + 8) = selector;
              il2cpp_runtime_helper_022b4080(lVar10 + 8,selector);
            }
            source_00 = System_Linq_Enumerable__Select_object__object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar21,selector,
                                   MethodInfo_IEnumerable_1_System_String_Select_String_String);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (predicate == (System_Func_TSource__bool__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
              System_Func_object__bool____ctor();
              lVar10 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__bool__o **)(lVar10 + 0x10) = predicate;
              il2cpp_runtime_helper_022b4080(lVar10 + 0x10,predicate);
            }
            pIVar8 = (Il2CppObject *)
                     System_Linq_Enumerable__Where_object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                                MethodInfo_IEnumerable_1_System_String_Where_String);
            pMVar27 = MethodInfo_String_ToArray_String;
            pSVar21 = (System_String_array *)
                      System_Linq_Enumerable__ToArray_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar8,MethodInfo_String_ToArray_String);
            if (pSVar21 != (System_String_array *)0x0) {
              if (pSVar21->max_length != 0) {
                pSVar11 = System_String__Join(" ",pSVar21,(MethodInfo *)0x0);
                return pSVar11;
              }
              goto label_04281baf;
            }
          }
          goto label_04281bd8;
        }
      }
    }
    pMVar27 = pMVar5;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04281bd8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pIVar8 = (Il2CppObject *)&TypeInfo_List_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc87 = '\x01';
  }
  if (pMVar27 != (MethodInfo_2522A10 *)0x0) {
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar27->parameters;
    if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
       (source[1].monitor != (void *)0x0)) {
      pSVar22 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
      return (System_String_o *)pSVar22;
    }
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    return (System_String_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x4280f10

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage_4180f10
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  Il2CppType *pIVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar4;
  MethodInfo_2522A10 *pMVar5;
  char cVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  System_Reflection_MethodBase_o *pSVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long lVar10;
  System_String_o *pSVar11;
  long *plVar12;
  System_Type_o *pSVar13;
  Newtonsoft_Json_JsonSerializerSettings_o *pNVar14;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this;
  Il2CppClass *pIVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition_o *value;
  System_Collections_Generic_List_string__o *pSVar17;
  Il2CppClass *pIVar18;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar19;
  CustomLogic_Editor_Models_CLProperty_array *pCVar20;
  System_String_array *pSVar21;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_TSource__o *pSVar22;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar23;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  uint uVar24;
  Il2CppClass *clType;
  System_Collections_Generic_List_string__o *pSVar25;
  Il2CppClass *pIVar26;
  MethodInfo_2522A10 *pMVar27;
  MethodInfo_2522A10 *pMVar28;
  MethodInfo_2522A10 *pMVar29;
  System_String_o **ppSVar30;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *__this_01;
  
  if (g_data_057adc7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    il2cpp_runtime_helper_023445d0(&"Obsolete");
    g_data_057adc7f = '\x01';
  }
  if (g_data_057adc7d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    g_data_057adc7d = '\x01';
  }
  bVar7 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0(member,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  if ((char)bVar7 == '\0') {
    return g_data_057b9c00->static_fields->Empty;
  }
  pIVar8 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object__24ef820(member,0,MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar18 = pIVar8[1].klass;
    bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar18,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pIVar18 = "Obsolete";
    }
    return (System_String_o *)pIVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    pSVar9 = (System_Reflection_MethodBase_o *)(*member->klass[1]._1.fields)();
    if (pSVar9 != (System_Reflection_MethodBase_o *)0x0) {
      bVar7 = System_Reflection_MethodBase__get_IsStatic(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (System_String_o *)CONCAT71((int7)(CONCAT44(extraout_var,bVar7) >> 8),1);
      }
    }
    pSVar9 = (System_Reflection_MethodBase_o *)
             (*(code *)member->klass[1]._1.nestedTypes)(member,1,member->klass[1]._1.implementedInterfaces);
    if (pSVar9 == (System_Reflection_MethodBase_o *)0x0) {
      return (System_String_o *)0x0;
    }
    bVar7 = System_Reflection_MethodBase__get_IsStatic(pSVar9,(MethodInfo *)0x0);
    return (System_String_o *)CONCAT44(extraout_var_00,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar30 = (System_String_o **)member;
  if (g_data_057adc80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    ppSVar30 = &"\"";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc80 = '\x01';
  }
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    cVar6 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (member,(member->klass->vtable)._14_GetCustomAttributes.method);
    if (cVar6 == '\0') {
      return g_data_057b9c00->static_fields->Empty;
    }
    lVar10 = (*(member->klass->vtable)._13_GetCustomAttributes.methodPtr)
                       (member,(member->klass->vtable)._13_GetCustomAttributes.method);
    if (lVar10 == 0) {
      return "null";
    }
    pSVar11 = (System_String_o *)
              (*(member->klass->vtable)._13_GetCustomAttributes.methodPtr)
                        (member,(member->klass->vtable)._13_GetCustomAttributes.method);
    if ((pSVar11 != (System_String_o *)0x0) && (pSVar11->klass == g_data_057b9c00)) {
      pSVar11 = System_String__Concat_3af7150("\"",pSVar11,"\"",(MethodInfo *)0x0);
      return pSVar11;
    }
    plVar12 = (long *)(*(member->klass->vtable)._13_GetCustomAttributes.methodPtr)();
    ppSVar30 = (System_String_o **)member;
    if (plVar12 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar12 + 0x168);
      pSVar11 = (System_String_o *)
                (*UNRECOVERED_JUMPTABLE_00)
                          (plVar12,*(undefined8 *)(*plVar12 + 0x170),UNRECOVERED_JUMPTABLE_00);
      return pSVar11;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ParamArrayAttribute);
    g_data_057adc81 = '\x01';
  }
  handle.fields.value = TypeRef_ParamArrayAttribute.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar18 = (Il2CppClass *)0x0;
  pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((System_Reflection_MemberInfo_o *)ppSVar30 != (System_Reflection_MemberInfo_o *)0x0) {
    vtableDispatch =
         (((System_Reflection_MemberInfo_o *)ppSVar30)->klass->vtable)._15_get_MetadataToken.methodPtr;
    pSVar11 = (System_String_o *)
              (*vtableDispatch)
                        (ppSVar30,pSVar13,0,
                         (((System_Reflection_MemberInfo_o *)ppSVar30)->klass->vtable)._15_get_MetadataToken.
                         method,vtableDispatch);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DefaultContractResolver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonSerializerSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adc82 = '\x01';
  }
  pNVar14 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(pNVar14,(MethodInfo *)0x0);
  __this = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this,(MethodInfo *)0x0);
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_CamelCaseNamingStrategy);
  clType = (Il2CppClass *)0x0;
  pIVar26 = pIVar15;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor_3dc84d0
            ((Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)pIVar15,(MethodInfo *)0x0);
  if (__this != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    pIVar26 = (Il2CppClass *)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField;
    *(Il2CppClass **)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField = pIVar15;
    il2cpp_runtime_helper_022b4080();
    clType = pIVar15;
    if (pNVar14 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (pNVar14->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this;
      il2cpp_runtime_helper_022b4080(&(pNVar14->fields)._Converters_k__BackingField,__this);
      Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(pNVar14,1,(MethodInfo *)0x0);
      Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(pNVar14,1,(MethodInfo *)0x0);
      (((Il2CppClass *)handle.fields.value)->_1).namespaze = (char *)pNVar14;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).namespaze,pNVar14);
      pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ClassDefinition);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar16,MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
      pIVar1 = &(((Il2CppClass *)handle.fields.value)->_1).byval_arg;
      (((Il2CppClass *)handle.fields.value)->_1).byval_arg.data = pSVar16;
      il2cpp_runtime_helper_022b4080(pIVar1);
      System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
      pIVar26 = (Il2CppClass *)&(((Il2CppClass *)handle.fields.value)->_1).name;
      ((CustomLogic_Editor_Models_CLType_Fields *)&(((Il2CppClass *)handle.fields.value)->_1).name)->
      _ObsoleteMessage_k__BackingField = (System_String_o *)pIVar18;
      clType = pIVar18;
      il2cpp_runtime_helper_022b4080();
      if (pIVar18 != (Il2CppClass *)0x0) {
        pSVar11 = (System_String_o *)(pIVar18->_1).namespaze;
        pIVar15 = clType;
        if (0 < (int)pSVar11) {
          uVar24 = 0;
          pMVar23 = extraout_RDX;
          do {
            clType = pIVar15;
            if ((uint)pSVar11 <= uVar24) goto label_0428152b;
            clType = (&(pIVar18->_1).byval_arg.data)[(int)uVar24];
            if (clType == (Il2CppClass *)0x0) goto label_04281526;
            __this_01 = pIVar1->data;
            pIVar15 = (Il2CppClass *)(clType->_1).namespaze;
            pIVar26 = (Il2CppClass *)handle.fields.value;
            value = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertToClassDefinition
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)
                               handle.fields.value,(CustomLogic_Editor_Models_CLType_o *)clType,pMVar23);
            if (__this_01 == (Il2CppClass *)0x0) goto label_04281526;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pIVar15,(Il2CppObject *)value,MethodInfo_Void_set_Item);
            uVar24 = uVar24 + 1;
            pSVar11 = (System_String_o *)(pIVar18->_1).namespaze;
            pMVar23 = extraout_RDX_00;
            pIVar26 = __this_01;
          } while ((int)uVar24 < (int)pSVar11);
        }
        if (0 < (int)pSVar11) {
          lVar10 = 0;
          clType = pIVar15;
          do {
            if ((uint)pSVar11 <= (uint)lVar10) goto label_0428152b;
            pvVar3 = (&(pIVar18->_1).byval_arg.data)[lVar10];
            if ((pvVar3 == (void *)0x0) || (pIVar26 = pIVar1->data, pIVar26 == (Il2CppClass *)0x0))
            goto label_04281526;
            pIVar15 = *(Il2CppClass **)((long)pvVar3 + 0x18);
            pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)pIVar26,
                                (Il2CppObject *)pIVar15,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
            if ((*(char *)((long)pvVar3 + 0x2a) != '\0') && (*(long *)((long)pvVar3 + 0x40) != 0)) {
              pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              clType = MethodInfo_List_1_System_String;
              pIVar26 = pIVar15;
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pIVar15,
                         (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
              lVar4 = MethodInfo_Void_Add;
              if ((*(long *)((long)pvVar3 + 0x40) == 0) || (pIVar15 == (Il2CppClass *)0x0)) goto label_04281526;
              clType = *(Il2CppClass **)(*(long *)((long)pvVar3 + 0x40) + 0x18);
              piVar2 = (int *)((long)&(pIVar15->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pSVar11 = ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar15->_1).name)->
                        _ObsoleteMessage_k__BackingField;
              if (pSVar11 == (System_String_o *)0x0) goto label_04281526;
              uVar24 = *(uint *)&(pIVar15->_1).namespaze;
              if (uVar24 < *(uint *)&pSVar11[1].klass) {
                *(uint *)&(pIVar15->_1).namespaze = uVar24 + 1;
                pIVar26 = (Il2CppClass *)(&pSVar11[1].monitor + (int)uVar24);
                (&pSVar11[1].monitor)[(int)uVar24] = clType;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIVar26 = pIVar15;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar15,(Il2CppObject *)clType,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              if (pIVar8 == (Il2CppObject *)0x0) goto label_04281526;
              pIVar26 = (Il2CppClass *)(pIVar8 + 3);
              pIVar8[3].klass = pIVar15;
              il2cpp_runtime_helper_022b4080();
            }
            uVar24 = *(uint *)&(pIVar18->_1).namespaze;
            pSVar11 = (System_String_o *)(ulong)uVar24;
            lVar10 = lVar10 + 1;
            clType = pIVar15;
          } while ((int)lVar10 < (int)uVar24);
        }
        return pSVar11;
      }
    }
  }
label_04281526:
  il2cpp_runtime_helper_022b2c90();
label_0428152b:
  il2cpp_runtime_helper_022b2ca0();
  pMVar23 = extraout_RDX_01;
  ppSVar30 = (System_String_o **)pIVar26;
  if (g_data_057adc88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClassDefinition);
    ppSVar30 = (System_String_o **)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc88 = '\x01';
    pMVar23 = extraout_RDX_02;
  }
  pIVar18 = clType;
  pSVar17 = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ExtractTypeParameters
                      ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar30,
                       (CustomLogic_Editor_Models_CLType_o *)clType,pMVar23);
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    ppSVar30 = &"extension";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc85 = '\x01';
  }
  if (clType != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(clType->_1).byval_arg.bits + 3) == '\0') {
      if ((char)(clType->_1).byval_arg.bits == '\0') {
        ppSVar30 = &"class";
      }
      else {
        ppSVar30 = &"extension";
      }
    }
    else {
      ppSVar30 = &"component";
    }
    pSVar11 = *ppSVar30;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ClassDefinition);
    pIVar18 = (Il2CppClass *)0x0;
    ppSVar30 = (System_String_o **)pIVar15;
    System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
    if (pIVar15 != (Il2CppClass *)0x0) {
      ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar15->_1).name)->_ObsoleteMessage_k__BackingField =
           pSVar11;
      il2cpp_runtime_helper_022b4080((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar15->_1).name,pSVar11);
      ppSVar30 = (System_String_o **)&(pIVar15->_1).namespaze;
      (pIVar15->_1).namespaze = (char *)(clType->_1).namespaze;
      il2cpp_runtime_helper_022b4080();
      pvVar3 = (clType->_1).byval_arg.data;
      if (pvVar3 == (void *)0x0) {
        pIVar18 = (Il2CppClass *)0x0;
      }
      else {
        pIVar18 = *(Il2CppClass **)((long)pvVar3 + 0x10);
      }
      if (pIVar26 != (Il2CppClass *)0x0) {
        pIVar18 = (Il2CppClass *)
                  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__NormalizeDescription
                            ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar30,
                             (System_String_o *)pIVar18,method_00);
        ppSVar30 = &(pIVar15->_1).byval_arg.data;
        (pIVar15->_1).byval_arg.data = pIVar18;
        il2cpp_runtime_helper_022b4080();
        if (pSVar17 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar25 = (System_Collections_Generic_List_string__o *)0x0;
          if (0 < (pSVar17->fields)._size) {
            pSVar25 = pSVar17;
          }
          *(System_Collections_Generic_List_string__o **)&(pIVar15->_1).byval_arg.bits = pSVar25;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).byval_arg.bits);
          *(System_String_array **)&(pIVar15->_1).this_arg.bits = (System_String_array *)(clType->_1).name;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).this_arg.bits);
          pCVar19 = (CustomLogic_Editor_Models_CLConstructor_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).declaringType,
                               method_01);
          (pIVar15->_1).declaringType = (Il2CppClass *)pCVar19;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).declaringType,pCVar19);
          pCVar20 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (clType->_1).generic_class,method_02);
          (pIVar15->_1).parent = (Il2CppClass *)pCVar20;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).parent,pCVar20);
          pIVar18 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).parent,method_03);
          (pIVar15->_1).element_class = pIVar18;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).element_class,pIVar18);
          pIVar18 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (clType->_1).typeMetadataHandle,method_04);
          (pIVar15->_1).castClass = pIVar18;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).castClass,pIVar18);
          pCVar20 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertConstructors
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar26,
                               (CustomLogic_Editor_Models_CLConstructor_array *)(clType->_1).castClass,
                               method_05);
          (pIVar15->_1).generic_class = pCVar20;
          il2cpp_runtime_helper_022b4080(&(pIVar15->_1).generic_class,pCVar20);
          return (System_String_o *)pIVar15;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar18;
  if (g_data_057adc83 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    ppSVar30 = &"vscode-json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc83 = '\x01';
  }
  if (pIVar18 != (Il2CppClass *)0x0) {
    pSVar11 = System_String__Concat_3af7150
                        ("vscode-json/",(System_String_o *)(pIVar18->_1).namespaze,".json",
                         (MethodInfo *)0x0);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar18 = pIVar26;
  if (g_data_057adc84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc84 = '\x01';
  }
  if ((pIVar26 != (Il2CppClass *)0x0) &&
     (pSVar16 = (((Il2CppClass *)ppSVar30)->_1).byval_arg.data,
     pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar16,(Il2CppObject *)(pIVar26->_1).namespaze,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    pNVar14 = (Newtonsoft_Json_JsonSerializerSettings_o *)(((Il2CppClass *)ppSVar30)->_1).namespaze;
    if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10(pIVar8,1,pNVar14,(MethodInfo *)0x0);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar18;
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"extension");
    g_data_057adc85 = '\x01';
  }
  if (pIVar18 != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(pIVar18->_1).byval_arg.bits + 3) != '\0') {
      return "component";
    }
    if (*(char *)&(pIVar18->_1).byval_arg.bits == '\0') {
      return "class";
    }
    return "extension";
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_NormalizeDescription_b__6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_NormalizeDescription_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"\r");
    g_data_057adc86 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar26,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_04281baf:
    return g_data_057b9c00->static_fields->Empty;
  }
  pMVar27 = (MethodInfo_2522A10 *)0x3;
  pIVar8 = TypeInfo_string;
  pSVar21 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar28 = "\r\n";
  if (pSVar21 != (System_String_array *)0x0) {
    pMVar5 = pMVar27;
    if ((int)pSVar21->max_length != 0) {
      pIVar8 = (Il2CppObject *)pSVar21->m_Items;
      pSVar21->m_Items[0] = (System_String_o *)"\r\n";
      il2cpp_runtime_helper_022b4080();
      pMVar29 = "\r";
      pMVar5 = pMVar28;
      if (1 < (uint)pSVar21->max_length) {
        pIVar8 = (Il2CppObject *)(pSVar21->m_Items + 1);
        pSVar21->m_Items[1] = (System_String_o *)"\r";
        il2cpp_runtime_helper_022b4080();
        pMVar27 = "\n";
        pMVar5 = pMVar29;
        if (2 < (uint)pSVar21->max_length) {
          pIVar8 = (Il2CppObject *)(pSVar21->m_Items + 2);
          pSVar21->m_Items[2] = (System_String_o *)"\n";
          il2cpp_runtime_helper_022b4080();
          if (pIVar26 != (Il2CppClass *)0x0) {
            pSVar21 = System_String__Split_3afab90((System_String_o *)pIVar26,pSVar21,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (selector == (System_Func_TSource__TResult__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
              System_Func_object__object____ctor();
              lVar10 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__TResult__o **)(lVar10 + 8) = selector;
              il2cpp_runtime_helper_022b4080(lVar10 + 8,selector);
            }
            source_00 = System_Linq_Enumerable__Select_object__object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar21,selector,
                                   MethodInfo_IEnumerable_1_System_String_Select_String_String);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (predicate == (System_Func_TSource__bool__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
              System_Func_object__bool____ctor();
              lVar10 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__bool__o **)(lVar10 + 0x10) = predicate;
              il2cpp_runtime_helper_022b4080(lVar10 + 0x10,predicate);
            }
            pIVar8 = (Il2CppObject *)
                     System_Linq_Enumerable__Where_object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                                MethodInfo_IEnumerable_1_System_String_Where_String);
            pMVar27 = MethodInfo_String_ToArray_String;
            pSVar21 = (System_String_array *)
                      System_Linq_Enumerable__ToArray_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar8,MethodInfo_String_ToArray_String);
            if (pSVar21 != (System_String_array *)0x0) {
              if (pSVar21->max_length != 0) {
                pSVar11 = System_String__Join(" ",pSVar21,(MethodInfo *)0x0);
                return pSVar11;
              }
              goto label_04281baf;
            }
          }
          goto label_04281bd8;
        }
      }
    }
    pMVar27 = pMVar5;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04281bd8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pIVar8 = (Il2CppObject *)&TypeInfo_List_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc87 = '\x01';
  }
  if (pMVar27 != (MethodInfo_2522A10 *)0x0) {
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar27->parameters;
    if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
       (source[1].monitor != (void *)0x0)) {
      pSVar22 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
      return (System_String_o *)pSVar22;
    }
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    return (System_String_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  return extraout_RAX;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_24EFA40* method);
// 0x25efa40

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
          (System_Type_o *type,bool_conflict inherit,MethodInfo_24EFA40 *method)

{
  int iVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  MethodInfo_24EFA40_RGCTXs *pMVar4;
  DG_Tweening_Core_DOSetter_T1__o *pDVar5;
  long lVar6;
  DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *t;
  MethodInfo *in_RCX;
  DG_Tweening_Plugins_Core_ABSTweenPlugin_T1__T2__TPlugOptions__o *plugin;
  DG_Tweening_Core_DOSetter_T1__o *setter;
  System_RuntimeTypeHandle_o handle;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  UnityEngine_Color_o endValue;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24EFA40_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar4 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  setter = (DG_Tweening_Core_DOSetter_T1__o *)0x0;
  pDVar5 = (DG_Tweening_Core_DOSetter_T1__o *)System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    in_RCX = (type->klass->vtable)._14_GetCustomAttributes.method;
    lVar6 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (type,pDVar5,(ulong)(uint)inherit & 0xff);
    setter = pDVar5;
    handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)type;
    if (lVar6 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenManager);
    if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_runtime_helper_02300a20(in_RCX);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x025efb25;
    }
  }
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x025efb25:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  DG_Tweening_DOTween__InitCheck((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  t = DG_Tweening_Core_TweenManager__GetTweener_Color__Color__ColorOptions_
                ((MethodInfo_25EA730 *)((in_RCX->field7_0x38).rgctx_data)->method);
  endValue.fields.a = (float)in_XMM1_Db;
  endValue.fields.b = (float)in_XMM1_Da;
  endValue.fields.r = (float)(int)uVar2;
  endValue.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
  bVar3 = DG_Tweening_Tweener__Setup_Color__Color__ColorOptions_
                    (t,(DG_Tweening_Core_DOGetter_T1__o *)handle.fields.value,setter,endValue,in_XMM2_Da,
                     plugin,(MethodInfo_2606520 *)(in_RCX->field7_0x38).rgctx_data[6].method);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    DG_Tweening_Core_TweenManager__Despawn((DG_Tweening_Tween_o *)t,1,(MethodInfo *)0x0);
    t = (DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *)0x0;
  }
  return (bool_conflict)t;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_24EF8F0* method);
// 0x25ef8f0

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
          (System_Type_o *type,bool_conflict inherit,MethodInfo_24EF8F0 *method)

{
  int iVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  MethodInfo_24EF8F0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  System_Type_o *pSVar9;
  System_RuntimeTypeHandle_Fields *pSVar10;
  DG_Tweening_Core_DOSetter_T1__o *pDVar11;
  DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *t;
  MethodInfo *in_RCX;
  long extraout_RDX;
  long extraout_RDX_00;
  DG_Tweening_Plugins_Core_ABSTweenPlugin_T1__T2__TPlugOptions__o *plugin;
  System_Type_o *pSVar12;
  DG_Tweening_Core_DOSetter_T1__o *setter;
  System_RuntimeTypeHandle_o SVar13;
  System_RuntimeTypeHandle_o handle;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  UnityEngine_Color_o endValue;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24EF8F0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar4 = method->rgctx_data;
  }
  SVar13.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = (System_Type_o *)0x0;
  pSVar5 = System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
  if (type == (System_Type_o *)0x0) {
label_025ef9b5:
    type = (System_Type_o *)SVar13.fields.value;
    pSVar5 = pSVar12;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (type->klass->vtable)._14_GetCustomAttributes.method;
    lVar6 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (type,pSVar5,(ulong)(uint)inherit & 0xff);
    pSVar12 = pSVar5;
    SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)type;
    if (lVar6 == 0) goto label_025ef9b5;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      pIVar7 = method->rgctx_data->_1_T;
      if (((pIVar7->_2).field_0x6d & 1) == 0) {
        pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
      }
      if (lVar6 != 0) {
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar6,pIVar7);
        if (pIVar8 != (Il2CppObject *)0x0) {
          return pIVar8;
        }
        il2cpp_runtime_helper_022b2fd0(lVar6,pIVar7);
      }
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar10 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX + 0x38);
  if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
    pSVar10 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX + 0x38);
  }
  SVar13.fields.value = (System_RuntimeTypeHandle_Fields)pSVar10->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = (System_Type_o *)0x0;
  pSVar9 = System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
  if ((DG_Tweening_Core_DOGetter_T1__o *)type != (DG_Tweening_Core_DOGetter_T1__o *)0x0) {
    in_RCX = (((System_Type_c *)((DG_Tweening_Core_DOGetter_T1__o *)type)->klass)->vtable).
             _14_GetCustomAttributes.method;
    lVar6 = (*(((System_Type_c *)((DG_Tweening_Core_DOGetter_T1__o *)type)->klass)->vtable).
              _14_GetCustomAttributes.methodPtr)(type,pSVar9,(ulong)pSVar5 & 0xff);
    pSVar12 = pSVar9;
    SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)type;
    if (lVar6 != 0) {
      return (Il2CppObject *)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX_00 + 0x38);
  if (pSVar10 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX_00);
    pSVar10 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX_00 + 0x38);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar10->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  setter = (DG_Tweening_Core_DOSetter_T1__o *)0x0;
  pDVar11 = (DG_Tweening_Core_DOSetter_T1__o *)System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (SVar13.fields.value != 0) {
    in_RCX = (((System_Type_c *)((DG_Tweening_Core_DOGetter_T1__o *)SVar13.fields.value)->klass)->vtable).
             _14_GetCustomAttributes.method;
    lVar6 = (*(((System_Type_c *)((DG_Tweening_Core_DOGetter_T1__o *)SVar13.fields.value)->klass)->vtable).
              _14_GetCustomAttributes.methodPtr)(SVar13.fields.value,pDVar11,(ulong)pSVar12 & 0xff);
    setter = pDVar11;
    handle.fields.value = SVar13.fields.value;
    if (lVar6 != 0) {
      return (Il2CppObject *)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenManager);
    if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_runtime_helper_02300a20(in_RCX);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x025efb25;
    }
  }
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x025efb25:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  DG_Tweening_DOTween__InitCheck((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  t = DG_Tweening_Core_TweenManager__GetTweener_Color__Color__ColorOptions_
                ((MethodInfo_25EA730 *)((in_RCX->field7_0x38).rgctx_data)->method);
  endValue.fields.a = (float)in_XMM1_Db;
  endValue.fields.b = (float)in_XMM1_Da;
  endValue.fields.r = (float)(int)uVar2;
  endValue.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
  bVar3 = DG_Tweening_Tweener__Setup_Color__Color__ColorOptions_
                    (t,(DG_Tweening_Core_DOGetter_T1__o *)handle.fields.value,setter,endValue,in_XMM2_Da,
                     plugin,(MethodInfo_2606520 *)(in_RCX->field7_0x38).rgctx_data[6].method);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    DG_Tweening_Core_TweenManager__Despawn((DG_Tweening_Tween_o *)t,1,(MethodInfo *)0x0);
    t = (DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *)0x0;
  }
  return (Il2CppObject *)t;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_24EF9C0* method);
// 0x25ef9c0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__24ef9c0
          (System_Reflection_MemberInfo_o *member,bool_conflict inherit,MethodInfo_24EF9C0 *method)

{
  int iVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  MethodInfo_24EF9C0_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  long lVar6;
  System_RuntimeTypeHandle_Fields *pSVar7;
  DG_Tweening_Core_DOSetter_T1__o *pDVar8;
  DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *t;
  MethodInfo *in_RCX;
  long extraout_RDX;
  DG_Tweening_Plugins_Core_ABSTweenPlugin_T1__T2__TPlugOptions__o *plugin;
  System_Type_o *pSVar9;
  DG_Tweening_Core_DOSetter_T1__o *setter;
  System_RuntimeTypeHandle_o handle;
  System_RuntimeTypeHandle_o handle_00;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  UnityEngine_Color_o endValue;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24EF9C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar4 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_Type_o *)0x0;
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    in_RCX = (member->klass->vtable)._14_GetCustomAttributes.method;
    lVar6 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (member,pSVar5,(ulong)(uint)inherit & 0xff);
    pSVar9 = pSVar5;
    handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)member;
    if (lVar6 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX + 0x38);
  if (pSVar7 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
    pSVar7 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX + 0x38);
  }
  handle_00.fields.value = (System_RuntimeTypeHandle_Fields)pSVar7->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  setter = (DG_Tweening_Core_DOSetter_T1__o *)0x0;
  pDVar8 = (DG_Tweening_Core_DOSetter_T1__o *)System_Type__GetTypeFromHandle(handle_00,(MethodInfo *)0x0);
  if (handle.fields.value != 0) {
    in_RCX = (((System_Reflection_MemberInfo_c *)
              ((DG_Tweening_Core_DOGetter_T1__o *)handle.fields.value)->klass)->vtable).
             _14_GetCustomAttributes.method;
    lVar6 = (*(((System_Reflection_MemberInfo_c *)
               ((DG_Tweening_Core_DOGetter_T1__o *)handle.fields.value)->klass)->vtable).
              _14_GetCustomAttributes.methodPtr)(handle.fields.value,pDVar8,(ulong)pSVar9 & 0xff);
    setter = pDVar8;
    handle_00.fields.value = handle.fields.value;
    if (lVar6 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenManager);
    if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_runtime_helper_02300a20(in_RCX);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x025efb25;
    }
  }
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x025efb25:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  DG_Tweening_DOTween__InitCheck((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  t = DG_Tweening_Core_TweenManager__GetTweener_Color__Color__ColorOptions_
                ((MethodInfo_25EA730 *)((in_RCX->field7_0x38).rgctx_data)->method);
  endValue.fields.a = (float)in_XMM1_Db;
  endValue.fields.b = (float)in_XMM1_Da;
  endValue.fields.r = (float)(int)uVar2;
  endValue.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
  bVar3 = DG_Tweening_Tweener__Setup_Color__Color__ColorOptions_
                    (t,(DG_Tweening_Core_DOGetter_T1__o *)handle_00.fields.value,setter,endValue,in_XMM2_Da,
                     plugin,(MethodInfo_2606520 *)(in_RCX->field7_0x38).rgctx_data[6].method);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    DG_Tweening_Core_TweenManager__Despawn((DG_Tweening_Tween_o *)t,1,(MethodInfo *)0x0);
    t = (DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *)0x0;
  }
  return (bool_conflict)t;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_24EF820* method);
// 0x25ef820

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object__24ef820
          (System_Reflection_MemberInfo_o *member,bool_conflict inherit,MethodInfo_24EF820 *method)

{
  int iVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  MethodInfo_24EF820_RGCTXs *pMVar4;
  System_Type_o *pSVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  System_Type_o *pSVar9;
  long lVar10;
  System_RuntimeTypeHandle_Fields *pSVar11;
  DG_Tweening_Core_DOSetter_T1__o *pDVar12;
  DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *t;
  MethodInfo *in_RCX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  DG_Tweening_Plugins_Core_ABSTweenPlugin_T1__T2__TPlugOptions__o *plugin;
  System_Type_o *pSVar13;
  DG_Tweening_Core_DOSetter_T1__o *setter;
  System_RuntimeTypeHandle_o SVar14;
  System_RuntimeTypeHandle_o handle;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  UnityEngine_Color_o endValue;
  
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_24EF820_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar4 = method->rgctx_data;
  }
  SVar14.fields.value = (System_RuntimeTypeHandle_Fields)pMVar4->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (System_Type_o *)0x0;
  pSVar5 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if (member == (System_Reflection_MemberInfo_o *)0x0) {
label_025ef8e5:
    member = (System_Reflection_MemberInfo_o *)SVar14.fields.value;
    pSVar5 = pSVar13;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (member->klass->vtable)._14_GetCustomAttributes.method;
    lVar6 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (member,pSVar5,(ulong)(uint)inherit & 0xff);
    pSVar13 = pSVar5;
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)member;
    if (lVar6 == 0) goto label_025ef8e5;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      pIVar7 = method->rgctx_data->_1_T;
      if (((pIVar7->_2).field_0x6d & 1) == 0) {
        pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
      }
      if (lVar6 != 0) {
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar6,pIVar7);
        if (pIVar8 != (Il2CppObject *)0x0) {
          return pIVar8;
        }
        il2cpp_runtime_helper_022b2fd0(lVar6,pIVar7);
      }
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX + 0x38);
  if (pSVar11 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
    pSVar11 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX + 0x38);
  }
  SVar14.fields.value = (System_RuntimeTypeHandle_Fields)pSVar11->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (System_Type_o *)0x0;
  pSVar9 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if ((DG_Tweening_Core_DOGetter_T1__o *)member == (DG_Tweening_Core_DOGetter_T1__o *)0x0) {
label_025ef9b5:
    member = (System_Reflection_MemberInfo_o *)SVar14.fields.value;
    pSVar9 = pSVar13;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RCX = (((System_Reflection_MemberInfo_c *)((DG_Tweening_Core_DOGetter_T1__o *)member)->klass)->vtable).
             _14_GetCustomAttributes.method;
    lVar6 = (*(((System_Reflection_MemberInfo_c *)((DG_Tweening_Core_DOGetter_T1__o *)member)->klass)->vtable)
              ._14_GetCustomAttributes.methodPtr)(member,pSVar9,(ulong)pSVar5 & 0xff);
    pSVar13 = pSVar9;
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)member;
    if (lVar6 == 0) goto label_025ef9b5;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      lVar10 = *(long *)(*(long *)(extraout_RDX + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
      }
      if (lVar6 != 0) {
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar6,lVar10);
        if (pIVar8 != (Il2CppObject *)0x0) {
          return pIVar8;
        }
        il2cpp_runtime_helper_022b2fd0(lVar6,lVar10);
      }
      return (Il2CppObject *)0x0;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar11 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX_00 + 0x38);
  if (pSVar11 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX_00);
    pSVar11 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX_00 + 0x38);
  }
  SVar14.fields.value = (System_RuntimeTypeHandle_Fields)pSVar11->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = (System_Type_o *)0x0;
  pSVar5 = System_Type__GetTypeFromHandle(SVar14,(MethodInfo *)0x0);
  if ((DG_Tweening_Core_DOGetter_T1__o *)member != (DG_Tweening_Core_DOGetter_T1__o *)0x0) {
    in_RCX = (((System_Reflection_MemberInfo_c *)((DG_Tweening_Core_DOGetter_T1__o *)member)->klass)->vtable).
             _14_GetCustomAttributes.method;
    lVar6 = (*(((System_Reflection_MemberInfo_c *)((DG_Tweening_Core_DOGetter_T1__o *)member)->klass)->vtable)
              ._14_GetCustomAttributes.methodPtr)(member,pSVar5,(ulong)pSVar9 & 0xff);
    pSVar13 = pSVar5;
    SVar14.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)member;
    if (lVar6 != 0) {
      return (Il2CppObject *)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar11 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX_01 + 0x38);
  if (pSVar11 == (System_RuntimeTypeHandle_Fields *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX_01);
    pSVar11 = *(System_RuntimeTypeHandle_Fields **)(extraout_RDX_01 + 0x38);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar11->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  setter = (DG_Tweening_Core_DOSetter_T1__o *)0x0;
  pDVar12 = (DG_Tweening_Core_DOSetter_T1__o *)System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (SVar14.fields.value != 0) {
    in_RCX = (((System_Reflection_MemberInfo_c *)
              ((DG_Tweening_Core_DOGetter_T1__o *)SVar14.fields.value)->klass)->vtable).
             _14_GetCustomAttributes.method;
    lVar6 = (*(((System_Reflection_MemberInfo_c *)
               ((DG_Tweening_Core_DOGetter_T1__o *)SVar14.fields.value)->klass)->vtable).
              _14_GetCustomAttributes.methodPtr)(SVar14.fields.value,pDVar12,(ulong)pSVar13 & 0xff);
    setter = pDVar12;
    handle.fields.value = SVar14.fields.value;
    if (lVar6 != 0) {
      return (Il2CppObject *)CONCAT71((int7)((ulong)lVar6 >> 8),*(int *)(lVar6 + 0x18) != 0);
    }
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenManager);
    if ((in_RCX->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_runtime_helper_02300a20(in_RCX);
      iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
      goto joined_r0x025efb25;
    }
  }
  iVar1 = *(int *)(TypeInfo_DOTween + 0xe4);
joined_r0x025efb25:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  DG_Tweening_DOTween__InitCheck((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  t = DG_Tweening_Core_TweenManager__GetTweener_Color__Color__ColorOptions_
                ((MethodInfo_25EA730 *)((in_RCX->field7_0x38).rgctx_data)->method);
  endValue.fields.a = (float)in_XMM1_Db;
  endValue.fields.b = (float)in_XMM1_Da;
  endValue.fields.r = (float)(int)uVar2;
  endValue.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
  bVar3 = DG_Tweening_Tweener__Setup_Color__Color__ColorOptions_
                    (t,(DG_Tweening_Core_DOGetter_T1__o *)handle.fields.value,setter,endValue,in_XMM2_Da,
                     plugin,(MethodInfo_2606520 *)(in_RCX->field7_0x38).rgctx_data[6].method);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_TweenManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    DG_Tweening_Core_TweenManager__Despawn((DG_Tweening_Tween_o *)t,1,(MethodInfo *)0x0);
    t = (DG_Tweening_Core_TweenerCore_T1__T2__TPlugOptions__o *)0x0;
  }
  return (Il2CppObject *)t;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsPropertyStatic
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic (System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x4280fd0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic
          (System_Reflection_PropertyInfo_o *propertyInfo,MethodInfo *method)

{
  Il2CppType *pIVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar4;
  MethodInfo_2522A10 *pMVar5;
  char cVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  System_Reflection_MethodBase_o *pSVar8;
  long lVar9;
  System_String_o *pSVar10;
  long *plVar11;
  System_Type_o *pSVar12;
  Newtonsoft_Json_JsonSerializerSettings_o *pNVar13;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this;
  Il2CppClass *pIVar14;
  System_Collections_Generic_Dictionary_object__object__o *pSVar15;
  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition_o *value;
  Il2CppObject *pIVar16;
  char *pcVar17;
  System_Collections_Generic_List_string__o *pSVar18;
  undefined8 *puVar19;
  Il2CppClass *pIVar20;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar21;
  CustomLogic_Editor_Models_CLProperty_array *pCVar22;
  System_String_array *pSVar23;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_TSource__o *pSVar24;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar25;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  uint uVar26;
  Il2CppClass *clType;
  System_Collections_Generic_List_string__o *pSVar27;
  Il2CppClass *pIVar28;
  MethodInfo_2522A10 *pMVar29;
  MethodInfo_2522A10 *pMVar30;
  MethodInfo_2522A10 *pMVar31;
  System_String_o **ppSVar32;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *__this_01;
  
  if (propertyInfo != (System_Reflection_PropertyInfo_o *)0x0) {
    pSVar8 = (System_Reflection_MethodBase_o *)
             (*(propertyInfo->klass->vtable)._24_unknown.methodPtr)
                       (propertyInfo,1,(propertyInfo->klass->vtable)._24_unknown.method);
    if (pSVar8 != (System_Reflection_MethodBase_o *)0x0) {
      bVar7 = System_Reflection_MethodBase__get_IsStatic(pSVar8,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar7 >> 8),1);
      }
    }
    pSVar8 = (System_Reflection_MethodBase_o *)
             (*(propertyInfo->klass->vtable)._26_unknown.methodPtr)
                       (propertyInfo,1,(propertyInfo->klass->vtable)._26_unknown.method);
    if (pSVar8 == (System_Reflection_MethodBase_o *)0x0) {
      return 0;
    }
    bVar7 = System_Reflection_MethodBase__get_IsStatic(pSVar8,(MethodInfo *)0x0);
    return bVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar32 = (System_String_o **)propertyInfo;
  if (g_data_057adc80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    ppSVar32 = &"\"";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc80 = '\x01';
  }
  if (propertyInfo != (System_Reflection_PropertyInfo_o *)0x0) {
    cVar6 = (*(propertyInfo->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (propertyInfo,(propertyInfo->klass->vtable)._14_GetCustomAttributes.method);
    if (cVar6 == '\0') {
      return (bool_conflict)g_data_057b9c00->static_fields->Empty;
    }
    lVar9 = (*(propertyInfo->klass->vtable)._13_GetCustomAttributes.methodPtr)
                      (propertyInfo,(propertyInfo->klass->vtable)._13_GetCustomAttributes.method);
    if (lVar9 == 0) {
      return (bool_conflict)"null";
    }
    pSVar10 = (System_String_o *)
              (*(propertyInfo->klass->vtable)._13_GetCustomAttributes.methodPtr)
                        (propertyInfo,(propertyInfo->klass->vtable)._13_GetCustomAttributes.method);
    if ((pSVar10 != (System_String_o *)0x0) && (pSVar10->klass == g_data_057b9c00)) {
      pSVar10 = System_String__Concat_3af7150("\"",pSVar10,"\"",(MethodInfo *)0x0);
      return (bool_conflict)pSVar10;
    }
    plVar11 = (long *)(*(propertyInfo->klass->vtable)._13_GetCustomAttributes.methodPtr)();
    ppSVar32 = (System_String_o **)propertyInfo;
    if (plVar11 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar11 + 0x168);
      bVar7 = (*UNRECOVERED_JUMPTABLE_00)(plVar11,*(undefined8 *)(*plVar11 + 0x170),UNRECOVERED_JUMPTABLE_00);
      return bVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ParamArrayAttribute);
    g_data_057adc81 = '\x01';
  }
  handle.fields.value = TypeRef_ParamArrayAttribute.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar20 = (Il2CppClass *)0x0;
  pSVar12 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((System_Reflection_PropertyInfo_o *)ppSVar32 != (System_Reflection_PropertyInfo_o *)0x0) {
    vtableDispatch =
         (((System_Reflection_PropertyInfo_o *)ppSVar32)->klass->vtable)._15_get_MetadataToken.methodPtr;
    bVar7 = (*vtableDispatch)
                      (ppSVar32,pSVar12,0,
                       (((System_Reflection_PropertyInfo_o *)ppSVar32)->klass->vtable)._15_get_MetadataToken.
                       method,vtableDispatch);
    return bVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DefaultContractResolver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonSerializerSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adc82 = '\x01';
  }
  pNVar13 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(pNVar13,(MethodInfo *)0x0);
  __this = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this,(MethodInfo *)0x0);
  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_CamelCaseNamingStrategy);
  clType = (Il2CppClass *)0x0;
  pIVar28 = pIVar14;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor_3dc84d0
            ((Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)pIVar14,(MethodInfo *)0x0);
  if (__this != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    pIVar28 = (Il2CppClass *)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField;
    *(Il2CppClass **)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField = pIVar14;
    il2cpp_runtime_helper_022b4080();
    clType = pIVar14;
    if (pNVar13 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (pNVar13->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this;
      il2cpp_runtime_helper_022b4080(&(pNVar13->fields)._Converters_k__BackingField,__this);
      Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(pNVar13,1,(MethodInfo *)0x0);
      Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(pNVar13,1,(MethodInfo *)0x0);
      (((Il2CppClass *)handle.fields.value)->_1).namespaze = (char *)pNVar13;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).namespaze,pNVar13);
      pSVar15 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ClassDefinition);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar15,MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
      pIVar1 = &(((Il2CppClass *)handle.fields.value)->_1).byval_arg;
      (((Il2CppClass *)handle.fields.value)->_1).byval_arg.data = pSVar15;
      il2cpp_runtime_helper_022b4080(pIVar1);
      System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
      pIVar28 = (Il2CppClass *)&(((Il2CppClass *)handle.fields.value)->_1).name;
      ((CustomLogic_Editor_Models_CLType_Fields *)&(((Il2CppClass *)handle.fields.value)->_1).name)->
      _ObsoleteMessage_k__BackingField = (System_String_o *)pIVar20;
      clType = pIVar20;
      il2cpp_runtime_helper_022b4080();
      if (pIVar20 != (Il2CppClass *)0x0) {
        pcVar17 = (pIVar20->_1).namespaze;
        pIVar14 = clType;
        if (0 < (int)pcVar17) {
          uVar26 = 0;
          pMVar25 = extraout_RDX;
          do {
            clType = pIVar14;
            if ((uint)pcVar17 <= uVar26) goto label_0428152b;
            clType = (&(pIVar20->_1).byval_arg.data)[(int)uVar26];
            if (clType == (Il2CppClass *)0x0) goto label_04281526;
            __this_01 = pIVar1->data;
            pIVar14 = (Il2CppClass *)(clType->_1).namespaze;
            pIVar28 = (Il2CppClass *)handle.fields.value;
            value = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertToClassDefinition
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)
                               handle.fields.value,(CustomLogic_Editor_Models_CLType_o *)clType,pMVar25);
            if (__this_01 == (Il2CppClass *)0x0) goto label_04281526;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pIVar14,(Il2CppObject *)value,MethodInfo_Void_set_Item);
            uVar26 = uVar26 + 1;
            pcVar17 = (pIVar20->_1).namespaze;
            pMVar25 = extraout_RDX_00;
            pIVar28 = __this_01;
          } while ((int)uVar26 < (int)pcVar17);
        }
        uVar26 = (uint)pcVar17;
        if (0 < (int)uVar26) {
          lVar9 = 0;
          clType = pIVar14;
          do {
            if ((uint)pcVar17 <= (uint)lVar9) goto label_0428152b;
            pvVar3 = (&(pIVar20->_1).byval_arg.data)[lVar9];
            if ((pvVar3 == (void *)0x0) || (pIVar28 = pIVar1->data, pIVar28 == (Il2CppClass *)0x0))
            goto label_04281526;
            pIVar14 = *(Il2CppClass **)((long)pvVar3 + 0x18);
            pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar28,
                                 (Il2CppObject *)pIVar14,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
            if ((*(char *)((long)pvVar3 + 0x2a) != '\0') && (*(long *)((long)pvVar3 + 0x40) != 0)) {
              pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              clType = MethodInfo_List_1_System_String;
              pIVar28 = pIVar14;
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pIVar14,
                         (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
              lVar4 = MethodInfo_Void_Add;
              if ((*(long *)((long)pvVar3 + 0x40) == 0) || (pIVar14 == (Il2CppClass *)0x0)) goto label_04281526;
              clType = *(Il2CppClass **)(*(long *)((long)pvVar3 + 0x40) + 0x18);
              piVar2 = (int *)((long)&(pIVar14->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pSVar10 = ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar14->_1).name)->
                        _ObsoleteMessage_k__BackingField;
              if (pSVar10 == (System_String_o *)0x0) goto label_04281526;
              uVar26 = *(uint *)&(pIVar14->_1).namespaze;
              if (uVar26 < *(uint *)&pSVar10[1].klass) {
                *(uint *)&(pIVar14->_1).namespaze = uVar26 + 1;
                pIVar28 = (Il2CppClass *)(&pSVar10[1].monitor + (int)uVar26);
                (&pSVar10[1].monitor)[(int)uVar26] = clType;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIVar28 = pIVar14;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar14,(Il2CppObject *)clType,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              if (pIVar16 == (Il2CppObject *)0x0) goto label_04281526;
              pIVar28 = (Il2CppClass *)(pIVar16 + 3);
              pIVar16[3].klass = pIVar14;
              il2cpp_runtime_helper_022b4080();
            }
            uVar26 = *(uint *)&(pIVar20->_1).namespaze;
            pcVar17 = (char *)(ulong)uVar26;
            lVar9 = lVar9 + 1;
            clType = pIVar14;
          } while ((int)lVar9 < (int)uVar26);
        }
        return uVar26;
      }
    }
  }
label_04281526:
  il2cpp_runtime_helper_022b2c90();
label_0428152b:
  il2cpp_runtime_helper_022b2ca0();
  pMVar25 = extraout_RDX_01;
  ppSVar32 = (System_String_o **)pIVar28;
  if (g_data_057adc88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClassDefinition);
    ppSVar32 = (System_String_o **)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc88 = '\x01';
    pMVar25 = extraout_RDX_02;
  }
  pIVar20 = clType;
  pSVar18 = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ExtractTypeParameters
                      ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar32,
                       (CustomLogic_Editor_Models_CLType_o *)clType,pMVar25);
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    ppSVar32 = (System_String_o **)&"extension";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc85 = '\x01';
  }
  if (clType != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(clType->_1).byval_arg.bits + 3) == '\0') {
      if ((char)(clType->_1).byval_arg.bits == '\0') {
        puVar19 = &"class";
      }
      else {
        puVar19 = &"extension";
      }
    }
    else {
      puVar19 = &"component";
    }
    pSVar10 = (System_String_o *)*puVar19;
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ClassDefinition);
    pIVar20 = (Il2CppClass *)0x0;
    ppSVar32 = (System_String_o **)pIVar14;
    System_Object___ctor((Il2CppObject *)pIVar14,(MethodInfo *)0x0);
    if (pIVar14 != (Il2CppClass *)0x0) {
      ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar14->_1).name)->_ObsoleteMessage_k__BackingField =
           pSVar10;
      il2cpp_runtime_helper_022b4080((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar14->_1).name,pSVar10);
      ppSVar32 = (System_String_o **)&(pIVar14->_1).namespaze;
      (pIVar14->_1).namespaze = (char *)(clType->_1).namespaze;
      il2cpp_runtime_helper_022b4080();
      pvVar3 = (clType->_1).byval_arg.data;
      if (pvVar3 == (void *)0x0) {
        pIVar20 = (Il2CppClass *)0x0;
      }
      else {
        pIVar20 = *(Il2CppClass **)((long)pvVar3 + 0x10);
      }
      if (pIVar28 != (Il2CppClass *)0x0) {
        pIVar20 = (Il2CppClass *)
                  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__NormalizeDescription
                            ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar32,
                             (System_String_o *)pIVar20,method_00);
        ppSVar32 = &(pIVar14->_1).byval_arg.data;
        (pIVar14->_1).byval_arg.data = pIVar20;
        il2cpp_runtime_helper_022b4080();
        if (pSVar18 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar27 = (System_Collections_Generic_List_string__o *)0x0;
          if (0 < (pSVar18->fields)._size) {
            pSVar27 = pSVar18;
          }
          *(System_Collections_Generic_List_string__o **)&(pIVar14->_1).byval_arg.bits = pSVar27;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).byval_arg.bits);
          *(System_String_array **)&(pIVar14->_1).this_arg.bits = (System_String_array *)(clType->_1).name;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).this_arg.bits);
          pCVar21 = (CustomLogic_Editor_Models_CLConstructor_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar28,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).declaringType,
                               method_01);
          (pIVar14->_1).declaringType = (Il2CppClass *)pCVar21;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).declaringType,pCVar21);
          pCVar22 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar28,
                               (clType->_1).generic_class,method_02);
          (pIVar14->_1).parent = (Il2CppClass *)pCVar22;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).parent,pCVar22);
          pIVar20 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar28,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).parent,method_03);
          (pIVar14->_1).element_class = pIVar20;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).element_class,pIVar20);
          pIVar20 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar28,
                               (clType->_1).typeMetadataHandle,method_04);
          (pIVar14->_1).castClass = pIVar20;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).castClass,pIVar20);
          pCVar22 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertConstructors
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar28,
                               (CustomLogic_Editor_Models_CLConstructor_array *)(clType->_1).castClass,
                               method_05);
          (pIVar14->_1).generic_class = pCVar22;
          il2cpp_runtime_helper_022b4080(&(pIVar14->_1).generic_class,pCVar22);
          return (bool_conflict)pIVar14;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar28 = pIVar20;
  if (g_data_057adc83 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    ppSVar32 = &"vscode-json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc83 = '\x01';
  }
  if (pIVar20 != (Il2CppClass *)0x0) {
    pSVar10 = System_String__Concat_3af7150
                        ("vscode-json/",(System_String_o *)(pIVar20->_1).namespaze,".json",
                         (MethodInfo *)0x0);
    return (bool_conflict)pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar20 = pIVar28;
  if (g_data_057adc84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc84 = '\x01';
  }
  if ((pIVar28 != (Il2CppClass *)0x0) &&
     (pSVar15 = (((Il2CppClass *)ppSVar32)->_1).byval_arg.data,
     pSVar15 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar16 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar15,(Il2CppObject *)(pIVar28->_1).namespaze,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    pNVar13 = (Newtonsoft_Json_JsonSerializerSettings_o *)(((Il2CppClass *)ppSVar32)->_1).namespaze;
    if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10(pIVar16,1,pNVar13,(MethodInfo *)0x0);
    return (bool_conflict)pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar28 = pIVar20;
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"extension");
    g_data_057adc85 = '\x01';
  }
  if (pIVar20 != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(pIVar20->_1).byval_arg.bits + 3) != '\0') {
      return (bool_conflict)"component";
    }
    if (*(char *)&(pIVar20->_1).byval_arg.bits == '\0') {
      return (bool_conflict)"class";
    }
    return (bool_conflict)"extension";
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_NormalizeDescription_b__6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_NormalizeDescription_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"\r");
    g_data_057adc86 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar28,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_04281baf:
    return (bool_conflict)g_data_057b9c00->static_fields->Empty;
  }
  pMVar29 = (MethodInfo_2522A10 *)0x3;
  pIVar16 = TypeInfo_string;
  pSVar23 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar30 = "\r\n";
  if (pSVar23 != (System_String_array *)0x0) {
    pMVar5 = pMVar29;
    if ((int)pSVar23->max_length != 0) {
      pIVar16 = (Il2CppObject *)pSVar23->m_Items;
      pSVar23->m_Items[0] = (System_String_o *)"\r\n";
      il2cpp_runtime_helper_022b4080();
      pMVar31 = "\r";
      pMVar5 = pMVar30;
      if (1 < (uint)pSVar23->max_length) {
        pIVar16 = (Il2CppObject *)(pSVar23->m_Items + 1);
        pSVar23->m_Items[1] = (System_String_o *)"\r";
        il2cpp_runtime_helper_022b4080();
        pMVar29 = "\n";
        pMVar5 = pMVar31;
        if (2 < (uint)pSVar23->max_length) {
          pIVar16 = (Il2CppObject *)(pSVar23->m_Items + 2);
          pSVar23->m_Items[2] = (System_String_o *)"\n";
          il2cpp_runtime_helper_022b4080();
          if (pIVar28 != (Il2CppClass *)0x0) {
            pSVar23 = System_String__Split_3afab90((System_String_o *)pIVar28,pSVar23,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (selector == (System_Func_TSource__TResult__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
              System_Func_object__object____ctor();
              lVar9 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__TResult__o **)(lVar9 + 8) = selector;
              il2cpp_runtime_helper_022b4080(lVar9 + 8,selector);
            }
            source_00 = System_Linq_Enumerable__Select_object__object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar23,selector,
                                   MethodInfo_IEnumerable_1_System_String_Select_String_String);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (predicate == (System_Func_TSource__bool__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
              System_Func_object__bool____ctor();
              lVar9 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__bool__o **)(lVar9 + 0x10) = predicate;
              il2cpp_runtime_helper_022b4080(lVar9 + 0x10,predicate);
            }
            pIVar16 = (Il2CppObject *)
                      System_Linq_Enumerable__Where_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                                 MethodInfo_IEnumerable_1_System_String_Where_String);
            pMVar29 = MethodInfo_String_ToArray_String;
            pSVar23 = (System_String_array *)
                      System_Linq_Enumerable__ToArray_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar16,MethodInfo_String_ToArray_String);
            if (pSVar23 != (System_String_array *)0x0) {
              if (pSVar23->max_length != 0) {
                pSVar10 = System_String__Join(" ",pSVar23,(MethodInfo *)0x0);
                return (bool_conflict)pSVar10;
              }
              goto label_04281baf;
            }
          }
          goto label_04281bd8;
        }
      }
    }
    pMVar29 = pMVar5;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04281bd8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pIVar16 = (Il2CppObject *)&TypeInfo_List_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc87 = '\x01';
  }
  if (pMVar29 != (MethodInfo_2522A10 *)0x0) {
    source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar29->parameters;
    if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
       (source[1].monitor != (void *)0x0)) {
      pSVar24 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
      return (bool_conflict)pSVar24;
    }
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    return (bool_conflict)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar16,(MethodInfo *)0x0);
  return extraout_EAX;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetDefaultValueAsString
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x4281040

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString
          (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  Il2CppType *pIVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar4;
  MethodInfo_2522A10 *pMVar5;
  char cVar6;
  bool_conflict bVar7;
  long lVar8;
  System_String_o *pSVar9;
  long *plVar10;
  System_Type_o *pSVar11;
  Newtonsoft_Json_JsonSerializerSettings_o *pNVar12;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this;
  Il2CppClass *pIVar13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar14;
  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition_o *value;
  Il2CppObject *pIVar15;
  System_Collections_Generic_List_string__o *pSVar16;
  Il2CppClass *pIVar17;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar18;
  CustomLogic_Editor_Models_CLProperty_array *pCVar19;
  System_String_array *pSVar20;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_TSource__o *pSVar21;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar22;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  uint uVar23;
  Il2CppClass *clType;
  System_Collections_Generic_List_string__o *pSVar24;
  Il2CppClass *pIVar25;
  MethodInfo_2522A10 *pMVar26;
  MethodInfo_2522A10 *pMVar27;
  MethodInfo_2522A10 *pMVar28;
  System_String_o **ppSVar29;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *__this_01;
  
  ppSVar29 = (System_String_o **)parameterInfo;
  if (g_data_057adc80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"null");
    ppSVar29 = &"\"";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc80 = '\x01';
  }
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    cVar6 = (*(parameterInfo->klass->vtable)._14_get_HasDefaultValue.methodPtr)
                      (parameterInfo,(parameterInfo->klass->vtable)._14_get_HasDefaultValue.method);
    if (cVar6 == '\0') {
      return g_data_057b9c00->static_fields->Empty;
    }
    lVar8 = (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                      (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (lVar8 == 0) {
      return "null";
    }
    pSVar9 = (System_String_o *)
             (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if ((pSVar9 != (System_String_o *)0x0) && (pSVar9->klass == g_data_057b9c00)) {
      pSVar9 = System_String__Concat_3af7150("\"",pSVar9,"\"",(MethodInfo *)0x0);
      return pSVar9;
    }
    plVar10 = (long *)(*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)();
    ppSVar29 = (System_String_o **)parameterInfo;
    if (plVar10 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar10 + 0x168);
      pSVar9 = (System_String_o *)
               (*UNRECOVERED_JUMPTABLE_00)(plVar10,*(undefined8 *)(*plVar10 + 0x170),UNRECOVERED_JUMPTABLE_00)
      ;
      return pSVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ParamArrayAttribute);
    g_data_057adc81 = '\x01';
  }
  handle.fields.value = TypeRef_ParamArrayAttribute.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar17 = (Il2CppClass *)0x0;
  pSVar11 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((System_Reflection_ParameterInfo_o *)ppSVar29 != (System_Reflection_ParameterInfo_o *)0x0) {
    vtableDispatch =
         (((System_Reflection_ParameterInfo_o *)ppSVar29)->klass->vtable)._15_IsDefined.methodPtr;
    pSVar9 = (System_String_o *)
             (*vtableDispatch)
                       (ppSVar29,pSVar11,0,
                        (((System_Reflection_ParameterInfo_o *)ppSVar29)->klass->vtable)._15_IsDefined.method,
                        vtableDispatch);
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DefaultContractResolver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonSerializerSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adc82 = '\x01';
  }
  pNVar12 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(pNVar12,(MethodInfo *)0x0);
  __this = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this,(MethodInfo *)0x0);
  pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_CamelCaseNamingStrategy);
  clType = (Il2CppClass *)0x0;
  pIVar25 = pIVar13;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor_3dc84d0
            ((Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)pIVar13,(MethodInfo *)0x0);
  if (__this != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    pIVar25 = (Il2CppClass *)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField;
    *(Il2CppClass **)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField = pIVar13;
    il2cpp_runtime_helper_022b4080();
    clType = pIVar13;
    if (pNVar12 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (pNVar12->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this;
      il2cpp_runtime_helper_022b4080(&(pNVar12->fields)._Converters_k__BackingField,__this);
      Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(pNVar12,1,(MethodInfo *)0x0);
      Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(pNVar12,1,(MethodInfo *)0x0);
      (((Il2CppClass *)handle.fields.value)->_1).namespaze = (char *)pNVar12;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).namespaze,pNVar12);
      pSVar14 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ClassDefinition);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar14,MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
      pIVar1 = &(((Il2CppClass *)handle.fields.value)->_1).byval_arg;
      (((Il2CppClass *)handle.fields.value)->_1).byval_arg.data = pSVar14;
      il2cpp_runtime_helper_022b4080(pIVar1);
      System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
      pIVar25 = (Il2CppClass *)&(((Il2CppClass *)handle.fields.value)->_1).name;
      ((CustomLogic_Editor_Models_CLType_Fields *)&(((Il2CppClass *)handle.fields.value)->_1).name)->
      _ObsoleteMessage_k__BackingField = (System_String_o *)pIVar17;
      clType = pIVar17;
      il2cpp_runtime_helper_022b4080();
      if (pIVar17 != (Il2CppClass *)0x0) {
        pSVar9 = (System_String_o *)(pIVar17->_1).namespaze;
        pIVar13 = clType;
        if (0 < (int)pSVar9) {
          uVar23 = 0;
          pMVar22 = extraout_RDX;
          do {
            clType = pIVar13;
            if ((uint)pSVar9 <= uVar23) goto label_0428152b;
            clType = (&(pIVar17->_1).byval_arg.data)[(int)uVar23];
            if (clType == (Il2CppClass *)0x0) goto label_04281526;
            __this_01 = pIVar1->data;
            pIVar13 = (Il2CppClass *)(clType->_1).namespaze;
            pIVar25 = (Il2CppClass *)handle.fields.value;
            value = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertToClassDefinition
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)
                               handle.fields.value,(CustomLogic_Editor_Models_CLType_o *)clType,pMVar22);
            if (__this_01 == (Il2CppClass *)0x0) goto label_04281526;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pIVar13,(Il2CppObject *)value,MethodInfo_Void_set_Item);
            uVar23 = uVar23 + 1;
            pSVar9 = (System_String_o *)(pIVar17->_1).namespaze;
            pMVar22 = extraout_RDX_00;
            pIVar25 = __this_01;
          } while ((int)uVar23 < (int)pSVar9);
        }
        if (0 < (int)pSVar9) {
          lVar8 = 0;
          clType = pIVar13;
          do {
            if ((uint)pSVar9 <= (uint)lVar8) goto label_0428152b;
            pvVar3 = (&(pIVar17->_1).byval_arg.data)[lVar8];
            if ((pvVar3 == (void *)0x0) || (pIVar25 = pIVar1->data, pIVar25 == (Il2CppClass *)0x0))
            goto label_04281526;
            pIVar13 = *(Il2CppClass **)((long)pvVar3 + 0x18);
            pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar25,
                                 (Il2CppObject *)pIVar13,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
            if ((*(char *)((long)pvVar3 + 0x2a) != '\0') && (*(long *)((long)pvVar3 + 0x40) != 0)) {
              pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              clType = MethodInfo_List_1_System_String;
              pIVar25 = pIVar13;
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pIVar13,
                         (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
              lVar4 = MethodInfo_Void_Add;
              if ((*(long *)((long)pvVar3 + 0x40) == 0) || (pIVar13 == (Il2CppClass *)0x0)) goto label_04281526;
              clType = *(Il2CppClass **)(*(long *)((long)pvVar3 + 0x40) + 0x18);
              piVar2 = (int *)((long)&(pIVar13->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pSVar9 = ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar13->_1).name)->
                       _ObsoleteMessage_k__BackingField;
              if (pSVar9 == (System_String_o *)0x0) goto label_04281526;
              uVar23 = *(uint *)&(pIVar13->_1).namespaze;
              if (uVar23 < *(uint *)&pSVar9[1].klass) {
                *(uint *)&(pIVar13->_1).namespaze = uVar23 + 1;
                pIVar25 = (Il2CppClass *)(&pSVar9[1].monitor + (int)uVar23);
                (&pSVar9[1].monitor)[(int)uVar23] = clType;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIVar25 = pIVar13;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar13,(Il2CppObject *)clType,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              if (pIVar15 == (Il2CppObject *)0x0) goto label_04281526;
              pIVar25 = (Il2CppClass *)(pIVar15 + 3);
              pIVar15[3].klass = pIVar13;
              il2cpp_runtime_helper_022b4080();
            }
            uVar23 = *(uint *)&(pIVar17->_1).namespaze;
            pSVar9 = (System_String_o *)(ulong)uVar23;
            lVar8 = lVar8 + 1;
            clType = pIVar13;
          } while ((int)lVar8 < (int)uVar23);
        }
        return pSVar9;
      }
    }
  }
label_04281526:
  il2cpp_runtime_helper_022b2c90();
label_0428152b:
  il2cpp_runtime_helper_022b2ca0();
  pMVar22 = extraout_RDX_01;
  ppSVar29 = (System_String_o **)pIVar25;
  if (g_data_057adc88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClassDefinition);
    ppSVar29 = (System_String_o **)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc88 = '\x01';
    pMVar22 = extraout_RDX_02;
  }
  pIVar17 = clType;
  pSVar16 = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ExtractTypeParameters
                      ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar29,
                       (CustomLogic_Editor_Models_CLType_o *)clType,pMVar22);
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    ppSVar29 = &"extension";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc85 = '\x01';
  }
  if (clType != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(clType->_1).byval_arg.bits + 3) == '\0') {
      if ((char)(clType->_1).byval_arg.bits == '\0') {
        ppSVar29 = &"class";
      }
      else {
        ppSVar29 = &"extension";
      }
    }
    else {
      ppSVar29 = &"component";
    }
    pSVar9 = *ppSVar29;
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ClassDefinition);
    pIVar17 = (Il2CppClass *)0x0;
    ppSVar29 = (System_String_o **)pIVar13;
    System_Object___ctor((Il2CppObject *)pIVar13,(MethodInfo *)0x0);
    if (pIVar13 != (Il2CppClass *)0x0) {
      ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar13->_1).name)->_ObsoleteMessage_k__BackingField =
           pSVar9;
      il2cpp_runtime_helper_022b4080((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar13->_1).name,pSVar9);
      ppSVar29 = (System_String_o **)&(pIVar13->_1).namespaze;
      (pIVar13->_1).namespaze = (char *)(clType->_1).namespaze;
      il2cpp_runtime_helper_022b4080();
      pvVar3 = (clType->_1).byval_arg.data;
      if (pvVar3 == (void *)0x0) {
        pIVar17 = (Il2CppClass *)0x0;
      }
      else {
        pIVar17 = *(Il2CppClass **)((long)pvVar3 + 0x10);
      }
      if (pIVar25 != (Il2CppClass *)0x0) {
        pIVar17 = (Il2CppClass *)
                  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__NormalizeDescription
                            ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)ppSVar29,
                             (System_String_o *)pIVar17,method_00);
        ppSVar29 = &(pIVar13->_1).byval_arg.data;
        (pIVar13->_1).byval_arg.data = pIVar17;
        il2cpp_runtime_helper_022b4080();
        if (pSVar16 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar24 = (System_Collections_Generic_List_string__o *)0x0;
          if (0 < (pSVar16->fields)._size) {
            pSVar24 = pSVar16;
          }
          *(System_Collections_Generic_List_string__o **)&(pIVar13->_1).byval_arg.bits = pSVar24;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).byval_arg.bits);
          *(System_String_array **)&(pIVar13->_1).this_arg.bits = (System_String_array *)(clType->_1).name;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).this_arg.bits);
          pCVar18 = (CustomLogic_Editor_Models_CLConstructor_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).declaringType,
                               method_01);
          (pIVar13->_1).declaringType = (Il2CppClass *)pCVar18;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).declaringType,pCVar18);
          pCVar19 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (clType->_1).generic_class,method_02);
          (pIVar13->_1).parent = (Il2CppClass *)pCVar19;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).parent,pCVar19);
          pIVar17 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).parent,method_03);
          (pIVar13->_1).element_class = pIVar17;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).element_class,pIVar17);
          pIVar17 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (clType->_1).typeMetadataHandle,method_04);
          (pIVar13->_1).castClass = pIVar17;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).castClass,pIVar17);
          pCVar19 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertConstructors
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (CustomLogic_Editor_Models_CLConstructor_array *)(clType->_1).castClass,
                               method_05);
          (pIVar13->_1).generic_class = pCVar19;
          il2cpp_runtime_helper_022b4080(&(pIVar13->_1).generic_class,pCVar19);
          return (System_String_o *)pIVar13;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar25 = pIVar17;
  if (g_data_057adc83 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    ppSVar29 = &"vscode-json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc83 = '\x01';
  }
  if (pIVar17 != (Il2CppClass *)0x0) {
    pSVar9 = System_String__Concat_3af7150
                       ("vscode-json/",(System_String_o *)(pIVar17->_1).namespaze,".json",(MethodInfo *)0x0
                       );
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar17 = pIVar25;
  if (g_data_057adc84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc84 = '\x01';
  }
  if ((pIVar25 != (Il2CppClass *)0x0) &&
     (pSVar14 = (((Il2CppClass *)ppSVar29)->_1).byval_arg.data,
     pSVar14 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar14,(Il2CppObject *)(pIVar25->_1).namespaze,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    pNVar12 = (Newtonsoft_Json_JsonSerializerSettings_o *)(((Il2CppClass *)ppSVar29)->_1).namespaze;
    if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10(pIVar15,1,pNVar12,(MethodInfo *)0x0);
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar25 = pIVar17;
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"extension");
    g_data_057adc85 = '\x01';
  }
  if (pIVar17 != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(pIVar17->_1).byval_arg.bits + 3) != '\0') {
      return "component";
    }
    if (*(char *)&(pIVar17->_1).byval_arg.bits != '\0') {
      return "extension";
    }
    return "class";
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_NormalizeDescription_b__6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_NormalizeDescription_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"\r");
    g_data_057adc86 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar25,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_04281baf:
    return g_data_057b9c00->static_fields->Empty;
  }
  pMVar26 = (MethodInfo_2522A10 *)0x3;
  pIVar15 = TypeInfo_string;
  pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar27 = "\r\n";
  if (pSVar20 != (System_String_array *)0x0) {
    pMVar5 = pMVar26;
    if ((int)pSVar20->max_length != 0) {
      pIVar15 = (Il2CppObject *)pSVar20->m_Items;
      pSVar20->m_Items[0] = (System_String_o *)"\r\n";
      il2cpp_runtime_helper_022b4080();
      pMVar28 = "\r";
      pMVar5 = pMVar27;
      if (1 < (uint)pSVar20->max_length) {
        pIVar15 = (Il2CppObject *)(pSVar20->m_Items + 1);
        pSVar20->m_Items[1] = (System_String_o *)"\r";
        il2cpp_runtime_helper_022b4080();
        pMVar26 = "\n";
        pMVar5 = pMVar28;
        if (2 < (uint)pSVar20->max_length) {
          pIVar15 = (Il2CppObject *)(pSVar20->m_Items + 2);
          pSVar20->m_Items[2] = (System_String_o *)"\n";
          il2cpp_runtime_helper_022b4080();
          if (pIVar25 != (Il2CppClass *)0x0) {
            pSVar20 = System_String__Split_3afab90((System_String_o *)pIVar25,pSVar20,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (selector == (System_Func_TSource__TResult__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
              System_Func_object__object____ctor();
              lVar8 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__TResult__o **)(lVar8 + 8) = selector;
              il2cpp_runtime_helper_022b4080(lVar8 + 8,selector);
            }
            source_00 = System_Linq_Enumerable__Select_object__object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,selector,
                                   MethodInfo_IEnumerable_1_System_String_Select_String_String);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (predicate == (System_Func_TSource__bool__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
              System_Func_object__bool____ctor();
              lVar8 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__bool__o **)(lVar8 + 0x10) = predicate;
              il2cpp_runtime_helper_022b4080(lVar8 + 0x10,predicate);
            }
            pIVar15 = (Il2CppObject *)
                      System_Linq_Enumerable__Where_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                                 MethodInfo_IEnumerable_1_System_String_Where_String);
            pMVar26 = MethodInfo_String_ToArray_String;
            pSVar20 = (System_String_array *)
                      System_Linq_Enumerable__ToArray_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar15,MethodInfo_String_ToArray_String);
            if (pSVar20 != (System_String_array *)0x0) {
              if (pSVar20->max_length != 0) {
                pSVar9 = System_String__Join(" ",pSVar20,(MethodInfo *)0x0);
                return pSVar9;
              }
              goto label_04281baf;
            }
          }
          goto label_04281bd8;
        }
      }
    }
    pMVar26 = pMVar5;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04281bd8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pIVar15 = (Il2CppObject *)&TypeInfo_List_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc87 = '\x01';
  }
  if (pMVar26 == (MethodInfo_2522A10 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar15,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar26->parameters;
  if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
     (source[1].monitor != (void *)0x0)) {
    pSVar21 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
    return (System_String_o *)pSVar21;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  return (System_String_o *)__this_00;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsVariadicParameter
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x4281150

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter
          (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  Il2CppType *pIVar1;
  int *piVar2;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  long lVar4;
  MethodInfo_2522A10 *pMVar5;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  System_Type_o *pSVar7;
  Newtonsoft_Json_JsonSerializerSettings_o *pNVar8;
  Newtonsoft_Json_Serialization_DefaultContractResolver_o *__this;
  Il2CppClass *pIVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition_o *value;
  Il2CppObject *pIVar11;
  char *pcVar12;
  System_Collections_Generic_List_string__o *pSVar13;
  undefined8 *puVar14;
  Il2CppClass *pIVar15;
  CustomLogic_Editor_Models_CLConstructor_array *pCVar16;
  CustomLogic_Editor_Models_CLProperty_array *pCVar17;
  System_String_o *pSVar18;
  System_String_array *pSVar19;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_TSource__o *pSVar20;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  long lVar22;
  uint uVar23;
  Il2CppClass *clType;
  System_Collections_Generic_List_string__o *pSVar24;
  Il2CppClass *pIVar25;
  MethodInfo_2522A10 *pMVar26;
  MethodInfo_2522A10 *pMVar27;
  MethodInfo_2522A10 *pMVar28;
  System_RuntimeTypeHandle_o handle;
  Il2CppClass *__this_01;
  System_String_o **__this_02;
  
  if (g_data_057adc81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ParamArrayAttribute);
    g_data_057adc81 = '\x01';
  }
  handle.fields.value = TypeRef_ParamArrayAttribute.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar15 = (Il2CppClass *)0x0;
  pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    vtableDispatch = (parameterInfo->klass->vtable)._15_IsDefined.methodPtr;
    bVar6 = (*vtableDispatch)
                      (parameterInfo,pSVar7,0,(parameterInfo->klass->vtable)._15_IsDefined.method,
                       vtableDispatch);
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CamelCaseNamingStrategy);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DefaultContractResolver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonSerializerSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adc82 = '\x01';
  }
  pNVar8 = (Newtonsoft_Json_JsonSerializerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JsonSerializerSettings);
  Newtonsoft_Json_JsonSerializerSettings___ctor(pNVar8,(MethodInfo *)0x0);
  __this = (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)il2cpp_runtime_helper_023052d0(TypeInfo_DefaultContractResolver);
  Newtonsoft_Json_Serialization_DefaultContractResolver___ctor(__this,(MethodInfo *)0x0);
  pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_CamelCaseNamingStrategy);
  clType = (Il2CppClass *)0x0;
  pIVar25 = pIVar9;
  Newtonsoft_Json_Serialization_CamelCaseNamingStrategy___ctor_3dc84d0
            ((Newtonsoft_Json_Serialization_CamelCaseNamingStrategy_o *)pIVar9,(MethodInfo *)0x0);
  if (__this != (Newtonsoft_Json_Serialization_DefaultContractResolver_o *)0x0) {
    pIVar25 = (Il2CppClass *)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField;
    *(Il2CppClass **)&(__this->fields)._IgnoreIsSpecifiedMembers_k__BackingField = pIVar9;
    il2cpp_runtime_helper_022b4080();
    clType = pIVar9;
    if (pNVar8 != (Newtonsoft_Json_JsonSerializerSettings_o *)0x0) {
      (pNVar8->fields)._Converters_k__BackingField =
           (System_Collections_Generic_IList_JsonConverter__o *)__this;
      il2cpp_runtime_helper_022b4080(&(pNVar8->fields)._Converters_k__BackingField,__this);
      Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(pNVar8,1,(MethodInfo *)0x0);
      Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(pNVar8,1,(MethodInfo *)0x0);
      (((Il2CppClass *)handle.fields.value)->_1).namespaze = (char *)pNVar8;
      il2cpp_runtime_helper_022b4080(&(((Il2CppClass *)handle.fields.value)->_1).namespaze,pNVar8);
      pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ClassDefinition);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_CustomLogic_Editor_CustomLogi);
      pIVar1 = &(((Il2CppClass *)handle.fields.value)->_1).byval_arg;
      (((Il2CppClass *)handle.fields.value)->_1).byval_arg.data = pSVar10;
      il2cpp_runtime_helper_022b4080(pIVar1);
      System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
      pIVar25 = (Il2CppClass *)&(((Il2CppClass *)handle.fields.value)->_1).name;
      ((CustomLogic_Editor_Models_CLType_Fields *)&(((Il2CppClass *)handle.fields.value)->_1).name)->
      _ObsoleteMessage_k__BackingField = (System_String_o *)pIVar15;
      clType = pIVar15;
      il2cpp_runtime_helper_022b4080();
      if (pIVar15 != (Il2CppClass *)0x0) {
        pcVar12 = (pIVar15->_1).namespaze;
        pIVar9 = clType;
        if (0 < (int)pcVar12) {
          uVar23 = 0;
          pMVar21 = extraout_RDX;
          do {
            clType = pIVar9;
            if ((uint)pcVar12 <= uVar23) goto label_0428152b;
            clType = (&(pIVar15->_1).byval_arg.data)[(int)uVar23];
            if (clType == (Il2CppClass *)0x0) goto label_04281526;
            __this_01 = pIVar1->data;
            pIVar9 = (Il2CppClass *)(clType->_1).namespaze;
            pIVar25 = (Il2CppClass *)handle.fields.value;
            value = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertToClassDefinition
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)
                               handle.fields.value,(CustomLogic_Editor_Models_CLType_o *)clType,pMVar21);
            if (__this_01 == (Il2CppClass *)0x0) goto label_04281526;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)pIVar9,(Il2CppObject *)value,MethodInfo_Void_set_Item);
            uVar23 = uVar23 + 1;
            pcVar12 = (pIVar15->_1).namespaze;
            pMVar21 = extraout_RDX_00;
            pIVar25 = __this_01;
          } while ((int)uVar23 < (int)pcVar12);
        }
        uVar23 = (uint)pcVar12;
        if (0 < (int)uVar23) {
          lVar22 = 0;
          clType = pIVar9;
          do {
            if ((uint)pcVar12 <= (uint)lVar22) goto label_0428152b;
            pvVar3 = (&(pIVar15->_1).byval_arg.data)[lVar22];
            if ((pvVar3 == (void *)0x0) || (pIVar25 = pIVar1->data, pIVar25 == (Il2CppClass *)0x0))
            goto label_04281526;
            pIVar9 = *(Il2CppClass **)((long)pvVar3 + 0x18);
            pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar25,
                                 (Il2CppObject *)pIVar9,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
            if ((*(char *)((long)pvVar3 + 0x2a) != '\0') && (*(long *)((long)pvVar3 + 0x40) != 0)) {
              pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
              clType = MethodInfo_List_1_System_String;
              pIVar25 = pIVar9;
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pIVar9,
                         (MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
              lVar4 = MethodInfo_Void_Add;
              if ((*(long *)((long)pvVar3 + 0x40) == 0) || (pIVar9 == (Il2CppClass *)0x0)) goto label_04281526;
              clType = *(Il2CppClass **)(*(long *)((long)pvVar3 + 0x40) + 0x18);
              piVar2 = (int *)((long)&(pIVar9->_1).namespaze + 4);
              *piVar2 = *piVar2 + 1;
              pSVar18 = ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar9->_1).name)->
                        _ObsoleteMessage_k__BackingField;
              if (pSVar18 == (System_String_o *)0x0) goto label_04281526;
              uVar23 = *(uint *)&(pIVar9->_1).namespaze;
              if (uVar23 < *(uint *)&pSVar18[1].klass) {
                *(uint *)&(pIVar9->_1).namespaze = uVar23 + 1;
                pIVar25 = (Il2CppClass *)(&pSVar18[1].monitor + (int)uVar23);
                (&pSVar18[1].monitor)[(int)uVar23] = clType;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIVar25 = pIVar9;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar9,(Il2CppObject *)clType,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              if (pIVar11 == (Il2CppObject *)0x0) goto label_04281526;
              pIVar25 = (Il2CppClass *)(pIVar11 + 3);
              pIVar11[3].klass = pIVar9;
              il2cpp_runtime_helper_022b4080();
            }
            uVar23 = *(uint *)&(pIVar15->_1).namespaze;
            pcVar12 = (char *)(ulong)uVar23;
            lVar22 = lVar22 + 1;
            clType = pIVar9;
          } while ((int)lVar22 < (int)uVar23);
        }
        return uVar23;
      }
    }
  }
label_04281526:
  il2cpp_runtime_helper_022b2c90();
label_0428152b:
  il2cpp_runtime_helper_022b2ca0();
  pMVar21 = extraout_RDX_01;
  __this_02 = (System_String_o **)pIVar25;
  if (g_data_057adc88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClassDefinition);
    __this_02 = (System_String_o **)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc88 = '\x01';
    pMVar21 = extraout_RDX_02;
  }
  pIVar15 = clType;
  pSVar13 = CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ExtractTypeParameters
                      ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)__this_02,
                       (CustomLogic_Editor_Models_CLType_o *)clType,pMVar21);
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    __this_02 = (System_String_o **)&"extension";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc85 = '\x01';
  }
  if (clType != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(clType->_1).byval_arg.bits + 3) == '\0') {
      if ((char)(clType->_1).byval_arg.bits == '\0') {
        puVar14 = &"class";
      }
      else {
        puVar14 = &"extension";
      }
    }
    else {
      puVar14 = &"component";
    }
    pSVar18 = (System_String_o *)*puVar14;
    pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ClassDefinition);
    pIVar15 = (Il2CppClass *)0x0;
    __this_02 = (System_String_o **)pIVar9;
    System_Object___ctor((Il2CppObject *)pIVar9,(MethodInfo *)0x0);
    if (pIVar9 != (Il2CppClass *)0x0) {
      ((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar9->_1).name)->_ObsoleteMessage_k__BackingField =
           pSVar18;
      il2cpp_runtime_helper_022b4080((CustomLogic_Editor_Models_CLType_Fields *)&(pIVar9->_1).name,pSVar18);
      __this_02 = (System_String_o **)&(pIVar9->_1).namespaze;
      (pIVar9->_1).namespaze = (char *)(clType->_1).namespaze;
      il2cpp_runtime_helper_022b4080();
      pvVar3 = (clType->_1).byval_arg.data;
      if (pvVar3 == (void *)0x0) {
        pIVar15 = (Il2CppClass *)0x0;
      }
      else {
        pIVar15 = *(Il2CppClass **)((long)pvVar3 + 0x10);
      }
      if (pIVar25 != (Il2CppClass *)0x0) {
        pIVar15 = (Il2CppClass *)
                  CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__NormalizeDescription
                            ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)__this_02,
                             (System_String_o *)pIVar15,method_00);
        __this_02 = &(pIVar9->_1).byval_arg.data;
        (pIVar9->_1).byval_arg.data = pIVar15;
        il2cpp_runtime_helper_022b4080();
        if (pSVar13 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar24 = (System_Collections_Generic_List_string__o *)0x0;
          if (0 < (pSVar13->fields)._size) {
            pSVar24 = pSVar13;
          }
          *(System_Collections_Generic_List_string__o **)&(pIVar9->_1).byval_arg.bits = pSVar24;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).byval_arg.bits);
          *(System_String_array **)&(pIVar9->_1).this_arg.bits = (System_String_array *)(clType->_1).name;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).this_arg.bits);
          pCVar16 = (CustomLogic_Editor_Models_CLConstructor_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).declaringType,
                               method_01);
          (pIVar9->_1).declaringType = (Il2CppClass *)pCVar16;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).declaringType,pCVar16);
          pCVar17 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (clType->_1).generic_class,method_02);
          (pIVar9->_1).parent = (Il2CppClass *)pCVar17;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).parent,pCVar17);
          pIVar15 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertFields
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (CustomLogic_Editor_Models_CLProperty_array *)(clType->_1).parent,method_03);
          (pIVar9->_1).element_class = pIVar15;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).element_class,pIVar15);
          pIVar15 = (Il2CppClass *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertMethods
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (clType->_1).typeMetadataHandle,method_04);
          (pIVar9->_1).castClass = pIVar15;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).castClass,pIVar15);
          pCVar17 = (CustomLogic_Editor_Models_CLProperty_array *)
                    CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator__ConvertConstructors
                              ((CustomLogic_Editor_CustomLogicVSCExtensionJsonDocsGenerator_o *)pIVar25,
                               (CustomLogic_Editor_Models_CLConstructor_array *)(clType->_1).castClass,
                               method_05);
          (pIVar9->_1).generic_class = pCVar17;
          il2cpp_runtime_helper_022b4080(&(pIVar9->_1).generic_class,pCVar17);
          return (bool_conflict)pIVar9;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar25 = pIVar15;
  if (g_data_057adc83 == '\0') {
    il2cpp_runtime_helper_023445d0(&".json");
    __this_02 = &"vscode-json/";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc83 = '\x01';
  }
  if (pIVar15 != (Il2CppClass *)0x0) {
    pSVar18 = System_String__Concat_3af7150
                        ("vscode-json/",(System_String_o *)(pIVar15->_1).namespaze,".json",
                         (MethodInfo *)0x0);
    return (bool_conflict)pSVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar25;
  if (g_data_057adc84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057adc84 = '\x01';
  }
  if ((pIVar25 != (Il2CppClass *)0x0) &&
     (pSVar10 = (((Il2CppClass *)__this_02)->_1).byval_arg.data,
     pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar10,(Il2CppObject *)(pIVar25->_1).namespaze,MethodInfo_CustomLogicVSCExtensionJsonDocsGenerator_ClassDefinition);
    pNVar8 = (Newtonsoft_Json_JsonSerializerSettings_o *)(((Il2CppClass *)__this_02)->_1).namespaze;
    if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = Newtonsoft_Json_JsonConvert__SerializeObject_3d57b10(pIVar11,1,pNVar8,(MethodInfo *)0x0);
    return (bool_conflict)pSVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar25 = pIVar15;
  if (g_data_057adc85 == '\0') {
    il2cpp_runtime_helper_023445d0(&"class");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"extension");
    g_data_057adc85 = '\x01';
  }
  if (pIVar15 != (Il2CppClass *)0x0) {
    if (*(char *)((long)&(pIVar15->_1).byval_arg.bits + 3) != '\0') {
      return (bool_conflict)"component";
    }
    if (*(char *)&(pIVar15->_1).byval_arg.bits != '\0') {
      return (bool_conflict)"extension";
    }
    return (bool_conflict)"class";
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_NormalizeDescription_b__6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_NormalizeDescription_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"\r\n");
    il2cpp_runtime_helper_023445d0(&"\r");
    g_data_057adc86 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pIVar25,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_04281baf:
    return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pMVar26 = (MethodInfo_2522A10 *)0x3;
  pIVar11 = TypeInfo_string;
  pSVar19 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar27 = "\r\n";
  if (pSVar19 != (System_String_array *)0x0) {
    pMVar5 = pMVar26;
    if ((int)pSVar19->max_length != 0) {
      pIVar11 = (Il2CppObject *)pSVar19->m_Items;
      pSVar19->m_Items[0] = (System_String_o *)"\r\n";
      il2cpp_runtime_helper_022b4080();
      pMVar28 = "\r";
      pMVar5 = pMVar27;
      if (1 < (uint)pSVar19->max_length) {
        pIVar11 = (Il2CppObject *)(pSVar19->m_Items + 1);
        pSVar19->m_Items[1] = (System_String_o *)"\r";
        il2cpp_runtime_helper_022b4080();
        pMVar26 = "\n";
        pMVar5 = pMVar28;
        if (2 < (uint)pSVar19->max_length) {
          pIVar11 = (Il2CppObject *)(pSVar19->m_Items + 2);
          pSVar19->m_Items[2] = (System_String_o *)"\n";
          il2cpp_runtime_helper_022b4080();
          if (pIVar25 != (Il2CppClass *)0x0) {
            pSVar19 = System_String__Split_3afab90((System_String_o *)pIVar25,pSVar19,0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (selector == (System_Func_TSource__TResult__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
              System_Func_object__object____ctor();
              lVar22 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__TResult__o **)(lVar22 + 8) = selector;
              il2cpp_runtime_helper_022b4080(lVar22 + 8,selector);
            }
            source_00 = System_Linq_Enumerable__Select_object__object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar19,selector,
                                   MethodInfo_IEnumerable_1_System_String_Select_String_String);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (predicate == (System_Func_TSource__bool__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
              System_Func_object__bool____ctor();
              lVar22 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_TSource__bool__o **)(lVar22 + 0x10) = predicate;
              il2cpp_runtime_helper_022b4080(lVar22 + 0x10,predicate);
            }
            pIVar11 = (Il2CppObject *)
                      System_Linq_Enumerable__Where_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                                 MethodInfo_IEnumerable_1_System_String_Where_String);
            pMVar26 = MethodInfo_String_ToArray_String;
            pSVar19 = (System_String_array *)
                      System_Linq_Enumerable__ToArray_object_
                                ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar11,MethodInfo_String_ToArray_String);
            if (pSVar19 != (System_String_array *)0x0) {
              if (pSVar19->max_length != 0) {
                pSVar18 = System_String__Join(" ",pSVar19,(MethodInfo *)0x0);
                return (bool_conflict)pSVar18;
              }
              goto label_04281baf;
            }
          }
          goto label_04281bd8;
        }
      }
    }
    pMVar26 = pMVar5;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04281bd8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pIVar11 = (Il2CppObject *)&TypeInfo_List_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc87 = '\x01';
  }
  if (pMVar26 == (MethodInfo_2522A10 *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)pMVar26->parameters;
  if ((source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) &&
     (source[1].monitor != (void *)0x0)) {
    pSVar20 = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
    return (bool_conflict)pSVar20;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
  return (bool_conflict)__this_00;
}



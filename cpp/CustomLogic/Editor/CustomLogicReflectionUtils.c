// Type: CustomLogic.Editor.CustomLogicReflectionUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic.Editor/CustomLogicReflectionUtils.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicType
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType (System_Type_o* type, const MethodInfo* method);
// 0x5b91d30

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType(System_Type_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_07547400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLTypeAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomLogic");
    Il2CppMethodInitialized_07547400 = '\x01';
  }
  if (type == (System_Type_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (System_String_o *)
      (*(type->klass->vtable)._24_unknown.methodPtr)(type,(type->klass->vtable)._24_unknown.method);
  bVar1 = System_String__op_Equality(a,"CustomLogic",(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                      (type,false,
                       (MethodInfo_34BEE20 *)
                       MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLTypeAttribute);
    return bVar1;
  }
  return false;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicProperty
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x5b91db0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty
               (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLPropertyAttribute);
    Il2CppMethodInitialized_07547401 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__34beda0
                    (member,false,
                     (MethodInfo_34BEDA0 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLPropertyAttribute
                    );
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicMethod
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod (System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x5b91df0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod
               (System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLMethodAttribute);
    Il2CppMethodInitialized_07547402 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__34beda0
                    ((System_Reflection_MemberInfo_o *)methodInfo,false,
                     (MethodInfo_34BEDA0 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLMethodAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Type_o* type, const MethodInfo* method);
// 0x5b91e30

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete(System_Type_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_71a5f90
              );
    Il2CppMethodInitialized_07547403 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    (type,false,
                     (MethodInfo_34BEE20 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_71a5f90
                    );
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x5b91e70

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete_5a91e70
               (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
    Il2CppMethodInitialized_07547404 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__34beda0
                    (member,false,
                     (MethodInfo_34BEDA0 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Type_o* type, const MethodInfo* method);
// 0x5b91eb0

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage(System_Type_o *type,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_ObsoleteAttribute_o *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute_71a5f68
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Obsolete");
    Il2CppMethodInitialized_07547405 = '\x01';
  }
  if (Il2CppMethodInitialized_07547403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_71a5f90
              );
    Il2CppMethodInitialized_07547403 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    (type,false,
                     (MethodInfo_34BEE20 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_71a5f90
                    );
  if (bVar1) {
    pSVar2 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
                       (type,false,
                        (MethodInfo_34BECD0 *)
                        MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute_71a5f68
                       );
    if (pSVar2 == (System_ObsoleteAttribute_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = (pSVar2->fields)._message;
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      return value;
    }
    ppSVar3 = &"Obsolete";
  }
  else {
    ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar3;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x5b91f70

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage_5a91f70
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_ObsoleteAttribute_o *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07547406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&"Obsolete");
    Il2CppMethodInitialized_07547406 = '\x01';
  }
  if (Il2CppMethodInitialized_07547404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
    Il2CppMethodInitialized_07547404 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__34beda0
                    (member,false,
                     (MethodInfo_34BEDA0 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
  if (bVar1) {
    pSVar2 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object__34bec00
                       (member,false,
                        (MethodInfo_34BEC00 *)
                        MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute
                       );
    if (pSVar2 == (System_ObsoleteAttribute_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = (pSVar2->fields)._message;
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      return value;
    }
    ppSVar3 = &"Obsolete";
  }
  else {
    ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar3;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_34BEE20* method);
// 0x35bee20

bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
               (System_Type_o *type,bool inherit,MethodInfo_34BEE20 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_34BEE20_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  System_Object_array *pSVar3;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34BEE20_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    pSVar3 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (type,pSVar2,inherit,(type->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar3 != (System_Object_array *)0x0) {
      return (int)pSVar3->max_length != 0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_34BECD0* method);
// 0x35becd0

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
          (System_Type_o *type,bool inherit,MethodInfo_34BECD0 *method)

{
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *obj;
  MethodInfo_34BECD0_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  System_Object_array *pSVar3;
  Il2CppClass *klass;
  Il2CppObject *pIVar4;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34BECD0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    pSVar3 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (type,pSVar2,inherit,(type->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar3 != (System_Object_array *)0x0) {
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = pSVar3->m_Items[0];
      klass = method->rgctx_data->_1_T;
      if (((klass->_2).bitflags1 & 1) == 0) {
        klass = il2cpp_codegen_class_init_checked(klass);
      }
      if (obj == (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
      }
      else {
        pIVar4 = il2cpp_vm_Object_IsInst(obj,klass);
        if (pIVar4 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
        }
      }
      return pIVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_34BEDA0* method);
// 0x35beda0

bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object__34beda0
               (System_Reflection_MemberInfo_o *member,bool inherit,MethodInfo_34BEDA0 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_34BEDA0_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  System_Object_array *pSVar3;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34BEDA0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    pSVar3 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (member,pSVar2,inherit,(member->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar3 != (System_Object_array *)0x0) {
      return (int)pSVar3->max_length != 0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_34BEC00* method);
// 0x35bec00

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object__34bec00
          (System_Reflection_MemberInfo_o *member,bool inherit,MethodInfo_34BEC00 *method)

{
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *obj;
  MethodInfo_34BEC00_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  System_Object_array *pSVar3;
  Il2CppClass *klass;
  Il2CppObject *pIVar4;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34BEC00_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    pSVar3 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (member,pSVar2,inherit,(member->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar3 != (System_Object_array *)0x0) {
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = pSVar3->m_Items[0];
      klass = method->rgctx_data->_1_T;
      if (((klass->_2).bitflags1 & 1) == 0) {
        klass = il2cpp_codegen_class_init_checked(klass);
      }
      if (obj == (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)0x0;
      }
      else {
        pIVar4 = il2cpp_vm_Object_IsInst(obj,klass);
        if (pIVar4 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
        }
      }
      return pIVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsPropertyStatic
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic (System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x5b92030

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic
               (System_Reflection_PropertyInfo_o *propertyInfo,MethodInfo *method)

{
  bool bVar1;
  System_Reflection_MethodBase_o *pSVar2;
  
  if (propertyInfo == (System_Reflection_PropertyInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (System_Reflection_MethodBase_o *)
           (*(propertyInfo->klass->vtable)._24_unknown.methodPtr)
                     (propertyInfo,1,(propertyInfo->klass->vtable)._24_unknown.method);
  if ((pSVar2 != (System_Reflection_MethodBase_o *)0x0) &&
     (bVar1 = System_Reflection_MethodBase__get_IsStatic(pSVar2,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  pSVar2 = (System_Reflection_MethodBase_o *)
           (*(propertyInfo->klass->vtable)._26_unknown.methodPtr)
                     (propertyInfo,1,(propertyInfo->klass->vtable)._26_unknown.method);
  if (pSVar2 == (System_Reflection_MethodBase_o *)0x0) {
    return false;
  }
  bVar1 = System_Reflection_MethodBase__get_IsStatic(pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetDefaultValueAsString
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x5b920a0

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString
          (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    Il2CppMethodInitialized_07547407 = '\x01';
  }
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    bVar1 = (*(parameterInfo->klass->vtable)._14_get_HasDefaultValue.methodPtr)
                      (parameterInfo,(parameterInfo->klass->vtable)._14_get_HasDefaultValue.method);
    if (!bVar1) {
      return g_data_07556758->static_fields->Empty;
    }
    pIVar2 = (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (pIVar2 == (Il2CppObject *)0x0) {
      return "null";
    }
    pSVar3 = (System_String_o *)
             (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if ((pSVar3 != (System_String_o *)0x0) && (pSVar3->klass == g_data_07556758)) {
      pSVar3 = System_String__Concat_5301f10
                         ("\"",pSVar3,"\"",(MethodInfo *)0x0);
      return pSVar3;
    }
    pIVar2 = (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (pIVar2 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar2->klass->vtable[3].methodPtr;
      pSVar3 = (System_String_o *)
               (*vtableDispatch)(pIVar2,pIVar2->klass->vtable[3].method,vtableDispatch);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsVariadicParameter
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x5b921b0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter
               (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547408 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_ParamArrayAttribute);
    Il2CppMethodInitialized_07547408 = '\x01';
  }
  handle = TypeRef_System_ParamArrayAttribute;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (parameterInfo == (System_Reflection_ParameterInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (*(parameterInfo->klass->vtable)._15_IsDefined.methodPtr)
                    (parameterInfo,pSVar2,false,(parameterInfo->klass->vtable)._15_IsDefined.method);
  return bVar1;
}



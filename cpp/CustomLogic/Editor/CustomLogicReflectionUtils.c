// Type: CustomLogic.Editor.CustomLogicReflectionUtils
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicReflectionUtils.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicType
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType (System_Type_o* type, const MethodInfo* method);
// 0x1820fb530

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType(System_Type_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184346a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLTypeAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomLogic");
    Il2CppMethodInitialized_184346a34 = '\x01';
  }
  if (type != (System_Type_o *)0x0) {
    a = (System_String_o *)
        (*(type->klass->vtable)._24_unknown.methodPtr)(type,(type->klass->vtable)._24_unknown.method);
    bVar1 = System_String__op_Equality(a,"CustomLogic",(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                      ((System_Reflection_MemberInfo_o *)type,false,
                       (MethodInfo_66F590 *)
                       MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLTypeAttribute);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicProperty
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x1820fb4f0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty
               (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLPropertyAttribute);
    Il2CppMethodInitialized_184346a35 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    (member,false,
                     (MethodInfo_66F590 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLPropertyAttribute
                    );
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicMethod
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod (System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x1820fb4b0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod
               (System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLMethodAttribute);
    Il2CppMethodInitialized_184346a36 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    ((System_Reflection_MemberInfo_o *)methodInfo,false,
                     (MethodInfo_66F590 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_CLMethodAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Type_o* type, const MethodInfo* method);
// 0x1820fb600

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete(System_Type_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_40c76c8
              );
    Il2CppMethodInitialized_184346a37 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    ((System_Reflection_MemberInfo_o *)type,false,
                     (MethodInfo_66F590 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_40c76c8
                    );
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x1820fb5c0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete_20fb5c0
               (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
    Il2CppMethodInitialized_184346a38 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    (member,false,
                     (MethodInfo_66F590 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Type_o* type, const MethodInfo* method);
// 0x1820fb3f0

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage(System_Type_o *type,MethodInfo *method)

{
  bool bVar1;
  System_ObsoleteAttribute_o *pSVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute_40c7268
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Obsolete");
    Il2CppMethodInitialized_184346a39 = '\x01';
  }
  if (Il2CppMethodInitialized_184346a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_40c76c8
              );
    Il2CppMethodInitialized_184346a37 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    ((System_Reflection_MemberInfo_o *)type,false,
                     (MethodInfo_66F590 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute_40c76c8
                    );
  if (!bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar2 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
                     ((System_Reflection_MemberInfo_o *)type,false,
                      (MethodInfo_66F4C0 *)
                      MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute_40c7268
                     );
  if (pSVar2 != (System_ObsoleteAttribute_o *)0x0) {
    value = (pSVar2->fields)._message;
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      value = "Obsolete";
    }
    return value;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x1820fb330

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage_20fb330
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool bVar1;
  System_ObsoleteAttribute_o *pSVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute);
    il2cpp_codegen_initialize_runtime_metadata(&"Obsolete");
    Il2CppMethodInitialized_184346a3a = '\x01';
  }
  if (Il2CppMethodInitialized_184346a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
    Il2CppMethodInitialized_184346a38 = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
                    (member,false,
                     (MethodInfo_66F590 *)
                     MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_HasAttribute_ObsoleteAttribute);
  if (!bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar2 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
                     (member,false,
                      (MethodInfo_66F4C0 *)
                      MethodInfo_CustomLogic_Editor_CustomLogicReflectionUtils_GetAttribute_ObsoleteAttribute)
  ;
  if (pSVar2 != (System_ObsoleteAttribute_o *)0x0) {
    value = (pSVar2->fields)._message;
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      value = "Obsolete";
    }
    return value;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_66F590* method);
// 0x18066f590

bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
               (System_Reflection_MemberInfo_o *member,bool inherit,MethodInfo_66F590 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar1;
  System_Object_array *pSVar2;
  
  if (method->rgctx_data == (MethodInfo_66F590_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    pSVar2 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (member,pSVar1,inherit,(member->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar2 != (System_Object_array *)0x0) {
      return (int)pSVar2->max_length != 0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_66F4C0* method);
// 0x18066f4c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18066f572: jmp 0x18066f559

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
          (System_Reflection_MemberInfo_o *member,bool inherit,MethodInfo_66F4C0 *method)

{
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *obj;
  System_Type_o *pSVar1;
  System_Object_array *pSVar2;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_66F4C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((member != (System_Reflection_MemberInfo_o *)0x0) &&
     (pSVar2 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                         (member,pSVar1,inherit,(member->klass->vtable)._14_GetCustomAttributes.method),
     pSVar2 != (System_Object_array *)0x0)) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = pSVar2->m_Items[0];
    klass = method->rgctx_data->_1_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (obj == (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else {
      pIVar3 = il2cpp_vm_Object_IsInst(obj,klass);
      if (pIVar3 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
      }
    }
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_66F590* method);
// 0x18066f590

bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_
               (System_Reflection_MemberInfo_o *member,bool inherit,MethodInfo_66F590 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar1;
  System_Object_array *pSVar2;
  
  if (method->rgctx_data == (MethodInfo_66F590_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    pSVar2 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                       (member,pSVar1,inherit,(member->klass->vtable)._14_GetCustomAttributes.method);
    if (pSVar2 != (System_Object_array *)0x0) {
      return (int)pSVar2->max_length != 0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_66F4C0* method);
// 0x18066f4c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18066f572: jmp 0x18066f559

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_
          (System_Reflection_MemberInfo_o *member,bool inherit,MethodInfo_66F4C0 *method)

{
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *obj;
  System_Type_o *pSVar1;
  System_Object_array *pSVar2;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  
  if (method->rgctx_data == (MethodInfo_66F4C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((member != (System_Reflection_MemberInfo_o *)0x0) &&
     (pSVar2 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                         (member,pSVar1,inherit,(member->klass->vtable)._14_GetCustomAttributes.method),
     pSVar2 != (System_Object_array *)0x0)) {
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = pSVar2->m_Items[0];
    klass = method->rgctx_data->_1_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (obj == (Il2CppObject *)0x0) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else {
      pIVar3 = il2cpp_vm_Object_IsInst(obj,klass);
      if (pIVar3 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
      }
    }
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsPropertyStatic
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic (System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x1820fb640

bool
CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic(System_Reflection_PropertyInfo_o* propertyInfo, MethodInfo* method)

{
  bool bVar1;
  System_Reflection_MethodBase_o *pSVar2;
  undefined8 uVar3;
  
  if (propertyInfo == (System_Reflection_PropertyInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar3 = CONCAT71((int7)((ulonglong)method >> 8),1);
  pSVar2 = (System_Reflection_MethodBase_o *)
           (*(propertyInfo->klass->vtable)._24_unknown.methodPtr)
                     (propertyInfo,uVar3,(propertyInfo->klass->vtable)._24_unknown.method);
  if (pSVar2 != (System_Reflection_MethodBase_o *)0x0) {
    uVar3 = 0;
    bVar1 = System_Reflection_MethodBase__get_IsStatic(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
  }
  pSVar2 = (System_Reflection_MethodBase_o *)
           (*(propertyInfo->klass->vtable)._26_unknown.methodPtr)
                     (propertyInfo,CONCAT71((int7)((ulonglong)uVar3 >> 8),1),
                      (propertyInfo->klass->vtable)._26_unknown.method);
  if (pSVar2 != (System_Reflection_MethodBase_o *)0x0) {
    bVar1 = System_Reflection_MethodBase__get_IsStatic(pSVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetDefaultValueAsString
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x1820fb220

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString
          (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_String_o *str1;
  
  if (Il2CppMethodInitialized_184346a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    Il2CppMethodInitialized_184346a3b = '\x01';
  }
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    bVar1 = (*(parameterInfo->klass->vtable)._14_get_HasDefaultValue.methodPtr)
                      (parameterInfo,(parameterInfo->klass->vtable)._14_get_HasDefaultValue.method);
    if (!bVar1) {
      return g_data_184354e50->static_fields->Empty;
    }
    pIVar2 = (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (pIVar2 == (Il2CppObject *)0x0) {
      return "null";
    }
    pSVar3 = (System_String_o *)
             (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (pSVar3 != (System_String_o *)0x0) {
      str1 = (System_String_o *)0x0;
      if ((Il2CppClass *)pSVar3->klass == (Il2CppClass *)g_data_184354e50) {
        str1 = pSVar3;
      }
      if (str1 != (System_String_o *)0x0) {
        pSVar3 = System_String__Concat_1969b70
                           ("\"",str1,"\"",(MethodInfo *)0x0);
        return pSVar3;
      }
    }
    pIVar2 = (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pSVar3 = (System_String_o *)
               (*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsVariadicParameter
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x1820fb6b0

bool CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter
               (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_ParamArrayAttribute);
    Il2CppMethodInitialized_184346a3c = '\x01';
  }
  handle = TypeRef_System_ParamArrayAttribute;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    bVar1 = (*(parameterInfo->klass->vtable)._15_IsDefined.methodPtr)
                      (parameterInfo,pSVar2,false,(parameterInfo->klass->vtable)._15_IsDefined.method);
    return bVar1;
  }
  ThrowNullReferenceException();
}



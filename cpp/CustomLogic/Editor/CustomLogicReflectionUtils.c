// Type: CustomLogic.Editor.CustomLogicReflectionUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.Editor/CustomLogicReflectionUtils.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicType
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType (System_Type_o* type, const MethodInfo* method);
// 0x3f747f0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicType
          (System_Type_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (DAT_05703f0b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
    il2cpp_init_method_metadata(&"CustomLogic");
    DAT_05703f0b = '\x01';
  }
  if (type != (System_Type_o *)0x0) {
    a = (System_String_o *)
        (*(type->klass->vtable)._24_unknown.methodPtr)
                  (type,(type->klass->vtable)._24_unknown.method);
    bVar1 = System_String__op_Equality(a,"CustomLogic",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>
                        (type,0,MethodInfo_Boolean_HasAttribute_CLTypeAttribute);
      return bVar1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicProperty
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x3f74870

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicProperty
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05703f0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_CLPropertyAttribute);
    DAT_05703f0c = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>(member,0,MethodInfo_Boolean_HasAttribute_CLPropertyAttribute)
  ;
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsCustomLogicMethod
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod (System_Reflection_MethodInfo_o* methodInfo, const MethodInfo* method);
// 0x3f748b0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsCustomLogicMethod
          (System_Reflection_MethodInfo_o *methodInfo,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05703f0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_CLMethodAttribute);
    DAT_05703f0d = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>
                    ((System_Reflection_MemberInfo_o *)methodInfo,0,MethodInfo_Boolean_HasAttribute_CLMethodAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Type_o* type, const MethodInfo* method);
// 0x3f748f0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete(System_Type_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05703f0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    DAT_05703f0e = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>(type,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsObsolete
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x3f74930

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsObsolete
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05703f0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    DAT_05703f0f = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>(member,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute)
  ;
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Type_o* type, const MethodInfo* method);
// 0x3f74970

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage
          (System_Type_o *type,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *value;
  
  if (DAT_05703f10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    il2cpp_init_method_metadata(&"Obsolete");
    DAT_05703f10 = '\x01';
  }
  if (DAT_05703f0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    DAT_05703f0e = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>(type,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
  if ((char)bVar1 != '\0') {
    pIVar2 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute<object>
                       (type,0,MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    if (pIVar2 != (Il2CppObject *)0x0) {
      value = pIVar2[1].klass;
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        value = "Obsolete";
      }
      return (System_String_o *)value;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetObsoleteMessage
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage (System_Reflection_MemberInfo_o* member, const MethodInfo* method);
// 0x3f74a30

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetObsoleteMessage
          (System_Reflection_MemberInfo_o *member,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *value;
  
  if (DAT_05703f11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    il2cpp_init_method_metadata(&"Obsolete");
    DAT_05703f11 = '\x01';
  }
  if (DAT_05703f0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_HasAttribute_ObsoleteAttribute);
    DAT_05703f0f = '\x01';
  }
  bVar1 = CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>(member,0,MethodInfo_Boolean_HasAttribute_ObsoleteAttribute)
  ;
  if ((char)bVar1 != '\0') {
    pIVar2 = CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute<object>
                       (member,0,MethodInfo_ObsoleteAttribute_GetAttribute_ObsoleteAttribute);
    if (pIVar2 != (Il2CppObject *)0x0) {
      value = pIVar2[1].klass;
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        value = "Obsolete";
      }
      return (System_String_o *)value;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_24AC6B0* method);
// 0x25ac6b0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>
          (System_Type_o *type,bool_conflict inherit,MethodInfo_24AC6B0 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_24AC6B0_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  long lVar3;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24AC6B0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    lVar3 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (type,pSVar2,(ulong)(inherit & 0xff),
                       (type->klass->vtable)._14_GetCustomAttributes.method);
    if (lVar3 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar3 >> 8),*(int *)(lVar3 + 0x18) != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Type_o* type, bool inherit, const MethodInfo_24AC560* method);
// 0x25ac560

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute<object>
          (System_Type_o *type,bool_conflict inherit,MethodInfo_24AC560 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_24AC560_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24AC560_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    lVar3 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (type,pSVar2,(ulong)(inherit & 0xff),
                       (type->klass->vtable)._14_GetCustomAttributes.method);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      pIVar4 = method->rgctx_data->_1_T;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
      }
      if (lVar3 == 0) {
        pIVar5 = (Il2CppObject *)0x0;
      }
      else {
        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(lVar3,pIVar4);
        if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(lVar3,pIVar4);
        }
      }
      return pIVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$HasAttribute<object>
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_24AC630* method);
// 0x25ac630

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__HasAttribute<object>
          (System_Reflection_MemberInfo_o *member,bool_conflict inherit,MethodInfo_24AC630 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_24AC630_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  long lVar3;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24AC630_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    lVar3 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (member,pSVar2,(ulong)(inherit & 0xff),
                       (member->klass->vtable)._14_GetCustomAttributes.method);
    if (lVar3 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar3 >> 8),*(int *)(lVar3 + 0x18) != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetAttribute<object>
// il2cpp: Il2CppObject* CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute_object_ (System_Reflection_MemberInfo_o* member, bool inherit, const MethodInfo_24AC490* method);
// 0x25ac490

Il2CppObject *
CustomLogic_Editor_CustomLogicReflectionUtils__GetAttribute<object>
          (System_Reflection_MemberInfo_o *member,bool_conflict inherit,MethodInfo_24AC490 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_24AC490_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24AC490_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (member != (System_Reflection_MemberInfo_o *)0x0) {
    lVar3 = (*(member->klass->vtable)._14_GetCustomAttributes.methodPtr)
                      (member,pSVar2,(ulong)(inherit & 0xff),
                       (member->klass->vtable)._14_GetCustomAttributes.method);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      pIVar4 = method->rgctx_data->_1_T;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
      }
      if (lVar3 == 0) {
        pIVar5 = (Il2CppObject *)0x0;
      }
      else {
        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(lVar3,pIVar4);
        if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(lVar3,pIVar4);
        }
      }
      return pIVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsPropertyStatic
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic (System_Reflection_PropertyInfo_o* propertyInfo, const MethodInfo* method);
// 0x3f74af0

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsPropertyStatic
          (System_Reflection_PropertyInfo_o *propertyInfo,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Reflection_MethodBase_o *pSVar2;
  
  if (propertyInfo == (System_Reflection_PropertyInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = (System_Reflection_MethodBase_o *)
           (*(propertyInfo->klass->vtable)._24_unknown.methodPtr)
                     (propertyInfo,1,(propertyInfo->klass->vtable)._24_unknown.method);
  if (pSVar2 != (System_Reflection_MethodBase_o *)0x0) {
    bVar1 = System_Reflection_MethodBase__get_IsStatic(pSVar2,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
    }
  }
  pSVar2 = (System_Reflection_MethodBase_o *)
           (*(propertyInfo->klass->vtable)._26_unknown.methodPtr)
                     (propertyInfo,1,(propertyInfo->klass->vtable)._26_unknown.method);
  if (pSVar2 == (System_Reflection_MethodBase_o *)0x0) {
    return 0;
  }
  bVar1 = System_Reflection_MethodBase__get_IsStatic(pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$GetDefaultValueAsString
// il2cpp: System_String_o* CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x3f74b60

System_String_o *
CustomLogic_Editor_CustomLogicReflectionUtils__GetDefaultValueAsString
          (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  code *vtable_dispatch;
  char cVar1;
  long lVar2;
  System_String_o *pSVar3;
  long *plVar4;
  
  if (DAT_05703f12 == '\0') {
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"\"");
    DAT_05703f12 = '\x01';
  }
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    cVar1 = (*(parameterInfo->klass->vtable)._14_get_HasDefaultValue.methodPtr)
                      (parameterInfo,(parameterInfo->klass->vtable)._14_get_HasDefaultValue.method);
    if (cVar1 == '\0') {
      return DAT_057110b0->static_fields->Empty;
    }
    lVar2 = (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                      (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (lVar2 == 0) {
      return "null";
    }
    pSVar3 = (System_String_o *)
             (*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                       (parameterInfo,(parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if ((pSVar3 != (System_String_o *)0x0) && (pSVar3->klass == DAT_057110b0)) {
      pSVar3 = System_String__Concat("\"",pSVar3,"\"",(MethodInfo *)0x0);
      return pSVar3;
    }
    plVar4 = (long *)(*(parameterInfo->klass->vtable)._13_get_DefaultValue.methodPtr)
                               (parameterInfo,
                                (parameterInfo->klass->vtable)._13_get_DefaultValue.method);
    if (plVar4 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar4 + 0x168);
      pSVar3 = (System_String_o *)
               (*vtable_dispatch)
                         (plVar4,*(undefined8 *)(*plVar4 + 0x170),vtable_dispatch);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.Editor.CustomLogicReflectionUtils$$IsVariadicParameter
// il2cpp: bool CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter (System_Reflection_ParameterInfo_o* parameterInfo, const MethodInfo* method);
// 0x3f74c70

bool_conflict
CustomLogic_Editor_CustomLogicReflectionUtils__IsVariadicParameter
          (System_Reflection_ParameterInfo_o *parameterInfo,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *pSVar2;
  
  if (DAT_05703f13 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ParamArrayAttribute);
    DAT_05703f13 = '\x01';
  }
  handle.fields.value = TypeRef_ParamArrayAttribute.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (parameterInfo != (System_Reflection_ParameterInfo_o *)0x0) {
    vtable_dispatch = (parameterInfo->klass->vtable)._15_IsDefined.methodPtr;
    bVar1 = (*vtable_dispatch)
                      (parameterInfo,pSVar2,0,(parameterInfo->klass->vtable)._15_IsDefined.method,
                       vtable_dispatch);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



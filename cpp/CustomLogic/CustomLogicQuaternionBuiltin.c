// Type: CustomLogic.CustomLogicQuaternionBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicQuaternionBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicQuaternionBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicQuaternionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed9ad0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843451d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843451d9 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    if (Il2CppMethodInitialized_1843451d0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_1843451d0 = '\x01';
    }
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar7 = (pUVar1->identityQuaternion).fields.y;
    fVar8 = (pUVar1->identityQuaternion).fields.z;
    fVar9 = (pUVar1->identityQuaternion).fields.w;
    (pCVar5->fields).Value.fields.x = (pUVar1->identityQuaternion).fields.x;
    (pCVar5->fields).Value.fields.y = fVar7;
    (pCVar5->fields).Value.fields.z = fVar8;
    (pCVar5->fields).Value.fields.w = fVar9;
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar5,(MethodInfo *)0x0);
    return pCVar5;
  }
  if ((int)args->max_length == 4) {
    if ((int)args->max_length != 0) {
      obj = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      if (1 < (uint)args->max_length) {
        fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (args->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)args->max_length) {
          fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (args->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (3 < (uint)args->max_length) {
            fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               (args->m_Items[3],
                                (MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            pCVar5 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
            if (Il2CppMethodInitialized_1843451d1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
              Il2CppMethodInitialized_1843451d1 = '\x01';
            }
            if (Il2CppMethodInitialized_18433de5b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_18433de5b = '\x01';
            }
            pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
            fVar2 = (pUVar1->identityQuaternion).fields.y;
            fVar3 = (pUVar1->identityQuaternion).fields.z;
            fVar4 = (pUVar1->identityQuaternion).fields.w;
            (pCVar5->fields).Value.fields.x = (pUVar1->identityQuaternion).fields.x;
            (pCVar5->fields).Value.fields.y = fVar2;
            (pCVar5->fields).Value.fields.z = fVar3;
            (pCVar5->fields).Value.fields.w = fVar4;
            if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)pCVar5,(MethodInfo *)0x0);
            (pCVar5->fields).Value.fields.x = fVar7;
            (pCVar5->fields).Value.fields.y = fVar8;
            (pCVar5->fields).Value.fields.z = fVar9;
            (pCVar5->fields).Value.fields.w = fVar10;
            return pCVar5;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar6 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicQuaternionBuiltin constructor found that takes ");
  pSVar6 = System_String__Concat_1969b70(str0,pSVar6,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar6,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3da0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843451f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee03a0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_o *pUVar3;
  float t;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                         );
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                           );
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
             (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
            local_38.x = (pCVar2->fields).Value.fields.x;
            local_38.y = (pCVar2->fields).Value.fields.y;
            local_38.z = (pCVar2->fields).Value.fields.z;
            local_38.w = (pCVar2->fields).Value.fields.w;
            local_28.x = (pCVar1->fields).Value.fields.x;
            local_28.y = (pCVar1->fields).Value.fields.y;
            local_28.z = (pCVar1->fields).Value.fields.z;
            local_28.w = (pCVar1->fields).Value.fields.w;
            pUVar3 = UnityEngine_Quaternion__Internal_Lerp
                               (&local_18,(UnityEngine_Quaternion_o *)&local_28,
                                (UnityEngine_Quaternion_o *)&local_38,t,(MethodInfo *)0x0);
            local_28.x = (pUVar3->fields).x;
            local_28.y = (pUVar3->fields).y;
            local_28.z = (pUVar3->fields).z;
            local_28.w = (pUVar3->fields).w;
            pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                               ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181ee04b8;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee04b8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee05f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_o *pUVar3;
  float t;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                         );
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                           );
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
             (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
            local_38.x = (pCVar2->fields).Value.fields.x;
            local_38.y = (pCVar2->fields).Value.fields.y;
            local_38.z = (pCVar2->fields).Value.fields.z;
            local_38.w = (pCVar2->fields).Value.fields.w;
            local_28.x = (pCVar1->fields).Value.fields.x;
            local_28.y = (pCVar1->fields).Value.fields.y;
            local_28.z = (pCVar1->fields).Value.fields.z;
            local_28.w = (pCVar1->fields).Value.fields.w;
            pUVar3 = UnityEngine_Quaternion__Internal_LerpUnclamped
                               (&local_18,(UnityEngine_Quaternion_o *)&local_28,
                                (UnityEngine_Quaternion_o *)&local_38,t,(MethodInfo *)0x0);
            local_28.x = (pUVar3->fields).x;
            local_28.y = (pUVar3->fields).y;
            local_28.z = (pUVar3->fields).z;
            local_28.w = (pUVar3->fields).w;
            pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                               ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181ee0708;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee0708:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1d60

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_o *pUVar3;
  float t;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                         );
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                           );
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
             (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
            local_38.x = (pCVar2->fields).Value.fields.x;
            local_38.y = (pCVar2->fields).Value.fields.y;
            local_38.z = (pCVar2->fields).Value.fields.z;
            local_38.w = (pCVar2->fields).Value.fields.w;
            local_28.x = (pCVar1->fields).Value.fields.x;
            local_28.y = (pCVar1->fields).Value.fields.y;
            local_28.z = (pCVar1->fields).Value.fields.z;
            local_28.w = (pCVar1->fields).Value.fields.w;
            pUVar3 = UnityEngine_Quaternion__Internal_Slerp
                               (&local_18,(UnityEngine_Quaternion_o *)&local_28,
                                (UnityEngine_Quaternion_o *)&local_38,t,(MethodInfo *)0x0);
            local_28.x = (pUVar3->fields).x;
            local_28.y = (pUVar3->fields).y;
            local_28.z = (pUVar3->fields).z;
            local_28.w = (pUVar3->fields).w;
            pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                               ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181ee1e78;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee1e78:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1e90

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_o *pUVar3;
  float t;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451fa = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                         );
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                           );
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
             (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
            local_38.x = (pCVar2->fields).Value.fields.x;
            local_38.y = (pCVar2->fields).Value.fields.y;
            local_38.z = (pCVar2->fields).Value.fields.z;
            local_38.w = (pCVar2->fields).Value.fields.w;
            local_28.x = (pCVar1->fields).Value.fields.x;
            local_28.y = (pCVar1->fields).Value.fields.y;
            local_28.z = (pCVar1->fields).Value.fields.z;
            local_28.w = (pCVar1->fields).Value.fields.w;
            pUVar3 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                               (&local_18,(UnityEngine_Quaternion_o *)&local_28,
                                (UnityEngine_Quaternion_o *)&local_38,t,(MethodInfo *)0x0);
            local_28.x = (pUVar3->fields).x;
            local_28.y = (pUVar3->fields).y;
            local_28.z = (pUVar3->fields).z;
            local_28.w = (pUVar3->fields).w;
            pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                               ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181ee1fa8;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee1fa8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromEuler>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf640

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Quaternion_o *pUVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar5;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451fb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar1 = (pCVar3->fields).Value.fields.x;
      uVar2 = (pCVar3->fields).Value.fields.y;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (pCVar3->fields).Value.fields.z * 0.017453292;
      pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar4->fields).x;
      local_28.y = (pUVar4->fields).y;
      local_28.z = (pUVar4->fields).z;
      local_28.w = (pUVar4->fields).w;
      pCVar5 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                         ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar5;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookRotation>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0720

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  UnityEngine_Quaternion_o *pUVar14;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843451fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451fc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181ee0935:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                        );
    pCVar13 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181ee0935;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                          );
    }
    if (Il2CppMethodInitialized_1843451d3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_1843451d3 = '\x01';
    }
    if (pCVar12 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      if (pCVar13 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        local_38.z = (pCVar12->fields).Value.fields.z;
        local_38.x = (pCVar12->fields).Value.fields.x;
        local_38.y = (pCVar12->fields).Value.fields.y;
        local_48.x = 0.0;
        local_48.y = 0.0;
        local_48.z = 0.0;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_48.x = (pUVar3->upVector).fields.x;
        local_48.y = (pUVar3->upVector).fields.y;
        local_48.z = (pUVar3->upVector).fields.z;
      }
      else {
        local_48.x = (pCVar13->fields).Value.fields.x;
        local_48.y = (pCVar13->fields).Value.fields.y;
        local_48.z = (pCVar13->fields).Value.fields.z;
        local_38.x = (pCVar12->fields).Value.fields.x;
        local_38.y = (pCVar12->fields).Value.fields.y;
        local_38.z = (pCVar12->fields).Value.fields.z;
      }
      pUVar14 = UnityEngine_Quaternion__Internal_LookRotation
                          (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar8 = (pUVar14->fields).x;
      fVar9 = (pUVar14->fields).y;
      fVar10 = (pUVar14->fields).z;
      fVar11 = (pUVar14->fields).w;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      if (Il2CppMethodInitialized_1843451d2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843451d2 = '\x01';
      }
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
      fVar5 = (pUVar4->identityQuaternion).fields.y;
      fVar6 = (pUVar4->identityQuaternion).fields.z;
      fVar7 = (pUVar4->identityQuaternion).fields.w;
      (__this_00->fields).Value.fields.x = (pUVar4->identityQuaternion).fields.x;
      (__this_00->fields).Value.fields.y = fVar5;
      (__this_00->fields).Value.fields.z = fVar6;
      (__this_00->fields).Value.fields.w = fVar7;
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).Value.fields.x = fVar8;
      (__this_00->fields).Value.fields.y = fVar9;
      (__this_00->fields).Value.fields.z = fVar10;
      (__this_00->fields).Value.fields.w = fVar11;
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromToRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf710

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Quaternion_o *pUVar3;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar4;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451fd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181edf7fe:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        local_38.x = (pCVar2->fields).Value.fields.x;
        local_38.y = (pCVar2->fields).Value.fields.y;
        local_38.z = (pCVar2->fields).Value.fields.z;
        local_28.x = (pCVar1->fields).Value.fields.x;
        local_28.y = (pCVar1->fields).Value.fields.y;
        local_28.z = (pCVar1->fields).Value.fields.z;
        pUVar3 = UnityEngine_Quaternion__Internal_FromToRotation
                           (&local_18,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                            (MethodInfo *)0x0);
        local_28.x = (pUVar3->fields).x;
        local_28.y = (pUVar3->fields).y;
        local_28.z = (pUVar3->fields).z;
        local_28.w = (pUVar3->fields).w;
        pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                           ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar4;
      }
      goto label_181edf7fe;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Inverse>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edfca0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_o *pUVar2;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451fe = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if (pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      local_28.w = (pCVar1->fields).Value.fields.w;
      pUVar2 = UnityEngine_Quaternion__Internal_Inverse
                         (&local_18,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      local_28.w = (pUVar2->fields).w;
      pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                         ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee16f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Quaternion_o local_58;
  UnityEngine_Quaternion_o local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843451ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451ff = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee18c9:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
label_181ee18cf:
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((uint)__a->max_length < 2) ||
     (pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin),
     (uint)__a->max_length < 3)) goto label_181ee18cf;
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__a->m_Items[2],
                     (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((pCVar1 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (pCVar2 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) goto label_181ee18c9;
  local_58.fields.x = (pCVar2->fields).Value.fields.x;
  local_58.fields.y = (pCVar2->fields).Value.fields.y;
  local_58.fields.z = (pCVar2->fields).Value.fields.z;
  local_58.fields.w = (pCVar2->fields).Value.fields.w;
  local_48.fields.x = (pCVar1->fields).Value.fields.x;
  local_48.fields.y = (pCVar1->fields).Value.fields.y;
  local_48.fields.z = (pCVar1->fields).Value.fields.z;
  local_48.fields.w = (pCVar1->fields).Value.fields.w;
  fVar5 = ABS(local_58.fields.y * local_48.fields.y + local_58.fields.x * local_48.fields.x +
              local_58.fields.z * local_48.fields.z + local_58.fields.w * local_48.fields.w);
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.999999) {
    fVar5 = (float)il2cpp_runtime_helper_1804f6310(fVar5);
    fVar5 = (fVar5 + fVar5) * 57.29578;
    if (fVar5 != 0.0) {
      fVar4 = fVar4 / fVar5;
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      pUVar3 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                         (local_38,&local_48,&local_58,fVar5,(MethodInfo *)0x0);
      local_48.fields.x = (pUVar3->fields).x;
      local_48.fields.y = (pUVar3->fields).y;
      local_48.fields.z = (pUVar3->fields).z;
      local_48.fields.w = (pUVar3->fields).w;
      goto label_181ee1894;
    }
  }
  local_48.fields.x = (pCVar2->fields).Value.fields.x;
  local_48.fields.y = (pCVar2->fields).Value.fields.y;
  local_48.fields.z = (pCVar2->fields).Value.fields.z;
  local_48.fields.w = (pCVar2->fields).Value.fields.w;
label_181ee1894:
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00(&local_48,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__AngleAxis>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ede730

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Quaternion_o *pUVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  float angle;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184345200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345200 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ede81b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    angle = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (1 < (uint)__a->max_length) {
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        local_38.x = (pCVar1->fields).Value.fields.x;
        local_38.y = (pCVar1->fields).Value.fields.y;
        local_38.z = (pCVar1->fields).Value.fields.z;
        pUVar2 = UnityEngine_Quaternion__Internal_AngleAxis
                           (local_28,angle,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        local_38.x = (pUVar2->fields).x;
        local_38.y = (pUVar2->fields).y;
        local_38.z = (pUVar2->fields).z;
        local_38.w = (pUVar2->fields).w;
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                           ((UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar3;
      }
      goto label_181ede81b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edea40

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184345201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345201 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181edeb67:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar3,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if (1 < (uint)__a->max_length) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
         (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
        fVar4 = ABS((pCVar2->fields).Value.fields.y * (pCVar1->fields).Value.fields.y +
                    (pCVar1->fields).Value.fields.x * (pCVar2->fields).Value.fields.x +
                    (pCVar2->fields).Value.fields.z * (pCVar1->fields).Value.fields.z +
                    (pCVar2->fields).Value.fields.w * (pCVar1->fields).Value.fields.w);
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        if (fVar4 <= 0.999999) {
          fVar4 = (float)il2cpp_runtime_helper_1804f6310(fVar4);
          local_res18[0] = (fVar4 + fVar4) * 57.29578;
        }
        else {
          local_res18[0] = 0.0;
        }
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar3;
      }
      goto label_181edeb67;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee27a0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843451d4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_1843451d4 = '\x01';
    }
    fVar1 = (__c->fields).Value.fields.x;
    fVar2 = (__c->fields).Value.fields.y;
    fVar3 = (__c->fields).Value.fields.z;
    fVar4 = (__c->fields).Value.fields.w;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    if (Il2CppMethodInitialized_1843451d2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_1843451d2 = '\x01';
    }
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar6 = (pUVar5->identityQuaternion).fields.y;
    fVar7 = (pUVar5->identityQuaternion).fields.z;
    fVar8 = (pUVar5->identityQuaternion).fields.w;
    (__this_00->fields).Value.fields.x = (pUVar5->identityQuaternion).fields.x;
    (__this_00->fields).Value.fields.y = fVar6;
    (__this_00->fields).Value.fields.z = fVar7;
    (__this_00->fields).Value.fields.w = fVar8;
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0)
    ;
    (__this_00->fields).Value.fields.x = fVar1;
    (__this_00->fields).Value.fields.y = fVar2;
    (__this_00->fields).Value.fields.z = fVar3;
    (__this_00->fields).Value.fields.w = fVar4;
    return (Il2CppObject *)__this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee31e0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicQuaternionBuiltin____Mul__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2c30

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_181ee2d4d:
    ThrowNullReferenceException();
  }
  if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto label_181ee2d4d;
  pIVar3 = __a->m_Items[1];
  pIVar2 = __a->m_Items[0];
  if (Il2CppMethodInitialized_1843451d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843451d6 = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
        ((pIVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) && (pIVar2 != (Il2CppObject *)0x0)
       ) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
         ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        local_res18[0] =
             0.999999 <
             *(float *)((longlong)&pIVar3[3].klass + 4) * *(float *)((longlong)&pIVar2[3].klass + 4) +
             *(float *)&pIVar2[3].klass * *(float *)&pIVar3[3].klass +
             *(float *)&pIVar3[3].monitor * *(float *)&pIVar2[3].monitor +
             *(float *)((longlong)&pIVar3[3].monitor + 4) * *(float *)((longlong)&pIVar2[3].monitor + 4);
        goto label_181ee2d29;
      }
    }
  }
  local_res18[0] = false;
label_181ee2d29:
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee30a0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  uint uVar4;
  Il2CppObject *pIVar5;
  uint local_res10 [2];
  
  if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    uVar1 = System_Single__GetHashCode((float *)&(__c->fields).Value,(MethodInfo *)0x0);
    iVar2 = System_Single__GetHashCode(&(__c->fields).Value.fields.y,(MethodInfo *)0x0);
    iVar3 = System_Single__GetHashCode(&(__c->fields).Value.fields.z,(MethodInfo *)0x0);
    uVar4 = System_Single__GetHashCode(&(__c->fields).Value.fields.w,(MethodInfo *)0x0);
    local_res10[0] = (int)(uVar4 ^ iVar3 >> 1) >> 1 ^ iVar2 * 4 ^ uVar1;
    pIVar5 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar5;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ebd770

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843451da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FromToRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Slerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Inverse");
    il2cpp_codegen_initialize_runtime_metadata(&"W");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Euler");
    il2cpp_codegen_initialize_runtime_metadata(&"FromEuler");
    il2cpp_codegen_initialize_runtime_metadata(&"LookRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"SlerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Identity");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"AngleAxis");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Angle");
    Il2CppMethodInitialized_1843451da = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x91ba4e13) {
    if (uVar3 < 0x39c493b9) {
      if (uVar3 < 0x18c37b42) {
        if (uVar3 == 0x18535612) {
          bVar2 = System_String__op_Equality(name,"Euler",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ebef0f;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843451df == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____setter_6_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
            Il2CppMethodInitialized_1843451df = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____getter_6_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____setter_6_1
          ;
          goto label_181ebdd55;
        }
        if (uVar3 != 0x18c37b41) goto label_181ebef0f;
        bVar2 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451ed == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Mul___b__20_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451ed = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__20_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Mul___b__20_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__20_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__20_0;
      }
      else if (uVar3 == 0x27b48c82) {
        bVar2 = System_String__op_Equality(name,"FromEuler",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451e5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromEuler_b__12_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451e5 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__12_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromEuler_b__12_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__12_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__12_0;
      }
      else if (uVar3 == 0x39907617) {
        bVar2 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451e3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Slerp_b__10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451e3 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__10_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Slerp_b__10_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__10_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__10_0;
      }
      else {
        if (uVar3 != 0x39c493b8) goto label_181ebef0f;
        bVar2 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451eb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Angle_b__18_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451eb = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__18_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Angle_b__18_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__18_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__18_0;
      }
    }
    else if (uVar3 < 0x549f4d11) {
      if (uVar3 == 0x3c0ea91a) {
        bVar2 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451e9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__RotateTowards_b__16_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451e9 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__16_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__RotateTowards_b__16_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__16_0;
      }
      else {
        if (uVar3 != 0x549f4d10) goto label_181ebef0f;
        bVar2 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451ec == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Copy___b__19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451ec = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__19_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Copy___b__19_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__19_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__19_0;
      }
    }
    else if (uVar3 == 0x6a4c91d6) {
      bVar2 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451e4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__11
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451e4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__11_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__11
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__11_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__11_0;
    }
    else if (uVar3 == 0x792a6491) {
      bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451ef == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Hash___b__22_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451ef = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__22_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Hash___b__22_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__22_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__22_0;
    }
    else {
      if (uVar3 != 0x91ba4e12) goto label_181ebef0f;
      bVar2 = System_String__op_Equality(name,"FromToRotation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451e7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromToRotation_b__14
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451e7 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__14_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromToRotation_b__14
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__14_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__14_0;
    }
  }
  else if (uVar3 < 0xd20c0cd7) {
    if (uVar3 < 0x9e956089) {
      if (uVar3 == 0x91efe6d7) {
        bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451ee == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Eq___b__21_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451ee = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__21_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Eq___b__21_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__21_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress =
             &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__21_0;
      }
      else {
        if (uVar3 != 0x9e956088) {
label_181ebef0f:
          pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicQuaternionBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
          pMVar5 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
        }
        bVar2 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451e1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451e1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__8_0
        ;
      }
    }
    else if (uVar3 == 0xbcf8f25c) {
      bVar2 = System_String__op_Equality(name,"LookRotation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451e6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LookRotation_b__13_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451e6 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__13_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LookRotation_b__13_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__13_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__13_0;
    }
    else {
      if (uVar3 != 0xc95e1923) {
        if (uVar3 != 0xd20c0cd6) goto label_181ebef0f;
        bVar2 = System_String__op_Equality(name,"W",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451de == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____getter_5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____setter_5_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
          Il2CppMethodInitialized_1843451de = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____getter_5_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____setter_5_1
        ;
        goto label_181ebdd55;
      }
      bVar2 = System_String__op_Equality(name,"Inverse",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Inverse_b__15_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451e8 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__15_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Inverse_b__15_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__15_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__15_0;
    }
  }
  else {
    if (uVar3 < 0xdf0c214e) {
      if (uVar3 == 0xdc0c1c94) {
        bVar2 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451dc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
          Il2CppMethodInitialized_1843451dc = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
        ;
      }
      else if (uVar3 == 0xdd0c1e27) {
        bVar2 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451db == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____setter_2_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
          Il2CppMethodInitialized_1843451db = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____setter_2_1
        ;
      }
      else {
        if (uVar3 != 0xdf0c214d) goto label_181ebef0f;
        bVar2 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebef0f;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451dd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
          Il2CppMethodInitialized_1843451dd = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
        ;
      }
label_181ebdd55:
      System_Action_object__object____ctor
                (__this_02,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
label_181ebdd77:
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)__this_02,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
    if (uVar3 == 0xdfc1d0bb) {
      bVar2 = System_String__op_Equality(name,"Identity",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451e0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
        Il2CppMethodInitialized_1843451e0 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181ebdd77;
    }
    if (uVar3 == 0xf4248f7b) {
      bVar2 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451e2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__9_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451e2 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__9_0;
    }
    else {
      if (uVar3 != 0xf6586339) goto label_181ebef0f;
      bVar2 = System_String__op_Equality(name,"AngleAxis",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebef0f;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843451ea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__AngleAxis_b__17_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451ea = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__17_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebeedb;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__AngleAxis_b__17_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__17_0 =
           (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__17_0;
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_181ebeedb:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x181ecba00

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843451db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_1843451db = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x181ecbcd0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843451dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_1843451dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x181ecbdc0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843451dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_1843451dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__W
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W (const MethodInfo* method);
// 0x181ecb910

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843451de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_1843451de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Euler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler (const MethodInfo* method);
// 0x181ecac40

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843451df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____setter_6_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_1843451df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____setter_6_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Identity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity (const MethodInfo* method);
// 0x181ecae20

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_1843451e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x181ec6b20

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x181ec66a0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x181ec83e0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Slerp_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Slerp_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__10_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x181ec82c0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__11_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromEuler
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler (const MethodInfo* method);
// 0x181ec5920

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromEuler_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromEuler_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__12_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LookRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation (const MethodInfo* method);
// 0x181ec6c40

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LookRotation_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LookRotation_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__13_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromToRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation (const MethodInfo* method);
// 0x181ec5a40

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromToRotation_b__14
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromToRotation_b__14
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__14_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Inverse
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse (const MethodInfo* method);
// 0x181ec6100

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Inverse_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Inverse_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__15_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x181ec7c00

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__RotateTowards_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__RotateTowards_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__16_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__AngleAxis
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis (const MethodInfo* method);
// 0x181ec4830

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__AngleAxis_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__AngleAxis_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__17_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x181ec4a70

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Angle_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Angle_b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__18_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x181ec9170

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Copy___b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Copy___b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__19_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x181eca170

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Mul___b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Mul___b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__20_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181ec9720

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Eq___b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451ee = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Eq___b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__21_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181ec9e00

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Hash___b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451ef = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Hash___b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9__22_0,__this)
    ;
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181ecc400

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843451f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FromToRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Slerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Inverse");
    il2cpp_codegen_initialize_runtime_metadata(&"W");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Euler");
    il2cpp_codegen_initialize_runtime_metadata(&"FromEuler");
    il2cpp_codegen_initialize_runtime_metadata(&"LookRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"SlerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Identity");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"AngleAxis");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Angle");
    Il2CppMethodInitialized_1843451f0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"X",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Y",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Z",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"W",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Euler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Identity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpUnclamped",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SlerpUnclamped",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FromEuler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FromToRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Inverse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateTowards",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AngleAxis",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Angle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Mul__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x181ec42d0

Il2CppObject*
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0(CustomLogic_CustomLogicQuaternionBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    local_res8[0] = (__i->fields)._value.fields.x;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4300

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_1843451f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.x = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3a70

Il2CppObject*
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0(CustomLogic_CustomLogicQuaternionBuiltin_o* __i, MethodInfo* method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    local_res8[0] = (__i->fields)._value.fields.y;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4480

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_1843451f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.y = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x181ec4500

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields).Value.fields.z;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4530

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_1843451f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.z = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x181ec4220

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields).Value.fields.w;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4250

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_1843451f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.w = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3af0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(local_28,&(__i->fields).Value,(MethodInfo *)0x0);
    uVar1 = (pUVar6->fields).x;
    uVar2 = (pUVar6->fields).y;
    local_38.x = (float)uVar1 * 57.29578;
    local_38.y = (float)uVar2 * 57.29578;
    local_38.z = (pUVar6->fields).z * 57.29578;
    pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                       (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).x;
    fVar5 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar4;
    (__this->fields).Value.fields.y = fVar5;
    (__this->fields).Value.fields.z = fVar3;
    return (Il2CppObject *)__this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec3bf0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843451f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451f5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (pCVar6->fields).Value.fields.x;
    uVar2 = (pCVar6->fields).Value.fields.y;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (pCVar6->fields).Value.fields.z * 0.017453292;
    pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    fVar3 = (pUVar7->fields).y;
    fVar4 = (pUVar7->fields).z;
    fVar5 = (pUVar7->fields).w;
    (__i->fields).Value.fields.x = (pUVar7->fields).x;
    (__i->fields).Value.fields.y = fVar3;
    (__i->fields).Value.fields.z = fVar4;
    (__i->fields).Value.fields.w = fVar5;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Identity>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3d70

Il2CppObject*
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0(CustomLogic_CustomLogicQuaternionBuiltin_o* __i, MethodInfo* method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  local_18.x = (pUVar1->identityQuaternion).fields.x;
  local_18.y = (pUVar1->identityQuaternion).fields.y;
  local_18.z = (pUVar1->identityQuaternion).fields.z;
  local_18.w = (pUVar1->identityQuaternion).fields.w;
  pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                     ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2ae0

void CustomLogic_CustomLogicQuaternionBuiltin___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843451d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843451d0 = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar2 = (pUVar1->identityQuaternion).fields.y;
  fVar3 = (pUVar1->identityQuaternion).fields.z;
  fVar4 = (pUVar1->identityQuaternion).fields.w;
  (__this->fields).Value.fields.x = (pUVar1->identityQuaternion).fields.x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float x, float y, float z, float w, const MethodInfo* method);
// 0x181ed2bf0

void CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2bf0
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float x,float y,float z,float w,
               MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843451d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843451d1 = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar2 = (pUVar1->identityQuaternion).fields.y;
  fVar3 = (pUVar1->identityQuaternion).fields.z;
  fVar4 = (pUVar1->identityQuaternion).fields.w;
  (__this->fields).Value.fields.x = (pUVar1->identityQuaternion).fields.x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  (__this->fields).Value.fields.w = w;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
// 0x181ed2b60

void CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,UnityEngine_Quaternion_o *value,
               MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843451d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843451d2 = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar2 = (pUVar1->identityQuaternion).fields.y;
  fVar3 = (pUVar1->identityQuaternion).fields.z;
  fVar4 = (pUVar1->identityQuaternion).fields.w;
  (__this->fields).Value.fields.x = (pUVar1->identityQuaternion).fields.x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  fVar2 = (value->fields).y;
  fVar3 = (value->fields).z;
  fVar4 = (value->fields).w;
  (__this->fields).Value.fields.x = (value->fields).x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_X
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x180584c90

float
CustomLogic_CustomLogicQuaternionBuiltin__get_X(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._time_k__BackingField;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_X
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x180584cb0

void
CustomLogic_CustomLogicQuaternionBuiltin__set_X(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_MeanLine = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Y
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x1816ef890

float
CustomLogic_CustomLogicQuaternionBuiltin__get_Y(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields).m_FlexibleWidth;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Y
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1816ef940

void
CustomLogic_CustomLogicQuaternionBuiltin__set_Y(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, MethodInfo* method)

{
  *(float *)&(__this->fields).field_0x24 = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Z
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x180585020

float
CustomLogic_CustomLogicQuaternionBuiltin__get_Z(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Resistance;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Z
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181ed2f30

void
CustomLogic_CustomLogicQuaternionBuiltin__set_Z(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_Scale = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_W
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2dd0

float
CustomLogic_CustomLogicQuaternionBuiltin__get_W(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields).m_ScrollSensitivity;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_W
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181ed2f20

void
CustomLogic_CustomLogicQuaternionBuiltin__set_W(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_ScrollSensitivity = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Euler
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2cf0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Euler
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(local_28,&(__this->fields).Value,(MethodInfo *)0x0);
  uVar1 = (pUVar6->fields).x;
  uVar2 = (pUVar6->fields).y;
  local_38.x = (float)uVar1 * 57.29578;
  local_38.y = (float)uVar2 * 57.29578;
  local_38.z = (pUVar6->fields).z * 57.29578;
  pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                     (local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  fVar4 = (pUVar6->fields).x;
  fVar5 = (pUVar6->fields).y;
  fVar3 = (pUVar6->fields).z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = fVar4;
  (__this_00->fields).Value.fields.y = fVar5;
  (__this_00->fields).Value.fields.z = fVar3;
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Euler
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181ed2ec0

void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (value->fields).Value.fields.x;
    uVar2 = (value->fields).Value.fields.y;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (value->fields).Value.fields.z * 0.017453292;
    pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    fVar3 = (pUVar6->fields).y;
    fVar4 = (pUVar6->fields).z;
    fVar5 = (pUVar6->fields).w;
    (__this->fields).Value.fields.x = (pUVar6->fields).x;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar4;
    (__this->fields).Value.fields.w = fVar5;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Identity
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Identity (const MethodInfo* method);
// 0x181ec3d70

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Identity(MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  local_18.x = (pUVar1->identityQuaternion).fields.x;
  local_18.y = (pUVar1->identityQuaternion).fields.y;
  local_18.z = (pUVar1->identityQuaternion).fields.z;
  local_18.w = (pUVar1->identityQuaternion).fields.w;
  pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                     ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Lerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x181ed1fe0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Lerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    local_38.x = (b->fields).Value.fields.x;
    local_38.y = (b->fields).Value.fields.y;
    local_38.z = (b->fields).Value.fields.z;
    local_38.w = (b->fields).Value.fields.w;
    local_28.x = (a->fields).Value.fields.x;
    local_28.y = (a->fields).Value.fields.y;
    local_28.z = (a->fields).Value.fields.z;
    local_28.w = (a->fields).Value.fields.w;
    pUVar1 = UnityEngine_Quaternion__Internal_Lerp
                       (&local_18,(UnityEngine_Quaternion_o *)&local_28,(UnityEngine_Quaternion_o *)&local_38,
                        t,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x181ed1f80

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    local_38.x = (b->fields).Value.fields.x;
    local_38.y = (b->fields).Value.fields.y;
    local_38.z = (b->fields).Value.fields.z;
    local_38.w = (b->fields).Value.fields.w;
    local_28.x = (a->fields).Value.fields.x;
    local_28.y = (a->fields).Value.fields.y;
    local_28.z = (a->fields).Value.fields.z;
    local_28.w = (a->fields).Value.fields.w;
    pUVar1 = UnityEngine_Quaternion__Internal_LerpUnclamped
                       (&local_18,(UnityEngine_Quaternion_o *)&local_28,(UnityEngine_Quaternion_o *)&local_38,
                        t,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Slerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Slerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x181ed2330

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Slerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    local_38.x = (b->fields).Value.fields.x;
    local_38.y = (b->fields).Value.fields.y;
    local_38.z = (b->fields).Value.fields.z;
    local_38.w = (b->fields).Value.fields.w;
    local_28.x = (a->fields).Value.fields.x;
    local_28.y = (a->fields).Value.fields.y;
    local_28.z = (a->fields).Value.fields.z;
    local_28.w = (a->fields).Value.fields.w;
    pUVar1 = UnityEngine_Quaternion__Internal_Slerp
                       (&local_18,(UnityEngine_Quaternion_o *)&local_28,(UnityEngine_Quaternion_o *)&local_38,
                        t,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x181ed22d0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    local_38.x = (b->fields).Value.fields.x;
    local_38.y = (b->fields).Value.fields.y;
    local_38.z = (b->fields).Value.fields.z;
    local_38.w = (b->fields).Value.fields.w;
    local_28.x = (a->fields).Value.fields.x;
    local_28.y = (a->fields).Value.fields.y;
    local_28.z = (a->fields).Value.fields.z;
    local_28.w = (a->fields).Value.fields.w;
    pUVar1 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                       (&local_18,(UnityEngine_Quaternion_o *)&local_28,(UnityEngine_Quaternion_o *)&local_38,
                        t,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromEuler
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromEuler (CustomLogic_CustomLogicVector3Builtin_o* euler, const MethodInfo* method);
// 0x181ed1e60

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromEuler
          (CustomLogic_CustomLogicVector3Builtin_o *euler,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Quaternion_o *pUVar3;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar4;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (euler != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (euler->fields).Value.fields.x;
    uVar2 = (euler->fields).Value.fields.y;
    local_28.y = (float)uVar2 * 0.017453292;
    local_28.x = (float)uVar1 * 0.017453292;
    local_28.z = (euler->fields).Value.fields.z * 0.017453292;
    pUVar3 = UnityEngine_Quaternion__Internal_FromEulerRad
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar3->fields).x;
    local_28.y = (pUVar3->fields).y;
    local_28.z = (pUVar3->fields).z;
    local_28.w = (pUVar3->fields).w;
    pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar4;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LookRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LookRotation (CustomLogic_CustomLogicVector3Builtin_o* forward, CustomLogic_CustomLogicVector3Builtin_o* upwards, const MethodInfo* method);
// 0x181ed2040

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LookRotation
          (CustomLogic_CustomLogicVector3Builtin_o *forward,CustomLogic_CustomLogicVector3Builtin_o *upwards,
          MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_o *pUVar10;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843451d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843451d3 = '\x01';
  }
  if (forward != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    if (upwards == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_38.z = (forward->fields).Value.fields.z;
      local_38.x = (forward->fields).Value.fields.x;
      local_38.y = (forward->fields).Value.fields.y;
      local_48.x = 0.0;
      local_48.y = 0.0;
      local_48.z = 0.0;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_48.x = (pUVar1->upVector).fields.x;
      local_48.y = (pUVar1->upVector).fields.y;
      local_48.z = (pUVar1->upVector).fields.z;
    }
    else {
      local_48.x = (upwards->fields).Value.fields.x;
      local_48.y = (upwards->fields).Value.fields.y;
      local_48.z = (upwards->fields).Value.fields.z;
      local_38.x = (forward->fields).Value.fields.x;
      local_38.y = (forward->fields).Value.fields.y;
      local_38.z = (forward->fields).Value.fields.z;
    }
    pUVar10 = UnityEngine_Quaternion__Internal_LookRotation
                        (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                         (MethodInfo *)0x0);
    fVar6 = (pUVar10->fields).x;
    fVar7 = (pUVar10->fields).y;
    fVar8 = (pUVar10->fields).z;
    fVar9 = (pUVar10->fields).w;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    if (Il2CppMethodInitialized_1843451d2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_1843451d2 = '\x01';
    }
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar3 = (pUVar2->identityQuaternion).fields.y;
    fVar4 = (pUVar2->identityQuaternion).fields.z;
    fVar5 = (pUVar2->identityQuaternion).fields.w;
    (__this->fields).Value.fields.x = (pUVar2->identityQuaternion).fields.x;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar4;
    (__this->fields).Value.fields.w = fVar5;
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar6;
    (__this->fields).Value.fields.y = fVar7;
    (__this->fields).Value.fields.z = fVar8;
    (__this->fields).Value.fields.w = fVar9;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromToRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed1ec0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_38.x = (b->fields).Value.fields.x;
    local_38.y = (b->fields).Value.fields.y;
    local_38.z = (b->fields).Value.fields.z;
    local_28.x = (a->fields).Value.fields.x;
    local_28.y = (a->fields).Value.fields.y;
    local_28.z = (a->fields).Value.fields.z;
    pUVar1 = UnityEngine_Quaternion__Internal_FromToRotation
                       (&local_18,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                        (MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Inverse
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Inverse (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x181ed1f30

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Inverse
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (q != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    local_28.x = (q->fields).Value.fields.x;
    local_28.y = (q->fields).Value.fields.y;
    local_28.z = (q->fields).Value.fields.z;
    local_28.w = (q->fields).Value.fields.w;
    pUVar1 = UnityEngine_Quaternion__Internal_Inverse
                       (&local_18,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards (CustomLogic_CustomLogicQuaternionBuiltin_o* from, CustomLogic_CustomLogicQuaternionBuiltin_o* to, float maxDegreesDelta, const MethodInfo* method);
// 0x181ed21b0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards
          (CustomLogic_CustomLogicQuaternionBuiltin_o *from,CustomLogic_CustomLogicQuaternionBuiltin_o *to,
          float maxDegreesDelta,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  float fVar3;
  float t;
  UnityEngine_Quaternion_o local_58;
  UnityEngine_Quaternion_o local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  if ((from == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_58.fields.x = (to->fields).Value.fields.x;
  local_58.fields.y = (to->fields).Value.fields.y;
  local_58.fields.z = (to->fields).Value.fields.z;
  local_58.fields.w = (to->fields).Value.fields.w;
  local_48.fields.x = (from->fields).Value.fields.x;
  local_48.fields.y = (from->fields).Value.fields.y;
  local_48.fields.z = (from->fields).Value.fields.z;
  local_48.fields.w = (from->fields).Value.fields.w;
  fVar3 = ABS(local_58.fields.y * local_48.fields.y + local_58.fields.x * local_48.fields.x +
              local_58.fields.z * local_48.fields.z + local_58.fields.w * local_48.fields.w);
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.999999) {
    fVar3 = (float)il2cpp_runtime_helper_1804f6310(fVar3);
    fVar3 = (fVar3 + fVar3) * 57.29578;
    if (fVar3 != 0.0) {
      fVar3 = maxDegreesDelta / fVar3;
      t = 1.0;
      if (fVar3 <= 1.0) {
        t = fVar3;
      }
      pUVar1 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                         (local_38,&local_48,&local_58,t,(MethodInfo *)0x0);
      local_48.fields.x = (pUVar1->fields).x;
      local_48.fields.y = (pUVar1->fields).y;
      local_48.fields.z = (pUVar1->fields).z;
      local_48.fields.w = (pUVar1->fields).w;
      goto label_181ed229b;
    }
  }
  local_48.fields.x = (to->fields).Value.fields.x;
  local_48.fields.y = (to->fields).Value.fields.y;
  local_48.fields.z = (to->fields).Value.fields.z;
  local_48.fields.w = (to->fields).Value.fields.w;
label_181ed229b:
  pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00(&local_48,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$AngleAxis
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis (float angle, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x181ed1d80

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis
          (float angle,CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_28.x = (axis->fields).Value.fields.x;
    local_28.y = (axis->fields).Value.fields.y;
    local_28.z = (axis->fields).Value.fields.z;
    pUVar1 = UnityEngine_Quaternion__Internal_AngleAxis
                       (&local_18,angle,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    local_28.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Angle
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__Angle (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, const MethodInfo* method);
// 0x181ed1dd0

float CustomLogic_CustomLogicQuaternionBuiltin__Angle
                (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,
                MethodInfo *method)

{
  float fVar1;
  
  if ((a == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = ABS((b->fields).Value.fields.y * (a->fields).Value.fields.y +
              (b->fields).Value.fields.x * (a->fields).Value.fields.x +
              (b->fields).Value.fields.z * (a->fields).Value.fields.z +
              (b->fields).Value.fields.w * (a->fields).Value.fields.w);
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (0.999999 < fVar1) {
    return 0.0;
  }
  fVar1 = (float)il2cpp_runtime_helper_1804f6310(fVar1);
  return (fVar1 + fVar1) * 57.29578;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__ToString (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2390

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__ToString
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_180ac9ee0(&(__this->fields).Value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Copy__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2400

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Copy__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843451d4 = '\x01';
  }
  fVar1 = (__this->fields).Value.fields.x;
  fVar2 = (__this->fields).Value.fields.y;
  fVar3 = (__this->fields).Value.fields.z;
  fVar4 = (__this->fields).Value.fields.w;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_1843451d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843451d2 = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar5 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar6 = (pUVar5->identityQuaternion).fields.y;
  fVar7 = (pUVar5->identityQuaternion).fields.z;
  fVar8 = (pUVar5->identityQuaternion).fields.w;
  (__this_00->fields).Value.fields.x = (pUVar5->identityQuaternion).fields.x;
  (__this_00->fields).Value.fields.y = fVar6;
  (__this_00->fields).Value.fields.z = fVar7;
  (__this_00->fields).Value.fields.w = fVar8;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = fVar1;
  (__this_00->fields).Value.fields.y = fVar2;
  (__this_00->fields).Value.fields.z = fVar3;
  (__this_00->fields).Value.fields.w = fVar4;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Add__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed23b0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Add__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Add);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Sub__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed2a90

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Sub__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Sub);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mul__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed26f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mul__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  Il2CppClass *pIVar10;
  UnityEngine_Quaternion_StaticFields *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Vector3_o *pUVar15;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  Il2CppClass *local_a8;
  float local_a0;
  UnityEngine_Vector3_o local_98;
  Il2CppClass *local_88;
  void *pvStack_80;
  
  if (Il2CppMethodInitialized_1843451d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843451d5 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar9 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if (((bVar9 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar9 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) && (other != (Il2CppObject *)0x0))
    {
      pIVar10 = other->klass;
      bVar9 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if (((pIVar10->_2).typeHierarchyDepth < bVar9) ||
         ((pIVar10->_2).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        bVar9 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
        if (((pIVar10->_2).typeHierarchyDepth < bVar9) ||
           ((pIVar10->_2).typeHierarchy[(ulonglong)bVar9 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_181ed2a4c;
        local_a8 = other[3].klass;
        local_a0 = *(float *)&other[3].monitor;
        local_88 = self[3].klass;
        pvStack_80 = self[3].monitor;
        pUVar15 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                            (&local_98,(UnityEngine_Quaternion_o *)&local_88,
                             (UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
        fVar2 = (pUVar15->fields).x;
        fVar3 = (pUVar15->fields).y;
        fVar1 = (pUVar15->fields).z;
        __this_00 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_184345279 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345279 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x = fVar2;
        (__this_00->fields).Value.fields.y = fVar3;
        (__this_00->fields).Value.fields.z = fVar1;
      }
      else {
        fVar1 = *(float *)&other[3].klass;
        fVar2 = *(float *)((longlong)&other[3].monitor + 4);
        fVar3 = *(float *)&self[3].klass;
        fVar4 = *(float *)((longlong)&self[3].monitor + 4);
        fVar5 = *(float *)&other[3].monitor;
        fVar6 = *(float *)((longlong)&self[3].klass + 4);
        fVar7 = *(float *)((longlong)&other[3].klass + 4);
        fVar8 = *(float *)&self[3].monitor;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
        if (Il2CppMethodInitialized_1843451d2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_1843451d2 = '\x01';
        }
        if (Il2CppMethodInitialized_18433de5b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_18433de5b = '\x01';
        }
        pUVar11 = TypeInfo_UnityEngine_Quaternion->static_fields;
        fVar12 = (pUVar11->identityQuaternion).fields.y;
        fVar13 = (pUVar11->identityQuaternion).fields.z;
        fVar14 = (pUVar11->identityQuaternion).fields.w;
        (__this_00->fields).Value.fields.x = (pUVar11->identityQuaternion).fields.x;
        (__this_00->fields).Value.fields.y = fVar12;
        (__this_00->fields).Value.fields.z = fVar13;
        (__this_00->fields).Value.fields.w = fVar14;
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x = (fVar1 * fVar4 + fVar2 * fVar3 + fVar5 * fVar6) - fVar7 * fVar8;
        (__this_00->fields).Value.fields.y = (fVar2 * fVar6 + fVar7 * fVar4 + fVar1 * fVar8) - fVar5 * fVar3;
        (__this_00->fields).Value.fields.z = (fVar2 * fVar8 + fVar5 * fVar4 + fVar7 * fVar3) - fVar1 * fVar6;
        (__this_00->fields).Value.fields.w = ((fVar2 * fVar4 - fVar1 * fVar3) - fVar7 * fVar6) - fVar5 * fVar8
        ;
      }
      return (Il2CppObject *)__this_00;
    }
  }
label_181ed2a4c:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Mul);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Div__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed2510

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Div__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Div);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin____Eq__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed2560

bool CustomLogic_CustomLogicQuaternionBuiltin____Eq__
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_1843451d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843451d6 = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
        ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) && (self != (Il2CppObject *)0x0))
    {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
         ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        return 0.999999 <
               *(float *)((longlong)&other[3].klass + 4) * *(float *)((longlong)&self[3].klass + 4) +
               *(float *)&other[3].klass * *(float *)&self[3].klass +
               *(float *)&other[3].monitor * *(float *)&self[3].monitor +
               *(float *)((longlong)&other[3].monitor + 4) * *(float *)((longlong)&self[3].monitor + 4);
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2650

int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__
                  (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  uint uVar4;
  
  uVar1 = System_Single__GetHashCode((float *)&(__this->fields).Value,(MethodInfo *)0x0);
  iVar2 = System_Single__GetHashCode(&(__this->fields).Value.fields.y,(MethodInfo *)0x0);
  iVar3 = System_Single__GetHashCode(&(__this->fields).Value.fields.z,(MethodInfo *)0x0);
  uVar4 = System_Single__GetHashCode(&(__this->fields).Value.fields.w,(MethodInfo *)0x0);
  return (int)(uVar4 ^ iVar3 >> 1) >> 1 ^ iVar2 * 4 ^ uVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mod__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed26b0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mod__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Mod);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x181ed2de0

UnityEngine_Quaternion_o *
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
          (UnityEngine_Quaternion_o *__return_storage_ptr__,CustomLogic_CustomLogicQuaternionBuiltin_o *q,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (q != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    fVar1 = (q->fields).Value.fields.y;
    fVar2 = (q->fields).Value.fields.z;
    fVar3 = (q->fields).Value.fields.w;
    (__return_storage_ptr__->fields).x = (q->fields).Value.fields.x;
    (__return_storage_ptr__->fields).y = fVar1;
    (__return_storage_ptr__->fields).z = fVar2;
    (__return_storage_ptr__->fields).w = fVar3;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (UnityEngine_Quaternion_o q, const MethodInfo* method);
// 0x181ed2e00

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00(UnityEngine_Quaternion_o *q,MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843451d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843451d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_1843451d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843451d2 = '\x01';
  }
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar2 = (pUVar1->identityQuaternion).fields.y;
  fVar3 = (pUVar1->identityQuaternion).fields.z;
  fVar4 = (pUVar1->identityQuaternion).fields.w;
  (__this->fields).Value.fields.x = (pUVar1->identityQuaternion).fields.x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  fVar2 = (q->fields).y;
  fVar3 = (q->fields).z;
  fVar4 = (q->fields).w;
  (__this->fields).Value.fields.x = (q->fields).x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x181ed2cc0

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843451d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quaternion");
    Il2CppMethodInitialized_1843451d8 = '\x01';
  }
  return "Quaternion";
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicQuaternionBuiltin_o* __this, MethodInfo* method)

{
  return true;
}



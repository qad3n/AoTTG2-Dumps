// Type: CustomLogic.CustomLogicQuaternionBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicQuaternionBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicQuaternionBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicQuaternionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59b5c80

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
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b72 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    if (Il2CppMethodInitialized_07545b69 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_07545b69 = '\x01';
    }
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
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
  if ((int)args->max_length != 4) {
    NullCheck(args);
    local_1c = (int32_t)args->max_length;
    pSVar6 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicQuaternionBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar6 = System_String__Concat_5301f10(str0,pSVar6,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this,pSVar6,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  obj = args->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((((args->max_length & 0xfffffffe) == 0) ||
      (fVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (args->m_Items[1],
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float),
      (uint)args->max_length < 3)) ||
     (fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (args->m_Items[2],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float),
     (args->max_length & 0xfffffffc) == 0)) {
    ThrowIndexOutOfRangeException();
  }
  fVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (args->m_Items[3],
                      (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_07545b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6a = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar5,(MethodInfo *)0x0);
  (pCVar5->fields).Value.fields.x = fVar7;
  (pCVar5->fields).Value.fields.y = fVar8;
  (pCVar5->fields).Value.fields.z = fVar9;
  (pCVar5->fields).Value.fields.w = fVar10;
  return pCVar5;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59b8670

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545b8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b8f = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields->__9)
  ;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59b86e0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b86f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields local_38;
  Il2CppMethodPointer local_28;
  Il2CppMethodPointer pIStack_20;
  
  if (Il2CppMethodInitialized_07545b90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b90 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b87e5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
           (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
          local_28 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields;
          pIStack_20 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields.z;
          local_38.x = (pCVar2->fields).Value.fields.x;
          local_38.y = (pCVar2->fields).Value.fields.y;
          local_38.z = (pCVar2->fields).Value.fields.z;
          local_38.w = (pCVar2->fields).Value.fields.w;
          method_00 = (MethodInfo *)&local_28;
          q = UnityEngine_Quaternion__Internal_Lerp
                        ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&local_38,t,
                         (MethodInfo *)0x0);
          pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
          return (Il2CppObject *)pCVar1;
        }
        goto label_059b87e5;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b87f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields UStack_38;
  Il2CppMethodPointer pIStack_28;
  Il2CppMethodPointer pIStack_20;
  
  if (Il2CppMethodInitialized_07545b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b91 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b88e5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
           (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
          pIStack_28 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields;
          pIStack_20 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields.z;
          UStack_38.x = (pCVar2->fields).Value.fields.x;
          UStack_38.y = (pCVar2->fields).Value.fields.y;
          UStack_38.z = (pCVar2->fields).Value.fields.z;
          UStack_38.w = (pCVar2->fields).Value.fields.w;
          method_00 = (MethodInfo *)&pIStack_28;
          q = UnityEngine_Quaternion__Internal_LerpUnclamped
                        ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_38,t,
                         (MethodInfo *)0x0);
          pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
          return (Il2CppObject *)pCVar1;
        }
        goto label_059b88e5;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b88f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields UStack_38;
  Il2CppMethodPointer pIStack_28;
  Il2CppMethodPointer pIStack_20;
  
  if (Il2CppMethodInitialized_07545b92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b92 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b89e5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
           (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
          pIStack_28 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields;
          pIStack_20 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields.z;
          UStack_38.x = (pCVar2->fields).Value.fields.x;
          UStack_38.y = (pCVar2->fields).Value.fields.y;
          UStack_38.z = (pCVar2->fields).Value.fields.z;
          UStack_38.w = (pCVar2->fields).Value.fields.w;
          method_00 = (MethodInfo *)&pIStack_28;
          q = UnityEngine_Quaternion__Internal_Slerp
                        ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_38,t,
                         (MethodInfo *)0x0);
          pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
          return (Il2CppObject *)pCVar1;
        }
        goto label_059b89e5;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b89f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields UStack_38;
  Il2CppMethodPointer pIStack_28;
  Il2CppMethodPointer pIStack_20;
  
  if (Il2CppMethodInitialized_07545b93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b93 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b8ae5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
           (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
          pIStack_28 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields;
          pIStack_20 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields.z;
          UStack_38.x = (pCVar2->fields).Value.fields.x;
          UStack_38.y = (pCVar2->fields).Value.fields.y;
          UStack_38.z = (pCVar2->fields).Value.fields.z;
          UStack_38.w = (pCVar2->fields).Value.fields.w;
          method_00 = (MethodInfo *)&pIStack_28;
          q = UnityEngine_Quaternion__Internal_SlerpUnclamped
                        ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_38,t,
                         (MethodInfo *)0x0);
          pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
          return (Il2CppObject *)pCVar1;
        }
        goto label_059b8ae5;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromEuler>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b8af0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar4;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_07545b94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b94 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    method_00 = (MethodInfo *)&local_18;
    if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar1 = (pCVar3->fields).Value.fields.x;
      uVar2 = (pCVar3->fields).Value.fields.y;
      local_18.fields._0_8_ = CONCAT44((float)uVar2 * 0.017453292,(float)uVar1 * 0.017453292);
      local_18.fields.z = (pCVar3->fields).Value.fields.z * 0.017453292;
      q = UnityEngine_Quaternion__Internal_FromEulerRad(&local_18,(MethodInfo *)0x0);
      pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
      return (Il2CppObject *)pCVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookRotation>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b8ba0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *forward;
  CustomLogic_CustomLogicVector3Builtin_o *upwards;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545b95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b95 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  forward = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
  ;
  if ((int)__a->max_length < 2) {
    upwards = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    method_00 = extraout_RDX;
  }
  else {
    pIVar1 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    upwards = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                        );
    method_00 = extraout_RDX_00;
  }
  pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__LookRotation(forward,upwards,method_00);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromToRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b8c60

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Vector3_Fields UStack_38;
  Il2CppMethodPointer pIStack_28;
  float fStack_20;
  
  if (Il2CppMethodInitialized_07545b96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b96 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b8d42:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        fStack_20 = (pCVar1->fields).Value.fields.z;
        pIStack_28 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields;
        UStack_38.x = (pCVar2->fields).Value.fields.x;
        UStack_38.y = (pCVar2->fields).Value.fields.y;
        UStack_38.z = (pCVar2->fields).Value.fields.z;
        method_00 = (MethodInfo *)&pIStack_28;
        q = UnityEngine_Quaternion__Internal_FromToRotation
                      ((UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&UStack_38,
                       (MethodInfo *)0x0);
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
        return (Il2CppObject *)pCVar3;
      }
      goto label_059b8d42;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Inverse>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b8d50

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_07545b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b97 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    method_00 = (MethodInfo *)local_18;
    if (pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      local_18._0_8_ = *(undefined8 *)&(pCVar1->fields).Value.fields;
      local_18._8_8_ = *(undefined8 *)&(pCVar1->fields).Value.fields.z;
      q = UnityEngine_Quaternion__Internal_Inverse((UnityEngine_Quaternion_o *)local_18,(MethodInfo *)0x0);
      pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b8df0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  Il2CppObject *obj;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar9;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar10;
  MethodInfo *method_00;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Quaternion_Fields UStack_40;
  Il2CppMethodPointer pIStack_30;
  Il2CppMethodPointer pIStack_28;
  
  if (Il2CppMethodInitialized_07545b98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b98 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b8f9f:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin)
      ;
      if (2 < (uint)__a->max_length) {
        method_00 = (MethodInfo *)__a->m_Items[2];
        fVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           ((Il2CppObject *)method_00,
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
        ;
        if ((pCVar9 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
           (pCVar10 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
          uVar1 = (pCVar9->fields).Value.fields.x;
          uVar5 = (pCVar9->fields).Value.fields.y;
          uVar2 = (pCVar9->fields).Value.fields.z;
          uVar6 = (pCVar9->fields).Value.fields.w;
          fVar3 = (pCVar10->fields).Value.fields.x;
          fVar7 = (pCVar10->fields).Value.fields.y;
          fVar4 = (pCVar10->fields).Value.fields.z;
          fVar8 = (pCVar10->fields).Value.fields.w;
          pIStack_30 = *(Il2CppMethodPointer *)&(pCVar9->fields).Value.fields;
          pIStack_28 = *(Il2CppMethodPointer *)&(pCVar9->fields).Value.fields.z;
          UStack_40.x = (pCVar10->fields).Value.fields.x;
          UStack_40.y = (pCVar10->fields).Value.fields.y;
          UStack_40.z = (pCVar10->fields).Value.fields.z;
          UStack_40.w = (pCVar10->fields).Value.fields.w;
          fVar12 = ABS((float)uVar6 * fVar8 +
                       (float)uVar5 * fVar7 + (float)uVar1 * fVar3 + (float)uVar2 * fVar4);
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
          if (fVar12 <= 0.999999) {
            fVar12 = acosf(fVar12);
            fVar12 = (fVar12 + fVar12) * 57.29578;
            if ((fVar12 != 0.0) || (NAN(fVar12))) {
              fVar3 = 1.0;
              if (fVar11 / fVar12 <= 1.0) {
                fVar3 = fVar11 / fVar12;
              }
              method_00 = (MethodInfo *)&pIStack_30;
              UVar13 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                                 ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_40
                                  ,fVar3,(MethodInfo *)0x0);
              fVar4 = UVar13.fields.z;
              fVar8 = UVar13.fields.w;
              fVar3 = UVar13.fields.x;
              fVar7 = UVar13.fields.y;
            }
          }
          UVar13.fields.y = fVar7;
          UVar13.fields.x = fVar3;
          UVar13.fields.w = fVar8;
          UVar13.fields.z = fVar4;
          pCVar9 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(UVar13,method_00);
          return (Il2CppObject *)pCVar9;
        }
        goto label_059b8f9f;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__AngleAxis>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b8fb0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  float angle;
  UnityEngine_Quaternion_o q;
  Il2CppMethodPointer pIStack_20;
  float fStack_18;
  
  if (Il2CppMethodInitialized_07545b99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b99 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b908b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    angle = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        pIStack_20 = *(Il2CppMethodPointer *)&(pCVar1->fields).Value.fields;
        fStack_18 = (pCVar1->fields).Value.fields.z;
        method_00 = (MethodInfo *)&pIStack_20;
        q = UnityEngine_Quaternion__Internal_AngleAxis
                      (angle,(UnityEngine_Vector3_o *)method_00,(MethodInfo *)0x0);
        pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
        return (Il2CppObject *)pCVar2;
      }
      goto label_059b908b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b90a0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar9;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar10;
  Il2CppObject *pIVar11;
  float fVar12;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07545b9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b9a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b91ca:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar11 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar11,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin)
      ;
      if ((pCVar9 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
         (pCVar10 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
        uVar1 = (pCVar9->fields).Value.fields.x;
        uVar5 = (pCVar9->fields).Value.fields.y;
        uVar2 = (pCVar9->fields).Value.fields.z;
        uVar6 = (pCVar9->fields).Value.fields.w;
        uVar3 = (pCVar10->fields).Value.fields.x;
        uVar7 = (pCVar10->fields).Value.fields.y;
        uVar4 = (pCVar10->fields).Value.fields.z;
        uVar8 = (pCVar10->fields).Value.fields.w;
        fVar12 = ABS((float)uVar8 * (float)uVar6 +
                     (float)uVar7 * (float)uVar5 + (float)uVar3 * (float)uVar1 + (float)uVar4 * (float)uVar2);
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
        fStack_1c = 0.0;
        if (fVar12 <= 0.999999) {
          fVar12 = acosf(fVar12);
          fStack_1c = (fVar12 + fVar12) * 57.29578;
        }
        pIVar11 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_1c);
        return pIVar11;
      }
      goto label_059b91ca;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b91e0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  float local_18;
  float fStack_14;
  
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b6d = '\x01';
  }
  uVar1 = (__c->fields).Value.fields.x;
  uVar3 = (__c->fields).Value.fields.y;
  uVar2 = (__c->fields).Value.fields.z;
  uVar4 = (__c->fields).Value.fields.w;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_07545b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6b = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
  (__this_00->fields).Value.fields.x = (float)uVar1;
  (__this_00->fields).Value.fields.y = (float)uVar3;
  (__this_00->fields).Value.fields.z = (float)uVar2;
  (__this_00->fields).Value.fields.w = (float)uVar4;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b92c0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicQuaternionBuiltin____Mul__
                         ((CustomLogic_CustomLogicQuaternionBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1]
                          ,method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b92f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
label_059b93f6:
    ThrowNullReferenceException();
  }
  iVar2 = (int)__a->max_length;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto label_059b93f6;
  pIVar4 = __a->m_Items[0];
  pIVar5 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b6f = '\x01';
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (pIVar5->klass->_2).typeHierarchyDepth) {
      bVar3 = false;
      if ((pIVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin) {
        pIVar5 = (Il2CppObject *)0x0;
      }
      if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) goto label_059b9396;
      if ((bVar1 <= (pIVar4->klass->_2).typeHierarchyDepth) &&
         ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        bVar3 = 0.999999 <
                (float)((ulong)pIVar5[3].monitor >> 0x20) * (float)((ulong)pIVar4[3].monitor >> 0x20) +
                (float)((ulong)pIVar5[3].klass >> 0x20) * (float)((ulong)pIVar4[3].klass >> 0x20) +
                SUB84(pIVar5[3].klass,0) * SUB84(pIVar4[3].klass,0) +
                SUB84(pIVar5[3].monitor,0) * SUB84(pIVar4[3].monitor,0);
        goto label_059b9396;
      }
    }
  }
  bVar3 = false;
label_059b9396:
  uStack_18 = CONCAT17(bVar3,(undefined7)uStack_18);
  pIVar4 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
  return pIVar4;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b9400

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Single__GetHashCode((float *)&(__c->fields).Value,(MethodInfo *)0x0);
  System_Single__GetHashCode(&(__c->fields).Value.fields.y,(MethodInfo *)0x0);
  System_Single__GetHashCode(&(__c->fields).Value.fields.z,(MethodInfo *)0x0);
  System_Single__GetHashCode(&(__c->fields).Value.fields.w,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
  return pIVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59b5f50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545b73 == '\0') {
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
    Il2CppMethodInitialized_07545b73 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x91ba4e13) {
    if (uVar2 < 0x39c493b9) {
      if (uVar2 < 0x18c37b42) {
        if (uVar2 == 0x18535612) {
          bVar1 = System_String__op_Equality(name,"Euler",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x18c37b41) {
          bVar1 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x27b48c82) {
        bVar1 = System_String__op_Equality(name,"FromEuler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x39907617) {
        bVar1 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x39c493b8) {
        bVar1 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x549f4d11) {
      if (uVar2 == 0x3c0ea91a) {
        bVar1 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x549f4d10) {
        bVar1 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x91ba4e12) {
      bVar1 = System_String__op_Equality(name,"FromToRotation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6a4c91d6) {
      bVar1 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x792a6491) {
      bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd20c0cd7) {
    if (uVar2 < 0x9e956089) {
      if (uVar2 == 0x91efe6d7) {
        bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9e956088) {
        bVar1 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xbcf8f25c) {
      bVar1 = System_String__op_Equality(name,"LookRotation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc95e1923) {
      bVar1 = System_String__op_Equality(name,"Inverse",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd20c0cd6) {
      bVar1 = System_String__op_Equality(name,"W",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xdf0c214e) {
    if (uVar2 == 0xdc0c1c94) {
      bVar1 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdd0c1e27) {
      bVar1 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdf0c214d) {
      bVar1 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xdfc1d0bb) {
    bVar1 = System_String__op_Equality(name,"Identity",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf4248f7b) {
    bVar1 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf6586339) {
    bVar1 = System_String__op_Equality(name,"AngleAxis",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicQuaternionBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x59b6750

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545b74 == '\0') {
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
    Il2CppMethodInitialized_07545b74 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x59b6830

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545b75 == '\0') {
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
    Il2CppMethodInitialized_07545b75 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x59b6910

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545b76 == '\0') {
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
    Il2CppMethodInitialized_07545b76 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__W
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W (const MethodInfo* method);
// 0x59b69f0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545b77 == '\0') {
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
    Il2CppMethodInitialized_07545b77 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Euler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler (const MethodInfo* method);
// 0x59b6ad0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  System_Action_CustomLogicQuaternionBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545b78 == '\0') {
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
    Il2CppMethodInitialized_07545b78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicQuaternionBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____setter_6_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_01;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Identity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity (const MethodInfo* method);
// 0x59b6bb0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity(MethodInfo *method)

{
  System_Func_CustomLogicQuaternionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
    Il2CppMethodInitialized_07545b79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x59b6c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b6c85: jmp 0x59b6cf5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b7a == '\0') {
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
    Il2CppMethodInitialized_07545b7a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x59b6d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b6dc5: jmp 0x59b6e35

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b7b == '\0') {
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
    Il2CppMethodInitialized_07545b7b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x59b6ed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b6f05: jmp 0x59b6f75

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b7c == '\0') {
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
    Il2CppMethodInitialized_07545b7c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Slerp_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x59b7010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7045: jmp 0x59b70b5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b7d == '\0') {
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
    Il2CppMethodInitialized_07545b7d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromEuler
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler (const MethodInfo* method);
// 0x59b7150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7185: jmp 0x59b71f5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b7e == '\0') {
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
    Il2CppMethodInitialized_07545b7e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromEuler_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LookRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation (const MethodInfo* method);
// 0x59b7290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b72c5: jmp 0x59b7335

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b7f == '\0') {
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
    Il2CppMethodInitialized_07545b7f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LookRotation_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromToRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation (const MethodInfo* method);
// 0x59b73d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7405: jmp 0x59b7475

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b80 == '\0') {
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
    Il2CppMethodInitialized_07545b80 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromToRotation_b__14
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Inverse
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse (const MethodInfo* method);
// 0x59b7510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7545: jmp 0x59b75b5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b81 == '\0') {
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
    Il2CppMethodInitialized_07545b81 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Inverse_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x59b7650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7685: jmp 0x59b76f5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b82 == '\0') {
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
    Il2CppMethodInitialized_07545b82 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__RotateTowards_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__AngleAxis
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis (const MethodInfo* method);
// 0x59b7790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b77c5: jmp 0x59b7835

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b83 == '\0') {
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
    Il2CppMethodInitialized_07545b83 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__AngleAxis_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x59b78d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7905: jmp 0x59b7975

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b84 == '\0') {
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
    Il2CppMethodInitialized_07545b84 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Angle_b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x59b7a10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7a45: jmp 0x59b7ab5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b85 == '\0') {
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
    Il2CppMethodInitialized_07545b85 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Copy___b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x59b7b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7b85: jmp 0x59b7bf5

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b86 == '\0') {
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
    Il2CppMethodInitialized_07545b86 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Mul___b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x59b7c90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7cc5: jmp 0x59b7d35

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b87 == '\0') {
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
    Il2CppMethodInitialized_07545b87 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Eq___b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x59b7dd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b7e05: jmp 0x59b7e75

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicQuaternionBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b88 == '\0') {
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
    Il2CppMethodInitialized_07545b88 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicQuaternionBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicQuaternionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Hash___b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59b7f10

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545b89 == '\0') {
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
    Il2CppMethodInitialized_07545b89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"X",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Y",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Z",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"W",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Euler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Identity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpUnclamped",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SlerpUnclamped",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FromEuler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FromToRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Inverse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateTowards",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AngleAxis",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Angle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Mul__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x59b8280

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59b82b0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b8a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.x = fVar1;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x59b8330

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59b8360

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b8b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.y = fVar1;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x59b83e0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59b8410

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545b8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b8c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.z = fVar1;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x59b8490

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59b84c0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545b8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b8d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.w = fVar1;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x59b8540

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  
  if (__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&(__i->fields).Value,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar2,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59b8580

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Quaternion_Fields UVar4;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_07545b8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b8e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (pCVar3 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar1 = (pCVar3->fields).Value.fields.x;
  uVar2 = (pCVar3->fields).Value.fields.y;
  UStack_20.z = (pCVar3->fields).Value.fields.z * 0.017453292;
  UStack_20.y = (float)uVar2 * 0.017453292;
  UStack_20.x = (float)uVar1 * 0.017453292;
  UVar4 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0)
  ;
  (__i->fields).Value.fields = UVar4;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Identity>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x59b8630

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_c **ppUVar2;
  
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    ppUVar2 = &TypeInfo_UnityEngine_Quaternion;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    __i = (CustomLogic_CustomLogicQuaternionBuiltin_o *)ppUVar2;
  }
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0
                     ((UnityEngine_Quaternion_o)
                      *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                      (MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b4c90

void CustomLogic_CustomLogicQuaternionBuiltin___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b69 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float x, float y, float z, float w, const MethodInfo* method);
// 0x59b4d20

void CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4d20
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float x,float y,float z,float w,
               MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07545b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6a = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
// 0x59b4df0

void CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,UnityEngine_Quaternion_o value,
               MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6b = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
  local_28 = value.fields.x;
  fStack_24 = value.fields.y;
  (__this->fields).Value.fields.x = local_28;
  (__this->fields).Value.fields.y = fStack_24;
  (__this->fields).Value.fields.z = value.fields.z;
  (__this->fields).Value.fields.w = value.fields.w;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_X
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b4e90

float CustomLogic_CustomLogicQuaternionBuiltin__get_X
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.x;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_X
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59b4ea0

void CustomLogic_CustomLogicQuaternionBuiltin__set_X
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Y
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b4eb0

float CustomLogic_CustomLogicQuaternionBuiltin__get_Y
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.y;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Y
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59b4ec0

void CustomLogic_CustomLogicQuaternionBuiltin__set_Y
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Z
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b4ed0

float CustomLogic_CustomLogicQuaternionBuiltin__get_Z
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.z;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Z
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59b4ee0

void CustomLogic_CustomLogicQuaternionBuiltin__set_Z
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.z = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_W
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b4ef0

float CustomLogic_CustomLogicQuaternionBuiltin__get_W
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.w;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_W
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x59b4f00

void CustomLogic_CustomLogicQuaternionBuiltin__set_W
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.w = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Euler
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b4f10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Euler
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&(__this->fields).Value,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UVar2,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Euler
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x59b4f40

void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Quaternion_Fields UVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (value->fields).Value.fields.x;
  uVar2 = (value->fields).Value.fields.y;
  local_18.z = (value->fields).Value.fields.z * 0.017453292;
  local_18.y = (float)uVar2 * 0.017453292;
  local_18.x = (float)uVar1 * 0.017453292;
  UVar3 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  (__this->fields).Value.fields = UVar3;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Identity
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Identity (const MethodInfo* method);
// 0x59b4f90

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Identity(MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_c **ppUVar2;
  
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    ppUVar2 = &TypeInfo_UnityEngine_Quaternion;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    method = (MethodInfo *)ppUVar2;
  }
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0
                     ((UnityEngine_Quaternion_o)
                      *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,method)
  ;
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Lerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x59b50a0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Lerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields local_20;
  Il2CppMethodPointer local_10;
  Il2CppMethodPointer pIStack_8;
  
  if ((a == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_10 = *(Il2CppMethodPointer *)&(a->fields).Value.fields;
  pIStack_8 = *(Il2CppMethodPointer *)&(a->fields).Value.fields.z;
  local_20.x = (b->fields).Value.fields.x;
  local_20.y = (b->fields).Value.fields.y;
  local_20.z = (b->fields).Value.fields.z;
  local_20.w = (b->fields).Value.fields.w;
  method_00 = (MethodInfo *)&local_10;
  q = UnityEngine_Quaternion__Internal_Lerp
                ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&local_20,t,
                 (MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x59b50e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields UStack_20;
  Il2CppMethodPointer pIStack_10;
  Il2CppMethodPointer pIStack_8;
  
  if ((a == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIStack_10 = *(Il2CppMethodPointer *)&(a->fields).Value.fields;
  pIStack_8 = *(Il2CppMethodPointer *)&(a->fields).Value.fields.z;
  UStack_20.x = (b->fields).Value.fields.x;
  UStack_20.y = (b->fields).Value.fields.y;
  UStack_20.z = (b->fields).Value.fields.z;
  UStack_20.w = (b->fields).Value.fields.w;
  method_00 = (MethodInfo *)&pIStack_10;
  q = UnityEngine_Quaternion__Internal_LerpUnclamped
                ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_20,t,
                 (MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Slerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Slerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x59b5120

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Slerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields UStack_20;
  Il2CppMethodPointer pIStack_10;
  Il2CppMethodPointer pIStack_8;
  
  if ((a == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIStack_10 = *(Il2CppMethodPointer *)&(a->fields).Value.fields;
  pIStack_8 = *(Il2CppMethodPointer *)&(a->fields).Value.fields.z;
  UStack_20.x = (b->fields).Value.fields.x;
  UStack_20.y = (b->fields).Value.fields.y;
  UStack_20.z = (b->fields).Value.fields.z;
  UStack_20.w = (b->fields).Value.fields.w;
  method_00 = (MethodInfo *)&pIStack_10;
  q = UnityEngine_Quaternion__Internal_Slerp
                ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_20,t,
                 (MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x59b5160

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t
          ,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Quaternion_Fields UStack_20;
  Il2CppMethodPointer pIStack_10;
  Il2CppMethodPointer pIStack_8;
  
  if ((a == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIStack_10 = *(Il2CppMethodPointer *)&(a->fields).Value.fields;
  pIStack_8 = *(Il2CppMethodPointer *)&(a->fields).Value.fields.z;
  UStack_20.x = (b->fields).Value.fields.x;
  UStack_20.y = (b->fields).Value.fields.y;
  UStack_20.z = (b->fields).Value.fields.z;
  UStack_20.w = (b->fields).Value.fields.w;
  method_00 = (MethodInfo *)&pIStack_10;
  q = UnityEngine_Quaternion__Internal_SlerpUnclamped
                ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_20,t,
                 (MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromEuler
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromEuler (CustomLogic_CustomLogicVector3Builtin_o* euler, const MethodInfo* method);
// 0x59b51a0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromEuler
          (CustomLogic_CustomLogicVector3Builtin_o *euler,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  Il2CppMethodPointer pIStack_10;
  float fStack_8;
  
  if (euler == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (euler->fields).Value.fields.x;
  uVar2 = (euler->fields).Value.fields.y;
  pIStack_10 = (Il2CppMethodPointer)CONCAT44((float)uVar2 * 0.017453292,(float)uVar1 * 0.017453292);
  fStack_8 = (euler->fields).Value.fields.z * 0.017453292;
  method_00 = (MethodInfo *)&pIStack_10;
  q = UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)method_00,(MethodInfo *)0x0);
  pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LookRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LookRotation (CustomLogic_CustomLogicVector3Builtin_o* forward, CustomLogic_CustomLogicVector3Builtin_o* upwards, const MethodInfo* method);
// 0x59b51f0

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
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  if (Il2CppMethodInitialized_07545b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b6c = '\x01';
  }
  if (upwards == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    if (forward == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_059b536e;
    local_48.x = (forward->fields).Value.fields.x;
    local_48.y = (forward->fields).Value.fields.y;
    local_48.z = (forward->fields).Value.fields.z;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_58.x = (pUVar1->upVector).fields.x;
    local_58.y = (pUVar1->upVector).fields.y;
    local_58.z = (pUVar1->upVector).fields.z;
  }
  else {
    if (forward == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
label_059b536e:
      ThrowNullReferenceException();
    }
    local_48.x = (forward->fields).Value.fields.x;
    local_48.y = (forward->fields).Value.fields.y;
    local_48.z = (forward->fields).Value.fields.z;
    local_58.x = (upwards->fields).Value.fields.x;
    local_58.y = (upwards->fields).Value.fields.y;
    local_58.z = (upwards->fields).Value.fields.z;
  }
  uVar7 = 0;
  uVar6 = 0;
  UVar8 = UnityEngine_Quaternion__Internal_LookRotation
                    ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
  local_28._8_4_ = extraout_XMM0_Dc;
  local_28._0_8_ = UVar8.fields._0_8_;
  local_28._12_4_ = extraout_XMM0_Dd;
  local_38._8_4_ = uVar6;
  local_38._0_8_ = UVar8.fields._8_8_;
  local_38._12_4_ = uVar7;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_07545b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6b = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
  (__this->fields).Value.fields.x = (float)local_28._0_4_;
  (__this->fields).Value.fields.y = (float)local_28._4_4_;
  (__this->fields).Value.fields.z = local_38._0_4_;
  (__this->fields).Value.fields.w = local_38._4_4_;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromToRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59b5380

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  UnityEngine_Vector3_Fields UStack_20;
  Il2CppMethodPointer pIStack_10;
  float fStack_8;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fStack_8 = (a->fields).Value.fields.z;
  pIStack_10 = *(Il2CppMethodPointer *)&(a->fields).Value.fields;
  UStack_20.x = (b->fields).Value.fields.x;
  UStack_20.y = (b->fields).Value.fields.y;
  UStack_20.z = (b->fields).Value.fields.z;
  method_00 = (MethodInfo *)&pIStack_10;
  q = UnityEngine_Quaternion__Internal_FromToRotation
                ((UnityEngine_Vector3_o *)method_00,(UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Inverse
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Inverse (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x59b53e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Inverse
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q_00;
  Il2CppMethodPointer pIStack_10;
  Il2CppMethodPointer pIStack_8;
  
  if (q == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIStack_10 = *(Il2CppMethodPointer *)&(q->fields).Value.fields;
  pIStack_8 = *(Il2CppMethodPointer *)&(q->fields).Value.fields.z;
  method_00 = (MethodInfo *)&pIStack_10;
  q_00 = UnityEngine_Quaternion__Internal_Inverse((UnityEngine_Quaternion_o *)method_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q_00,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards (CustomLogic_CustomLogicQuaternionBuiltin_o* from, CustomLogic_CustomLogicQuaternionBuiltin_o* to, float maxDegreesDelta, const MethodInfo* method);
// 0x59b5410

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards
          (CustomLogic_CustomLogicQuaternionBuiltin_o *from,CustomLogic_CustomLogicQuaternionBuiltin_o *to,
          float maxDegreesDelta,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar10;
  MethodInfo *method_00;
  float fVar11;
  float t;
  UnityEngine_Quaternion_o q_00;
  UnityEngine_Quaternion_Fields UStack_20;
  Il2CppMethodPointer pIStack_10;
  Il2CppMethodPointer pIStack_8;
  
  if ((from == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar2 = (from->fields).Value.fields.x;
  uVar6 = (from->fields).Value.fields.y;
  uVar3 = (from->fields).Value.fields.z;
  uVar7 = (from->fields).Value.fields.w;
  pUVar1 = &(to->fields).Value;
  uVar4 = (pUVar1->fields).x;
  uVar8 = (pUVar1->fields).y;
  uVar5 = (to->fields).Value.fields.z;
  uVar9 = (to->fields).Value.fields.w;
  q = pUVar1->fields;
  pIStack_10 = *(Il2CppMethodPointer *)&(from->fields).Value.fields;
  pIStack_8 = *(Il2CppMethodPointer *)&(from->fields).Value.fields.z;
  UStack_20.x = (to->fields).Value.fields.x;
  UStack_20.y = (to->fields).Value.fields.y;
  UStack_20.z = (to->fields).Value.fields.z;
  UStack_20.w = (to->fields).Value.fields.w;
  fVar11 = ABS((float)uVar7 * (float)uVar9 +
               (float)uVar6 * (float)uVar8 + (float)uVar2 * (float)uVar4 + (float)uVar3 * (float)uVar5);
  if (1.0 <= fVar11) {
    fVar11 = 1.0;
  }
  if (fVar11 <= 0.999999) {
    fVar11 = acosf(fVar11);
    fVar11 = (fVar11 + fVar11) * 57.29578;
    if ((fVar11 != 0.0) || (NAN(fVar11))) {
      t = 1.0;
      if (maxDegreesDelta / fVar11 <= 1.0) {
        t = maxDegreesDelta / fVar11;
      }
      method_00 = (MethodInfo *)&pIStack_10;
      q_00 = UnityEngine_Quaternion__Internal_SlerpUnclamped
                       ((UnityEngine_Quaternion_o *)method_00,(UnityEngine_Quaternion_o *)&UStack_20,t,
                        (MethodInfo *)0x0);
      pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q_00,method_00);
      return pCVar10;
    }
  }
  pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0
                      ((UnityEngine_Quaternion_o)q,(MethodInfo *)from);
  return pCVar10;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$AngleAxis
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis (float angle, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x59b5510

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis
          (float angle,CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  Il2CppMethodPointer pIStack_10;
  float fStack_8;
  
  if (axis == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIStack_10 = *(Il2CppMethodPointer *)&(axis->fields).Value.fields;
  fStack_8 = (axis->fields).Value.fields.z;
  method_00 = (MethodInfo *)&pIStack_10;
  q = UnityEngine_Quaternion__Internal_AngleAxis(angle,(UnityEngine_Vector3_o *)method_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(q,method_00);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Angle
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__Angle (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, const MethodInfo* method);
// 0x59b5550

float CustomLogic_CustomLogicQuaternionBuiltin__Angle
                (CustomLogic_CustomLogicQuaternionBuiltin_o *a,CustomLogic_CustomLogicQuaternionBuiltin_o *b,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((a == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar1 = (a->fields).Value.fields.x;
  uVar5 = (a->fields).Value.fields.y;
  uVar2 = (a->fields).Value.fields.z;
  uVar6 = (a->fields).Value.fields.w;
  uVar3 = (b->fields).Value.fields.x;
  uVar7 = (b->fields).Value.fields.y;
  uVar4 = (b->fields).Value.fields.z;
  uVar8 = (b->fields).Value.fields.w;
  fVar9 = ABS((float)uVar8 * (float)uVar6 +
              (float)uVar7 * (float)uVar5 + (float)uVar3 * (float)uVar1 + (float)uVar4 * (float)uVar2);
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  fVar10 = 0.0;
  if (fVar9 <= 0.999999) {
    fVar9 = acosf(fVar9);
    fVar10 = (fVar9 + fVar9) * 57.29578;
  }
  return fVar10;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__ToString (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b55d0

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__ToString
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_03deb510(&(__this->fields).Value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Copy__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b55e0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Copy__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Quaternion_StaticFields *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  float local_18;
  float fStack_14;
  
  if (Il2CppMethodInitialized_07545b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b6d = '\x01';
  }
  uVar1 = (__this->fields).Value.fields.x;
  uVar3 = (__this->fields).Value.fields.y;
  uVar2 = (__this->fields).Value.fields.z;
  uVar4 = (__this->fields).Value.fields.w;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_07545b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6b = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
  (__this_00->fields).Value.fields.x = (float)uVar1;
  (__this_00->fields).Value.fields.y = (float)uVar3;
  (__this_00->fields).Value.fields.z = (float)uVar2;
  (__this_00->fields).Value.fields.w = (float)uVar4;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Add__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59b56c0

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
// 0x59b5700

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
// 0x59b5740

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mul__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545b6e = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
      pIVar3 = other->klass;
      bVar2 = (pIVar3->_2).typeHierarchyDepth;
      if ((bVar2 < bVar1) ||
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
        if ((bVar2 < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059b5a0f;
        value = UnityEngine_Quaternion__op_Multiply_6905700
                          ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(self + 3),
                           (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(other + 3),(MethodInfo *)0x0
                          );
        __this_00 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850
                  ((CustomLogic_CustomLogicVector3Builtin_o *)__this_00,value,(MethodInfo *)0x0);
      }
      else {
        fVar8 = SUB84(self[3].klass,0);
        fVar9 = (float)((ulong)self[3].klass >> 0x20);
        fVar12 = SUB84(self[3].monitor,0);
        fVar13 = (float)((ulong)self[3].monitor >> 0x20);
        fVar10 = SUB84(other[3].klass,0);
        fVar11 = (float)((ulong)other[3].klass >> 0x20);
        fVar14 = SUB84(other[3].monitor,0);
        fVar15 = (float)((ulong)other[3].monitor >> 0x20);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
        if (Il2CppMethodInitialized_07545b6b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545b6b = '\x01';
        }
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
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
        (__this_00->fields).Value.fields.x =
             (fVar14 * fVar9 + fVar8 * fVar15 + fVar13 * fVar10) - fVar12 * fVar11;
        (__this_00->fields).Value.fields.y =
             (fVar10 * fVar12 + fVar9 * fVar15 + fVar13 * fVar11) - fVar8 * fVar14;
        (__this_00->fields).Value.fields.z =
             (fVar12 * fVar15 + fVar13 * fVar14 + fVar11 * fVar8) - fVar10 * fVar9;
        (__this_00->fields).Value.fields.w =
             ((fVar15 * fVar13 - fVar8 * fVar10) - fVar9 * fVar11) - fVar12 * fVar14;
      }
      return (Il2CppObject *)__this_00;
    }
  }
label_059b5a0f:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Mul);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Div__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59b5a50

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
// 0x59b5a90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b5ad7: xor eax, eax

bool CustomLogic_CustomLogicQuaternionBuiltin____Eq__
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_07545b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b6f = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if (bVar1 <= (other->klass->_2).typeHierarchyDepth) {
      if ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin) {
        other = (Il2CppObject *)0x0;
      }
      if ((((self != (Il2CppObject *)0x0) && (other != (Il2CppObject *)0x0)) &&
          (bVar1 <= (self->klass->_2).typeHierarchyDepth)) &&
         ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
        return 0.999999 <
               (float)((ulong)other[3].monitor >> 0x20) * (float)((ulong)self[3].monitor >> 0x20) +
               (float)((ulong)other[3].klass >> 0x20) * (float)((ulong)self[3].klass >> 0x20) +
               SUB84(other[3].klass,0) * SUB84(self[3].klass,0) +
               SUB84(other[3].monitor,0) * SUB84(self[3].monitor,0);
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b5b60

int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__
                  (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  
  uVar1 = System_Single__GetHashCode((float *)&(__this->fields).Value,(MethodInfo *)0x0);
  iVar2 = System_Single__GetHashCode(&(__this->fields).Value.fields.y,(MethodInfo *)0x0);
  iVar3 = System_Single__GetHashCode(&(__this->fields).Value.fields.z,(MethodInfo *)0x0);
  iVar4 = System_Single__GetHashCode(&(__this->fields).Value.fields.w,(MethodInfo *)0x0);
  return iVar4 >> 1 ^ iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mod__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59b5bc0

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
// 0x59b5c00

UnityEngine_Quaternion_o
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  if (q == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (UnityEngine_Quaternion_o)(q->fields).Value.fields;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (UnityEngine_Quaternion_o q, const MethodInfo* method);
// 0x59b4fd0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_58b4fd0(UnityEngine_Quaternion_o q,MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545b70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  if (Il2CppMethodInitialized_07545b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545b6b = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
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
  local_28 = q.fields.x;
  fStack_24 = q.fields.y;
  (__this->fields).Value.fields.x = local_28;
  (__this->fields).Value.fields.y = fStack_24;
  (__this->fields).Value.fields.z = q.fields.z;
  (__this->fields).Value.fields.w = q.fields.w;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b5c20

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545b71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quaternion");
    Il2CppMethodInitialized_07545b71 = '\x01';
  }
  return "Quaternion";
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b5c50

bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b5c60

bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x59b5c70

bool CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



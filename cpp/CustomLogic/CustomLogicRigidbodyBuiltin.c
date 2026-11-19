// Type: CustomLogic.CustomLogicRigidbodyBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRigidbodyBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicRigidbodyBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicRigidbodyBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a04fc0

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicRigidbodyBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07545eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    Il2CppMethodInitialized_07545eaf = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRigidbodyBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
  (__this->fields)._isGravityEnabled = true;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a09200

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ee6 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a09270

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__24_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a09280

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__24_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t forceMode;
  CustomLogic_CustomLogicVector3Builtin_o *force;
  CustomLogic_CustomLogicVector3Builtin_o *atPoint;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a0937b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      forceMode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (__a->m_Items[1],
                             (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((int)__a->max_length < 3) {
        atPoint = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        atPoint = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (pIVar1,(MethodInfo_34BDE00 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                            );
      }
      if (__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
        CustomLogic_CustomLogicRigidbodyBuiltin__AddForce(__c,force,forceMode,atPoint,in_R8);
        return (Il2CppObject *)0x0;
      }
      goto label_05a0937b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddTorque>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddTorque_b__25_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a09390

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddTorque_b__25_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a0945f:
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
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (__a->m_Items[1],
                        (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
          (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__AddTorque
                  (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,mode,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_05a0945f;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddExplosionForce>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddExplosionForce_b__26_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a09470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a09593: movss xmm3, dword ptr [rsp + 0xc]
// asm:   0x5a09599: jmp 0x5a095de

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddExplosionForce_b__26_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  float explosionForce;
  float explosionRadius;
  float upwardsModifier;
  
  if (Il2CppMethodInitialized_07545ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a0961e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    explosionForce =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (((__a->max_length & 0xfffffffe) != 0) &&
       (pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin),
       2 < (uint)__a->max_length)) {
      explosionRadius =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (__a->m_Items[2],
                      (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      mode = 5;
      upwardsModifier = 0.0;
      if (3 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        upwardsModifier =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (pIVar1,(MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (4 < (int)__a->max_length) {
          pIVar1 = __a->m_Items[4];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          mode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (pIVar1,(MethodInfo_34BDC20 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        }
      }
      if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
          (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__AddExplosionForce
                  (__this_00,explosionForce,(UnityEngine_Vector3_o)(pCVar2->fields).Value.fields,
                   explosionRadius,upwardsModifier,mode,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_05a0961e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__Move_b__27_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a09630

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__Move_b__27_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07545eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545eea = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a0970c:
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
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if ((((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
           (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
          (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__Move
                  (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,
                   (UnityEngine_Quaternion_o)(pCVar2->fields).Value.fields,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_05a0970c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MovePosition>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MovePosition_b__28_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a09720

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MovePosition_b__28_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545eeb = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__MovePosition
                (__this_00,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveRotation>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MoveRotation_b__29_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a097d0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MoveRotation_b__29_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545eec = '\x01';
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
    if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__MoveRotation
                (__this_00,(UnityEngine_Quaternion_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCenterOfMass>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__ResetCenterOfMass_b__30_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a09880

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__ResetCenterOfMass_b__30_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__ResetCenterOfMass(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__PublishTransform>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__PublishTransform_b__31_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a098a0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__PublishTransform_b__31_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__PublishTransform(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__SweepTest>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__SweepTest_b__32_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a098c0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__SweepTest_b__32_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float distance;
  
  if (Il2CppMethodInitialized_07545eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545eed = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a0996c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    direction = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[1],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      if (__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest(__c,direction,distance,method_00);
        return pIVar1;
      }
      goto label_05a0996c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a050b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeAllPositions");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeAllRotations");
    il2cpp_codegen_initialize_runtime_metadata(&"PublishTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeZRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Move");
    il2cpp_codegen_initialize_runtime_metadata(&"Gravity");
    il2cpp_codegen_initialize_runtime_metadata(&"Mass");
    il2cpp_codegen_initialize_runtime_metadata(&"CollisionDetectionMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"AngularVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"AddTorque");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeYPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"IsKinematic");
    il2cpp_codegen_initialize_runtime_metadata(&"AddExplosionForce");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeYRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeZPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"MovePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Interpolate");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCenterOfMass");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"UseGravity");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeXPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Owner");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"AddForce");
    il2cpp_codegen_initialize_runtime_metadata(&"AngularDrag");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeXRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"SweepTest");
    il2cpp_codegen_initialize_runtime_metadata(&"DetectCollisions");
    il2cpp_codegen_initialize_runtime_metadata(&"CenterOfMass");
    Il2CppMethodInitialized_07545eb0 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7c2c901f) {
    if (uVar2 < 0x296dba08) {
      if (uVar2 < 0x52d43e6) {
        if (uVar2 == 0x232777f) {
          bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3e7cf43) {
          bVar1 = System_String__op_Equality(name,"DetectCollisions",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x52d43e5) {
          bVar1 = System_String__op_Equality(name,"Gravity",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x1d76f31c) {
        if (uVar2 == 0x1203e3e7) {
          bVar1 = System_String__op_Equality(name,"FreezeAllPositions",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1d76f31b) {
          bVar1 = System_String__op_Equality(name,"FreezeZPosition",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x27ecd5e6) {
        bVar1 = System_String__op_Equality(name,"FreezeYPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x296dba07) {
        bVar1 = System_String__op_Equality(name,"AddForce",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x56356722) {
      if (uVar2 < 0x465862f2) {
        if (uVar2 == 0x3d3a1210) {
          bVar1 = System_String__op_Equality(name,"Interpolate",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x465862f1) {
          bVar1 = System_String__op_Equality(name,"Mass",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x46697e49) {
        bVar1 = System_String__op_Equality(name,"FreezeXPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x56356721) {
        bVar1 = System_String__op_Equality(name,"CenterOfMass",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x71a328af) {
      if (uVar2 == 0x6c6bed72) {
        bVar1 = System_String__op_Equality(name,"UseGravity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x71a328ae) {
        bVar1 = System_String__op_Equality(name,"FreezeZRotation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x72ce1443) {
      bVar1 = System_String__op_Equality(name,"FreezeYRotation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7c2c901e) {
      bVar1 = System_String__op_Equality(name,"AngularVelocity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xa2d06ea8) {
    if (uVar2 < 0x847c6253) {
      if (uVar2 < 0x835a3f57) {
        if (uVar2 == 0x835a3f56) {
          bVar1 = System_String__op_Equality(name,"IsKinematic",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x7f2c2a34) {
          bVar1 = System_String__op_Equality(name,"Move",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x845e0946) {
        bVar1 = System_String__op_Equality(name,"AddExplosionForce",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x847c6252) {
        bVar1 = System_String__op_Equality(name,"MoveRotation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x85284035) {
      if (uVar2 == 0x84e08377) {
        bVar1 = System_String__op_Equality(name,"SweepTest",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x85284034) {
        bVar1 = System_String__op_Equality(name,"PublishTransform",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x9b22be74) {
      bVar1 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa2d06ea7) {
      bVar1 = System_String__op_Equality(name,"MovePosition",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd9849708) {
    if (uVar2 < 0xc7889b05) {
      if (uVar2 == 0xba408252) {
        bVar1 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xc7889b04) {
        bVar1 = System_String__op_Equality(name,"ResetCenterOfMass",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xd3196eb5) {
      bVar1 = System_String__op_Equality(name,"CollisionDetectionMode",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd9849707) {
      bVar1 = System_String__op_Equality(name,"AngularDrag",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xdb354279) {
    if (uVar2 == 0xdaf45b72) {
      bVar1 = System_String__op_Equality(name,"AddTorque",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdb354278) {
      bVar1 = System_String__op_Equality(name,"FreezeAllRotations",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe27f342a) {
    bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf4450734) {
    bVar1 = System_String__op_Equality(name,"FreezeXRotation",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRigidbodyBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x5a05c60

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5a05d00

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x5a05de0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x5a05ec0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_5
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity (const MethodInfo* method);
// 0x5a05fa0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularDrag
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag (const MethodInfo* method);
// 0x5a06080

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Mass
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass (const MethodInfo* method);
// 0x5a06160

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____setter_8_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__UseGravity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity (const MethodInfo* method);
// 0x5a06240

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Gravity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity (const MethodInfo* method);
// 0x5a06320

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____setter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eb9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____getter_10
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____setter_10
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition (const MethodInfo* method);
// 0x5a06400

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545eba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition (const MethodInfo* method);
// 0x5a064e0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ebb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition (const MethodInfo* method);
// 0x5a065c0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ebc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation (const MethodInfo* method);
// 0x5a066a0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ebd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation (const MethodInfo* method);
// 0x5a06780

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ebe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation (const MethodInfo* method);
// 0x5a06860

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ebf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllRotations
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations (const MethodInfo* method);
// 0x5a06940

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_71c13d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_71c13d8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllPositions
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions (const MethodInfo* method);
// 0x5a06a20

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_71c13c8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_71c13c8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__IsKinematic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic (const MethodInfo* method);
// 0x5a06b00

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Interpolate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate (const MethodInfo* method);
// 0x5a06be0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CenterOfMass
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass (const MethodInfo* method);
// 0x5a06cc0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CollisionDetectionMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode (const MethodInfo* method);
// 0x5a06da0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_71c13a8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_71c13a8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__DetectCollisions
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions (const MethodInfo* method);
// 0x5a06e80

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_71c13b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_07545ec6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_71c13b8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce (const MethodInfo* method);
// 0x5a06f60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a06f95: jmp 0x5a07005

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ec7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddTorque
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque (const MethodInfo* method);
// 0x5a070a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a070d5: jmp 0x5a07145

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddTorque_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ec8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddTorque_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddExplosionForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce (const MethodInfo* method);
// 0x5a071e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a07215: jmp 0x5a07285

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddExplosionForce_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ec9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddExplosionForce_b__2
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__Move
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move (const MethodInfo* method);
// 0x5a07320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a07355: jmp 0x5a073c5

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__Move_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545eca = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__Move_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MovePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition (const MethodInfo* method);
// 0x5a07460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a07495: jmp 0x5a07505

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MovePosition_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ecb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MovePosition_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MoveRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation (const MethodInfo* method);
// 0x5a075a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a075d5: jmp 0x5a07645

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MoveRotation_b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ecc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MoveRotation_b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__ResetCenterOfMass
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass (const MethodInfo* method);
// 0x5a076e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a07715: jmp 0x5a07785

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__ResetCenterOfMass_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ecd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__ResetCenterOfMass_b__3
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__PublishTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform (const MethodInfo* method);
// 0x5a07820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a07855: jmp 0x5a078c5

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__PublishTransform_b__31
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ece = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__PublishTransform_b__31
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__SweepTest
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest (const MethodInfo* method);
// 0x5a07960
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a07995: jmp 0x5a07a05

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRigidbodyBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__SweepTest_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ecf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__SweepTest_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a07aa0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeAllPositions");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeAllRotations");
    il2cpp_codegen_initialize_runtime_metadata(&"PublishTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeZRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Move");
    il2cpp_codegen_initialize_runtime_metadata(&"Gravity");
    il2cpp_codegen_initialize_runtime_metadata(&"Mass");
    il2cpp_codegen_initialize_runtime_metadata(&"CollisionDetectionMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"AngularVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"AddTorque");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeYPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"IsKinematic");
    il2cpp_codegen_initialize_runtime_metadata(&"AddExplosionForce");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeYRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeZPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"MovePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Interpolate");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCenterOfMass");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"UseGravity");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeXPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"Owner");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"AddForce");
    il2cpp_codegen_initialize_runtime_metadata(&"AngularDrag");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"FreezeXRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"SweepTest");
    il2cpp_codegen_initialize_runtime_metadata(&"DetectCollisions");
    il2cpp_codegen_initialize_runtime_metadata(&"CenterOfMass");
    Il2CppMethodInitialized_07545ed0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Owner",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Velocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AngularVelocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AngularDrag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mass",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UseGravity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gravity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeXPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeYPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeZPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeXRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeYRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeZRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeAllRotations",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeAllPositions",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsKinematic",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interpolate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CenterOfMass",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CollisionDetectionMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DetectCollisions",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddForce",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddTorque",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddExplosionForce",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Move",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MovePosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetCenterOfMass",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PublishTransform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SweepTest",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_2_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a07f50

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_2_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields).OwnerBuiltin;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a07f70

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545ea5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545ea5 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_position(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a07ff0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_position
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08080

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Quaternion_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545ea6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_07545ea6 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_rotation(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08100

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_rotation
            (__this,(UnityEngine_Quaternion_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08190

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545ea7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545ea7 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_linearVelocity(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_5_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08210

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_5_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_linearVelocity
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____getter_6_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a082a0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____getter_6_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545ea8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545ea8 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_angularVelocity(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____setter_6_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08320

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____setter_6_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_angularVelocity
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____getter_7_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a083b0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____getter_7_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__get_angularDamping(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____setter_7_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a083f0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____setter_7_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_angularDamping(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____getter_8_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08470

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____getter_8_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__get_mass(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____setter_8_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a084b0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____setter_8_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07545ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_mass(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____getter_9_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08530

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____getter_9_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____setter_9_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08560

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____setter_9_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____getter_10_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a085e0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____getter_10_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07545eaa = '\x01';
  }
  if ((__i->fields)._gravity.fields.hasValue == false) {
    return (Il2CppObject *)0x0;
  }
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     ((UnityEngine_Vector3_o)(__i->fields)._gravity.fields.value.fields,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____setter_10_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08640

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____setter_10_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____getter_11_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a086c0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____getter_11_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((byte)iVar1 >> 1,(undefined7)uStack_8) & 0x1ffffffffffffff;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____setter_11_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08700

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____setter_11_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ed9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a087a4:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a087a4;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 2;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a087a4;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xfffffffd;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____getter_12_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a087b0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____getter_12_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((byte)iVar1 >> 2,(undefined7)uStack_8) & 0x1ffffffffffffff;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____setter_12_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a087f0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____setter_12_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545eda = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08894:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08894;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 4;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08894;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xfffffffb;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____getter_13_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a088a0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____getter_13_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((byte)iVar1 >> 3,(undefined7)uStack_8) & 0x1ffffffffffffff;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____setter_13_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a088e0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____setter_13_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545edb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08984:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08984;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 8;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08984;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xfffffff7;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____getter_14_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08990

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____getter_14_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((byte)iVar1 >> 4,(undefined7)uStack_8) & 0x1ffffffffffffff;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____setter_14_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a089d0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____setter_14_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545edc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08a74:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08a74;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 0x10;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08a74;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xffffffef;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____getter_15_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08a80

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____getter_15_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((byte)iVar1 >> 5,(undefined7)uStack_8) & 0x1ffffffffffffff;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____setter_15_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08ac0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____setter_15_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545edd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08b64:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08b64;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 0x20;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08b64;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xffffffdf;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____getter_16_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08b70

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____getter_16_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((byte)iVar1 >> 6,(undefined7)uStack_8) & 0x1ffffffffffffff;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____setter_16_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08bb0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____setter_16_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ede = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08c54:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08c54;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 0x40;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08c54;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xffffffbf;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____getter_17_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08c60

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____getter_17_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((~uVar1 & 0x70) == 0,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____setter_17_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08ca0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____setter_17_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545edf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08d44:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08d44;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 0x70;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08d44;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xffffff8f;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____getter_18_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08d50

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____getter_18_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17((~uVar1 & 0xe) == 0,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____setter_18_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08d90

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____setter_18_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07545ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
label_05a08e34:
    ThrowNullReferenceException();
  }
  __this = (__i->fields).Value;
  if (bVar1) {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08e34;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 | 0xe;
  }
  else {
    if (__this == (UnityEngine_Rigidbody_o *)0x0) goto label_05a08e34;
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uVar2 = uVar2 & 0xfffffff1;
  }
  UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____getter_19_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08e40

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____getter_19_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Rigidbody__get_isKinematic(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____setter_19_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08e80

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____setter_19_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_isKinematic(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____getter_20_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08f00

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____getter_20_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  iVar1 = UnityEngine_Rigidbody__get_interpolation(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(iVar1 != 0,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____setter_20_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08f40

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____setter_20_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_interpolation(__this,(uint)bVar1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____getter_21_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a08fc0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____getter_21_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Rigidbody__get_centerOfMass(__this,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____setter_21_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a08ff0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____setter_21_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
      (pCVar1 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_centerOfMass
            (__this,(UnityEngine_Vector3_o)(pCVar1->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____getter_22_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a09080

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____getter_22_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__get_collisionDetectionMode(__this,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____setter_22_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a090c0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____setter_22_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicRigidbodyBuiltin__set_CollisionDetectionMode(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____getter_23_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x5a09140

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____getter_23_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_Rigidbody__get_detectCollisions(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____setter_23_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a09180

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____setter_23_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07545ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ee5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) ||
     (__this = (__i->fields).Value, __this == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_detectCollisions(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a03b00

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  (__this->fields)._isGravityEnabled = true;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, float mass, System_Nullable_Vector3__o gravity, bool freezeRotation, bool interpolate, const MethodInfo* method);
// 0x5a03b10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a03c38: lea rbx, [rbp + 0x38]
// asm:   0x5a03c3c: jmp 0x5a03c4a

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor_5903b10
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,float mass,System_Nullable_Vector3__o gravity,
               bool freezeRotation,bool interpolate,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Rigidbody_c *pUVar4;
  uint uVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Rigidbody_o **targetAddress;
  
  if (Il2CppMethodInitialized_07545ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rigidbody);
    Il2CppMethodInitialized_07545ea3 = '\x01';
  }
  (__this->fields)._isGravityEnabled = true;
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    pUVar6 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar2->fields).GameObject,
                        (MethodInfo_3479500 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Rigidbody);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pUVar6,
               (MethodInfo *)0x0);
    (__this->fields).OwnerBuiltin = (CustomLogic_BuiltinClassInstance_o *)owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).AttachedGameObject = (pMVar2->fields).GameObject;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttachedGameObject);
      pUVar4 = TypeInfo_UnityEngine_Rigidbody;
      pUVar3 = (__this->fields).Component;
      if (pUVar3 == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
label_05a03d83:
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3,pUVar4);
        }
        (__this->fields).Value = (UnityEngine_Rigidbody_o *)pUVar3;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pUVar4)) goto label_05a03d83;
      }
      targetAddress = &(__this->fields).Value;
      Il2CppCodeGenWriteBarrier(targetAddress);
      if (gravity.fields.hasValue == false) {
        value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
        method_00 = extraout_RDX;
      }
      else {
        value = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                          (gravity.fields.value.fields,(MethodInfo *)0x0);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity(__this,value,method_00);
      CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity(__this,true,method_01);
      pUVar6 = (__this->fields).Value;
      if (freezeRotation) {
        if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03d7e;
        uVar5 = UnityEngine_Rigidbody__get_constraints(pUVar6,(MethodInfo *)0x0);
        UnityEngine_Rigidbody__set_constraints(pUVar6,uVar5 | 0x40,(MethodInfo *)0x0);
        pUVar6 = *targetAddress;
        if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03d7e;
        uVar5 = UnityEngine_Rigidbody__get_constraints(pUVar6,(MethodInfo *)0x0);
        UnityEngine_Rigidbody__set_constraints(pUVar6,uVar5 | 0x20,(MethodInfo *)0x0);
        pUVar6 = *targetAddress;
        if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03d7e;
        uVar5 = UnityEngine_Rigidbody__get_constraints(pUVar6,(MethodInfo *)0x0);
        uVar5 = uVar5 | 0x10;
      }
      else {
        if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03d7e;
        uVar5 = UnityEngine_Rigidbody__get_constraints(pUVar6,(MethodInfo *)0x0);
        UnityEngine_Rigidbody__set_constraints(pUVar6,uVar5 & 0xffffffbf,(MethodInfo *)0x0);
        pUVar6 = *targetAddress;
        if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03d7e;
        uVar5 = UnityEngine_Rigidbody__get_constraints(pUVar6,(MethodInfo *)0x0);
        UnityEngine_Rigidbody__set_constraints(pUVar6,uVar5 & 0xffffffdf,(MethodInfo *)0x0);
        pUVar6 = *targetAddress;
        if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03d7e;
        uVar5 = UnityEngine_Rigidbody__get_constraints(pUVar6,(MethodInfo *)0x0);
        uVar5 = uVar5 & 0xffffffef;
      }
      UnityEngine_Rigidbody__set_constraints(pUVar6,uVar5,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_interpolation(*targetAddress,(uint)interpolate,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05a03d7e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x5a04150

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor_5904150
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Rigidbody_o *rb,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *pUVar2;
  UnityEngine_Rigidbody_c *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_07545ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rigidbody);
    Il2CppMethodInitialized_07545ea4 = '\x01';
  }
  (__this->fields)._isGravityEnabled = true;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)rb,(MethodInfo *)0x0)
  ;
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin);
  if (rb == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rb,(MethodInfo *)0x0);
  (__this->fields).AttachedGameObject = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttachedGameObject);
  pUVar3 = TypeInfo_UnityEngine_Rigidbody;
  pUVar2 = (__this->fields).Component;
  if (pUVar2 == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
label_05a04221:
    Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
    return;
  }
  bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
  if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
     ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
    (__this->fields).Value = (UnityEngine_Rigidbody_o *)pUVar2;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pUVar3)) goto label_05a04221;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pUVar2,pUVar3);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Owner
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Owner (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04240

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Owner
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).OwnerBuiltin;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Position (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04250

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Position
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545ea5 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Rigidbody__get_position(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Position (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a042d0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Position
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_position
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Rotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04300

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Rotation
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_o value;
  
  if (Il2CppMethodInitialized_07545ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545ea6 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Rigidbody__get_rotation(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Rotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x5a04370

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Rotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_rotation
            (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Velocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a043a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Velocity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545ea7 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Velocity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Velocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a04420

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Velocity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_linearVelocity
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularVelocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04450

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularVelocity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545ea8 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Rigidbody__get_angularVelocity(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularVelocity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularVelocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a044d0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularVelocity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_angularVelocity
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularDrag
// il2cpp: float CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularDrag (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04500

float CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularDrag
                (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Rigidbody__get_angularDamping(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularDrag
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularDrag (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a04520

void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularDrag
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_angularDamping(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Mass
// il2cpp: float CustomLogic_CustomLogicRigidbodyBuiltin__get_Mass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04540

float CustomLogic_CustomLogicRigidbodyBuiltin__get_Mass
                (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_Rigidbody__get_mass(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Mass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Mass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a04560

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Mass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_mass(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_UseGravity
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_UseGravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04580

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_UseGravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._isGravityEnabled;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_UseGravity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a03fa0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545ea9 = '\x01';
  }
  (__this->fields)._isGravityEnabled = value;
  x = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (bVar1) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(__this_00,false,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Behaviour_o *)(__this->fields).CustomGravity;
      if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_useGravity(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Gravity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Gravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04590

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Gravity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_07545eaa = '\x01';
  }
  if ((__this->fields)._gravity.fields.hasValue == false) {
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     ((UnityEngine_Vector3_o)(__this->fields)._gravity.fields.value.fields,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Gravity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a03d90
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a03ef0: xorps xmm0, xmm0
// asm:   0x5a03ef3: movaps xmmword ptr [rsp + 0x10], xmm0
// asm:   0x5a03ef8: test r14, r14
// asm:   0x5a03efb: je 0x5a03f9a

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_ConstantForce_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar3;
  System_Nullable_Vector3__o *pSVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ConstantForce_o *pUVar6;
  System_Nullable_Vector3__Fields local_48;
  System_Nullable_Vector3__Fields local_38;
  
  if (Il2CppMethodInitialized_07545eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545eab = '\x01';
  }
  if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value.fields.x = 0.0;
    local_38.value.fields.y = 0.0;
    local_38.value.fields.z = 0.0;
    if (__this != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
      (__this->fields)._gravity.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._gravity.fields.field_0x1 = 0;
      (__this->fields)._gravity.fields.value.fields.x = 0.0;
      pSVar4 = &(__this->fields)._gravity;
      (pSVar4->fields).value.fields.y = 0.0;
      (pSVar4->fields).value.fields.z = 0.0;
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        ppUVar1 = &(__this->fields).CustomGravity;
        if ((UnityEngine_Behaviour_o *)*ppUVar1 == (UnityEngine_Behaviour_o *)0x0) goto label_05a03f9a;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,false,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
        *ppUVar1 = (UnityEngine_ConstantForce_o *)0x0;
        Il2CppCodeGenWriteBarrier(ppUVar1);
      }
      pUVar3 = (__this->fields).Value;
      if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_useGravity(pUVar3,(__this->fields)._isGravityEnabled,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value.fields.x = 0.0;
    local_48.value.fields.y = 0.0;
    local_48.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_48,(UnityEngine_Vector3_o)(value->fields).Value.fields,
               (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
    local_38.hasValue = local_48.hasValue;
    local_38._1_3_ = local_48._1_3_;
    local_38.value.fields.x = local_48.value.fields.x;
    local_38.value.fields.y = local_48.value.fields.y;
    local_38.value.fields.z = local_48.value.fields.z;
    if (__this != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
      (__this->fields)._gravity.fields.hasValue = local_48.hasValue;
      *(undefined3 *)&(__this->fields)._gravity.fields.field_0x1 = local_48._1_3_;
      (__this->fields)._gravity.fields.value.fields.x = local_48.value.fields.x;
      pSVar4 = &(__this->fields)._gravity;
      (pSVar4->fields).value.fields.y = local_48.value.fields.y;
      (pSVar4->fields).value.fields.z = local_48.value.fields.z;
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      ppUVar1 = &(__this->fields).CustomGravity;
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        __this_00 = (UnityEngine_Component_o *)(__this->fields).Value;
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_05a03f9a;
        pUVar6 = UnityEngine_GameObject__AddComponent_object_
                           (__this_01,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce
                           );
        (__this->fields).CustomGravity = pUVar6;
        Il2CppCodeGenWriteBarrier(ppUVar1);
        pUVar3 = (__this->fields).Value;
        if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_05a03f9a;
        UnityEngine_Rigidbody__set_useGravity(pUVar3,false,(MethodInfo *)0x0);
      }
      if (*ppUVar1 != (UnityEngine_ConstantForce_o *)0x0) {
        UnityEngine_ConstantForce__set_force
                  (*ppUVar1,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        if ((UnityEngine_Behaviour_o *)*ppUVar1 != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)*ppUVar1,(__this->fields)._isGravityEnabled,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
label_05a03f9a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a045e0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return SUB41((uVar1 & 2) >> 1,0);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04600

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffffd,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04650

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return SUB41((uVar1 & 4) >> 2,0);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04670

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffffb,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 4,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a046c0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return SUB41((uVar1 & 8) >> 3,0);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a046e0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffff7,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 8,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04730

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return SUB41((uVar1 & 0x10) >> 4,0);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a040e0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffffef,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x10,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04750

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return SUB41((uVar1 & 0x20) >> 5,0);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04090

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffffdf,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x20,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04770

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return SUB41((uVar1 & 0x40) >> 6,0);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04040

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffffbf,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x40,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllRotations
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllRotations (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04790

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllRotations
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return (~uVar1 & 0x70) == 0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllRotations
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllRotations (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a047b0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllRotations
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffff8f,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x70,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllPositions
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllPositions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04800

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllPositions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  return (~uVar1 & 0xe) == 0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllPositions
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllPositions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04820

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllPositions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  undefined7 in_register_00000031;
  
  __this_00 = (__this->fields).Value;
  if ((int)CONCAT71(in_register_00000031,value) == 0) {
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffff1,(MethodInfo *)0x0);
      return;
    }
  }
  else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0xe,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsKinematic
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsKinematic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04870

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsKinematic
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Rigidbody__get_isKinematic(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_IsKinematic
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_IsKinematic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04890

void CustomLogic_CustomLogicRigidbodyBuiltin__set_IsKinematic
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_isKinematic(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Interpolate
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_Interpolate (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a048b0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_Interpolate
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
  return iVar1 != 0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Interpolate
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Interpolate (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04130

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Interpolate
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_interpolation(__this_00,(uint)value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_CenterOfMass
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_CenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a048d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_CenterOfMass
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  v = UnityEngine_Rigidbody__get_centerOfMass(__this_00,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_CenterOfMass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_CenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a048f0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_CenterOfMass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_centerOfMass
            (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_CollisionDetectionMode
// il2cpp: int32_t CustomLogic_CustomLogicRigidbodyBuiltin__get_CollisionDetectionMode (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04920

int32_t CustomLogic_CustomLogicRigidbodyBuiltin__get_CollisionDetectionMode
                  (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_Rigidbody__get_collisionDetectionMode(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_CollisionDetectionMode
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_CollisionDetectionMode (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a04940

void CustomLogic_CustomLogicRigidbodyBuiltin__set_CollisionDetectionMode
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07545eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CollisionDetectionMode);
    Il2CppMethodInitialized_07545eac = '\x01';
  }
  handle = TypeRef_UnityEngine_CollisionDetectionMode;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields).Value;
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Rigidbody__set_collisionDetectionMode(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  iStack_30 = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid collision detection mode: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_set_CollisionDetectionMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_DetectCollisions
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_DetectCollisions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04a80

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_DetectCollisions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_Rigidbody__get_detectCollisions(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_DetectCollisions
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_DetectCollisions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a04aa0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_DetectCollisions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__set_detectCollisions(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddForce
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddForce (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* force, int32_t forceMode, CustomLogic_CustomLogicVector3Builtin_o* atPoint, const MethodInfo* method);
// 0x5a04ac0

void CustomLogic_CustomLogicRigidbodyBuiltin__AddForce
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *force,int32_t forceMode,
               CustomLogic_CustomLogicVector3Builtin_o *atPoint,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (atPoint == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    if ((force != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (__this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__AddForce
                (__this_00,(UnityEngine_Vector3_o)(force->fields).Value.fields,forceMode,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((force != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
          (__this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__AddForceAtPosition
              (__this_00,(UnityEngine_Vector3_o)(force->fields).Value.fields,
               (UnityEngine_Vector3_o)(atPoint->fields).Value.fields,forceMode,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddTorque
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddTorque (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* torque, int32_t forceMode, const MethodInfo* method);
// 0x5a04b20

void CustomLogic_CustomLogicRigidbodyBuiltin__AddTorque
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *torque,int32_t forceMode,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((torque == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__AddTorque
            (__this_00,(UnityEngine_Vector3_o)(torque->fields).Value.fields,forceMode,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddExplosionForce
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddExplosionForce (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float explosionForce, CustomLogic_CustomLogicVector3Builtin_o* explosionPosition, float explosionRadius, float upwardsModifier, int32_t forceMode, const MethodInfo* method);
// 0x5a04b50

void CustomLogic_CustomLogicRigidbodyBuiltin__AddExplosionForce
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float explosionForce,
               CustomLogic_CustomLogicVector3Builtin_o *explosionPosition,float explosionRadius,
               float upwardsModifier,int32_t forceMode,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((explosionPosition == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__AddExplosionForce
            (__this_00,explosionForce,(UnityEngine_Vector3_o)(explosionPosition->fields).Value.fields,
             explosionRadius,upwardsModifier,forceMode,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$Move
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__Move (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x5a04b80

void CustomLogic_CustomLogicRigidbodyBuiltin__Move
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if (((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
      (rotation == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__Move
            (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,
             (UnityEngine_Quaternion_o)(rotation->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$MovePosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__MovePosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5a04bc0

void CustomLogic_CustomLogicRigidbodyBuiltin__MovePosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__MovePosition
            (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$MoveRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__MoveRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x5a04bf0

void CustomLogic_CustomLogicRigidbodyBuiltin__MoveRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((rotation == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__MoveRotation
            (__this_00,(UnityEngine_Quaternion_o)(rotation->fields).Value.fields,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$ResetCenterOfMass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__ResetCenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04c20

void CustomLogic_CustomLogicRigidbodyBuiltin__ResetCenterOfMass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__ResetCenterOfMass(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$PublishTransform
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__PublishTransform (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04c40

void CustomLogic_CustomLogicRigidbodyBuiltin__PublishTransform
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Rigidbody__PublishTransform(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$SweepTest
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, float distance, const MethodInfo* method);
// 0x5a04c60

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,float distance,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar2;
  UnityEngine_Collider_o *pUVar3;
  CustomLogic_BuiltinClassInstance_o *pCVar4;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_02;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_RaycastHit_o local_58;
  
  if (Il2CppMethodInitialized_07545ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545ead = '\x01';
  }
  local_58.fields.m_UV.fields.x = 0.0;
  local_58.fields.m_UV.fields.y = 0.0;
  local_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_58.fields.m_Normal.fields.y = 0.0;
  local_58.fields.m_Normal.fields.z = 0.0;
  local_58.fields.m_FaceID = 0;
  local_58.fields.m_Distance = 0.0;
  local_58.fields.m_Point.fields.x = 0.0;
  local_58.fields.m_Point.fields.y = 0.0;
  local_58.fields.m_Point.fields.z = 0.0;
  local_58.fields.m_Normal.fields.x = 0.0;
  if ((direction == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (__this_00 = (__this->fields).Value, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
label_05a04f42:
    ThrowNullReferenceException();
  }
  bVar2 = UnityEngine_Rigidbody__SweepTest_69e3f60
                    (__this_00,(UnityEngine_Vector3_o)(direction->fields).Value.fields,&local_58,distance,
                     (MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = UnityEngine_RaycastHit__get_collider(&local_58,(MethodInfo *)0x0);
    pCVar4 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar3,(MethodInfo *)0x0);
    if (pCVar4 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_01,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
      pCVar7 = (CustomLogic_BuiltinClassInstance_o *)0x0;
      if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
         (pCVar7 = (CustomLogic_BuiltinClassInstance_o *)0x0,
         (pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
        pCVar7 = pCVar4;
      }
      if (__this_01 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
        bVar2 = false;
        CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                  (__this_01,pCVar7 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
        if (bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) {
          bVar2 = (pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin;
        }
        (__this_01->fields)._IsMapObject_k__BackingField = bVar2;
        UVar9 = UnityEngine_RaycastHit__get_point(&local_58,(MethodInfo *)0x0);
        pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar5,UVar9,(MethodInfo *)0x0);
        (__this_01->fields)._Point_k__BackingField = pCVar5;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Point_k__BackingField);
        UVar9 = UnityEngine_RaycastHit__get_normal(&local_58,(MethodInfo *)0x0);
        pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar5,UVar9,(MethodInfo *)0x0);
        (__this_01->fields)._Normal_k__BackingField = pCVar5;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Normal_k__BackingField);
        fVar8 = UnityEngine_RaycastHit__get_distance(&local_58,(MethodInfo *)0x0);
        (__this_01->fields)._Distance_k__BackingField = fVar8;
        (__this_01->fields)._Collider_k__BackingField = pCVar4;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Collider_k__BackingField);
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pUVar3 = UnityEngine_RaycastHit__get_collider(&local_58,(MethodInfo *)0x0);
        if (parameters != (System_Object_array *)0x0) {
          if ((pUVar3 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pUVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pUVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_02,parameters,(MethodInfo *)0x0);
          (__this_01->fields)._ColliderInfo_k__BackingField = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._ColliderInfo_k__BackingField);
          return (Il2CppObject *)__this_01;
        }
      }
      goto label_05a04f42;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_ClassName (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04f60

System_String_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_ClassName
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RigidbodyBuiltin");
    Il2CppMethodInitialized_07545eae = '\x01';
  }
  return "RigidbodyBuiltin";
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsAbstract (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04f90

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsStatic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04fa0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsStatic
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x5a04fb0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



// Type: CustomLogic.CustomLogicRigidbodyBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRigidbodyBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicRigidbodyBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicRigidbodyBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f56de0

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicRigidbodyBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843454f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    Il2CppMethodInitialized_1843454f7 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      (__this->fields)._isGravityEnabled = true;
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRigidbodyBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f59f00

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434552e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434552e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__24_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f570d0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__24_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434552f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434552f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181f5724c;
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if (1 < (uint)__a->max_length) {
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (__a->m_Items[1],
                        (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      pCVar4 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      uVar1 = (uint)__a->max_length;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_181f57252;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                           );
      }
      if ((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
         (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        __this_00 = (__c->fields).Value;
        if (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f5724c;
          local_28.x = (pCVar3->fields).Value.fields.x;
          local_28.y = (pCVar3->fields).Value.fields.y;
          local_28.z = (pCVar3->fields).Value.fields.z;
          UnityEngine_Rigidbody__AddForce(__this_00,(UnityEngine_Vector3_o *)&local_28,mode,(MethodInfo *)0x0)
          ;
        }
        else {
          if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f5724c;
          local_28.x = (pCVar4->fields).Value.fields.x;
          local_28.y = (pCVar4->fields).Value.fields.y;
          local_28.z = (pCVar4->fields).Value.fields.z;
          local_18.x = (pCVar3->fields).Value.fields.x;
          local_18.y = (pCVar3->fields).Value.fields.y;
          local_18.z = (pCVar3->fields).Value.fields.z;
          UnityEngine_Rigidbody__AddForceAtPosition
                    (__this_00,(UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,mode,
                     (MethodInfo *)0x0);
        }
        return (Il2CppObject *)0x0;
      }
label_181f5724c:
      ThrowNullReferenceException();
    }
  }
label_181f57252:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddTorque>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddTorque_b__25_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57590

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddTorque_b__25_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345530 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f57674:
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
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (__a->m_Items[1],
                        (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
          (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        local_18.z = (pCVar1->fields).Value.fields.z;
        local_18.x = (pCVar1->fields).Value.fields.x;
        local_18.y = (pCVar1->fields).Value.fields.y;
        UnityEngine_Rigidbody__AddTorque(__this_00,(UnityEngine_Vector3_o *)&local_18,mode,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f57674;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddExplosionForce>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddExplosionForce_b__26_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f56ee0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddExplosionForce_b__26_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  float explosionForce;
  float explosionRadius;
  float upwardsModifier;
  UnityEngine_Vector3_Fields local_48 [5];
  
  if (Il2CppMethodInitialized_184345531 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345531 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      explosionForce =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (pIVar2,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          explosionRadius =
               CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[2],
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          uVar1 = (uint)__a->max_length;
          if ((int)uVar1 < 4) {
            upwardsModifier = 0.0;
          }
          else {
            if (uVar1 < 4) goto label_181f570c5;
            pIVar2 = __a->m_Items[3];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            upwardsModifier =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          }
          uVar1 = (uint)__a->max_length;
          mode = 5;
          if (4 < (int)uVar1) {
            if (uVar1 < 5) goto label_181f570c5;
            pIVar2 = __a->m_Items[4];
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            mode = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar2,(MethodInfo_66E9A0 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          }
          if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
              (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
             (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
            local_48[0].x = (pCVar3->fields).Value.fields.x;
            local_48[0].y = (pCVar3->fields).Value.fields.y;
            local_48[0].z = (pCVar3->fields).Value.fields.z;
            UnityEngine_Rigidbody__AddExplosionForce
                      (__this_00,explosionForce,(UnityEngine_Vector3_o *)local_48,explosionRadius,
                       upwardsModifier,mode,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_181f570bf;
        }
      }
    }
label_181f570c5:
    ThrowIndexOutOfRangeException();
  }
label_181f570bf:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__Move_b__27_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58d20

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__Move_b__27_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184345532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345532 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f58e14:
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
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
      if ((((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
           (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
          (pCVar2 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        local_18.x = (pCVar2->fields).Value.fields.x;
        local_18.y = (pCVar2->fields).Value.fields.y;
        local_18.z = (pCVar2->fields).Value.fields.z;
        local_18.w = (pCVar2->fields).Value.fields.w;
        local_28.z = (pCVar1->fields).Value.fields.z;
        local_28.x = (pCVar1->fields).Value.fields.x;
        local_28.y = (pCVar1->fields).Value.fields.y;
        UnityEngine_Rigidbody__Move
                  (__this_00,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f58e14;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MovePosition>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MovePosition_b__28_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f585b0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MovePosition_b__28_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345533 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345533 = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      local_18.x = (pCVar1->fields).Value.fields.x;
      local_18.y = (pCVar1->fields).Value.fields.y;
      local_18.z = (pCVar1->fields).Value.fields.z;
      UnityEngine_Rigidbody__MovePosition(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveRotation>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MoveRotation_b__29_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58670

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MoveRotation_b__29_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184345534 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345534 = '\x01';
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
    if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      local_18.x = (pCVar1->fields).Value.fields.x;
      local_18.y = (pCVar1->fields).Value.fields.y;
      local_18.z = (pCVar1->fields).Value.fields.z;
      local_18.w = (pCVar1->fields).Value.fields.w;
      UnityEngine_Rigidbody__MoveRotation(__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCenterOfMass>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__ResetCenterOfMass_b__30_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f593e0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__ResetCenterOfMass_b__30_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__ResetCenterOfMass(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__PublishTransform>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__PublishTransform_b__31_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59380

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__PublishTransform_b__31_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__PublishTransform(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__SweepTest>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__SweepTest_b__32_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59b10

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__SweepTest_b__32_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  Il2CppObject *pIVar1;
  float distance;
  
  if (Il2CppMethodInitialized_184345535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345535 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f59bca:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    direction = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                          );
    if (1 < (uint)__a->max_length) {
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[1],
                            (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest(__c,direction,distance,(MethodInfo *)0x0);
        return pIVar1;
      }
      goto label_181f59bca;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f32010

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843454f8 == '\0') {
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
    Il2CppMethodInitialized_1843454f8 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7c2c901f) {
    if (uVar3 < 0x296dba08) {
      if (uVar3 < 0x52d43e6) {
        if (uVar3 == 0x232777f) {
          bVar2 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843454fb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_1843454fb = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
          ;
        }
        else if (uVar3 == 0x3e7cf43) {
          bVar2 = System_String__op_Equality(name,"DetectCollisions",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434550e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_40d5138
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_18434550e = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_40d5138
          ;
        }
        else {
          if (uVar3 != 0x52d43e5) goto label_181f34016;
          bVar2 = System_String__op_Equality(name,"Gravity",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345501 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_184345501 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____getter_10
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____setter_10
          ;
        }
      }
      else if (uVar3 < 0x1d76f31c) {
        if (uVar3 == 0x1203e3e7) {
          bVar2 = System_String__op_Equality(name,"FreezeAllPositions",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345509 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_40d52f8
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_184345509 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_40d52f8
          ;
        }
        else {
          if (uVar3 != 0x1d76f31b) goto label_181f34016;
          bVar2 = System_String__op_Equality(name,"FreezeZPosition",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345504 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_184345504 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____s
          ;
        }
      }
      else {
        if (uVar3 != 0x27ecd5e6) {
          if (uVar3 == 0x296dba07) {
            bVar2 = System_String__op_Equality(name,"AddForce",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434550f == '\0') {
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
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
                Il2CppMethodInitialized_18434550f = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__24_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__24_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__24_0 =
                     (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->
                            __9__24_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
          }
          goto label_181f34016;
        }
        bVar2 = System_String__op_Equality(name,"FreezeYPosition",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f34016;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345503 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
          ;
          Il2CppMethodInitialized_184345503 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____s
        ;
      }
    }
    else if (uVar3 < 0x56356722) {
      if (uVar3 < 0x465862f2) {
        if (uVar3 == 0x3d3a1210) {
          bVar2 = System_String__op_Equality(name,"Interpolate",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434550b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_18434550b = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____gette
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____sette
          ;
        }
        else {
          if (uVar3 != 0x465862f1) goto label_181f34016;
          bVar2 = System_String__op_Equality(name,"Mass",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f34016;
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843454ff == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
            Il2CppMethodInitialized_1843454ff = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____getter_8_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____setter_8_1
          ;
        }
      }
      else if (uVar3 == 0x46697e49) {
        bVar2 = System_String__op_Equality(name,"FreezeXPosition",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f34016;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345502 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
          ;
          Il2CppMethodInitialized_184345502 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____s
        ;
      }
      else {
        if (uVar3 != 0x56356721) goto label_181f34016;
        bVar2 = System_String__op_Equality(name,"CenterOfMass",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f34016;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434550c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
          ;
          Il2CppMethodInitialized_18434550c = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____gett
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____sett
        ;
      }
    }
    else if (uVar3 < 0x71a328af) {
      if (uVar3 == 0x6c6bed72) {
        bVar2 = System_String__op_Equality(name,"UseGravity",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f34016;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345500 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
          ;
          Il2CppMethodInitialized_184345500 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____getter
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____setter
        ;
      }
      else {
        if (uVar3 != 0x71a328ae) goto label_181f34016;
        bVar2 = System_String__op_Equality(name,"FreezeZRotation",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f34016;
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345507 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
          ;
          Il2CppMethodInitialized_184345507 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____s
        ;
      }
    }
    else if (uVar3 == 0x72ce1443) {
      bVar2 = System_String__op_Equality(name,"FreezeYRotation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f34016;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345506 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object)
        ;
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
        Il2CppMethodInitialized_184345506 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____s
      ;
    }
    else {
      if (uVar3 != 0x7c2c901e) goto label_181f34016;
      bVar2 = System_String__op_Equality(name,"AngularVelocity",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f34016;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843454fd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object)
        ;
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
        Il2CppMethodInitialized_1843454fd = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____s
      ;
    }
  }
  else if (uVar3 < 0xa2d06ea8) {
    if (0x847c6252 < uVar3) {
      if (uVar3 < 0x85284035) {
        if (uVar3 == 0x84e08377) {
          bVar2 = System_String__op_Equality(name,"SweepTest",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345517 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345517 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__32_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__SweepTest_b__32_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__32_0 =
                   (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->
                          __9__32_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x85284034) {
          bVar2 = System_String__op_Equality(name,"PublishTransform",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345516 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345516 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__31_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__PublishTransform_b__31
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__31_0 =
                   (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->
                          __9__31_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181f34016:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRigidbodyBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      if (uVar3 != 0x9b22be74) {
        if (uVar3 == 0xa2d06ea7) {
          bVar2 = System_String__op_Equality(name,"MovePosition",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345513 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345513 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__28_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MovePosition_b__28_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__28_0 =
                   (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->
                          __9__28_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181f34016;
      }
      bVar2 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f34016;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843454f9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        Il2CppMethodInitialized_1843454f9 = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin
                            );
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181f33ff1;
    }
    if (0x835a3f56 < uVar3) {
      if (uVar3 == 0x845e0946) {
        bVar2 = System_String__op_Equality(name,"AddExplosionForce",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345511 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345511 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__26_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddExplosionForce_b__2
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__26_0 =
                 (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__26_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin)
          ;
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x847c6252) {
        bVar2 = System_String__op_Equality(name,"MoveRotation",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345514 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345514 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__29_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MoveRotation_b__29_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__29_0 =
                 (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__29_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin)
          ;
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181f34016;
    }
    if (uVar3 == 0x7f2c2a34) {
      bVar2 = System_String__op_Equality(name,"Move",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345512 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345512 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__27_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__Move_b__27_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__27_0 =
               (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__27_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
      goto label_181f34016;
    }
    if (uVar3 != 0x835a3f56) goto label_181f34016;
    bVar2 = System_String__op_Equality(name,"IsKinematic",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f34016;
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434550a == '\0') {
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
      Il2CppMethodInitialized_18434550a = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
    ;
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____gette
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____sette
    ;
  }
  else if (uVar3 < 0xd9849708) {
    if (uVar3 < 0xc7889b05) {
      if (uVar3 != 0xba408252) {
        if (uVar3 == 0xc7889b04) {
          bVar2 = System_String__op_Equality(name,"ResetCenterOfMass",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345515 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345515 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__30_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__ResetCenterOfMass_b__3
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__30_0 =
                   (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->
                          __9__30_0,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181f34016;
      }
      bVar2 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f34016;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843454fc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object)
        ;
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
        Il2CppMethodInitialized_1843454fc = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_5
      ;
    }
    else if (uVar3 == 0xd3196eb5) {
      bVar2 = System_String__op_Equality(name,"CollisionDetectionMode",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f34016;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434550d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_40d4f78
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
        Il2CppMethodInitialized_18434550d = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_40d4f78
      ;
    }
    else {
      if (uVar3 != 0xd9849707) goto label_181f34016;
      bVar2 = System_String__op_Equality(name,"AngularDrag",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f34016;
      if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843454fe == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object)
        ;
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
        Il2CppMethodInitialized_1843454fe = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____gette
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____sette
      ;
    }
  }
  else if (uVar3 < 0xdb354279) {
    if (uVar3 == 0xdaf45b72) {
      bVar2 = System_String__op_Equality(name,"AddTorque",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345510 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345510 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__25_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddTorque_b__25_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__25_0 =
               (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__25_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
      goto label_181f34016;
    }
    if (uVar3 != 0xdb354278) goto label_181f34016;
    bVar2 = System_String__op_Equality(name,"FreezeAllRotations",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f34016;
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345508 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_40d54b8
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
      Il2CppMethodInitialized_184345508 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
    ;
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_40d54b8
    ;
  }
  else if (uVar3 == 0xe27f342a) {
    bVar2 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f34016;
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843454fa == '\0') {
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
      Il2CppMethodInitialized_1843454fa = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
    ;
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
    ;
  }
  else {
    if (uVar3 != 0xf4450734) goto label_181f34016;
    bVar2 = System_String__op_Equality(name,"FreezeXRotation",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f34016;
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345505 == '\0') {
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
      Il2CppMethodInitialized_184345505 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object)
    ;
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____g
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____s
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
label_181f33ff1:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x181f4a6d0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843454f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_1843454f9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181f4aa40

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843454fa == '\0') {
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
    Il2CppMethodInitialized_1843454fa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_3
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x181f4b2b0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843454fb == '\0') {
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
    Il2CppMethodInitialized_1843454fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_4
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x181f4c340

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843454fc == '\0') {
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
    Il2CppMethodInitialized_1843454fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_5
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity (const MethodInfo* method);
// 0x181f468a0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843454fd == '\0') {
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
    Il2CppMethodInitialized_1843454fd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularVelocity_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularDrag
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag (const MethodInfo* method);
// 0x181f467b0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843454fe == '\0') {
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
    Il2CppMethodInitialized_1843454fe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__AngularDrag_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Mass
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass (const MethodInfo* method);
// 0x181f49d70

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843454ff == '\0') {
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
    Il2CppMethodInitialized_1843454ff = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Mass_g____setter_8_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__UseGravity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity (const MethodInfo* method);
// 0x181f4c070

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345500 == '\0') {
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
    Il2CppMethodInitialized_184345500 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__UseGravity_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Gravity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity (const MethodInfo* method);
// 0x181f48470

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345501 == '\0') {
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
    Il2CppMethodInitialized_184345501 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Gravity_g____setter_10
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition (const MethodInfo* method);
// 0x181f47ed0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345502 == '\0') {
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
    Il2CppMethodInitialized_184345502 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXPosition_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition (const MethodInfo* method);
// 0x181f480b0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345503 == '\0') {
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
    Il2CppMethodInitialized_184345503 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYPosition_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition (const MethodInfo* method);
// 0x181f48290

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345504 == '\0') {
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
    Il2CppMethodInitialized_184345504 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZPosition_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation (const MethodInfo* method);
// 0x181f47fc0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345505 == '\0') {
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
    Il2CppMethodInitialized_184345505 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeXRotation_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation (const MethodInfo* method);
// 0x181f481a0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345506 == '\0') {
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
    Il2CppMethodInitialized_184345506 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeYRotation_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation (const MethodInfo* method);
// 0x181f48380

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345507 == '\0') {
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
    Il2CppMethodInitialized_184345507 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeZRotation_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllRotations
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations (const MethodInfo* method);
// 0x181f47de0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_40d54b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_184345508 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllRotations_g_40d54b8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllPositions
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions (const MethodInfo* method);
// 0x181f47cf0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345509 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_40d52f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_184345509 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__FreezeAllPositions_g_40d52f8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__IsKinematic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic (const MethodInfo* method);
// 0x181f49410

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434550a == '\0') {
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
    Il2CppMethodInitialized_18434550a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__IsKinematic_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Interpolate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate (const MethodInfo* method);
// 0x181f48ce0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434550b == '\0') {
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
    Il2CppMethodInitialized_18434550b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__Interpolate_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CenterOfMass
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass (const MethodInfo* method);
// 0x181f46b70

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass(MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434550c == '\0') {
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
    Il2CppMethodInitialized_18434550c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CenterOfMass_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CollisionDetectionMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode (const MethodInfo* method);
// 0x181f46c60

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434550d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_40d4f78
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_18434550d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__CollisionDetectionMode_40d4f78
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__DetectCollisions
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions (const MethodInfo* method);
// 0x181f47610

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions
          (MethodInfo *method)

{
  System_Func_CustomLogicRigidbodyBuiltin__object__o *__this;
  System_Action_CustomLogicRigidbodyBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434550e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_40d5138
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
    Il2CppMethodInitialized_18434550e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicRigidbodyBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___CreatePropertyBinding__DetectCollisions_g_40d5138
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce (const MethodInfo* method);
// 0x181f40570

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434550f == '\0') {
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
    Il2CppMethodInitialized_18434550f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddTorque
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque (const MethodInfo* method);
// 0x181f407c0

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345510 == '\0') {
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
    Il2CppMethodInitialized_184345510 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddTorque_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddExplosionForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce (const MethodInfo* method);
// 0x181f40320

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345511 == '\0') {
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
    Il2CppMethodInitialized_184345511 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__AddExplosionForce_b__2
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__Move
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move (const MethodInfo* method);
// 0x181f43820

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345512 == '\0') {
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
    Il2CppMethodInitialized_184345512 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__Move_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MovePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition (const MethodInfo* method);
// 0x181f43150

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345513 == '\0') {
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
    Il2CppMethodInitialized_184345513 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MovePosition_b__28_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MoveRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation (const MethodInfo* method);
// 0x181f43270

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345514 == '\0') {
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
    Il2CppMethodInitialized_184345514 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__MoveRotation_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__ResetCenterOfMass
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass (const MethodInfo* method);
// 0x181f44cf0

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345515 == '\0') {
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
    Il2CppMethodInitialized_184345515 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__ResetCenterOfMass_b__3
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__PublishTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform (const MethodInfo* method);
// 0x181f44140

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345516 == '\0') {
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
    Il2CppMethodInitialized_184345516 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__PublishTransform_b__31
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__SweepTest
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest (const MethodInfo* method);
// 0x181f45bd0

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345517 == '\0') {
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
    Il2CppMethodInitialized_184345517 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRigidbodyBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c___CreateMethodBinding__SweepTest_b__32_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicRigidbodyBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f4de00

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345518 == '\0') {
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
    Il2CppMethodInitialized_184345518 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Owner",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Velocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AngularVelocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AngularDrag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mass",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UseGravity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gravity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeXPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeYPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeZPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeXRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeYRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeZRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeAllRotations",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FreezeAllPositions",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsKinematic",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interpolate",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CenterOfMass",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CollisionDetectionMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DetectCollisions",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddForce",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddTorque",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddExplosionForce",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Move",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MovePosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetCenterOfMass",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PublishTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SweepTest",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_2_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3930

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_2_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields).OwnerBuiltin;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3dfc0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Rigidbody_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843454ed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843454ed = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar3 = UnityEngine_Rigidbody__get_position((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0)
      ;
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3e180

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184345519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345519 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_position(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e9a0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Quaternion_o *pUVar3;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843454ee == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_1843454ee = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar3 = UnityEngine_Rigidbody__get_rotation
                         ((UnityEngine_Quaternion_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      uVar2._0_4_ = (pUVar3->fields).z;
      uVar2._4_4_ = (pUVar3->fields).w;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      local_28[0]._0_8_ = uVar1;
      local_28[0]._8_8_ = uVar2;
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                (__this_00,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3eb40

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_18434551a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434551a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    local_18.w = (pCVar1->fields).Value.fields.w;
    UnityEngine_Rigidbody__set_rotation(__this,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3fe70

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Rigidbody_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843454ef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843454ef = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar3 = UnityEngine_Rigidbody__get_linearVelocity
                         ((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_5_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f40010

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_5_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434551b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434551b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_linearVelocity(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____getter_6_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f39ae0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____getter_6_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Rigidbody_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843454f0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843454f0 = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar3 = UnityEngine_Rigidbody__get_angularVelocity
                         ((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____setter_6_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39b80

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____setter_6_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434551c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434551c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_angularVelocity(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____getter_7_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f39a10

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____getter_7_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_res8[0] = UnityEngine_Rigidbody__get_angularDamping(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____setter_7_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39a50

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____setter_7_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_18434551d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434551d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_angularDamping(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____getter_8_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d200

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____getter_8_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_res8[0] = UnityEngine_Rigidbody__get_mass(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____setter_8_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3d240

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____setter_8_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_18434551e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434551e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_mass(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____getter_9_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3fc00

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____getter_9_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields)._isGravityEnabled;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____setter_9_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3fc30

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____setter_9_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_18434551f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434551f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____getter_10_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bce0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____getter_10_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_1843454f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_1843454f2 = '\x01';
  }
  uVar2 = *(undefined4 *)((longlong)&(__i->fields)._gravity.fields.value.fields.y + 1);
  uVar1 = *(undefined8 *)&(__i->fields)._gravity.fields.field_0x1;
  local_b = *(undefined2 *)((longlong)&(__i->fields)._gravity.fields.value.fields.z + 1);
  local_9 = *(undefined1 *)((longlong)&(__i->fields)._gravity.fields.value.fields.z + 3);
  local_17 = (undefined3)uVar1;
  uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
  if ((__i->fields)._gravity.fields.hasValue != false) {
    local_f._0_3_ = (undefined3)uVar2;
    local_28.y._1_3_ = (undefined3)local_f;
    local_28._0_5_ = uStack_14;
    local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
    local_28.z = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
    local_f = uVar2;
    pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar3;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____setter_10_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3bd80

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____setter_10_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  
  if (Il2CppMethodInitialized_184345520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345520 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____getter_11_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b740

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____getter_11_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  byte local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = (byte)(uVar1 >> 1) & 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____setter_11_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b780

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____setter_11_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345521 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 2;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xfffffffd;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____getter_12_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b920

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____getter_12_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  byte local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = (byte)(uVar1 >> 2) & 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____setter_12_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b960

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____setter_12_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345522 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 4;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xfffffffb;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____getter_13_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bb00

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____getter_13_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  byte local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = (byte)(uVar1 >> 3) & 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____setter_13_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3bb40

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____setter_13_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345523 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 8;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xfffffff7;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____getter_14_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b830

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____getter_14_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  byte local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = (byte)(uVar1 >> 4) & 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____setter_14_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b870

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____setter_14_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345524 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 0x10;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xffffffef;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____getter_15_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ba10

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____getter_15_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  byte local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = (byte)(uVar1 >> 5) & 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____setter_15_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ba50

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____setter_15_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345525 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 0x20;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xffffffdf;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____getter_16_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bbf0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____getter_16_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  Il2CppObject *pIVar2;
  byte local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = (byte)(uVar1 >> 6) & 1;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____setter_16_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3bc30

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____setter_16_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345526 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345526 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 0x40;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xffffffbf;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____getter_17_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b650

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____getter_17_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = ((byte)iVar1 & 0x70) == 0x70;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____setter_17_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b690

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____setter_17_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345527 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 0x70;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xffffff8f;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____getter_18_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b560

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____getter_18_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    local_res8[0] = ((byte)iVar1 & 0xe) == 0xe;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____setter_18_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b5a0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____setter_18_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345528 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    if (bVar1) {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 | 0xe;
    }
    else {
      uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xfffffff1;
    }
    UnityEngine_Rigidbody__set_constraints(__this,uVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____getter_19_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3cb10

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____getter_19_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_res8[0] = UnityEngine_Rigidbody__get_isKinematic(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____setter_19_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3cb50

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____setter_19_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345529 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_isKinematic(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____getter_20_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c640

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____getter_20_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    iVar1 = UnityEngine_Rigidbody__get_interpolation(__this,(MethodInfo *)0x0);
    local_res8[0] = iVar1 != 0;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____setter_20_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3c680

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____setter_20_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434552a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434552a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_interpolation(__this,(uint)bVar1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____getter_21_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f39f20

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____getter_21_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    pUVar1 = UnityEngine_Rigidbody__get_centerOfMass(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____setter_21_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39f70

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____setter_21_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434552b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434552b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
      (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (pCVar1->fields).Value.fields.x;
    local_18.y = (pCVar1->fields).Value.fields.y;
    local_18.z = (pCVar1->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_centerOfMass(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____getter_22_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a010

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____getter_22_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_res8[0] = UnityEngine_Rigidbody__get_collisionDetectionMode(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____setter_22_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3a050

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____setter_22_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppType *handle;
  bool bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434552c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434552c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843454f4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CollisionDetectionMode);
      Il2CppMethodInitialized_1843454f4 = '\x01';
    }
    handle = TypeRef_UnityEngine_CollisionDetectionMode;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_res8[0] = value;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      local_res8[0] = value;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid collision detection mode: {0}");
      pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_set_CollisionDetectionMode);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_collisionDetectionMode(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____getter_23_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ad00

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____getter_23_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    local_res8[0] = UnityEngine_Rigidbody__get_detectCollisions(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____setter_23_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ad40

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____setter_23_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_18434552d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434552d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_detectCollisions(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f557e0

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
// 0x181f55530

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor_1f55530
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,float mass,System_Nullable_Vector3__o *gravity
               ,bool freezeRotation,bool interpolate,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *value;
  UnityEngine_Component_o *value_00;
  uint uVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *value_01;
  UnityEngine_Vector3_Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_1843454eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rigidbody);
    Il2CppMethodInitialized_1843454eb = '\x01';
  }
  (__this->fields)._isGravityEnabled = true;
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar3 = (owner->fields).Value, pMVar3 != (Map_MapObject_o *)0x0)) {
    pUVar5 = CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                       ((pMVar3->fields).GameObject,
                        (MethodInfo_659F10 *)
                        MethodInfo_CustomLogic_BuiltinComponentInstance_GetOrAddComponent_Rigidbody);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)pUVar5,
               (MethodInfo *)0x0);
    (__this->fields).OwnerBuiltin = (CustomLogic_BuiltinClassInstance_o *)owner;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,owner);
    pMVar3 = (owner->fields).Value;
    if (pMVar3 != (Map_MapObject_o *)0x0) {
      value = (pMVar3->fields).GameObject;
      (__this->fields).AttachedGameObject = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttachedGameObject,value);
      value_00 = (__this->fields).Component;
      if (value_00 == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
      }
      else {
        bVar2 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
        if (((value_00->klass->_2).typeHierarchyDepth < bVar2) ||
           ((value_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
          il2cpp_codegen_raise_invalid_cast_exception(value_00);
        }
        (__this->fields).Value = (UnityEngine_Rigidbody_o *)value_00;
        bVar2 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
        if (((value_00->klass->_2).typeHierarchyDepth < bVar2) ||
           ((value_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
          il2cpp_codegen_raise_invalid_cast_exception(value_00);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value_00);
      local_f = *(undefined4 *)((longlong)&(gravity->fields).value.fields.y + 1);
      uVar1 = *(undefined8 *)&(gravity->fields).field_0x1;
      local_b = *(undefined2 *)((longlong)&(gravity->fields).value.fields.z + 1);
      local_9 = *(undefined1 *)((longlong)&(gravity->fields).value.fields.z + 3);
      local_17 = (undefined3)uVar1;
      uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
      if ((gravity->fields).hasValue == false) {
        value_01 = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
      }
      else {
        local_28.y._1_3_ = (undefined3)local_f;
        local_28._0_5_ = uStack_14;
        local_f._3_1_ = (undefined1)((uint)local_f >> 0x18);
        local_28.z = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
        value_01 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                             ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      }
      CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity(__this,value_01,(MethodInfo *)0x0);
      CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity(__this,true,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).Value;
      if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
        uVar4 = UnityEngine_Rigidbody__get_constraints(pUVar5,(MethodInfo *)0x0);
        if (freezeRotation) {
          UnityEngine_Rigidbody__set_constraints(pUVar5,uVar4 | 0x40,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Value;
          if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f557c0;
          uVar4 = UnityEngine_Rigidbody__get_constraints(pUVar5,(MethodInfo *)0x0);
          UnityEngine_Rigidbody__set_constraints(pUVar5,uVar4 | 0x20,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Value;
          if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f557c0;
          uVar4 = UnityEngine_Rigidbody__get_constraints(pUVar5,(MethodInfo *)0x0);
          uVar4 = uVar4 | 0x10;
        }
        else {
          UnityEngine_Rigidbody__set_constraints(pUVar5,uVar4 & 0xffffffbf,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Value;
          if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f557c0;
          uVar4 = UnityEngine_Rigidbody__get_constraints(pUVar5,(MethodInfo *)0x0);
          UnityEngine_Rigidbody__set_constraints(pUVar5,uVar4 & 0xffffffdf,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).Value;
          if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f557c0;
          uVar4 = UnityEngine_Rigidbody__get_constraints(pUVar5,(MethodInfo *)0x0);
          uVar4 = uVar4 & 0xffffffef;
        }
        UnityEngine_Rigidbody__set_constraints(pUVar5,uVar4,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).Value;
        if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_interpolation(pUVar5,(uint)interpolate,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181f557c0:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x181f557f0

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor_1f557f0
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Rigidbody_o *rb,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *value;
  UnityEngine_GameObject_o *value_00;
  
  if (Il2CppMethodInitialized_1843454ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rigidbody);
    Il2CppMethodInitialized_1843454ec = '\x01';
  }
  (__this->fields)._isGravityEnabled = true;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)rb,(MethodInfo *)0x0)
  ;
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,owner);
  if (rb == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rb,(MethodInfo *)0x0);
  (__this->fields).AttachedGameObject = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttachedGameObject,value_00);
  value = (__this->fields).Component;
  if (value == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields).Value = (UnityEngine_Rigidbody_o *)value;
    bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Owner
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Owner (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x180c7fb50

CustomLogic_BuiltinClassInstance_o*
CustomLogic_CustomLogicRigidbodyBuiltin__get_Owner(CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Position (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55d00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Position
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843454ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843454ed = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    pUVar3 = UnityEngine_Rigidbody__get_position
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Position (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f56600

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Position
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_position(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Rotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55d90

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Rotation
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  UnityEngine_Quaternion_o *pUVar3;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843454ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_1843454ee = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    pUVar3 = UnityEngine_Rigidbody__get_rotation
                       ((UnityEngine_Quaternion_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    uVar2._0_4_ = (pUVar3->fields).z;
    uVar2._4_4_ = (pUVar3->fields).w;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    local_28[0]._0_8_ = uVar1;
    local_28[0]._8_8_ = uVar2;
    CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
              (__this_01,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Rotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x181f56640

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Rotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Quaternion_Fields local_18;
  
  if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (value->fields).Value.fields.x;
    local_18.y = (value->fields).Value.fields.y;
    local_18.z = (value->fields).Value.fields.z;
    local_18.w = (value->fields).Value.fields.w;
    UnityEngine_Rigidbody__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Velocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55e10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Velocity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843454ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843454ef = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    pUVar3 = UnityEngine_Rigidbody__get_linearVelocity
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Velocity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Velocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f56740

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Velocity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_linearVelocity(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularVelocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55930

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularVelocity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843454f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843454f0 = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    pUVar3 = UnityEngine_Rigidbody__get_angularVelocity
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularVelocity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularVelocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f55ec0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularVelocity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_angularVelocity(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularDrag
// il2cpp: float CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularDrag (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55910

float CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularDrag
                (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    fVar1 = UnityEngine_Rigidbody__get_angularDamping(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularDrag
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularDrag (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f55ea0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularDrag
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_angularDamping(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Mass
// il2cpp: float CustomLogic_CustomLogicRigidbodyBuiltin__get_Mass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55ce0

float CustomLogic_CustomLogicRigidbodyBuiltin__get_Mass
                (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    fVar1 = UnityEngine_Rigidbody__get_mass(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Mass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Mass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f565e0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Mass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_mass(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_UseGravity
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_UseGravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181937790

bool
CustomLogic_CustomLogicRigidbodyBuiltin__get_UseGravity(CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._isGravityEnabled;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_UseGravity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56680

void CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843454f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843454f1 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
  (__this->fields)._isGravityEnabled = value;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    if (!bVar1) {
      UnityEngine_Rigidbody__set_useGravity(__this_00,value,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Rigidbody__set_useGravity(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Behaviour_o *)(__this->fields).CustomGravity;
    if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Gravity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Gravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55c00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Gravity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_Fields local_28;
  undefined3 local_17;
  undefined5 uStack_14;
  undefined4 local_f;
  undefined2 local_b;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_1843454f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    Il2CppMethodInitialized_1843454f2 = '\x01';
  }
  uVar2 = *(undefined4 *)((longlong)&(__this->fields)._gravity.fields.value.fields.y + 1);
  uVar1 = *(undefined8 *)&(__this->fields)._gravity.fields.field_0x1;
  local_b = *(undefined2 *)((longlong)&(__this->fields)._gravity.fields.value.fields.z + 1);
  local_9 = *(undefined1 *)((longlong)&(__this->fields)._gravity.fields.value.fields.z + 3);
  local_17 = (undefined3)uVar1;
  uStack_14 = (undefined5)((ulonglong)uVar1 >> 0x18);
  if ((__this->fields)._gravity.fields.hasValue != false) {
    local_f._0_3_ = (undefined3)uVar2;
    local_28.y._1_3_ = (undefined3)local_f;
    local_28._0_5_ = uStack_14;
    local_f._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
    local_28.z = (float)CONCAT13(local_9,CONCAT21(local_b,local_f._3_1_));
    local_f = uVar2;
    pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar3;
  }
  return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Gravity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f56390

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar2;
  UnityEngine_Behaviour_o *pUVar3;
  bool bVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ConstantForce_o *pUVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_1843454f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843454f3 = '\x01';
  }
  uVar6._0_1_ = false;
  uVar6._1_3_ = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_28.x = (value->fields).Value.fields.x;
    local_28.y = (value->fields).Value.fields.y;
    local_28.z = (value->fields).Value.fields.z;
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value.fields.x = 0.0;
    local_18.value.fields.y = 0.0;
    local_18.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
               (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
    uVar6 = local_18._0_4_;
    fVar7 = local_18.value.fields.x;
    fVar8 = local_18.value.fields.y;
    fVar9 = local_18.value.fields.z;
  }
  if (__this != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    (__this->fields)._gravity.fields.hasValue = SUB41(uVar6,0);
    *(int3 *)&(__this->fields)._gravity.fields.field_0x1 = SUB43(uVar6,1);
    (__this->fields)._gravity.fields.value.fields.x = fVar7;
    (__this->fields)._gravity.fields.value.fields.y = fVar8;
    (__this->fields)._gravity.fields.value.fields.z = fVar9;
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
    if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar3 = (UnityEngine_Behaviour_o *)(__this->fields).CustomGravity;
        if (pUVar3 == (UnityEngine_Behaviour_o *)0x0) goto label_181f56586;
        UnityEngine_Behaviour__set_enabled(pUVar3,false,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
        (__this->fields).CustomGravity = (UnityEngine_ConstantForce_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).CustomGravity,(void *)0x0);
      }
      pUVar2 = (__this->fields).Value;
      if (pUVar2 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_useGravity(pUVar2,(__this->fields)._isGravityEnabled,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        __this_00 = (UnityEngine_Component_o *)(__this->fields).Value;
        if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_181f56586;
        __this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_181f56586;
        pUVar5 = UnityEngine_GameObject__AddComponent_object_
                           (__this_01,
                            (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce)
        ;
        (__this->fields).CustomGravity = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).CustomGravity,pUVar5);
        pUVar2 = (__this->fields).Value;
        if (pUVar2 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f56586;
        UnityEngine_Rigidbody__set_useGravity(pUVar2,false,(MethodInfo *)0x0);
      }
      pUVar5 = (__this->fields).CustomGravity;
      if (pUVar5 != (UnityEngine_ConstantForce_o *)0x0) {
        local_28.x = (value->fields).Value.fields.x;
        local_28.y = (value->fields).Value.fields.y;
        local_28.z = (value->fields).Value.fields.z;
        UnityEngine_ConstantForce__set_force(pUVar5,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Behaviour_o *)(__this->fields).CustomGravity;
        if (pUVar3 != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled(pUVar3,(__this->fields)._isGravityEnabled,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181f56586:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55ae0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (bool)((byte)(uVar1 >> 1) & 1);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56150

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffffd,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 2,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55b40

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (bool)((byte)(uVar1 >> 2) & 1);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56210

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffffb,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 4,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55ba0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (bool)((byte)(uVar1 >> 3) & 1);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f562d0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffff7,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 8,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55b10

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (bool)((byte)(uVar1 >> 4) & 1);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f561b0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffffef,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x10,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55b70

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (bool)((byte)(uVar1 >> 5) & 1);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56270

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffffdf,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x20,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55bd0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (bool)((byte)(uVar1 >> 6) & 1);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56330

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffffbf,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x40,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllRotations
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllRotations (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55ab0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllRotations
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return ((byte)iVar1 & 0x70) == 0x70;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllRotations
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllRotations (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f560f0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllRotations
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xffffff8f,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0x70,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllPositions
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllPositions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55a80

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllPositions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return ((byte)iVar1 & 0xe) == 0xe;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllPositions
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllPositions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56090

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllPositions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (!value) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 & 0xfffffff1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
  UnityEngine_Rigidbody__set_constraints(__this_00,uVar1 | 0xe,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsKinematic
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsKinematic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55cc0

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsKinematic
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    bVar1 = UnityEngine_Rigidbody__get_isKinematic(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_IsKinematic
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_IsKinematic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f565c0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_IsKinematic
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_isKinematic(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Interpolate
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_Interpolate (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55c90

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_Interpolate
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    iVar1 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
    return iVar1 != 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Interpolate
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Interpolate (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56590

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Interpolate
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_interpolation(__this_00,(uint)value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_CenterOfMass
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_CenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f559c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_CenterOfMass
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    pUVar1 = UnityEngine_Rigidbody__get_centerOfMass(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_CenterOfMass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_CenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f55f00

void CustomLogic_CustomLogicRigidbodyBuiltin__set_CenterOfMass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (value->fields).Value.fields.x;
    local_18[0].y = (value->fields).Value.fields.y;
    local_18[0].z = (value->fields).Value.fields.z;
    UnityEngine_Rigidbody__set_centerOfMass(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_CollisionDetectionMode
// il2cpp: int32_t CustomLogic_CustomLogicRigidbodyBuiltin__get_CollisionDetectionMode (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55a40

int32_t CustomLogic_CustomLogicRigidbodyBuiltin__get_CollisionDetectionMode
                  (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    iVar1 = UnityEngine_Rigidbody__get_collisionDetectionMode(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_CollisionDetectionMode
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_CollisionDetectionMode (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f55f40

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
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843454f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CollisionDetectionMode);
    Il2CppMethodInitialized_1843454f4 = '\x01';
  }
  handle = TypeRef_UnityEngine_CollisionDetectionMode;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_collisionDetectionMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  local_res10[0] = value;
  pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid collision detection mode: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRigidbodyBuiltin_set_CollisionDetectionMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_DetectCollisions
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_DetectCollisions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55a60

bool CustomLogic_CustomLogicRigidbodyBuiltin__get_DetectCollisions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    bVar1 = UnityEngine_Rigidbody__get_detectCollisions(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_DetectCollisions
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_DetectCollisions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f56070

void CustomLogic_CustomLogicRigidbodyBuiltin__set_DetectCollisions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_detectCollisions(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddForce
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddForce (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* force, int32_t forceMode, CustomLogic_CustomLogicVector3Builtin_o* atPoint, const MethodInfo* method);
// 0x181f55000

void CustomLogic_CustomLogicRigidbodyBuiltin__AddForce
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *force,int32_t forceMode,
               CustomLogic_CustomLogicVector3Builtin_o *atPoint,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if (force != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    __this_00 = (__this->fields).Value;
    if (atPoint == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        local_28.x = (force->fields).Value.fields.x;
        local_28.y = (force->fields).Value.fields.y;
        local_28.z = (force->fields).Value.fields.z;
        UnityEngine_Rigidbody__AddForce
                  (__this_00,(UnityEngine_Vector3_o *)&local_28,forceMode,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      local_28.x = (atPoint->fields).Value.fields.x;
      local_28.y = (atPoint->fields).Value.fields.y;
      local_28.z = (atPoint->fields).Value.fields.z;
      local_18[0].x = (force->fields).Value.fields.x;
      local_18[0].y = (force->fields).Value.fields.y;
      local_18[0].z = (force->fields).Value.fields.z;
      UnityEngine_Rigidbody__AddForceAtPosition
                (__this_00,(UnityEngine_Vector3_o *)local_18,(UnityEngine_Vector3_o *)&local_28,forceMode,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddTorque
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddTorque (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* torque, int32_t forceMode, const MethodInfo* method);
// 0x181f55090

void CustomLogic_CustomLogicRigidbodyBuiltin__AddTorque
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *torque,int32_t forceMode,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((torque != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (torque->fields).Value.fields.x;
    local_18[0].y = (torque->fields).Value.fields.y;
    local_18[0].z = (torque->fields).Value.fields.z;
    UnityEngine_Rigidbody__AddTorque(__this_00,(UnityEngine_Vector3_o *)local_18,forceMode,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddExplosionForce
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddExplosionForce (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float explosionForce, CustomLogic_CustomLogicVector3Builtin_o* explosionPosition, float explosionRadius, float upwardsModifier, int32_t forceMode, const MethodInfo* method);
// 0x181f54fa0

void CustomLogic_CustomLogicRigidbodyBuiltin__AddExplosionForce
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float explosionForce,
               CustomLogic_CustomLogicVector3Builtin_o *explosionPosition,float explosionRadius,
               float upwardsModifier,int32_t forceMode,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((explosionPosition != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (explosionPosition->fields).Value.fields.x;
    local_18[0].y = (explosionPosition->fields).Value.fields.y;
    local_18[0].z = (explosionPosition->fields).Value.fields.z;
    UnityEngine_Rigidbody__AddExplosionForce
              (__this_00,explosionForce,(UnityEngine_Vector3_o *)local_18,explosionRadius,upwardsModifier,
               forceMode,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$Move
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__Move (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x181f55150

void CustomLogic_CustomLogicRigidbodyBuiltin__Move
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (rotation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (rotation->fields).Value.fields.x;
    local_18.y = (rotation->fields).Value.fields.y;
    local_18.z = (rotation->fields).Value.fields.z;
    local_18.w = (rotation->fields).Value.fields.w;
    local_28.z = (position->fields).Value.fields.z;
    local_28.x = (position->fields).Value.fields.x;
    local_28.y = (position->fields).Value.fields.y;
    UnityEngine_Rigidbody__Move
              (__this_00,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$MovePosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__MovePosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f550d0

void CustomLogic_CustomLogicRigidbodyBuiltin__MovePosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_Fields local_18 [2];
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18[0].x = (position->fields).Value.fields.x;
    local_18[0].y = (position->fields).Value.fields.y;
    local_18[0].z = (position->fields).Value.fields.z;
    UnityEngine_Rigidbody__MovePosition(__this_00,(UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$MoveRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__MoveRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x181f55110

void CustomLogic_CustomLogicRigidbodyBuiltin__MoveRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Quaternion_Fields local_18;
  
  if ((rotation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_18.x = (rotation->fields).Value.fields.x;
    local_18.y = (rotation->fields).Value.fields.y;
    local_18.z = (rotation->fields).Value.fields.z;
    local_18.w = (rotation->fields).Value.fields.w;
    UnityEngine_Rigidbody__MoveRotation(__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$ResetCenterOfMass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__ResetCenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f551c0

void CustomLogic_CustomLogicRigidbodyBuiltin__ResetCenterOfMass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__ResetCenterOfMass(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$PublishTransform
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__PublishTransform (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f551a0

void CustomLogic_CustomLogicRigidbodyBuiltin__PublishTransform
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__PublishTransform(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$SweepTest
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, float distance, const MethodInfo* method);
// 0x181f551e0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,float distance,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar4;
  UnityEngine_Collider_o *pUVar5;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_01;
  CustomLogic_BuiltinClassInstance_o *pCVar6;
  UnityEngine_Vector3_o *pUVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_02;
  float fVar10;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_RaycastHit_o local_48;
  
  if (Il2CppMethodInitialized_1843454f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843454f5 = '\x01';
  }
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    local_58.x = (direction->fields).Value.fields.x;
    local_58.y = (direction->fields).Value.fields.y;
    local_58.z = (direction->fields).Value.fields.z;
    bVar4 = UnityEngine_Rigidbody__SweepTest_2fe7400
                      (__this_00,(UnityEngine_Vector3_o *)&local_58,&local_48,distance,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar5 = UnityEngine_RaycastHit__get_collider(&local_48,(MethodInfo *)0x0);
      value = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar5,(MethodInfo *)0x0);
      if (value != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_01,(MethodInfo *)0x0);
        bVar3 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar3) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pCVar6 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        if (bVar4) {
          pCVar6 = value;
        }
        if (__this_01 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_01,pCVar6 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar3 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar3) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          pCVar6 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar4) {
            pCVar6 = value;
          }
          (__this_01->fields)._IsMapObject_k__BackingField =
               pCVar6 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          pUVar7 = UnityEngine_RaycastHit__get_point
                             ((UnityEngine_Vector3_o *)&local_58,&local_48,(MethodInfo *)0x0);
          uVar1._0_4_ = (pUVar7->fields).x;
          uVar1._4_4_ = (pUVar7->fields).y;
          fVar10 = (pUVar7->fields).z;
          pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_58._0_8_ = uVar1;
          local_58.z = fVar10;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar8,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
          (__this_01->fields)._Point_k__BackingField = pCVar8;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Point_k__BackingField,pCVar8);
          pUVar7 = UnityEngine_RaycastHit__get_normal
                             ((UnityEngine_Vector3_o *)&local_58,&local_48,(MethodInfo *)0x0);
          uVar2._0_4_ = (pUVar7->fields).x;
          uVar2._4_4_ = (pUVar7->fields).y;
          fVar10 = (pUVar7->fields).z;
          pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_58._0_8_ = uVar2;
          local_58.z = fVar10;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar8,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
          (__this_01->fields)._Normal_k__BackingField = pCVar8;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Normal_k__BackingField,pCVar8);
          fVar10 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)&local_48,(MethodInfo *)0x0);
          (__this_01->fields)._Distance_k__BackingField = fVar10;
          (__this_01->fields)._Collider_k__BackingField = value;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Collider_k__BackingField,value);
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar5 = UnityEngine_RaycastHit__get_collider(&local_48,(MethodInfo *)0x0);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar5 != (UnityEngine_Collider_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pUVar5,(((parameters->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar5;
              Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar5);
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_02,parameters,(MethodInfo *)0x0);
              (__this_01->fields)._ColliderInfo_k__BackingField = __this_02;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields)._ColliderInfo_k__BackingField,__this_02);
              return (Il2CppObject *)__this_01;
            }
            ThrowIndexOutOfRangeException();
          }
        }
        goto label_181f55514;
      }
    }
    return (Il2CppObject *)0x0;
  }
label_181f55514:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_ClassName (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x181f55a10

System_String_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_ClassName
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843454f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RigidbodyBuiltin");
    Il2CppMethodInitialized_1843454f6 = '\x01';
  }
  return "RigidbodyBuiltin";
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsAbstract (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRigidbodyBuiltin__get_IsAbstract(CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsStatic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRigidbodyBuiltin__get_IsStatic(CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRigidbodyBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, MethodInfo* method)

{
  return true;
}



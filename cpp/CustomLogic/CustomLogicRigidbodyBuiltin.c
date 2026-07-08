// Type: CustomLogic.CustomLogicRigidbodyBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRigidbodyBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicRigidbodyBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicRigidbodyBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3df2360

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicRigidbodyBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702ac4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin);
    DAT_05702ac4 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
      *(undefined1 *)&(__this->fields)._isGravityEnabled = 1;
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicRigidbodyBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicRigidbodyBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3df65b0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702afb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702afb = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3df6620

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__24_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6630

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__AddForce>b__24_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05702afc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702afc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03df6764:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if ((int)__a->max_length < 3) {
        pIVar2 = (Il2CppObject *)0x0;
      }
      else {
        pIVar2 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      }
      if ((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
         (pIVar1 != (Il2CppObject *)0x0)) {
        __this_00 = (__c->fields).Value;
        if (pIVar2 == (Il2CppObject *)0x0) {
          if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
            UnityEngine_Rigidbody__AddForce
                      (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                       mode,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
        else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__AddForceAtPosition
                    (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                     (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),mode,
                     (MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto LAB_03df6764;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddTorque>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddTorque_b__25_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6770

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__AddTorque>b__25_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  Il2CppObject *pIVar1;
  
  if (DAT_05702afd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702afd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03df6838:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      mode = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
          (pIVar1 != (Il2CppObject *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__AddTorque
                  (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),mode
                   ,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03df6838;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddExplosionForce>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__AddExplosionForce_b__26_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6850

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__AddExplosionForce>b__26_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode;
  Il2CppObject *pIVar2;
  float explosionForce;
  float explosionRadius;
  float upwardsModifier;
  
  if (DAT_05702afe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702afe = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03df6a03:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    explosionForce = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
    if ((1 < (uint)__a->max_length) &&
       (pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV),
       2 < (uint)__a->max_length)) {
      explosionRadius =
           CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
      mode = 5;
      upwardsModifier = 0.0;
      if (3 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[3];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        upwardsModifier = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
        if (4 < (int)__a->max_length) {
          pIVar1 = __a->m_Items[4];
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          mode = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
        }
      }
      if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
          (pIVar2 != (Il2CppObject *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__AddExplosionForce
                  (__this_00,explosionForce,
                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                   explosionRadius,upwardsModifier,mode,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03df6a03;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__Move>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__Move_b__27_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6a10

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__Move>b__27_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05702aff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aff = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03df6ae9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
      if ((((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
           (pIVar1 != (Il2CppObject *)0x0)) && (pIVar2 != (Il2CppObject *)0x0)) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__Move
                  (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                   (UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03df6ae9;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MovePosition>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MovePosition_b__28_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6b00

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__MovePosition>b__28_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_05702b00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b00 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__MovePosition
                (__this_00,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                 (MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveRotation>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__MoveRotation_b__29_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6bb0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveRotation>b__29_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_05702b01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b01 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    if (((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
        (pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__MoveRotation
                (__this_00,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
                 (MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCenterOfMass>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__ResetCenterOfMass_b__30_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6c60

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__ResetCenterOfMass>b__30_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__ResetCenterOfMass(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__PublishTransform>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__PublishTransform_b__31_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6c80

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__PublishTransform>b__31_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__PublishTransform(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings.<>c$$<__CreateMethodBinding__SweepTest>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_____CreateMethodBinding__SweepTest_b__32_0 (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRigidbodyBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3df6ca0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_<>c__<__CreateMethodBinding__SweepTest>b__32_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRigidbodyBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  CustomLogic_CustomLogicVector3Builtin_o *direction;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float distance;
  
  if (DAT_05702b02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b02 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03df6d4e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    direction = (CustomLogic_CustomLogicVector3Builtin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      distance = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest
                           (__c,direction,distance,method_00);
        return pIVar1;
      }
      goto LAB_03df6d4e;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3df2450

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05702ac5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"FreezeAllPositions");
    il2cpp_init_method_metadata(&"FreezeAllRotations");
    il2cpp_init_method_metadata(&"PublishTransform");
    il2cpp_init_method_metadata(&"FreezeZRotation");
    il2cpp_init_method_metadata(&"Move");
    il2cpp_init_method_metadata(&"Gravity");
    il2cpp_init_method_metadata(&"Mass");
    il2cpp_init_method_metadata(&"CollisionDetectionMode");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"AngularVelocity");
    il2cpp_init_method_metadata(&"AddTorque");
    il2cpp_init_method_metadata(&"FreezeYPosition");
    il2cpp_init_method_metadata(&"IsKinematic");
    il2cpp_init_method_metadata(&"AddExplosionForce");
    il2cpp_init_method_metadata(&"FreezeYRotation");
    il2cpp_init_method_metadata(&"FreezeZPosition");
    il2cpp_init_method_metadata(&"MovePosition");
    il2cpp_init_method_metadata(&"Interpolate");
    il2cpp_init_method_metadata(&"ResetCenterOfMass");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"UseGravity");
    il2cpp_init_method_metadata(&"FreezeXPosition");
    il2cpp_init_method_metadata(&"Owner");
    il2cpp_init_method_metadata(&"Velocity");
    il2cpp_init_method_metadata(&"AddForce");
    il2cpp_init_method_metadata(&"AngularDrag");
    il2cpp_init_method_metadata(&"MoveRotation");
    il2cpp_init_method_metadata(&"FreezeXRotation");
    il2cpp_init_method_metadata(&"SweepTest");
    il2cpp_init_method_metadata(&"DetectCollisions");
    il2cpp_init_method_metadata(&"CenterOfMass");
    DAT_05702ac5 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7c2c901f) {
    if (uVar3 < 0x296dba08) {
      if (uVar3 < 0x52d43e6) {
        if (uVar3 == 0x232777f) {
          bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ac8 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
              DAT_05702ac8 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x3e7cf43) {
          bVar4 = System_String__op_Equality(name,"DetectCollisions",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702adb == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetectCollision);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetectCollisions);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
              DAT_05702adb = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x52d43e5) &&
                (bVar4 = System_String__op_Equality(name,"Gravity",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ace == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gravity_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Gravity_g____sett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702ace = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x1d76f31c) {
        if (uVar3 == 0x1203e3e7) {
          bVar4 = System_String__op_Equality(name,"FreezeAllPositions",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ad6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeAllPositi);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeAllPosition);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
              DAT_05702ad6 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x1d76f31b) &&
                (bVar4 = System_String__op_Equality(name,"FreezeZPosition",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ad1 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeZPosition);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeZPosition_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702ad1 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x27ecd5e6) {
        bVar4 = System_String__op_Equality(name,"FreezeYPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ad0 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeYPosition);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeYPosition_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702ad0 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x296dba07) &&
              (bVar4 = System_String__op_Equality(name,"AddForce",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702adc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddForce_b__24_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702adc = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x56356722) {
      if (uVar3 < 0x465862f2) {
        if (uVar3 == 0x3d3a1210) {
          bVar4 = System_String__op_Equality(name,"Interpolate",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ad8 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interpolate_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Interpolate_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
              DAT_05702ad8 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x465862f1) &&
                (bVar4 = System_String__op_Equality(name,"Mass",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702acc == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mass_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Mass_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702acc = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x46697e49) {
        bVar4 = System_String__op_Equality(name,"FreezeXPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702acf == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeXPosition);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeXPosition_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702acf = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x56356721) &&
              (bVar4 = System_String__op_Equality(name,"CenterOfMass",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ad9 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CenterOfMass_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CenterOfMass_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          DAT_05702ad9 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x71a328af) {
      if (uVar3 == 0x6c6bed72) {
        bVar4 = System_String__op_Equality(name,"UseGravity",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702acd == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UseGravity_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UseGravity_g____s);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702acd = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x71a328ae) &&
              (bVar4 = System_String__op_Equality(name,"FreezeZRotation",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ad4 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeZRotation);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeZRotation_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          DAT_05702ad4 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x72ce1443) {
      bVar4 = System_String__op_Equality(name,"FreezeYRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ad3 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeYRotation);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeYRotation_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          DAT_05702ad3 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x7c2c901e) &&
            (bVar4 = System_String__op_Equality(name,"AngularVelocity",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702aca == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AngularVelocity);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AngularVelocity_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        DAT_05702aca = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xa2d06ea8) {
    if (uVar3 < 0x847c6253) {
      if (uVar3 < 0x835a3f57) {
        if (uVar3 == 0x835a3f56) {
          bVar4 = System_String__op_Equality(name,"IsKinematic",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702ad7 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsKinematic_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsKinematic_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
              DAT_05702ad7 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x7f2c2a34) &&
                (bVar4 = System_String__op_Equality(name,"Move",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702adf == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Move_b__27_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702adf = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x20);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x20);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x845e0946) {
        bVar4 = System_String__op_Equality(name,"AddExplosionForce",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ade == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddExplosionForce);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702ade = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x847c6252) &&
              (bVar4 = System_String__op_Equality(name,"MoveRotation",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ae1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveRotation_b__2);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702ae1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x85284035) {
      if (uVar3 == 0x84e08377) {
        bVar4 = System_String__op_Equality(name,"SweepTest",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ae4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SweepTest_b__32_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702ae4 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x85284034) &&
              (bVar4 = System_String__op_Equality(name,"PublishTransform",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ae3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PublishTransform);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702ae3 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x9b22be74) {
      bVar4 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ac6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Owner_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          DAT_05702ac6 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xa2d06ea7) &&
            (bVar4 = System_String__op_Equality(name,"MovePosition",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702ae0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MovePosition_b__2);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702ae0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xd9849708) {
    if (uVar3 < 0xc7889b05) {
      if (uVar3 == 0xba408252) {
        bVar4 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ac9 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Velocity_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Velocity_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
            DAT_05702ac9 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xc7889b04) &&
              (bVar4 = System_String__op_Equality(name,"ResetCenterOfMass",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ae2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetCenterOfMass);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702ae2 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xd3196eb5) {
      bVar4 = System_String__op_Equality(name,"CollisionDetectionMode",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ada == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CollisionDetect);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CollisionDetectio);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
          DAT_05702ada = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xd9849707) &&
            (bVar4 = System_String__op_Equality(name,"AngularDrag",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702acb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AngularDrag_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AngularDrag_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        DAT_05702acb = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xdb354279) {
    if (uVar3 == 0xdaf45b72) {
      bVar4 = System_String__op_Equality(name,"AddTorque",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702add == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddTorque_b__25_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702add = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xdb354278) &&
            (bVar4 = System_String__op_Equality(name,"FreezeAllRotations",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702ad5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeAllRotati);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeAllRotation);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        DAT_05702ad5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe27f342a) {
    bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702ac7 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
        DAT_05702ac7 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xf4450734) &&
          (bVar4 = System_String__op_Equality(name,"FreezeXRotation",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ad2 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeXRotation);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeXRotation_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
      DAT_05702ad2 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicRigidbodyBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x3df3000

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Owner(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ac6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Owner_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ac6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3df30a0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Position
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ac7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ac7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x3df3180

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Rotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ac8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ac8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x3df3260

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Velocity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ac9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Velocity_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Velocity_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ac9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity (const MethodInfo* method);
// 0x3df3340

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularVelocity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702aca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AngularVelocity);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AngularVelocity_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702aca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__AngularDrag
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag (const MethodInfo* method);
// 0x3df3420

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__AngularDrag
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702acb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AngularDrag_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AngularDrag_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702acb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Mass
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass (const MethodInfo* method);
// 0x3df3500

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Mass(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702acc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mass_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Mass_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702acc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__UseGravity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity (const MethodInfo* method);
// 0x3df35e0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__UseGravity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702acd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UseGravity_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UseGravity_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702acd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Gravity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity (const MethodInfo* method);
// 0x3df36c0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Gravity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ace == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gravity_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Gravity_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ace = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition (const MethodInfo* method);
// 0x3df37a0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702acf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeXPosition);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeXPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702acf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition (const MethodInfo* method);
// 0x3df3880

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeYPosition);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeYPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition (const MethodInfo* method);
// 0x3df3960

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeZPosition);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeZPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeXRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation (const MethodInfo* method);
// 0x3df3a40

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeXRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeXRotation);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeXRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeYRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation (const MethodInfo* method);
// 0x3df3b20

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeYRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeYRotation);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeYRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeZRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation (const MethodInfo* method);
// 0x3df3c00

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeZRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeZRotation);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeZRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllRotations
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations (const MethodInfo* method);
// 0x3df3ce0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllRotations
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeAllRotati);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeAllRotation);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__FreezeAllPositions
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions (const MethodInfo* method);
// 0x3df3dc0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__FreezeAllPositions
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FreezeAllPositi);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FreezeAllPosition);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__IsKinematic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic (const MethodInfo* method);
// 0x3df3ea0

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__IsKinematic
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsKinematic_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__IsKinematic_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__Interpolate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate (const MethodInfo* method);
// 0x3df3f80

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__Interpolate
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Interpolate_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Interpolate_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CenterOfMass
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass (const MethodInfo* method);
// 0x3df4060

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CenterOfMass
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ad9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CenterOfMass_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CenterOfMass_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ad9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__CollisionDetectionMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode (const MethodInfo* method);
// 0x3df4140

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__CollisionDetectionMode
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ada == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CollisionDetect);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CollisionDetectio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702ada = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreatePropertyBinding__DetectCollisions
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions (const MethodInfo* method);
// 0x3df4220

CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreatePropertyBinding__DetectCollisions
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702adb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetectCollision);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetectCollisions);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
    DAT_05702adb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicRigidbodyBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce (const MethodInfo* method);
// 0x3df4300

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddForce
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702adc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddForce_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702adc = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddTorque
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque (const MethodInfo* method);
// 0x3df4450

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddTorque
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702add == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddTorque_b__25_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702add = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__AddExplosionForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce (const MethodInfo* method);
// 0x3df45a0

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__AddExplosionForce
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ade == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddExplosionForce);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ade = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__Move
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move (const MethodInfo* method);
// 0x3df46f0

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__Move(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702adf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Move_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702adf = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MovePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition (const MethodInfo* method);
// 0x3df4840

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MovePosition
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ae0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MovePosition_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ae0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__MoveRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation (const MethodInfo* method);
// 0x3df4990

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__MoveRotation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ae1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveRotation_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ae1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__ResetCenterOfMass
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass (const MethodInfo* method);
// 0x3df4ae0

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__ResetCenterOfMass
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ae2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetCenterOfMass);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ae2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__PublishTransform
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform (const MethodInfo* method);
// 0x3df4c30

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__PublishTransform
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ae3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PublishTransform);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ae3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$__CreateMethodBinding__SweepTest
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest (const MethodInfo* method);
// 0x3df4d80

CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings____CreateMethodBinding__SweepTest
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *__this;
  
  if (DAT_05702ae4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SweepTest_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702ae4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRigidbodyBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRigidbodyBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRigidbodyBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRigidbodyBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3df4ed0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ae5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"FreezeAllPositions");
    il2cpp_init_method_metadata(&"FreezeAllRotations");
    il2cpp_init_method_metadata(&"PublishTransform");
    il2cpp_init_method_metadata(&"FreezeZRotation");
    il2cpp_init_method_metadata(&"Move");
    il2cpp_init_method_metadata(&"Gravity");
    il2cpp_init_method_metadata(&"Mass");
    il2cpp_init_method_metadata(&"CollisionDetectionMode");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"AngularVelocity");
    il2cpp_init_method_metadata(&"AddTorque");
    il2cpp_init_method_metadata(&"FreezeYPosition");
    il2cpp_init_method_metadata(&"IsKinematic");
    il2cpp_init_method_metadata(&"AddExplosionForce");
    il2cpp_init_method_metadata(&"FreezeYRotation");
    il2cpp_init_method_metadata(&"FreezeZPosition");
    il2cpp_init_method_metadata(&"MovePosition");
    il2cpp_init_method_metadata(&"Interpolate");
    il2cpp_init_method_metadata(&"ResetCenterOfMass");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"UseGravity");
    il2cpp_init_method_metadata(&"FreezeXPosition");
    il2cpp_init_method_metadata(&"Owner");
    il2cpp_init_method_metadata(&"Velocity");
    il2cpp_init_method_metadata(&"AddForce");
    il2cpp_init_method_metadata(&"AngularDrag");
    il2cpp_init_method_metadata(&"MoveRotation");
    il2cpp_init_method_metadata(&"FreezeXRotation");
    il2cpp_init_method_metadata(&"SweepTest");
    il2cpp_init_method_metadata(&"DetectCollisions");
    il2cpp_init_method_metadata(&"CenterOfMass");
    DAT_05702ae5 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Owner",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Velocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AngularVelocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AngularDrag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mass",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UseGravity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Gravity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeXPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeYPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeZPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeXRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeYRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeZRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeAllRotations",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FreezeAllPositions",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsKinematic",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Interpolate",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CenterOfMass",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CollisionDetectionMode",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DetectCollisions",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddForce",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddTorque",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddExplosionForce",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Move",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MovePosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ResetCenterOfMass",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PublishTransform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SweepTest",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_2_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5380

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Owner>g____getter_2_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    return (Il2CppObject *)(__i->fields).OwnerBuiltin;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df53a0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_3_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (DAT_05702aba == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702aba = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_position(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_3_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5420

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Position>g____setter_3_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ae6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_position
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df54b0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____getter_4_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Quaternion_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (DAT_05702abb == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
      DAT_05702abb = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_rotation(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_4_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5530

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____setter_4_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702ae7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ae7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_rotation
              (__this,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df55c0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Velocity>g____getter_5_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (DAT_05702abc == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702abc = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_velocity(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_5_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5640

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Velocity>g____setter_5_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702ae8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ae8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_velocity
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____getter_6_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df56d0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__AngularVelocity>g____getter_6_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (DAT_05702abd == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702abd = '\x01';
    }
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Rigidbody_o *)0x0) {
      value = UnityEngine_Rigidbody__get_angularVelocity(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularVelocity>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularVelocity_g____setter_6_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5750

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__AngularVelocity>g____setter_6_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702ae9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ae9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_angularVelocity
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____getter_7_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df57e0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__AngularDrag>g____getter_7_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__get_angularDrag(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__AngularDrag>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__AngularDrag_g____setter_7_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5820

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__AngularDrag>g____setter_7_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  float value;
  
  if (DAT_05702aea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aea = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_angularDrag(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____getter_8_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df58a0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Mass>g____getter_8_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__get_mass(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Mass>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Mass_g____setter_8_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df58e0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Mass>g____setter_8_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  float value;
  
  if (DAT_05702aeb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aeb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_mass(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____getter_9_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5960

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__UseGravity>g____getter_9_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__UseGravity>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__UseGravity_g____setter_9_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5990

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__UseGravity>g____setter_9_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *method_00;
  
  if (DAT_05702aec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aec = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity(__i,uVar1 & 0xff,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____getter_10_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5a10

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Gravity>g____getter_10_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702abf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata();
    DAT_05702abf = '\x01';
  }
  if ((char)(__i->fields)._gravity.fields.hasValue != '\0') {
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)(__i->fields)._gravity.fields.value.fields,
                        (MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Gravity>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Gravity_g____setter_10_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5a70

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Gravity>g____setter_10_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05702aed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aed = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____getter_11_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5af0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeXPosition>g____getter_11_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((byte)iVar1 >> 1,(undefined7)uStack_8) & 0x1ffffffffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXPosition>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXPosition_g____setter_11_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5b30

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeXPosition>g____setter_11_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702aee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aee = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xfffffffd;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 2;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____getter_12_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5bd0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeYPosition>g____getter_12_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((byte)iVar1 >> 2,(undefined7)uStack_8) & 0x1ffffffffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYPosition>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYPosition_g____setter_12_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5c10

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeYPosition>g____setter_12_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702aef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702aef = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xfffffffb;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 4;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____getter_13_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5cb0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeZPosition>g____getter_13_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((byte)iVar1 >> 3,(undefined7)uStack_8) & 0x1ffffffffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZPosition>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZPosition_g____setter_13_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5cf0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeZPosition>g____setter_13_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702af0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xfffffff7;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 8;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____getter_14_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5d90

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeXRotation>g____getter_14_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((byte)iVar1 >> 4,(undefined7)uStack_8) & 0x1ffffffffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeXRotation>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeXRotation_g____setter_14_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5dd0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeXRotation>g____setter_14_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702af1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xffffffef;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 0x10;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____getter_15_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5e70

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeYRotation>g____getter_15_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((byte)iVar1 >> 5,(undefined7)uStack_8) & 0x1ffffffffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeYRotation>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeYRotation_g____setter_15_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5eb0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeYRotation>g____setter_15_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702af2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xffffffdf;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 0x20;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____getter_16_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df5f50

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeZRotation>g____getter_16_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((byte)iVar1 >> 6,(undefined7)uStack_8) & 0x1ffffffffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeZRotation>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeZRotation_g____setter_16_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df5f90

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeZRotation>g____setter_16_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702af3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xffffffbf;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 0x40;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____getter_17_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df6030

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeAllRotations>g____getter_17_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((uVar1 & 0x70) == 0x70,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllRotations>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllRotations_g____setter_17_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df6070

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeAllRotations>g____setter_17_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702af4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xffffff8f;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 0x70;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____getter_18_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df6110

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeAllPositions>g____getter_18_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((uVar1 & 0xe) == 0xe,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__FreezeAllPositions>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__FreezeAllPositions_g____setter_18_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df6150

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__FreezeAllPositions>g____setter_18_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05702af5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uVar2 = UnityEngine_Rigidbody__get_constraints(__this,(MethodInfo *)0x0);
    value = uVar2 & 0xfffffff1;
    if ((char)bVar1 != '\0') {
      value = uVar2 | 0xe;
    }
    UnityEngine_Rigidbody__set_constraints(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____getter_19_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df61f0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__IsKinematic>g____getter_19_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Rigidbody__get_isKinematic(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__IsKinematic>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__IsKinematic_g____setter_19_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df6230

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__IsKinematic>g____setter_19_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  
  if (DAT_05702af6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_isKinematic(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____getter_20_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df62b0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Interpolate>g____getter_20_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  int32_t iVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    iVar1 = UnityEngine_Rigidbody__get_interpolation(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17(iVar1 != 0,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__Interpolate>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__Interpolate_g____setter_20_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df62f0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__Interpolate>g____setter_20_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  
  if (DAT_05702af7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_interpolation(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____getter_21_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df6370

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__CenterOfMass>g____getter_21_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    v = UnityEngine_Rigidbody__get_centerOfMass(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CenterOfMass>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CenterOfMass_g____setter_21_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df63a0

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__CenterOfMass>g____setter_21_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  
  if (DAT_05702af8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
     && (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_centerOfMass
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____getter_22_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df6430

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__CollisionDetectionMode>g____getter_22_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__get_collisionDetectionMode(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__CollisionDetectionMode>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__CollisionDetectionMode_g____setter_22_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df6470

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__CollisionDetectionMode>g____setter_22_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05702af9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702af9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    if (DAT_05702ac1 == '\0') {
      il2cpp_init_method_metadata(&TypeRef_CollisionDetectionMode);
      DAT_05702ac1 = '\x01';
    }
    handle.fields.value = TypeRef_CollisionDetectionMode.fields.value;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    aiStack_2c[0] = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_2c);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this = (__i->fields).Value;
      if (__this != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_collisionDetectionMode(__this,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid collision detection mode: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_CollisionDetectionMode);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____getter_23_0 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, const MethodInfo* method);
// 0x3df64f0

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__DetectCollisions>g____getter_23_0
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_Rigidbody__get_detectCollisions(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin.Bindings$$<__CreatePropertyBinding__DetectCollisions>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings_____CreatePropertyBinding__DetectCollisions_g____setter_23_1 (CustomLogic_CustomLogicRigidbodyBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3df6530

void CustomLogic_CustomLogicRigidbodyBuiltin_Bindings__<__CreatePropertyBinding__DetectCollisions>g____setter_23_1
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this;
  uint uVar1;
  
  if (DAT_05702afa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702afa = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_detectCollisions(__this,uVar1 & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df0f70

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._isGravityEnabled = 1;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, float mass, System_Nullable_Vector3__o gravity, bool freezeRotation, bool interpolate, const MethodInfo* method);
// 0x3df0f80

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,float mass,
               System_Nullable_Vector3__o gravity,bool_conflict freezeRotation,
               bool_conflict interpolate,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  uint uVar6;
  UnityEngine_Component_o *pUVar7;
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Rigidbody_o **ppUVar8;
  char cVar9;
  
  if (DAT_05702ab8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetOrAddComponent_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&TypeInfo_Rigidbody);
    DAT_05702ab8 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._isGravityEnabled = 1;
  if ((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar2 = (owner->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) {
    pUVar7 = (UnityEngine_Component_o *)
             CustomLogic_BuiltinComponentInstance__GetOrAddComponent<object>
                       ((pMVar2->fields).GameObject,MethodInfo_Rigidbody_GetOrAddComponent_Rigidbody);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this,pUVar7,(MethodInfo *)0x0);
    (__this->fields).OwnerBuiltin = (CustomLogic_BuiltinClassInstance_o *)owner;
    il2cpp_runtime_glue(&(__this->fields).OwnerBuiltin,owner);
    pMVar2 = (owner->fields).Value;
    if (pMVar2 != (Map_MapObject_o *)0x0) {
      (__this->fields).AttachedGameObject = (pMVar2->fields).GameObject;
      il2cpp_runtime_glue(&(__this->fields).AttachedGameObject);
      pIVar5 = TypeInfo_Rigidbody;
      pUVar7 = (__this->fields).Component;
      if (pUVar7 == (UnityEngine_Component_o *)0x0) {
        (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Rigidbody->_2).naturalAligment;
        if (((pUVar7->klass->_2).naturalAligment < bVar1) ||
           ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Rigidbody)) {
LAB_03df11b9:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pUVar7,pIVar5);
        }
        (__this->fields).Value = (UnityEngine_Rigidbody_o *)pUVar7;
        if (((pUVar7->klass->_2).naturalAligment < bVar1) ||
           ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar5)) goto LAB_03df11b9;
      }
      ppUVar8 = &(__this->fields).Value;
      il2cpp_runtime_glue();
      if ((char)gravity.fields.hasValue == '\0') {
        value = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
        method_00 = extraout_RDX;
      }
      else {
        value = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                          (gravity.fields.value.fields,(MethodInfo *)0x0);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity(__this,value,method_00);
      CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity(__this,1,method_01);
      pUVar3 = (__this->fields).Value;
      if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
        uVar6 = UnityEngine_Rigidbody__get_constraints(pUVar3,(MethodInfo *)0x0);
        cVar9 = (char)freezeRotation;
        uVar4 = uVar6 & 0xffffffbf;
        if (cVar9 != '\0') {
          uVar4 = uVar6 | 0x40;
        }
        UnityEngine_Rigidbody__set_constraints(pUVar3,uVar4,(MethodInfo *)0x0);
        pUVar3 = *ppUVar8;
        if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
          uVar6 = UnityEngine_Rigidbody__get_constraints(pUVar3,(MethodInfo *)0x0);
          uVar4 = uVar6 & 0xffffffdf;
          if (cVar9 != '\0') {
            uVar4 = uVar6 | 0x20;
          }
          UnityEngine_Rigidbody__set_constraints(pUVar3,uVar4,(MethodInfo *)0x0);
          pUVar3 = *ppUVar8;
          if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
            uVar6 = UnityEngine_Rigidbody__get_constraints(pUVar3,(MethodInfo *)0x0);
            uVar4 = uVar6 & 0xffffffef;
            if (cVar9 != '\0') {
              uVar4 = uVar6 | 0x10;
            }
            UnityEngine_Rigidbody__set_constraints(pUVar3,uVar4,(MethodInfo *)0x0);
            if (*ppUVar8 != (UnityEngine_Rigidbody_o *)0x0) {
              UnityEngine_Rigidbody__set_interpolation
                        (*ppUVar8,interpolate & 0xff,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin___ctor (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x3df1530

void CustomLogic_CustomLogicRigidbodyBuiltin___ctor
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *owner,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *pUVar2;
  Il2CppClass *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (DAT_05702ab9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Rigidbody);
    DAT_05702ab9 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._isGravityEnabled = 1;
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)rb,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_glue(&(__this->fields).OwnerBuiltin);
  if (rb == (UnityEngine_Rigidbody_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rb,(MethodInfo *)0x0);
  (__this->fields).AttachedGameObject = pUVar4;
  il2cpp_runtime_glue(&(__this->fields).AttachedGameObject,pUVar4);
  pIVar3 = TypeInfo_Rigidbody;
  pUVar2 = (__this->fields).Component;
  if (pUVar2 != (UnityEngine_Component_o *)0x0) {
    bVar1 = (TypeInfo_Rigidbody->_2).naturalAligment;
    if ((bVar1 <= (pUVar2->klass->_2).naturalAligment) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Rigidbody)) {
      (__this->fields).Value = (UnityEngine_Rigidbody_o *)pUVar2;
      if ((bVar1 <= (pUVar2->klass->_2).naturalAligment) &&
         ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) goto LAB_03df1601;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar2,pIVar3);
  }
  (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
LAB_03df1601:
  il2cpp_runtime_glue(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Owner
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Owner (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1620

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Owner
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).OwnerBuiltin;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Position (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1630

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Position
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702aba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702aba = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    value = UnityEngine_Rigidbody__get_position(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Position (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df16b0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Position
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_position
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Rotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df16e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Rotation
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702abb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_05702abb = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    value = UnityEngine_Rigidbody__get_rotation(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
    CustomLogic_CustomLogicQuaternionBuiltin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Rotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x3df1750

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Rotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_rotation
              (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Velocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1780

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Velocity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702abc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702abc = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    value = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Velocity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Velocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df1800

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Velocity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_velocity
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularVelocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1830

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularVelocity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702abd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702abd = '\x01';
  }
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    value = UnityEngine_Rigidbody__get_angularVelocity(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularVelocity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularVelocity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df18b0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularVelocity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_angularVelocity
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_AngularDrag
// il2cpp: float CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularDrag (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df18e0

float CustomLogic_CustomLogicRigidbodyBuiltin__get_AngularDrag
                (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    fVar1 = UnityEngine_Rigidbody__get_angularDrag(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_AngularDrag
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularDrag (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3df1900

void CustomLogic_CustomLogicRigidbodyBuiltin__set_AngularDrag
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_angularDrag(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Mass
// il2cpp: float CustomLogic_CustomLogicRigidbodyBuiltin__get_Mass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1920

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Mass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Mass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3df1940

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Mass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_mass(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_UseGravity
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_UseGravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1960

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_UseGravity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isGravityEnabled);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_UseGravity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df13b0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_UseGravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  bool_conflict bVar1;
  
  if (DAT_05702abe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702abe = '\x01';
  }
  *(char *)&(__this->fields)._isGravityEnabled = (char)value;
  x = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    if ((char)bVar1 == '\0') {
      UnityEngine_Rigidbody__set_useGravity(__this_00,value & 0xff,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Rigidbody__set_useGravity(__this_00,0,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Behaviour_o *)(__this->fields).CustomGravity;
    if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_01,value & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Gravity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_Gravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1970

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_Gravity
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (DAT_05702abf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3_GetValueOrDefault);
    il2cpp_init_method_metadata();
    DAT_05702abf = '\x01';
  }
  if ((char)(__this->fields)._gravity.fields.hasValue != '\0') {
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit
                       ((UnityEngine_Vector3_o)(__this->fields)._gravity.fields.value.fields,
                        (MethodInfo *)0x0);
    return pCVar1;
  }
  return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Gravity
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df11d0

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Gravity
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_ConstantForce_o **ppUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ConstantForce_o *pUVar7;
  UnityEngine_Vector3_o value_00;
  System_Nullable_Vector3__o __this_02;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_05702ac0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ConstantForce_AddComponent_ConstantForce);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702ac0 = '\x01';
  }
  if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    uVar2 = (value->fields).Value.fields.x;
    uVar3 = (value->fields).Value.fields.y;
    __this_02.fields.value.fields.z = (float)uVar3;
    __this_02.fields.value.fields.y = (float)uVar2;
    local_38 = 0;
    uStack_30 = 0;
    value_00.fields.y = 0.0;
    value_00.fields.z = 0.0;
    value_00.fields.x = (value->fields).Value.fields.z;
    __this_02.fields._0_8_ = &local_38;
    System_Nullable<Vector3>___ctor(__this_02,value_00,MethodInfo_Nullable_1_UnityEngine_Vector3);
    local_48 = local_38;
    uStack_40 = uStack_30;
  }
  if (__this != (CustomLogic_CustomLogicRigidbodyBuiltin_o *)0x0) {
    local_48._4_4_ = (float)((ulong)local_48 >> 0x20);
    uStack_40._4_4_ = (float)((ulong)uStack_40 >> 0x20);
    (__this->fields)._gravity.fields.hasValue = (bool_conflict)local_48;
    (__this->fields)._gravity.fields.value.fields.x = local_48._4_4_;
    (__this->fields)._gravity.fields.value.fields.y = (float)uStack_40;
    (__this->fields)._gravity.fields.value.fields.z = uStack_40._4_4_;
    pUVar4 = (UnityEngine_Object_o *)(__this->fields).CustomGravity;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields).CustomGravity;
    if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      bVar6 = UnityEngine_Object__op_Inequality
                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if ((UnityEngine_Behaviour_o *)*ppUVar1 == (UnityEngine_Behaviour_o *)0x0)
        goto LAB_03df13a5;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)*ppUVar1,0,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)*ppUVar1;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
        *ppUVar1 = (UnityEngine_ConstantForce_o *)0x0;
        il2cpp_runtime_glue(ppUVar1,0);
      }
      pUVar5 = (__this->fields).Value;
      if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_useGravity
                  (pUVar5,(uint)(byte)(__this->fields)._isGravityEnabled,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        __this_00 = (UnityEngine_Component_o *)(__this->fields).Value;
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03df13a5;
        pUVar7 = (UnityEngine_ConstantForce_o *)
                 UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_ConstantForce_AddComponent_ConstantForce);
        (__this->fields).CustomGravity = pUVar7;
        il2cpp_runtime_glue(ppUVar1);
        pUVar5 = (__this->fields).Value;
        if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03df13a5;
        UnityEngine_Rigidbody__set_useGravity(pUVar5,0,(MethodInfo *)0x0);
      }
      if (*ppUVar1 != (UnityEngine_ConstantForce_o *)0x0) {
        UnityEngine_ConstantForce__set_force
                  (*ppUVar1,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        if ((UnityEngine_Behaviour_o *)*ppUVar1 != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)*ppUVar1,
                     (uint)(byte)(__this->fields)._isGravityEnabled,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03df13a5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df19c0

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXPosition
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uVar1 & 2) >> 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df19e0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 2;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xfffffffd;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1a20

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYPosition
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uVar1 & 4) >> 2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1a40

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 4;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xfffffffb;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZPosition
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1a80

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZPosition
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uVar1 & 8) >> 3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZPosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZPosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1aa0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZPosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 8;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xfffffff7;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeXRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1ae0

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeXRotation
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uVar1 & 0x10) >> 4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeXRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df14d0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeXRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 0x10;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xffffffef;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeYRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1b00

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeYRotation
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uVar1 & 0x20) >> 5;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeYRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1490

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeYRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 0x20;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xffffffdf;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeZRotation
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1b20

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeZRotation
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uVar1 & 0x40) >> 6;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeZRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1450

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeZRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 0x40;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xffffffbf;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllRotations
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllRotations (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1b40

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllRotations
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uint)((uVar1 & 0x70) == 0x70);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllRotations
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllRotations (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1b70

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllRotations
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 0x70;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xffffff8f;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_FreezeAllPositions
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllPositions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1bb0

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_FreezeAllPositions
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    return (uint)((uVar1 & 0xe) == 0xe);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_FreezeAllPositions
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllPositions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1be0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_FreezeAllPositions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  uint value_00;
  uint uVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar1 = UnityEngine_Rigidbody__get_constraints(__this_00,(MethodInfo *)0x0);
    value_00 = uVar1 | 0xe;
    if ((char)value == '\0') {
      value_00 = uVar1 & 0xfffffff1;
    }
    UnityEngine_Rigidbody__set_constraints(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsKinematic
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsKinematic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1c20

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_IsKinematic
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    bVar1 = UnityEngine_Rigidbody__get_isKinematic(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_IsKinematic
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_IsKinematic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1c40

void CustomLogic_CustomLogicRigidbodyBuiltin__set_IsKinematic
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_isKinematic(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_Interpolate
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_Interpolate (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1c60

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_Interpolate
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    iVar1 = UnityEngine_Rigidbody__get_interpolation(__this_00,(MethodInfo *)0x0);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_Interpolate
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_Interpolate (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1510

void CustomLogic_CustomLogicRigidbodyBuiltin__set_Interpolate
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_interpolation(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_CenterOfMass
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_CenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1c80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_CenterOfMass
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    v = UnityEngine_Rigidbody__get_centerOfMass(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_CenterOfMass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_CenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df1ca0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_CenterOfMass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_centerOfMass
              (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_CollisionDetectionMode
// il2cpp: int32_t CustomLogic_CustomLogicRigidbodyBuiltin__get_CollisionDetectionMode (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1cd0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_CollisionDetectionMode
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_CollisionDetectionMode (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3df1cf0

void CustomLogic_CustomLogicRigidbodyBuiltin__set_CollisionDetectionMode
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05702ac1 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CollisionDetectionMode);
    DAT_05702ac1 = '\x01';
  }
  handle.fields.value = TypeRef_CollisionDetectionMode.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields).Value;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_collisionDetectionMode(__this_00,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iStack_30 = value;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid collision detection mode: {0}");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
  System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_CollisionDetectionMode);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar4);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_DetectCollisions
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_DetectCollisions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1e30

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_DetectCollisions
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    bVar1 = UnityEngine_Rigidbody__get_detectCollisions(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$set_DetectCollisions
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__set_DetectCollisions (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df1e50

void CustomLogic_CustomLogicRigidbodyBuiltin__set_DetectCollisions
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__set_detectCollisions(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddForce
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddForce (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* force, int32_t forceMode, CustomLogic_CustomLogicVector3Builtin_o* atPoint, const MethodInfo* method);
// 0x3df1e70

void CustomLogic_CustomLogicRigidbodyBuiltin__AddForce
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *force,int32_t forceMode,
               CustomLogic_CustomLogicVector3Builtin_o *atPoint,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  UnityEngine_Rigidbody_o *__this_00;
  
  if (force != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    __this_00 = (__this->fields).Value;
    pUVar1 = &(force->fields).Value;
    if (atPoint == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__AddForce
                  (__this_00,(UnityEngine_Vector3_o)pUVar1->fields,forceMode,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__AddForceAtPosition
                (__this_00,(UnityEngine_Vector3_o)pUVar1->fields,
                 (UnityEngine_Vector3_o)(atPoint->fields).Value.fields,forceMode,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddTorque
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddTorque (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* torque, int32_t forceMode, const MethodInfo* method);
// 0x3df1ec0

void CustomLogic_CustomLogicRigidbodyBuiltin__AddTorque
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *torque,int32_t forceMode,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((torque != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__AddTorque
              (__this_00,(UnityEngine_Vector3_o)(torque->fields).Value.fields,forceMode,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$AddExplosionForce
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__AddExplosionForce (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, float explosionForce, CustomLogic_CustomLogicVector3Builtin_o* explosionPosition, float explosionRadius, float upwardsModifier, int32_t forceMode, const MethodInfo* method);
// 0x3df1ef0

void CustomLogic_CustomLogicRigidbodyBuiltin__AddExplosionForce
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,float explosionForce,
               CustomLogic_CustomLogicVector3Builtin_o *explosionPosition,float explosionRadius,
               float upwardsModifier,int32_t forceMode,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((explosionPosition != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__AddExplosionForce
              (__this_00,explosionForce,
               (UnityEngine_Vector3_o)(explosionPosition->fields).Value.fields,explosionRadius,
               upwardsModifier,forceMode,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$Move
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__Move (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x3df1f20

void CustomLogic_CustomLogicRigidbodyBuiltin__Move
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if (((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (rotation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__Move
              (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,
               (UnityEngine_Quaternion_o)(rotation->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$MovePosition
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__MovePosition (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3df1f60

void CustomLogic_CustomLogicRigidbodyBuiltin__MovePosition
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__MovePosition
              (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$MoveRotation
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__MoveRotation (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x3df1f90

void CustomLogic_CustomLogicRigidbodyBuiltin__MoveRotation
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  if ((rotation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__MoveRotation
              (__this_00,(UnityEngine_Quaternion_o)(rotation->fields).Value.fields,(MethodInfo *)0x0
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$ResetCenterOfMass
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__ResetCenterOfMass (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1fc0

void CustomLogic_CustomLogicRigidbodyBuiltin__ResetCenterOfMass
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__ResetCenterOfMass(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$PublishTransform
// il2cpp: void CustomLogic_CustomLogicRigidbodyBuiltin__PublishTransform (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df1fe0

void CustomLogic_CustomLogicRigidbodyBuiltin__PublishTransform
               (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    UnityEngine_Rigidbody__PublishTransform(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$SweepTest
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* direction, float distance, const MethodInfo* method);
// 0x3df2000

Il2CppObject *
CustomLogic_CustomLogicRigidbodyBuiltin__SweepTest
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *direction,float distance,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar2 [16];
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  UnityEngine_RaycastHit_o __this_04;
  UnityEngine_RaycastHit_o __this_05;
  bool_conflict bVar3;
  UnityEngine_Collider_o *pUVar4;
  CustomLogic_BuiltinClassInstance_o *pCVar5;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_06;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  System_Object_array *parameters;
  long lVar7;
  undefined8 uVar8;
  CustomLogic_BuiltinClassInstance_o *pCVar9;
  bool bVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  undefined1 auVar14 [16];
  undefined1 in_stack_ffffffffffffff88 [12];
  undefined4 in_stack_ffffffffffffff94;
  float in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffff9c;
  float fVar15;
  float fVar16;
  undefined8 in_stack_ffffffffffffffa0;
  Il2CppMethodPointer pIVar17;
  float fVar18;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_07;
  
  if (DAT_05702ac2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702ac2 = '\x01';
    in_stack_ffffffffffffff98 = distance;
  }
  pIVar17 = (Il2CppMethodPointer)0x0;
  fVar18 = 0.0;
  if ((direction != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).Value, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    bVar3 = UnityEngine_Rigidbody__SweepTest
                      (__this_00,(UnityEngine_Vector3_o)(direction->fields).Value.fields,
                       (UnityEngine_RaycastHit_o *)&stack0xffffffffffffffa8,distance,
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff94;
      __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
      __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
      __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
      __this_01.fields.m_Normal.fields.y = in_stack_ffffffffffffff98;
      __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff9c;
      __this_01.fields.m_FaceID = (int)in_stack_ffffffffffffffa0;
      __this_01.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
      __this_01.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar17;
      __this_01.fields.m_Collider = (int32_t)fVar18;
      pUVar4 = UnityEngine_RaycastHit__get_collider
                         (__this_01,(MethodInfo *)&stack0xffffffffffffffa8);
      pCVar5 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar4,(MethodInfo *)0x0);
      if (pCVar5 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_06 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_06,(MethodInfo *)0x0);
        bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
        pCVar9 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        if ((bVar1 <= (pCVar5->klass->_2).naturalAligment) &&
           (pCVar9 = (CustomLogic_BuiltinClassInstance_o *)0x0,
           (pCVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
          pCVar9 = pCVar5;
        }
        if (__this_06 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          bVar10 = false;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_06,(uint)(pCVar9 != (CustomLogic_BuiltinClassInstance_o *)0x0),
                     (MethodInfo *)0x0);
          bVar1 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          if (bVar1 <= (pCVar5->klass->_2).naturalAligment) {
            bVar10 = (pCVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicMapObjectBuiltin;
          }
          *(bool *)((long)&(__this_06->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               bVar10;
          __this_02.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff94;
          __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
          __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
          __this_02.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
          __this_02.fields.m_Normal.fields.y = in_stack_ffffffffffffff98;
          __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff9c;
          __this_02.fields.m_FaceID = (int)in_stack_ffffffffffffffa0;
          __this_02.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
          __this_02.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar17;
          __this_02.fields.m_Collider = (int32_t)fVar18;
          UVar13 = UnityEngine_RaycastHit__get_point
                             (__this_02,(MethodInfo *)&stack0xffffffffffffffa8);
          fVar11 = UVar13.fields.z;
          auVar14._8_4_ = extraout_XMM0_Dc;
          auVar14._0_8_ = UVar13.fields._0_8_;
          auVar14._12_4_ = extraout_XMM0_Dd;
          fVar12 = UVar13.fields.x;
          fVar15 = UVar13.fields.y;
          uVar8 = auVar14._8_8_;
          pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          UVar13.fields.y = fVar15;
          UVar13.fields.x = fVar12;
          UVar13.fields.z = fVar11;
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar6,UVar13,(MethodInfo *)0x0);
          (__this_06->fields)._Point_k__BackingField = pCVar6;
          il2cpp_runtime_glue(&(__this_06->fields)._Point_k__BackingField);
          __this_03.fields.m_Normal.fields.x = fVar11;
          __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
          __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
          __this_03.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
          __this_03.fields.m_Normal.fields.y = fVar12;
          __this_03.fields.m_Normal.fields.z = fVar15;
          __this_03.fields.m_FaceID = (int)uVar8;
          __this_03.fields.m_Distance = (float)(int)((ulong)uVar8 >> 0x20);
          __this_03.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar17;
          __this_03.fields.m_Collider = (int32_t)fVar18;
          UVar13 = UnityEngine_RaycastHit__get_normal
                             (__this_03,(MethodInfo *)&stack0xffffffffffffffa8);
          fVar12 = UVar13.fields.z;
          auVar2._8_4_ = extraout_XMM0_Dc_00;
          auVar2._0_8_ = UVar13.fields._0_8_;
          auVar2._12_4_ = extraout_XMM0_Dd_00;
          fVar15 = UVar13.fields.x;
          fVar16 = UVar13.fields.y;
          uVar8 = auVar2._8_8_;
          pCVar6 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.y = fVar16;
          value.fields.x = fVar15;
          value.fields.z = fVar12;
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar6,value,(MethodInfo *)0x0);
          (__this_06->fields)._Normal_k__BackingField = pCVar6;
          il2cpp_runtime_glue(&(__this_06->fields)._Normal_k__BackingField,pCVar6);
          __this_04.fields.m_Normal.fields.x = fVar12;
          __this_04.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
          __this_04.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
          __this_04.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
          __this_04.fields.m_Normal.fields.y = fVar15;
          __this_04.fields.m_Normal.fields.z = fVar16;
          __this_04.fields.m_FaceID = (int)uVar8;
          __this_04.fields.m_Distance = (float)(int)((ulong)uVar8 >> 0x20);
          __this_04.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar17;
          __this_04.fields.m_Collider = (int32_t)fVar18;
          fVar11 = UnityEngine_RaycastHit__get_distance
                             (__this_04,(MethodInfo *)&stack0xffffffffffffffa8);
          (__this_06->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar11;
          (__this_06->fields)._Collider_k__BackingField = pCVar5;
          il2cpp_runtime_glue(&(__this_06->fields)._Collider_k__BackingField,pCVar5);
          parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_05.fields.m_Normal.fields.x = fVar12;
          __this_05.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
          __this_05.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
          __this_05.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
          __this_05.fields.m_Normal.fields.y = fVar15;
          __this_05.fields.m_Normal.fields.z = fVar16;
          __this_05.fields.m_FaceID = (int)uVar8;
          __this_05.fields.m_Distance = (float)(int)((ulong)uVar8 >> 0x20);
          __this_05.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar17;
          __this_05.fields.m_Collider = (int32_t)fVar18;
          pUVar4 = UnityEngine_RaycastHit__get_collider
                             (__this_05,(MethodInfo *)&stack0xffffffffffffffa8);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar4 != (UnityEngine_Collider_o *)0x0) &&
               (lVar7 = il2cpp_runtime_glue(pUVar4,(((parameters->obj).klass)->_1).element_class),
               lVar7 == 0)) {
              uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar8,0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar4;
              il2cpp_runtime_glue(parameters->m_Items,pUVar4);
              auVar14 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
              __this_07 = auVar14._0_8_;
              CustomLogic_CustomLogicColliderBuiltin___ctor(__this_07,parameters,auVar14._8_8_);
              (__this_06->fields)._ColliderInfo_k__BackingField = __this_07;
              il2cpp_runtime_glue(&(__this_06->fields)._ColliderInfo_k__BackingField,__this_07);
              return (Il2CppObject *)__this_06;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        goto LAB_03df22e0;
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03df22e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRigidbodyBuiltin__get_ClassName (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df2300

System_String_o *
CustomLogic_CustomLogicRigidbodyBuiltin__get_ClassName
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702ac3 == '\0') {
    il2cpp_init_method_metadata(&"RigidbodyBuiltin");
    DAT_05702ac3 = '\x01';
  }
  return "RigidbodyBuiltin";
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsAbstract (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df2330

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_IsStatic (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df2340

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRigidbodyBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRigidbodyBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRigidbodyBuiltin_o* __this, const MethodInfo* method);
// 0x3df2350

bool_conflict
CustomLogic_CustomLogicRigidbodyBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRigidbodyBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// Type: CustomLogic.CustomLogicAnimationBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimationBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnimationBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f08360

CustomLogic_CustomLogicAnimationBuiltin_o *
CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843452e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
    Il2CppMethodInitialized_1843452e0 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnimationBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0c940

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843452ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452ef = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09d60

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843452f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      local_res18[0] = UnityEngine_Animation__IsPlaying(__this_00,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0acd0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Animation_o *pUVar3;
  int32_t value;
  System_String_o *animation;
  UnityEngine_AnimationState_o *__this_00;
  float fadeLength;
  
  if (Il2CppMethodInitialized_1843452f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f0ae49:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      fadeLength = 0.1;
    }
    else {
      if (uVar1 < 2) goto label_181f0ae49;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fadeLength = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (pIVar2,(MethodInfo_66ED40 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    value = 0;
    uVar1 = (uint)__a->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_181f0ae49;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                        );
    }
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (pUVar3 = (__c->fields).Value, pUVar3 != (UnityEngine_Animation_o *)0x0)) {
      UnityEngine_Animation__CrossFade(pUVar3,animation,fadeLength,(MethodInfo *)0x0);
      pUVar3 = (__c->fields).Value;
      if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
        __this_00 = UnityEngine_Animation__get_Item(pUVar3,animation,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_layer(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a8f0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Animation_o *pUVar3;
  int32_t value;
  System_String_o *animation;
  UnityEngine_AnimationState_o *pUVar4;
  float value_00;
  float fadeLength;
  
  if (Il2CppMethodInitialized_1843452f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0aab5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[1],
                            (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        fadeLength = 0.1;
      }
      else {
        if (uVar1 < 3) goto label_181f0aabb;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        fadeLength = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               (pIVar2,(MethodInfo_66ED40 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      value = 0;
      uVar1 = (uint)__a->max_length;
      if (3 < (int)uVar1) {
        if (uVar1 < 4) goto label_181f0aabb;
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (pIVar2,(MethodInfo_66E9A0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      }
      if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
         (pUVar3 = (__c->fields).Value, pUVar3 != (UnityEngine_Animation_o *)0x0)) {
        UnityEngine_Animation__CrossFade(pUVar3,animation,fadeLength,(MethodInfo *)0x0);
        pUVar3 = (__c->fields).Value;
        if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
          pUVar4 = UnityEngine_Animation__get_Item(pUVar3,animation,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_layer(pUVar4,value,(MethodInfo *)0x0);
            pUVar3 = (__c->fields).Value;
            if (pUVar3 != (UnityEngine_Animation_o *)0x0) {
              pUVar4 = UnityEngine_Animation__get_Item(pUVar3,animation,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_AnimationState_o *)0x0) {
                UnityEngine_AnimationState__set_normalizedTime(pUVar4,value_00,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
          }
        }
      }
      goto label_181f0aab5;
    }
  }
label_181f0aabb:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationQueued>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0aad0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *animation;
  
  if (Il2CppMethodInitialized_1843452f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      UnityEngine_Animation__PlayQueued(__this_00,animation,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopAnimation>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c180

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_1843452f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    name = (System_String_o *)0x0;
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
    }
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      if (name != (System_String_o *)0x0) {
        UnityEngine_Animation__Stop_2eadec0(__this_00,name,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      UnityEngine_Animation__Stop(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b520

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_1843452f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0b608:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
        __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_speed(__this_01,value,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_181f0b608;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08f90

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        local_res18[0] = UnityEngine_AnimationState__get_speed(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08ca0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        local_res18[0] = UnityEngine_AnimationState__get_length(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08d70

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        local_res18[0] = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b420

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_1843452f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452f9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0b508:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
        __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_normalizedTime(__this_01,value,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_181f0b508;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeight>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0bc90

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_1843452fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452fa = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0bd78:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
        __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
          UnityEngine_AnimationState__set_weight(__this_01,value,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      goto label_181f0bd78;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetWeight>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09c90

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452fb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        local_res18[0] = UnityEngine_AnimationState__get_weight(__this_01,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ee3f80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicAnimationBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843452e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"StopAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationQueued");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    Il2CppMethodInitialized_1843452e1 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x55aebb4f) {
    if (uVar3 < 0x1c21234c) {
      if (uVar3 == 0x812156f) {
        bVar2 = System_String__op_Equality(name,"SetAnimationNormalizedTime",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee4e23;
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452eb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843452eb = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__11_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__11_0 =
             (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__11_0
        ;
      }
      else if (uVar3 == 0x1ae30f5a) {
        bVar2 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee4e23;
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452e8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843452e8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__8_0;
      }
      else {
        if (uVar3 != 0x1c21234b) goto label_181ee4e23;
        bVar2 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee4e23;
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452ea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843452ea = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__10_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
        if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__10_0 =
             (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__10_0
        ;
      }
    }
    else if (uVar3 == 0x492a3ccf) {
      bVar2 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee4e23;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452e9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843452e9 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__9_0;
    }
    else if (uVar3 == 0x4f3aab3d) {
      bVar2 = System_String__op_Equality(name,"StopAnimation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee4e23;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452e6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843452e6 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__6_0;
    }
    else {
      if (uVar3 != 0x55aebb4e) goto label_181ee4e23;
      bVar2 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee4e23;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452e4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843452e4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__4_0;
    }
  }
  else if (uVar3 < 0xe1cff600) {
    if (uVar3 == 0xcb515bd3) {
      bVar2 = System_String__op_Equality(name,"GetWeight",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee4e23;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452ed == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843452ed = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__13_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__13_0 =
           (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__13_0;
    }
    else if (uVar3 == 0xd64c477b) {
      bVar2 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee4e23;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452e3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843452e3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__3_0;
    }
    else {
      if (uVar3 != 0xe1cff5ff) goto label_181ee4e23;
      bVar2 = System_String__op_Equality(name,"SetWeight",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee4e23;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452ec == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843452ec = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
      if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__12_0;
    }
  }
  else if (uVar3 == 0xe4b35065) {
    bVar2 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ee4e23;
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843452e2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_1843452e2 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else if (uVar3 == 0xe5b11b66) {
    bVar2 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ee4e23;
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843452e7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_1843452e7 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__7_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__7_0;
  }
  else {
    if (uVar3 != 0xf6be6fea) {
label_181ee4e23:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnimationBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    bVar2 = System_String__op_Equality(name,"PlayAnimationQueued",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ee4e23;
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843452e5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_1843452e5 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__5_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee4df4;
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__5_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181ee4df4:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x181ef65a0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x181ef7690

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x181ef7450

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationQueued
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued (const MethodInfo* method);
// 0x181ef7570

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__StopAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation (const MethodInfo* method);
// 0x181ef95a0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x181ef8440

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x181ef55c0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x181ef5130

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x181ef5370

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime (const MethodInfo* method);
// 0x181ef8320

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight (const MethodInfo* method);
// 0x181ef8d70

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight (const MethodInfo* method);
// 0x181ef6480

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843452ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimationBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicAnimationBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181eff500

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843452ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"StopAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationQueued");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    Il2CppMethodInitialized_1843452ee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationQueued",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAnimationSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationNormalizedTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAnimationNormalizedTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetWeight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetWeight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void
CustomLogic_CustomLogicAnimationBuiltin___ctor(CustomLogic_CustomLogicAnimationBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animation_o* animation, const MethodInfo* method);
// 0x181f01450

void CustomLogic_CustomLogicAnimationBuiltin___ctor_1f01450
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Animation_o *animation,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_Animation_o *pUVar2;
  UnityEngine_Animation_o *value;
  
  if (Il2CppMethodInitialized_1843452de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animation);
    Il2CppMethodInitialized_1843452de = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animation,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,owner);
  pUVar1 = (UnityEngine_Animation_o *)(__this->fields).Component;
  value = (UnityEngine_Animation_o *)0x0;
  if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Animation_o *)0x0;
  }
  else {
    pUVar2 = value;
    if (pUVar1->klass == TypeInfo_UnityEngine_Animation) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityEngine_Animation_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,TypeInfo_UnityEngine_Animation);
    }
    (__this->fields).Value = pUVar2;
    if (pUVar1->klass == TypeInfo_UnityEngine_Animation) {
      value = pUVar1;
    }
    if (value == (UnityEngine_Animation_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar1,TypeInfo_UnityEngine_Animation);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__IsPlaying (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f01220

bool CustomLogic_CustomLogicAnimationBuiltin__IsPlaying
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    bVar1 = UnityEngine_Animation__IsPlaying(__this_00,anim,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x181f012f0

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float fade,
               int32_t layer,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_AnimationState_o *__this_00;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar1,anim,fade,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      __this_00 = UnityEngine_Animation__get_Item(pUVar1,anim,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_layer(__this_00,layer,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x181f01240

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               float fade,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_AnimationState_o *pUVar2;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__CrossFade(pUVar1,anim,fade,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
      pUVar2 = UnityEngine_Animation__get_Item(pUVar1,anim,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__set_layer(pUVar2,layer,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 != (UnityEngine_Animation_o *)0x0) {
          pUVar2 = UnityEngine_Animation__get_Item(pUVar1,anim,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(pUVar2,normalizedTime,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationQueued
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f012d0

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__PlayQueued(__this_00,anim,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$StopAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f01420

void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animation_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (anim != (System_String_o *)0x0) {
    UnityEngine_Animation__Stop_2eadec0(__this_00,anim,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Animation__Stop(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x181f013a0

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,float speed,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_speed(__this_01,speed,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f011c0

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_speed(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f01160

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_length(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f01190

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationNormalizedTime
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, const MethodInfo* method);
// 0x181f01360

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_normalizedTime(__this_01,normalizedTime,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetWeight
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float weight, const MethodInfo* method);
// 0x181f013e0

void CustomLogic_CustomLogicAnimationBuiltin__SetWeight
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float weight,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      UnityEngine_AnimationState__set_weight(__this_01,weight,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetWeight
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f011f0

float CustomLogic_CustomLogicAnimationBuiltin__GetWeight
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  UnityEngine_AnimationState_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    __this_01 = UnityEngine_Animation__get_Item(__this_00,anim,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
      fVar1 = UnityEngine_AnimationState__get_weight(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimationBuiltin__get_ClassName (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x181f01520

System_String_o *
CustomLogic_CustomLogicAnimationBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843452df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Animation");
    Il2CppMethodInitialized_1843452df = '\x01';
  }
  return "Animation";
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract(CustomLogic_CustomLogicAnimationBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic(CustomLogic_CustomLogicAnimationBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicAnimationBuiltin_o* __this, MethodInfo* method)

{
  return true;
}



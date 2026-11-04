// Type: CustomLogic.CustomLogicAnimatorBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimatorBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAnimatorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimatorBuiltin_o* CustomLogic_CustomLogicAnimatorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f08120

CustomLogic_CustomLogicAnimatorBuiltin_o *
CustomLogic_CustomLogicAnimatorBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843452ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
    Il2CppMethodInitialized_1843452ff = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnimatorBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0ca20

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434531c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434531c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ApplyBuiltinRootMotion>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ApplyBuiltinRootMotion_b__6_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08520

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ApplyBuiltinRootMotion_b__6_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
    UnityEngine_Animator__ApplyBuiltinRootMotion(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Update>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__Update_b__7_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c2a0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__Update_b__7_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  float deltaTime;
  
  if (Il2CppMethodInitialized_18434531d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434531d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    deltaTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (obj,(MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__Update(__this_00,deltaTime,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__8_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09e10

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__8_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Animator_o *pUVar2;
  bool bVar3;
  int32_t layerIndex;
  System_String_o *name;
  UnityEngine_AnimatorStateInfo_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined1 local_res18 [8];
  UnityEngine_AnimatorStateInfo_Fields local_58;
  UnityEngine_AnimatorStateInfo_o local_30;
  
  if (Il2CppMethodInitialized_18434531e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434531e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar5 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar5,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    layerIndex = 0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f09fa7;
      pIVar5 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar5,(MethodInfo_66E9A0 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    if (__c == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = (__c->fields).Value;
    local_58.m_Loop = 0;
    local_58.m_Name = 0;
    local_58.m_Path = 0;
    local_58.m_FullPath = 0;
    local_58.m_NormalizedTime = 0.0;
    local_58.m_Length = 0.0;
    local_58.m_Speed = 0.0;
    local_58.m_SpeedMultiplier = 0.0;
    local_58.m_Tag = 0;
    if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
      bVar3 = UnityEngine_Animator__IsInTransition(pUVar2,layerIndex,(MethodInfo *)0x0);
      pUVar2 = (__c->fields).Value;
      if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
        if (bVar3) {
          pUVar4 = UnityEngine_Animator__GetNextAnimatorStateInfo
                             (&local_30,pUVar2,layerIndex,(MethodInfo *)0x0);
        }
        else {
          pUVar4 = UnityEngine_Animator__GetCurrentAnimatorStateInfo
                             (&local_30,pUVar2,layerIndex,(MethodInfo *)0x0);
        }
        local_58.m_Loop = (pUVar4->fields).m_Loop;
        local_58.m_Length = (pUVar4->fields).m_Length;
        local_58.m_Speed = (pUVar4->fields).m_Speed;
        local_58.m_SpeedMultiplier = (pUVar4->fields).m_SpeedMultiplier;
        local_58.m_Tag = (pUVar4->fields).m_Tag;
        local_58.m_Name = (pUVar4->fields).m_Name;
        local_58.m_Path = (pUVar4->fields).m_Path;
        local_58.m_FullPath = (pUVar4->fields).m_FullPath;
        local_58.m_NormalizedTime = (pUVar4->fields).m_NormalizedTime;
        local_res18[0] =
             UnityEngine_AnimatorStateInfo__IsName
                       ((UnityEngine_AnimatorStateInfo_o *)&local_58,name,(MethodInfo *)0x0);
        pIVar5 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar5;
      }
    }
    ThrowNullReferenceException();
  }
label_181f09fa7:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsTag>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsTag_b__9_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09fb0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsTag_b__9_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Animator_o *pUVar2;
  bool bVar3;
  int32_t layerIndex;
  System_String_o *tag;
  UnityEngine_AnimatorStateInfo_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined1 local_res18 [8];
  UnityEngine_AnimatorStateInfo_Fields local_58;
  UnityEngine_AnimatorStateInfo_o local_30;
  
  if (Il2CppMethodInitialized_18434531f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434531f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar5 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar5,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    layerIndex = 0;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f0a147;
      pIVar5 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar5,(MethodInfo_66E9A0 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    }
    if (__c == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = (__c->fields).Value;
    local_58.m_Loop = 0;
    local_58.m_Name = 0;
    local_58.m_Path = 0;
    local_58.m_FullPath = 0;
    local_58.m_NormalizedTime = 0.0;
    local_58.m_Length = 0.0;
    local_58.m_Speed = 0.0;
    local_58.m_SpeedMultiplier = 0.0;
    local_58.m_Tag = 0;
    if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
      bVar3 = UnityEngine_Animator__IsInTransition(pUVar2,layerIndex,(MethodInfo *)0x0);
      pUVar2 = (__c->fields).Value;
      if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
        if (bVar3) {
          pUVar4 = UnityEngine_Animator__GetNextAnimatorStateInfo
                             (&local_30,pUVar2,layerIndex,(MethodInfo *)0x0);
        }
        else {
          pUVar4 = UnityEngine_Animator__GetCurrentAnimatorStateInfo
                             (&local_30,pUVar2,layerIndex,(MethodInfo *)0x0);
        }
        local_58.m_Loop = (pUVar4->fields).m_Loop;
        local_58.m_Length = (pUVar4->fields).m_Length;
        local_58.m_Speed = (pUVar4->fields).m_Speed;
        local_58.m_SpeedMultiplier = (pUVar4->fields).m_SpeedMultiplier;
        local_58.m_Tag = (pUVar4->fields).m_Tag;
        local_58.m_Name = (pUVar4->fields).m_Name;
        local_58.m_Path = (pUVar4->fields).m_Path;
        local_58.m_FullPath = (pUVar4->fields).m_FullPath;
        local_58.m_NormalizedTime = (pUVar4->fields).m_NormalizedTime;
        local_res18[0] =
             UnityEngine_AnimatorStateInfo__IsTag
                       ((UnityEngine_AnimatorStateInfo_o *)&local_58,tag,(MethodInfo *)0x0);
        pIVar5 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar5;
      }
    }
    ThrowNullReferenceException();
  }
label_181f0a147:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionDuration>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionDuration_b__10_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09a70

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionDuration_b__10_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  UnityEngine_AnimatorTransitionInfo_o *pUVar1;
  Il2CppObject *pIVar2;
  float local_res18 [4];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  UnityEngine_AnimatorTransitionInfo_o local_28;
  
  if (Il2CppMethodInitialized_184345320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345320 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  layerIndex = 0;
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (pIVar2,(MethodInfo_66E9A0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  }
  if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    __this_00 = (__c->fields).Value;
    local_48._0_4_ = 0.0;
    local_48._4_4_ = 0.0;
    local_48._8_4_ = 0.0;
    local_48._12_4_ = 0.0;
    local_38 = 0;
    uStack_30 = 0;
    if (__this_00 != (UnityEngine_Animator_o *)0x0) {
      pUVar1 = UnityEngine_Animator__GetAnimatorTransitionInfo_2eaeb40
                         (&local_28,__this_00,layerIndex,(MethodInfo *)0x0);
      local_48._0_4_ = (pUVar1->fields).m_FullPath;
      local_48._4_4_ = (pUVar1->fields).m_UserName;
      local_48._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Name;
      local_38._0_4_ = (pUVar1->fields).m_Duration;
      local_38._4_4_ = (pUVar1->fields).m_NormalizedTime;
      uStack_30._0_1_ = (pUVar1->fields).m_AnyState;
      uStack_30._1_3_ = *(undefined3 *)&(pUVar1->fields).field_0x19;
      uStack_30._4_4_ = (pUVar1->fields).m_TransitionType;
      local_res18[0] =
           UnityEngine_TextCore_GlyphMetrics__get_horizontalAdvance
                     ((UnityEngine_TextCore_GlyphMetrics_o *)local_48,(MethodInfo *)0x0);
      pIVar2 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar2;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09b80

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionNormalizedTime_b__11_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  UnityEngine_AnimatorTransitionInfo_o *pUVar1;
  Il2CppObject *pIVar2;
  float local_res18 [4];
  UnityEngine_AnimatorTransitionInfo_Fields local_48;
  UnityEngine_AnimatorTransitionInfo_o local_28;
  
  if (Il2CppMethodInitialized_184345321 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345321 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  layerIndex = 0;
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (pIVar2,(MethodInfo_66E9A0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  }
  if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    __this_00 = (__c->fields).Value;
    local_48.m_FullPath = 0;
    local_48.m_UserName = 0;
    local_48.m_Name = 0;
    local_48.m_HasFixedDuration = false;
    local_48._13_3_ = 0;
    local_48.m_Duration = 0.0;
    local_48.m_NormalizedTime = 0.0;
    local_48.m_AnyState = false;
    local_48._25_3_ = 0;
    local_48.m_TransitionType = 0;
    if (__this_00 != (UnityEngine_Animator_o *)0x0) {
      pUVar1 = UnityEngine_Animator__GetAnimatorTransitionInfo_2eaeb40
                         (&local_28,__this_00,layerIndex,(MethodInfo *)0x0);
      local_48.m_FullPath = (pUVar1->fields).m_FullPath;
      local_48.m_UserName = (pUVar1->fields).m_UserName;
      local_48.m_Name = (pUVar1->fields).m_Name;
      local_48.m_HasFixedDuration = (pUVar1->fields).m_HasFixedDuration;
      local_48._13_3_ = *(undefined3 *)&(pUVar1->fields).field_0xd;
      local_48.m_Duration = (pUVar1->fields).m_Duration;
      local_48.m_NormalizedTime = (pUVar1->fields).m_NormalizedTime;
      local_48.m_AnyState = (pUVar1->fields).m_AnyState;
      local_48._25_3_ = *(undefined3 *)&(pUVar1->fields).field_0x19;
      local_48.m_TransitionType = (pUVar1->fields).m_TransitionType;
      local_res18[0] =
           UnityEngine_AnimatorTransitionInfo__get_normalizedTime
                     ((UnityEngine_AnimatorTransitionInfo_o *)&local_48,(MethodInfo *)0x0);
      pIVar2 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar2;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__12_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0ab70

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__12_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Animator_o *__this_00;
  int32_t layer;
  System_String_o *stateName;
  float normalizedTransitionDuration;
  
  if (Il2CppMethodInitialized_184345322 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345322 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f0acc6:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    stateName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      normalizedTransitionDuration = 0.1;
    }
    else {
      if (uVar1 < 2) goto label_181f0acc6;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      normalizedTransitionDuration =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (pIVar2,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
    }
    layer = 0;
    uVar1 = (uint)__a->max_length;
    if (2 < (int)uVar1) {
      if (uVar1 < 3) goto label_181f0acc6;
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                        );
    }
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__CrossFade_2eae5a0
                (__this_00,stateName,normalizedTransitionDuration,layer,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__13_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a760

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__13_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Animator_o *__this_00;
  int32_t layer;
  System_String_o *stateName;
  float normalizedTimeOffset;
  float normalizedTransitionDuration;
  
  if (Il2CppMethodInitialized_184345323 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345323 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0a8dd:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    stateName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      normalizedTimeOffset =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (__a->m_Items[1],
                      (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        normalizedTransitionDuration = 0.1;
      }
      else {
        if (uVar1 < 3) goto label_181f0a8e3;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        normalizedTransitionDuration =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (pIVar2,(MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      layer = 0;
      uVar1 = (uint)__a->max_length;
      if (3 < (int)uVar1) {
        if (uVar1 < 4) goto label_181f0a8e3;
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        layer = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (pIVar2,(MethodInfo_66E9A0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      }
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__CrossFade
                  (__this_00,stateName,normalizedTransitionDuration,layer,normalizedTimeOffset,
                   (MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f0a8dd;
    }
  }
label_181f0a8e3:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpeed>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetSpeed_b__14_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0ba50

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetSpeed_b__14_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  float value;
  
  if (Il2CppMethodInitialized_184345324 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345324 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__set_speed(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__15_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08bb0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__15_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  UnityEngine_AnimationClip_o *__this_01;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184345325 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345325 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843452fd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
        Il2CppMethodInitialized_1843452fd = '\x01';
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__c->fields)._animatorClips;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_00,(Il2CppObject *)key,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item)
        ;
        if (__this_01 != (UnityEngine_AnimationClip_o *)0x0) {
          local_res18[0] = UnityEngine_AnimationClip__get_length(__this_01,(MethodInfo *)0x0);
          pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
          return pIVar1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetFloat>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetFloat_b__16_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09680

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetFloat_b__16_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184345326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345326 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      local_res18[0] = UnityEngine_Animator__GetFloat(__this_00,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetInteger>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetInteger_b__17_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09740

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetInteger_b__17_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184345327 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345327 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      local_res18[0] = UnityEngine_Animator__GetInteger(__this_00,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBool>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetBool_b__18_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09060

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetBool_b__18_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184345328 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345328 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      local_res18[0] = UnityEngine_Animator__GetBool(__this_00,name,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFloat>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetFloat_b__19_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b6f0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetFloat_b__19_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  float value;
  
  if (Il2CppMethodInitialized_184345329 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345329 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0b7b3:
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
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetFloat(__this_00,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f0b7b3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteger>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetInteger_b__20_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b7c0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetInteger_b__20_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  int32_t value;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434532a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434532a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0b883:
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
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetInteger(__this_00,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f0b883;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBool>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetBool_b__21_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b620

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetBool_b__21_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  bool value;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434532b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434532b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0b6e4:
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
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (__a->m_Items[1],
                         (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetBool(__this_00,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f0b6e4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTrigger>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetTrigger_b__22_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0baf0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetTrigger_b__22_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434532c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434532c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__SetTrigger(__this_00,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetTrigger>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ResetTrigger_b__23_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b230

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ResetTrigger_b__23_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_18434532d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434532d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      UnityEngine_Animator__ResetTrigger(__this_00,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLayerWeight>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetLayerWeight_b__24_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b890

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetLayerWeight_b__24_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  float weight;
  
  if (Il2CppMethodInitialized_18434532e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434532e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f0b951:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                           );
    if (1 < (uint)__a->max_length) {
      weight = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[1],
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
        UnityEngine_Animator__SetLayerWeight(__this_00,layerIndex,weight,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f0b951;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetLayerWeight>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetLayerWeight_b__25_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f097f0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetLayerWeight_b__25_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t layerIndex;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434532f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434532f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (pIVar1,(MethodInfo_66E9A0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animator_o *)0x0)) {
      local_res18[0] = UnityEngine_Animator__GetLayerWeight(__this_00,layerIndex,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__26_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08e40

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__26_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  int32_t layerIndex;
  UnityEngine_AnimatorStateInfo_o *pUVar3;
  Il2CppObject *pIVar4;
  float local_res18 [4];
  UnityEngine_TextCore_LowLevel_GlyphValueRecord_Fields local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  int32_t local_38;
  UnityEngine_AnimatorStateInfo_o local_30;
  
  if (Il2CppMethodInitialized_184345330 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345330 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  layerIndex = 0;
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar4 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    layerIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (pIVar4,(MethodInfo_66E9A0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  }
  if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    pUVar1 = (__c->fields).Value;
    local_38 = 0;
    local_58.m_XPlacement = 0.0;
    local_58.m_YPlacement = 0.0;
    local_58.m_XAdvance = 0.0;
    local_58.m_YAdvance = 0.0;
    local_48 = 0;
    uStack_40 = 0;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layerIndex,(MethodInfo *)0x0);
      pUVar1 = (__c->fields).Value;
      if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
        if (bVar2) {
          pUVar3 = UnityEngine_Animator__GetNextAnimatorStateInfo
                             (&local_30,pUVar1,layerIndex,(MethodInfo *)0x0);
        }
        else {
          pUVar3 = UnityEngine_Animator__GetCurrentAnimatorStateInfo
                             (&local_30,pUVar1,layerIndex,(MethodInfo *)0x0);
        }
        local_38 = (pUVar3->fields).m_Loop;
        local_48._0_4_ = (pUVar3->fields).m_Length;
        local_48._4_4_ = (pUVar3->fields).m_Speed;
        uStack_40._0_4_ = (pUVar3->fields).m_SpeedMultiplier;
        uStack_40._4_4_ = (pUVar3->fields).m_Tag;
        local_58.m_XPlacement = (float)(pUVar3->fields).m_Name;
        local_58.m_YPlacement = (float)(pUVar3->fields).m_Path;
        local_58.m_XAdvance = (float)(pUVar3->fields).m_FullPath;
        local_58.m_YAdvance = (pUVar3->fields).m_NormalizedTime;
        local_res18[0] =
             UnityEngine_TextCore_LowLevel_GlyphValueRecord__get_yAdvance
                       ((UnityEngine_TextCore_LowLevel_GlyphValueRecord_o *)&local_58,(MethodInfo *)0x0);
        pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar4;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eec8c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  System_Action_CustomLogicAnimatorBuiltin__object__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"GetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Update");
    il2cpp_codegen_initialize_runtime_metadata(&"GetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"HasRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBool");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyBuiltinRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTag");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBool");
    Il2CppMethodInitialized_184345300 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6e230e95) {
    if (uVar3 < 0x492a3cd0) {
      if (uVar3 < 0x185debee) {
        if (uVar3 == 0x11452a77) {
          bVar2 = System_String__op_Equality(name,"SetBool",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345314 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345314 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__21_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__21_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__21_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181eee97f;
        }
        if (uVar3 == 0x154e2cf3) {
          bVar2 = System_String__op_Equality(name,"SetInteger",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345313 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345313 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__20_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__20_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__20_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181eee97f;
        }
        if (uVar3 != 0x185debed) goto label_181eee97f;
        bVar2 = System_String__op_Equality(name,"ApplyRootMotion",(MethodInfo *)0x0);
        if (!bVar2) goto label_181eee97f;
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345304 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicAnimatorBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
          Il2CppMethodInitialized_184345304 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAnimatorBuiltin_object);
        System_Action_object__object____ctor
                  ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_01,
                   (Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se
                   ,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
        goto label_181eee95a;
      }
      if (uVar3 == 0x1c21234b) {
        bVar2 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345319 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345319 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__26_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__26_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__26_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181eee97f;
      }
      if (uVar3 != 0x2f7dcbe5) {
        if (uVar3 == 0x492a3ccf) {
          bVar2 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434530e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434530e = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__15_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__15_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__15_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181eee97f;
      }
      bVar2 = System_String__op_Equality(name,"HasRootMotion",(MethodInfo *)0x0);
      if (!bVar2) goto label_181eee97f;
      if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345303 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
        Il2CppMethodInitialized_184345303 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett
      ;
    }
    else {
      if (0x54d57508 < uVar3) {
        if (uVar3 == 0x55aebb4e) {
          bVar2 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434530c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434530c = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__13_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__13_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__13_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x63f1e834) {
          bVar2 = System_String__op_Equality(name,"ApplyBuiltinRootMotion",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345305 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345305 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__6_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__6_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__6_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x6e230e94) {
          bVar2 = System_String__op_Equality(name,"Update",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345306 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345306 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__7_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__7_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__7_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181eee97f;
      }
      if (uVar3 == 0x525bd9f7) {
        bVar2 = System_String__op_Equality(name,"GetInteger",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345310 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345310 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__17_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__17_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__17_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181eee97f;
      }
      if (uVar3 != 0x535e4da6) {
        if (uVar3 == 0x54d57508) {
          bVar2 = System_String__op_Equality(name,"GetTransitionDuration",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345309 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345309 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__10_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__10_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__10_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181eee97f;
      }
      bVar2 = System_String__op_Equality(name,"DeltaPosition",(MethodInfo *)0x0);
      if (!bVar2) goto label_181eee97f;
      if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345301 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
        Il2CppMethodInitialized_184345301 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett
      ;
    }
  }
  else {
    if (0xd64c477b < uVar3) {
      if (uVar3 < 0xf8a12a84) {
        if (uVar3 == 0xe4b35065) {
          bVar2 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345307 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345307 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__8_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__8_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__8_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0xed6289ad) {
          bVar2 = System_String__op_Equality(name,"SetTrigger",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345315 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345315 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__22_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__22_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__22_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0xf8a12a83) {
          bVar2 = System_String__op_Equality(name,"GetBool",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345311 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345311 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__18_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__18_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__18_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 < 0xfaf2b5a8) {
        if (uVar3 == 0xfaa10a9c) {
          bVar2 = System_String__op_Equality(name,"SetLayerWeight",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345317 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345317 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__24_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__24_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__24_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0xfaf2b5a7) {
          bVar2 = System_String__op_Equality(name,"SetFloat",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345312 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345312 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__19_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__19_0 =
                   (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__19_0
                         ,pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin
                               );
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 == 0xfc3aa213) {
        bVar2 = System_String__op_Equality(name,"GetFloat",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434530f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434530f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__16_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__16_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__16_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xfe771063) {
        bVar2 = System_String__op_Equality(name,"IsTag",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345308 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345308 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__9_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__9_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__9_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
label_181eee97f:
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnimatorBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
    }
    if (0xaef32d03 < uVar3) {
      if (uVar3 == 0xb54e6138) {
        bVar2 = System_String__op_Equality(name,"GetLayerWeight",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345318 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345318 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__25_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__25_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__25_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xc0749efc) {
        bVar2 = System_String__op_Equality(name,"ResetTrigger",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345316 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345316 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__23_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__23_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__23_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0xd64c477b) {
        bVar2 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434530b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434530b = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__12_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__12_0 =
                 (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__12_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181eee97f;
    }
    if (uVar3 == 0x8a47281e) {
      bVar2 = System_String__op_Equality(name,"SetSpeed",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434530d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434530d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__14_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__14_0 =
               (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__14_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
      goto label_181eee97f;
    }
    if (uVar3 == 0xa90ef8b4) {
      bVar2 = System_String__op_Equality(name,"GetTransitionNormalizedTime",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434530a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434530a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__11_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__11_0 =
               (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__11_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
      goto label_181eee97f;
    }
    if (uVar3 != 0xaef32d03) goto label_181eee97f;
    bVar2 = System_String__op_Equality(name,"DeltaRotation",(MethodInfo *)0x0);
    if (!bVar2) goto label_181eee97f;
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345302 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
      Il2CppMethodInitialized_184345302 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett
    ;
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  __this_01 = (System_Action_CustomLogicAnimatorBuiltin__object__o *)0x0;
label_181eee95a:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_01,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition (const MethodInfo* method);
// 0x181efb520

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_184345301 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation (const MethodInfo* method);
// 0x181efb5c0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_184345302 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__HasRootMotion
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion (const MethodInfo* method);
// 0x181efc0b0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_184345303 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__ApplyRootMotion
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion (const MethodInfo* method);
// 0x181efa7b0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion(MethodInfo *method)

{
  System_Func_CustomLogicAnimatorBuiltin__object__o *__this;
  System_Action_CustomLogicAnimatorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicAnimatorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
    Il2CppMethodInitialized_184345304 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicAnimatorBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ApplyBuiltinRootMotion
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion (const MethodInfo* method);
// 0x181ef43a0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345305 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__Update
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update (const MethodInfo* method);
// 0x181ef9900

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345306 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345306 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x181ef66c0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345307 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag (const MethodInfo* method);
// 0x181ef67e0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345308 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionDuration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration (const MethodInfo* method);
// 0x181ef6240

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345309 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345309 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime (const MethodInfo* method);
// 0x181ef6360

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434530a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434530a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x181ef77b0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434530b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434530b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x181ef7330

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434530c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434530c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed (const MethodInfo* method);
// 0x181ef8b20

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434530d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434530d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x181ef5250

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434530e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434530e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat (const MethodInfo* method);
// 0x181ef5c80

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434530f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434530f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetInteger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger (const MethodInfo* method);
// 0x181ef5da0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345310 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345310 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool (const MethodInfo* method);
// 0x181ef56e0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345311 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat (const MethodInfo* method);
// 0x181ef8690

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345312 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetInteger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger (const MethodInfo* method);
// 0x181ef87b0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345313 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool (const MethodInfo* method);
// 0x181ef8560

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345314 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetTrigger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger (const MethodInfo* method);
// 0x181ef8c40

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345315 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345315 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ResetTrigger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger (const MethodInfo* method);
// 0x181ef7f90

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345316 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345316 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetLayerWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight (const MethodInfo* method);
// 0x181ef88d0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345317 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345317 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetLayerWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight (const MethodInfo* method);
// 0x181ef5ec0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345318 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345318 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x181ef5490

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345319 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345319 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicAnimatorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicAnimatorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181effdc0

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434531a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"GetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Update");
    il2cpp_codegen_initialize_runtime_metadata(&"GetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"GetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"HasRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetLayerWeight");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteger");
    il2cpp_codegen_initialize_runtime_metadata(&"GetBool");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"SetSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTransitionNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"ApplyBuiltinRootMotion");
    il2cpp_codegen_initialize_runtime_metadata(&"DeltaRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTag");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlaying");
    il2cpp_codegen_initialize_runtime_metadata(&"SetBool");
    Il2CppMethodInitialized_18434531a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeltaPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeltaRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasRootMotion",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ApplyRootMotion",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ApplyBuiltinRootMotion",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Update",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlaying",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsTag",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransitionDuration",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTransitionNormalizedTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetFloat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetInteger",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetBool",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetFloat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetInteger",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetBool",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTrigger",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetTrigger",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetLayerWeight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetLayerWeight",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationNormalizedTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaPosition>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaPosition_g____getter_2_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1340

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaPosition_g____getter_2_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Animator_o *)0x0)) {
    pUVar1 = UnityEngine_Animator__get_deltaPosition(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaRotation>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaRotation_g____getter_3_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1390

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaRotation_g____getter_3_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  if ((__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Animator_o *)0x0)) {
    pUVar1 = UnityEngine_Animator__get_deltaRotation
                       ((UnityEngine_Quaternion_o *)&local_18,__this,(MethodInfo *)0x0);
    local_18.x = (pUVar1->fields).x;
    local_18.y = (pUVar1->fields).y;
    local_18.z = (pUVar1->fields).z;
    local_18.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__HasRootMotion>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__HasRootMotion_g____getter_4_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1d60

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__HasRootMotion_g____getter_4_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Animator_o *)0x0)) {
    local_res8[0] = UnityEngine_Animator__get_hasRootMotion(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____getter_5_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x181ef05f0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____getter_5_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Animator_o *)0x0)) {
    local_res8[0] = UnityEngine_Animator__get_applyRootMotion(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____setter_5_1 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef0630

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____setter_5_1
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_18434531b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434531b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_Animator_o *)0x0)) {
    UnityEngine_Animator__set_applyRootMotion(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin___ctor (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01510

void
CustomLogic_CustomLogicAnimatorBuiltin___ctor(CustomLogic_CustomLogicAnimatorBuiltin_o* __this, MethodInfo* method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin___ctor (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animator_o* animator, const MethodInfo* method);
// 0x181f01b00

void CustomLogic_CustomLogicAnimatorBuiltin___ctor_1f01b00
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,CustomLogic_BuiltinClassInstance_o *owner,
               UnityEngine_Animator_o *animator,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *value;
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_string__AnimationClip__o *__this_03;
  UnityEngine_RuntimeAnimatorController_o *__this_04;
  UnityEngine_AnimationClip_array *pUVar2;
  System_String_o *key;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843452fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Animator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
    Il2CppMethodInitialized_1843452fc = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animator,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,owner);
  value = (__this->fields).Component;
  if (value == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Animator_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_Animator->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Animator
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields).Value = (UnityEngine_Animator_o *)value;
    bVar1 = (TypeInfo_UnityEngine_Animator->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Animator
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AnimationClip);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_ctor)
  ;
  (__this->fields)._animatorClips = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._animatorClips,__this_03);
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    __this_04 = UnityEngine_Animator__get_runtimeAnimatorController(__this_00,(MethodInfo *)0x0);
    if (__this_04 != (UnityEngine_RuntimeAnimatorController_o *)0x0) {
      pUVar2 = UnityEngine_RuntimeAnimatorController__get_animationClips(__this_04,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_AnimationClip_array *)0x0) {
        uVar3 = 0;
        while( true ) {
          if ((int)pUVar2->max_length <= (int)uVar3) {
            return;
          }
          if ((uint)pUVar2->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          __this_01 = pUVar2->m_Items[(int)uVar3];
          if (__this_01 == (UnityEngine_AnimationClip_o *)0x0) break;
          __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields)._animatorClips;
          key = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_02,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_set_Item);
          uVar3 = uVar3 + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01d30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    pUVar1 = UnityEngine_Animator__get_deltaPosition(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaRotation (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01d80

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaRotation
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Quaternion_o *pUVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  UnityEngine_Quaternion_Fields local_18;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    pUVar1 = UnityEngine_Animator__get_deltaRotation
                       ((UnityEngine_Quaternion_o *)&local_18,__this_00,(MethodInfo *)0x0);
    local_18.x = (pUVar1->fields).x;
    local_18.y = (pUVar1->fields).y;
    local_18.z = (pUVar1->fields).z;
    local_18.w = (pUVar1->fields).w;
    pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit_1ed2e00
                       ((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_HasRootMotion
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01dc0

bool CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    bVar1 = UnityEngine_Animator__get_hasRootMotion(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_ApplyRootMotion
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01ce0

bool CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    bVar1 = UnityEngine_Animator__get_applyRootMotion(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$set_ApplyRootMotion
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__set_ApplyRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f01de0

void CustomLogic_CustomLogicAnimatorBuiltin__set_ApplyRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__set_applyRootMotion(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$ApplyBuiltinRootMotion
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01550

void CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__ApplyBuiltinRootMotion(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$Update
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__Update (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, float deltaTime, const MethodInfo* method);
// 0x181f01ae0

void CustomLogic_CustomLogicAnimatorBuiltin__Update
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,float deltaTime,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__Update(__this_00,deltaTime,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, int32_t layer, const MethodInfo* method);
// 0x181f01830

bool CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,int32_t layer,
               MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  UnityEngine_AnimatorStateInfo_o *pUVar3;
  UnityEngine_AnimatorStateInfo_Fields local_58;
  UnityEngine_AnimatorStateInfo_o local_30;
  
  local_58.m_Loop = 0;
  pUVar1 = (__this->fields).Value;
  local_58.m_Name = 0;
  local_58.m_Path = 0;
  local_58.m_FullPath = 0;
  local_58.m_NormalizedTime = 0.0;
  local_58.m_Length = 0.0;
  local_58.m_Speed = 0.0;
  local_58.m_SpeedMultiplier = 0.0;
  local_58.m_Tag = 0;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if (bVar2) {
        pUVar3 = UnityEngine_Animator__GetNextAnimatorStateInfo(&local_30,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        pUVar3 = UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_30,pUVar1,layer,(MethodInfo *)0x0);
      }
      local_58.m_Loop = (pUVar3->fields).m_Loop;
      local_58.m_Length = (pUVar3->fields).m_Length;
      local_58.m_Speed = (pUVar3->fields).m_Speed;
      local_58.m_SpeedMultiplier = (pUVar3->fields).m_SpeedMultiplier;
      local_58.m_Tag = (pUVar3->fields).m_Tag;
      local_58.m_Name = (pUVar3->fields).m_Name;
      local_58.m_Path = (pUVar3->fields).m_Path;
      local_58.m_FullPath = (pUVar3->fields).m_FullPath;
      local_58.m_NormalizedTime = (pUVar3->fields).m_NormalizedTime;
      bVar2 = UnityEngine_AnimatorStateInfo__IsName
                        ((UnityEngine_AnimatorStateInfo_o *)&local_58,anim,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$IsTag
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__IsTag (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* tag, int32_t layer, const MethodInfo* method);
// 0x181f018e0

bool CustomLogic_CustomLogicAnimatorBuiltin__IsTag
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *tag,int32_t layer,
               MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  UnityEngine_AnimatorStateInfo_o *pUVar3;
  UnityEngine_AnimatorStateInfo_Fields local_58;
  UnityEngine_AnimatorStateInfo_o local_30;
  
  local_58.m_Loop = 0;
  pUVar1 = (__this->fields).Value;
  local_58.m_Name = 0;
  local_58.m_Path = 0;
  local_58.m_FullPath = 0;
  local_58.m_NormalizedTime = 0.0;
  local_58.m_Length = 0.0;
  local_58.m_Speed = 0.0;
  local_58.m_SpeedMultiplier = 0.0;
  local_58.m_Tag = 0;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if (bVar2) {
        pUVar3 = UnityEngine_Animator__GetNextAnimatorStateInfo(&local_30,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        pUVar3 = UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_30,pUVar1,layer,(MethodInfo *)0x0);
      }
      local_58.m_Loop = (pUVar3->fields).m_Loop;
      local_58.m_Length = (pUVar3->fields).m_Length;
      local_58.m_Speed = (pUVar3->fields).m_Speed;
      local_58.m_SpeedMultiplier = (pUVar3->fields).m_SpeedMultiplier;
      local_58.m_Tag = (pUVar3->fields).m_Tag;
      local_58.m_Name = (pUVar3->fields).m_Name;
      local_58.m_Path = (pUVar3->fields).m_Path;
      local_58.m_FullPath = (pUVar3->fields).m_FullPath;
      local_58.m_NormalizedTime = (pUVar3->fields).m_NormalizedTime;
      bVar2 = UnityEngine_AnimatorStateInfo__IsTag
                        ((UnityEngine_AnimatorStateInfo_o *)&local_58,tag,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionDuration
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x181f01770

float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimatorTransitionInfo_o *pUVar1;
  float fVar2;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  UnityEngine_AnimatorTransitionInfo_o local_28;
  
  __this_00 = (__this->fields).Value;
  local_48._0_4_ = 0.0;
  local_48._4_4_ = 0.0;
  local_48._8_4_ = 0.0;
  local_48._12_4_ = 0.0;
  local_38 = 0;
  uStack_30 = 0;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    pUVar1 = UnityEngine_Animator__GetAnimatorTransitionInfo_2eaeb40
                       (&local_28,__this_00,layer,(MethodInfo *)0x0);
    local_48._0_4_ = (pUVar1->fields).m_FullPath;
    local_48._4_4_ = (pUVar1->fields).m_UserName;
    local_48._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Name;
    local_38._0_4_ = (pUVar1->fields).m_Duration;
    local_38._4_4_ = (pUVar1->fields).m_NormalizedTime;
    uStack_30._0_1_ = (pUVar1->fields).m_AnyState;
    uStack_30._1_3_ = *(undefined3 *)&(pUVar1->fields).field_0x19;
    uStack_30._4_4_ = (pUVar1->fields).m_TransitionType;
    fVar2 = UnityEngine_TextCore_GlyphMetrics__get_horizontalAdvance
                      ((UnityEngine_TextCore_GlyphMetrics_o *)local_48,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x181f017d0

float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimatorTransitionInfo_o *pUVar1;
  float fVar2;
  UnityEngine_AnimatorTransitionInfo_Fields local_48;
  UnityEngine_AnimatorTransitionInfo_o local_28;
  
  __this_00 = (__this->fields).Value;
  local_48.m_FullPath = 0;
  local_48.m_UserName = 0;
  local_48.m_Name = 0;
  local_48.m_HasFixedDuration = false;
  local_48._13_3_ = 0;
  local_48.m_Duration = 0.0;
  local_48.m_NormalizedTime = 0.0;
  local_48.m_AnyState = false;
  local_48._25_3_ = 0;
  local_48.m_TransitionType = 0;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    pUVar1 = UnityEngine_Animator__GetAnimatorTransitionInfo_2eaeb40
                       (&local_28,__this_00,layer,(MethodInfo *)0x0);
    local_48.m_FullPath = (pUVar1->fields).m_FullPath;
    local_48.m_UserName = (pUVar1->fields).m_UserName;
    local_48.m_Name = (pUVar1->fields).m_Name;
    local_48.m_HasFixedDuration = (pUVar1->fields).m_HasFixedDuration;
    local_48._13_3_ = *(undefined3 *)&(pUVar1->fields).field_0xd;
    local_48.m_Duration = (pUVar1->fields).m_Duration;
    local_48.m_NormalizedTime = (pUVar1->fields).m_NormalizedTime;
    local_48.m_AnyState = (pUVar1->fields).m_AnyState;
    local_48._25_3_ = *(undefined3 *)&(pUVar1->fields).field_0x19;
    local_48.m_TransitionType = (pUVar1->fields).m_TransitionType;
    fVar2 = UnityEngine_AnimatorTransitionInfo__get_normalizedTime
                      ((UnityEngine_AnimatorTransitionInfo_o *)&local_48,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x181f019d0

void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,float fade,
               int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__CrossFade_2eae5a0(__this_00,anim,fade,layer,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x181f01990

void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,float normalizedTime,
               float fade,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__CrossFade(__this_00,anim,fade,layer,normalizedTime,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetSpeed
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, float speed, const MethodInfo* method);
// 0x181f01aa0

void CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,float speed,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__set_speed(__this_00,speed,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x181f01570

float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  float fVar1;
  
  if (Il2CppMethodInitialized_1843452fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
    Il2CppMethodInitialized_1843452fd = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._animatorClips;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)anim,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AnimationClip_get_Item);
    if (__this_01 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar1 = UnityEngine_AnimationClip__get_length(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetFloat
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetFloat (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f01710

float CustomLogic_CustomLogicAnimatorBuiltin__GetFloat
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    fVar1 = UnityEngine_Animator__GetFloat(__this_00,name,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetInteger
// il2cpp: int32_t CustomLogic_CustomLogicAnimatorBuiltin__GetInteger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f01730

int32_t CustomLogic_CustomLogicAnimatorBuiltin__GetInteger
                  (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    iVar1 = UnityEngine_Animator__GetInteger(__this_00,name,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetBool
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__GetBool (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f01670

bool CustomLogic_CustomLogicAnimatorBuiltin__GetBool
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    bVar1 = UnityEngine_Animator__GetBool(__this_00,name,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetFloat
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetFloat (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, float value, const MethodInfo* method);
// 0x181f01a40

void CustomLogic_CustomLogicAnimatorBuiltin__SetFloat
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,float value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetFloat(__this_00,name,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetInteger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetInteger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, int32_t value, const MethodInfo* method);
// 0x181f01a60

void CustomLogic_CustomLogicAnimatorBuiltin__SetInteger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,int32_t value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetInteger(__this_00,name,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetBool
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetBool (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, bool value, const MethodInfo* method);
// 0x181f01a20

void CustomLogic_CustomLogicAnimatorBuiltin__SetBool
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,bool value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetBool(__this_00,name,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetTrigger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f01ac0

void CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetTrigger(__this_00,name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$ResetTrigger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181f01a00

void CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__ResetTrigger(__this_00,name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetLayerWeight
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, float weight, const MethodInfo* method);
// 0x181f01a80

void CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,float weight,MethodInfo *method
               )

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetLayerWeight(__this_00,layer,weight,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetLayerWeight
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetLayerWeight (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x181f01750

float CustomLogic_CustomLogicAnimatorBuiltin__GetLayerWeight
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    fVar1 = UnityEngine_Animator__GetLayerWeight(__this_00,layer,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x181f015e0

float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool bVar2;
  UnityEngine_AnimatorStateInfo_o *pUVar3;
  float fVar4;
  UnityEngine_TextCore_LowLevel_GlyphValueRecord_Fields local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  int32_t local_38;
  UnityEngine_AnimatorStateInfo_o local_30;
  
  local_38 = 0;
  pUVar1 = (__this->fields).Value;
  local_58.m_XPlacement = 0.0;
  local_58.m_YPlacement = 0.0;
  local_58.m_XAdvance = 0.0;
  local_58.m_YAdvance = 0.0;
  local_48 = 0;
  uStack_40 = 0;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if (bVar2) {
        pUVar3 = UnityEngine_Animator__GetNextAnimatorStateInfo(&local_30,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        pUVar3 = UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_30,pUVar1,layer,(MethodInfo *)0x0);
      }
      local_38 = (pUVar3->fields).m_Loop;
      local_48._0_4_ = (pUVar3->fields).m_Length;
      local_48._4_4_ = (pUVar3->fields).m_Speed;
      uStack_40._0_4_ = (pUVar3->fields).m_SpeedMultiplier;
      uStack_40._4_4_ = (pUVar3->fields).m_Tag;
      local_58.m_XPlacement = (float)(pUVar3->fields).m_Name;
      local_58.m_YPlacement = (float)(pUVar3->fields).m_Path;
      local_58.m_XAdvance = (float)(pUVar3->fields).m_FullPath;
      local_58.m_YAdvance = (pUVar3->fields).m_NormalizedTime;
      fVar4 = UnityEngine_TextCore_LowLevel_GlyphValueRecord__get_yAdvance
                        ((UnityEngine_TextCore_LowLevel_GlyphValueRecord_o *)&local_58,(MethodInfo *)0x0);
      return fVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetCurrentStateInfo
// il2cpp: UnityEngine_AnimatorStateInfo_o CustomLogic_CustomLogicAnimatorBuiltin__GetCurrentStateInfo (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x181f01690

UnityEngine_AnimatorStateInfo_o *
CustomLogic_CustomLogicAnimatorBuiltin__GetCurrentStateInfo
          (UnityEngine_AnimatorStateInfo_o *__return_storage_ptr__,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Animator_o *pUVar2;
  int32_t iVar3;
  int32_t iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t iVar9;
  bool bVar10;
  UnityEngine_AnimatorStateInfo_o *pUVar11;
  UnityEngine_AnimatorStateInfo_o local_38;
  
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
    bVar10 = UnityEngine_Animator__IsInTransition(pUVar2,layer,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).Value;
    if (pUVar2 != (UnityEngine_Animator_o *)0x0) {
      if (bVar10) {
        pUVar11 = UnityEngine_Animator__GetNextAnimatorStateInfo(&local_38,pUVar2,layer,(MethodInfo *)0x0);
      }
      else {
        pUVar11 = UnityEngine_Animator__GetCurrentAnimatorStateInfo(&local_38,pUVar2,layer,(MethodInfo *)0x0);
      }
      iVar3 = (pUVar11->fields).m_Path;
      iVar4 = (pUVar11->fields).m_FullPath;
      fVar5 = (pUVar11->fields).m_NormalizedTime;
      fVar6 = (pUVar11->fields).m_Length;
      fVar7 = (pUVar11->fields).m_Speed;
      fVar8 = (pUVar11->fields).m_SpeedMultiplier;
      iVar9 = (pUVar11->fields).m_Tag;
      iVar1 = (pUVar11->fields).m_Loop;
      (__return_storage_ptr__->fields).m_Name = (pUVar11->fields).m_Name;
      (__return_storage_ptr__->fields).m_Path = iVar3;
      (__return_storage_ptr__->fields).m_FullPath = iVar4;
      (__return_storage_ptr__->fields).m_NormalizedTime = fVar5;
      (__return_storage_ptr__->fields).m_Length = fVar6;
      (__return_storage_ptr__->fields).m_Speed = fVar7;
      (__return_storage_ptr__->fields).m_SpeedMultiplier = fVar8;
      (__return_storage_ptr__->fields).m_Tag = iVar9;
      (__return_storage_ptr__->fields).m_Loop = iVar1;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimatorBuiltin__get_ClassName (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x181f01d00

System_String_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843452fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Animator");
    Il2CppMethodInitialized_1843452fe = '\x01';
  }
  return "Animator";
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnimatorBuiltin__get_IsAbstract(CustomLogic_CustomLogicAnimatorBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicAnimatorBuiltin__get_IsStatic(CustomLogic_CustomLogicAnimatorBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicAnimatorBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicAnimatorBuiltin_o* __this, MethodInfo* method)

{
  return true;
}



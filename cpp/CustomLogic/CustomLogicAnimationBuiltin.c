// Type: CustomLogic.CustomLogicAnimationBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimationBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAnimationBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimationBuiltin_o* CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dd81a0

CustomLogic_CustomLogicAnimationBuiltin_o *
CustomLogic_CustomLogicAnimationBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicAnimationBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_0570296e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAnimationBuiltin);
    DAT_0570296e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicAnimationBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAnimationBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAnimationBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAnimationBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dd9a20

void CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570297d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570297d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dd9a90

void CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__2_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd9aa0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__IsPlaying>b__2_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Animation_o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_0570297e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570297e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      bVar1 = UnityEngine_Animation__IsPlaying(__this_00,name,(MethodInfo *)0x0);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__3_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd9b50

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimation>b__3_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  UnityEngine_Animation_o *pUVar2;
  int32_t value;
  System_String_o *animation;
  UnityEngine_AnimationState_o *__this_00;
  float fadeLength;
  
  if (DAT_0570297f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570297f = '\x01';
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
    animation = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    value = 0;
    if ((int)__a->max_length < 2) {
      fadeLength = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fadeLength = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
      }
    }
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (pUVar2 = (__c->fields).Value, pUVar2 != (UnityEngine_Animation_o *)0x0)) {
      UnityEngine_Animation__CrossFade(pUVar2,animation,fadeLength,(MethodInfo *)0x0);
      pUVar2 = (__c->fields).Value;
      if ((pUVar2 != (UnityEngine_Animation_o *)0x0) &&
         (__this_00 = UnityEngine_Animation__get_Item(pUVar2,animation,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_AnimationState_o *)0x0)) {
        UnityEngine_AnimationState__set_layer(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__4_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd9cc0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimationAt>b__4_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  int32_t layer;
  System_String_o *anim;
  float normalizedTime;
  float fade;
  
  if (DAT_05702980 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702980 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03dd9e38:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    anim = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((uint)__a->max_length < 2) goto LAB_03dd9e38;
    normalizedTime =
         CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
    layer = 0;
    if ((int)__a->max_length < 3) {
      fade = 0.1;
      layer = 0;
    }
    else {
      pIVar1 = __a->m_Items[2];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 4) {
        if (__c == (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) goto LAB_03dd9e33;
        goto LAB_03dd9d8d;
      }
      pIVar1 = __a->m_Items[3];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
LAB_03dd9d8d:
      CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
                (__c,anim,normalizedTime,fade,layer,method);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03dd9e33:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationQueued>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationQueued_b__5_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd9e40

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimationQueued>b__5_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *animation;
  
  if (DAT_05702981 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702981 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    animation = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      UnityEngine_Animation__PlayQueued(__this_00,animation,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopAnimation>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__StopAnimation_b__6_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd9ee0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__StopAnimation>b__6_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  
  if (DAT_05702982 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702982 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      name = (System_String_o *)0x0;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      name = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    }
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      if (name == (System_String_o *)0x0) {
        UnityEngine_Animation__Stop(__this_00,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Animation__Stop(__this_00,name,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__7_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dd9fa0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__SetAnimationSpeed>b__7_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (DAT_05702983 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702983 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dda07f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_00 = (__c->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_speed(__this_01,value,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto LAB_03dda07f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__8_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dda090

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationSpeed>b__8_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702984 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702984 = '\x01';
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
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_speed(__this_01,(MethodInfo *)0x0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
        return pIVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__9_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dda150

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationLength>b__9_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702985 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702985 = '\x01';
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
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_length(__this_01,(MethodInfo *)0x0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
        return pIVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dda210

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationNormalizedTime>b__10_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702986 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702986 = '\x01';
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
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_normalizedTime(__this_01,(MethodInfo *)0x0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
        return pIVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dda2d0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__SetAnimationNormalizedTime>b__11_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (DAT_05702987 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702987 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dda3af:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_00 = (__c->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_normalizedTime(__this_01,value,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto LAB_03dda3af;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeight>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__SetWeight_b__12_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dda3c0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__SetWeight>b__12_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  float value;
  
  if (DAT_05702988 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702988 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dda49f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) {
        __this_00 = (__c->fields).Value;
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
            UnityEngine_AnimationState__set_weight(__this_01,value,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto LAB_03dda49f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetWeight>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_____CreateMethodBinding__GetWeight_b__13_0 (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimationBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dda4b0

Il2CppObject *
CustomLogic_CustomLogicAnimationBuiltin_Bindings_<>c__<__CreateMethodBinding__GetWeight>b__13_0
          (CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimationBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *__this_01;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702989 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702989 = '\x01';
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
    name = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicAnimationBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_Animation_o *)0x0)) {
      __this_01 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_AnimationState_o *)0x0) {
        UnityEngine_AnimationState__get_weight(__this_01,(MethodInfo *)0x0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
        return pIVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dd8290

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_0570296f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"PlayAnimationAt");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"StopAnimation");
    il2cpp_init_method_metadata(&"SetAnimationSpeed");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"GetAnimationSpeed");
    il2cpp_init_method_metadata(&"GetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"SetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"PlayAnimationQueued");
    il2cpp_init_method_metadata(&"SetWeight");
    il2cpp_init_method_metadata(&"GetWeight");
    il2cpp_init_method_metadata(&"IsPlaying");
    DAT_0570296f = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x55aebb4f) {
    if (uVar3 < 0x1c21234c) {
      if (uVar3 == 0x812156f) {
        bVar4 = System_String__op_Equality(name,"SetAnimationNormalizedTime",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702979 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAnimationNorma);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702979 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x1ae30f5a) {
        bVar4 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702976 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationSpeed);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702976 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x1c21234b) &&
              (bVar4 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702978 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationNorma);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702978 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x492a3ccf) {
      bVar4 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702977 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702977 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x4f3aab3d) {
      bVar4 = System_String__op_Equality(name,"StopAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702974 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopAnimation_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702974 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x55aebb4e) &&
            (bVar4 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702972 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationAt_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702972 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xe1cff600) {
    if (uVar3 == 0xcb515bd3) {
      bVar4 = System_String__op_Equality(name,"GetWeight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570297b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetWeight_b__13_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570297b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xd64c477b) {
      bVar4 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702971 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702971 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xe1cff5ff) &&
            (bVar4 = System_String__op_Equality(name,"SetWeight",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570297a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetWeight_b__12_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570297a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf6be6fea) {
    bVar4 = System_String__op_Equality(name,"PlayAnimationQueued",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702973 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationQueu);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702973 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xe5b11b66) {
    bVar4 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702975 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAnimationSpeed);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702975 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe4b35065) &&
          (bVar4 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702970 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlaying_b__2_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702970 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 8,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAnimationBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x3dd8820

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__IsPlaying
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702970 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlaying_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702970 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x3dd8970

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702971 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702971 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x3dd8ac0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702972 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationAt_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702972 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationQueued
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued (const MethodInfo* method);
// 0x3dd8c10

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__PlayAnimationQueued
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702973 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationQueu);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702973 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__StopAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation (const MethodInfo* method);
// 0x3dd8d60

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__StopAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702974 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopAnimation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702974 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x3dd8eb0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702975 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAnimationSpeed);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702975 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x3dd9000

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702976 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationSpeed);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702976 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x3dd9150

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702977 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702977 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x3dd92a0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702978 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationNorma);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702978 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime (const MethodInfo* method);
// 0x3dd93f0

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetAnimationNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_05702979 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAnimationNorma);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702979 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight (const MethodInfo* method);
// 0x3dd9540

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__SetWeight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_0570297a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetWeight_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570297a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o* CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight (const MethodInfo* method);
// 0x3dd9690

CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *
CustomLogic_CustomLogicAnimationBuiltin_Bindings____CreateMethodBinding__GetWeight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *__this;
  
  if (DAT_0570297b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetWeight_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570297b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimationBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimationBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimationBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimationBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dd97e0

void CustomLogic_CustomLogicAnimationBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570297c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"PlayAnimationAt");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"StopAnimation");
    il2cpp_init_method_metadata(&"SetAnimationSpeed");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"GetAnimationSpeed");
    il2cpp_init_method_metadata(&"GetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"SetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"PlayAnimationQueued");
    il2cpp_init_method_metadata(&"SetWeight");
    il2cpp_init_method_metadata(&"GetWeight");
    il2cpp_init_method_metadata(&"IsPlaying");
    DAT_0570297c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlaying",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimationAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimationQueued",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StopAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetAnimationSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationNormalizedTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetAnimationNormalizedTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetWeight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetWeight",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x3dd7dd0

void CustomLogic_CustomLogicAnimationBuiltin___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin___ctor (CustomLogic_CustomLogicAnimationBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animation_o* animation, const MethodInfo* method);
// 0x3dd7de0

void CustomLogic_CustomLogicAnimationBuiltin___ctor
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *owner,UnityEngine_Animation_o *animation,
               MethodInfo *method)

{
  UnityEngine_Animation_o *pUVar1;
  UnityEngine_Animation_c *pUVar2;
  
  if (DAT_0570296c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Animation);
    DAT_0570296c = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animation,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_glue(&(__this->fields).OwnerBuiltin,owner);
  pUVar2 = TypeInfo_Animation;
  pUVar1 = (UnityEngine_Animation_o *)(__this->fields).Component;
  if (pUVar1 == (UnityEngine_Animation_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Animation_o *)0x0;
  }
  else if ((pUVar1->klass != TypeInfo_Animation) ||
          ((__this->fields).Value = pUVar1, pUVar1->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar1,pUVar2);
  }
  il2cpp_runtime_glue(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__IsPlaying (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3dd7e70

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__IsPlaying
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
          MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    bVar1 = UnityEngine_Animation__IsPlaying(__this_00,anim,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x3dd7e90

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x3dd7ee0

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
               float normalizedTime,float fade,int32_t layer,MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationQueued
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3dd7f70

void CustomLogic_CustomLogicAnimationBuiltin__PlayAnimationQueued
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animation_o *)0x0) {
    UnityEngine_Animation__PlayQueued(__this_00,anim,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$StopAnimation
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3dd7f90

void CustomLogic_CustomLogicAnimationBuiltin__StopAnimation
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
               MethodInfo *method)

{
  UnityEngine_Animation_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 == (UnityEngine_Animation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (anim != (System_String_o *)0x0) {
    UnityEngine_Animation__Stop(__this_00,anim,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Animation__Stop(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, float speed, const MethodInfo* method);
// 0x3dd7fc0

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3dd8000

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *name,
                MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3dd8030

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
                MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3dd8060

float CustomLogic_CustomLogicAnimationBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
                MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationNormalizedTime
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float normalizedTime, const MethodInfo* method);
// 0x3dd8090

void CustomLogic_CustomLogicAnimationBuiltin__SetAnimationNormalizedTime
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
               float normalizedTime,MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$SetWeight
// il2cpp: void CustomLogic_CustomLogicAnimationBuiltin__SetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, float weight, const MethodInfo* method);
// 0x3dd80d0

void CustomLogic_CustomLogicAnimationBuiltin__SetWeight
               (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,float weight
               ,MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$GetWeight
// il2cpp: float CustomLogic_CustomLogicAnimationBuiltin__GetWeight (CustomLogic_CustomLogicAnimationBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3dd8110

float CustomLogic_CustomLogicAnimationBuiltin__GetWeight
                (CustomLogic_CustomLogicAnimationBuiltin_o *__this,System_String_o *anim,
                MethodInfo *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimationBuiltin__get_ClassName (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x3dd8140

System_String_o *
CustomLogic_CustomLogicAnimationBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570296d == '\0') {
    il2cpp_init_method_metadata(&"Animation");
    DAT_0570296d = '\x01';
  }
  return "Animation";
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x3dd8170

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x3dd8180

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__get_IsStatic
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAnimationBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimationBuiltin_o* __this, const MethodInfo* method);
// 0x3dd8190

bool_conflict
CustomLogic_CustomLogicAnimationBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicAnimationBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



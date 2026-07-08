// Type: CustomLogic.CustomLogicAnimatorBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAnimatorBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAnimatorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAnimatorBuiltin_o* CustomLogic_CustomLogicAnimatorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ddb060

CustomLogic_CustomLogicAnimatorBuiltin_o *
CustomLogic_CustomLogicAnimatorBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicAnimatorBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702993 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAnimatorBuiltin);
    DAT_05702993 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicAnimatorBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAnimatorBuiltin);
      CustomLogic_CustomLogicAnimatorBuiltin___ctor(__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAnimatorBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAnimatorBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ddde20

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057029b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029b0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ddde90

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ApplyBuiltinRootMotion>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ApplyBuiltinRootMotion_b__6_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dddea0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__ApplyBuiltinRootMotion>b__6_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Update>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__Update_b__7_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dddec0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__Update>b__7_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float deltaTime;
  
  if (DAT_057029b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b1 = '\x01';
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
    deltaTime = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__Update(__c,deltaTime,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsPlaying_b__8_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dddf50

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__IsPlaying>b__8_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *anim;
  Il2CppObject *pIVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_057029b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b2 = '\x01';
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
    anim = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    layer = 0;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying(__c,anim,layer,(MethodInfo *)0x0);
      uStack_28 = CONCAT17((char)bVar1,(undefined7)uStack_28);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_28 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsTag>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__IsTag_b__9_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde050

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__IsTag>b__9_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *tag;
  Il2CppObject *pIVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_057029b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b3 = '\x01';
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
    tag = (System_String_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    layer = 0;
    if (1 < (int)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__IsTag(__c,tag,layer,(MethodInfo *)0x0);
      uStack_28 = CONCAT17((char)bVar1,(undefined7)uStack_28);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_28 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionDuration>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionDuration_b__10_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde150

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTransitionDuration>b__10_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      layer = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration(__c,layer,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionNormalizedTime>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetTransitionNormalizedTime_b__11_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde210

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTransitionNormalizedTime>b__11_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      layer = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime
                (__c,layer,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__12_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde2d0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimation>b__12_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t layer;
  System_String_o *anim;
  float fade;
  
  if (DAT_057029b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b6 = '\x01';
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
    anim = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    layer = 0;
    if ((int)__a->max_length < 2) {
      fade = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
      }
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation(__c,anim,fade,layer,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__13_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde420

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimationAt>b__13_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t layer;
  System_String_o *anim;
  float normalizedTime;
  float fade;
  
  if (DAT_057029b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03dde59a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    anim = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((uint)__a->max_length < 2) goto LAB_03dde59a;
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
        if (__c == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) goto LAB_03dde595;
        goto LAB_03dde4ed;
      }
      pIVar1 = __a->m_Items[3];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
LAB_03dde4ed:
      CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt
                (__c,anim,normalizedTime,fade,layer,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03dde595:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpeed>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetSpeed_b__14_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde5a0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__SetSpeed>b__14_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float speed;
  
  if (DAT_057029b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b8 = '\x01';
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
    speed = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed(__c,speed,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__15_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde630

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationLength>b__15_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *anim;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029b9 = '\x01';
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
    anim = (System_String_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength(__c,anim,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetFloat>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetFloat_b__16_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde6e0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetFloat>b__16_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029ba = '\x01';
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
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetFloat(__c,name,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetInteger>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetInteger_b__17_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde790

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetInteger>b__17_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *name;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029bb = '\x01';
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
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetInteger(__c,name,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBool>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetBool_b__18_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde840

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetBool>b__18_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057029bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029bc = '\x01';
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
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__GetBool(__c,name,(MethodInfo *)0x0);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFloat>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetFloat_b__19_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde8f0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__SetFloat>b__19_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  float value;
  
  if (DAT_057029bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029bd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dde9a3:
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
      if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimatorBuiltin__SetFloat(__c,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03dde9a3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteger>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetInteger_b__20_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dde9b0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__SetInteger>b__20_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t value;
  System_String_o *name;
  
  if (DAT_057029be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029be = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ddea65:
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
      value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimatorBuiltin__SetInteger(__c,name,value,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03ddea65;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBool>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetBool_b__21_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ddea70

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__SetBool>b__21_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *name;
  
  if (DAT_057029bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029bf = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03ddeb26:
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
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimatorBuiltin__SetBool(__c,name,uVar1 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03ddeb26;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTrigger>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetTrigger_b__22_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ddeb30

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__SetTrigger>b__22_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  
  if (DAT_057029c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029c0 = '\x01';
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
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetTrigger>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__ResetTrigger_b__23_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ddebd0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__ResetTrigger>b__23_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *name;
  
  if (DAT_057029c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029c1 = '\x01';
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
    name = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger(__c,name,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLayerWeight>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__SetLayerWeight_b__24_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ddec70

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__SetLayerWeight>b__24_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t layer;
  float weight;
  
  if (DAT_057029c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029c2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dded1f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      weight = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
        CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight(__c,layer,weight,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03dded1f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetLayerWeight>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetLayerWeight_b__25_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dded30

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetLayerWeight>b__25_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029c3 = '\x01';
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
    layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetLayerWeight(__c,layer,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__26_0 (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAnimatorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ddede0

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationNormalizedTime>b__26_0
          (CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t layer;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_057029c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029c4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      layer = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layer = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    }
    if (__c != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
      CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime
                (__c,layer,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ddb150

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05702994 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"PlayAnimationAt");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"GetInteger");
    il2cpp_init_method_metadata(&"SetTrigger");
    il2cpp_init_method_metadata(&"Update");
    il2cpp_init_method_metadata(&"GetLayerWeight");
    il2cpp_init_method_metadata(&"GetFloat");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"HasRootMotion");
    il2cpp_init_method_metadata(&"GetTransitionDuration");
    il2cpp_init_method_metadata(&"DeltaPosition");
    il2cpp_init_method_metadata(&"SetLayerWeight");
    il2cpp_init_method_metadata(&"SetInteger");
    il2cpp_init_method_metadata(&"GetBool");
    il2cpp_init_method_metadata(&"ApplyRootMotion");
    il2cpp_init_method_metadata(&"SetSpeed");
    il2cpp_init_method_metadata(&"SetFloat");
    il2cpp_init_method_metadata(&"GetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"GetTransitionNormalizedTime");
    il2cpp_init_method_metadata(&"ApplyBuiltinRootMotion");
    il2cpp_init_method_metadata(&"DeltaRotation");
    il2cpp_init_method_metadata(&"IsTag");
    il2cpp_init_method_metadata(&"ResetTrigger");
    il2cpp_init_method_metadata(&"IsPlaying");
    il2cpp_init_method_metadata(&"SetBool");
    DAT_05702994 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6e230e95) {
    if (uVar3 < 0x492a3cd0) {
      if (uVar3 < 0x185debee) {
        if (uVar3 == 0x11452a77) {
          bVar4 = System_String__op_Equality(name,"SetBool",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057029a8 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetBool_b__21_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057029a8 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x80);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x80);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x80,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if (uVar3 == 0x154e2cf3) {
          bVar4 = System_String__op_Equality(name,"SetInteger",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057029a7 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetInteger_b__20);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057029a7 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x78);
            }
            else {
              pSVar9 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x78);
            }
            if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar9;
              il2cpp_runtime_glue(lVar2 + 0x78,pSVar9);
            }
            pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar10;
          }
        }
        else if ((uVar3 == 0x185debed) &&
                (bVar4 = System_String__op_Equality(name,"ApplyRootMotion",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702998 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAnimatorBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ApplyRootMotion);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ApplyRootMotion_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
            DAT_05702998 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
          System_Func<object__object>___ctor();
          setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAnimatorBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x1c21234b) {
        bVar4 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029ad == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationNorma);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029ad = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0xa8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x2f7dcbe5) {
        bVar4 = System_String__op_Equality(name,"HasRootMotion",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702997 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasRootMotion_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
            DAT_05702997 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x492a3ccf) &&
              (bVar4 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029a2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029a2 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 < 0x54d57509) {
      if (uVar3 == 0x525bd9f7) {
        bVar4 = System_String__op_Equality(name,"GetInteger",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029a4 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetInteger_b__17);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029a4 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x60,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x535e4da6) {
        bVar4 = System_String__op_Equality(name,"DeltaPosition",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702995 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeltaPosition_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
            DAT_05702995 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x54d57508) &&
              (bVar4 = System_String__op_Equality(name,"GetTransitionDuration",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570299d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransitionDura);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570299d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x55aebb4e) {
      bVar4 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029a0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationAt_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029a0 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x63f1e834) {
      bVar4 = System_String__op_Equality(name,"ApplyBuiltinRootMotion",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702999 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ApplyBuiltinRootM);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702999 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 8,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x6e230e94) &&
            (bVar4 = System_String__op_Equality(name,"Update",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570299a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Update_b__7_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570299a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xd64c477c) {
    if (uVar3 < 0xaef32d04) {
      if (uVar3 == 0x8a47281e) {
        bVar4 = System_String__op_Equality(name,"SetSpeed",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029a1 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetSpeed_b__14_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029a1 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0xa90ef8b4) {
        bVar4 = System_String__op_Equality(name,"GetTransitionNormalizedTime",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570299e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransitionNorm);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_0570299e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0xaef32d03) &&
              (bVar4 = System_String__op_Equality(name,"DeltaRotation",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702996 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeltaRotation_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
          DAT_05702996 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xb54e6138) {
      bVar4 = System_String__op_Equality(name,"GetLayerWeight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029ac == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetLayerWeight_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029ac = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0xa0,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xc0749efc) {
      bVar4 = System_String__op_Equality(name,"ResetTrigger",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029aa == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetTrigger_b__2);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029aa = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x90,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xd64c477b) &&
            (bVar4 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570299f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570299f = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x38,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xf8a12a84) {
    if (uVar3 == 0xe4b35065) {
      bVar4 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570299b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlaying_b__8_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570299b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0xed6289ad) {
      bVar4 = System_String__op_Equality(name,"SetTrigger",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029a9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTrigger_b__22);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029a9 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xf8a12a83) &&
            (bVar4 = System_String__op_Equality(name,"GetBool",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029a5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBool_b__18_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057029a5 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0xfaf2b5a8) {
    if (uVar3 == 0xfaa10a9c) {
      bVar4 = System_String__op_Equality(name,"SetLayerWeight",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029ab == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLayerWeight_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029ab = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x98,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0xfaf2b5a7) &&
            (bVar4 = System_String__op_Equality(name,"SetFloat",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029a6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetFloat_b__19_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057029a6 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x70,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xfc3aa213) {
    bVar4 = System_String__op_Equality(name,"GetFloat",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029a3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetFloat_b__16_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057029a3 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xfe771063) &&
          (bVar4 = System_String__op_Equality(name,"IsTag",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570299c == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsTag_b__9_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_0570299c = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAnimatorBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaPosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition (const MethodInfo* method);
// 0x3ddbac0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaPosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_05702995 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeltaPosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
    DAT_05702995 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation (const MethodInfo* method);
// 0x3ddbb60

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__DeltaRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_05702996 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeltaRotation_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
    DAT_05702996 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__HasRootMotion
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion (const MethodInfo* method);
// 0x3ddbc00

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__HasRootMotion
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_05702997 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasRootMotion_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
    DAT_05702997 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__ApplyRootMotion
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion (const MethodInfo* method);
// 0x3ddbca0

CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreatePropertyBinding__ApplyRootMotion
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_05702998 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAnimatorBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ApplyRootMotion);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ApplyRootMotion_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
    DAT_05702998 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAnimatorBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ApplyBuiltinRootMotion
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion (const MethodInfo* method);
// 0x3ddbd80

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ApplyBuiltinRootMotion
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_05702999 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ApplyBuiltinRootM);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702999 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__Update
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update (const MethodInfo* method);
// 0x3ddbed0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__Update(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_0570299a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Update_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570299a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsPlaying
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying (const MethodInfo* method);
// 0x3ddc020

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsPlaying
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_0570299b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlaying_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570299b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag (const MethodInfo* method);
// 0x3ddc170

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__IsTag(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_0570299c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsTag_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570299c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionDuration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration (const MethodInfo* method);
// 0x3ddc2c0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionDuration
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_0570299d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransitionDura);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570299d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime (const MethodInfo* method);
// 0x3ddc410

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetTransitionNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_0570299e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTransitionNorm);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570299e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x3ddc560

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_0570299f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570299f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x3ddc6b0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationAt_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed (const MethodInfo* method);
// 0x3ddc800

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetSpeed(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetSpeed_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x3ddc950

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat (const MethodInfo* method);
// 0x3ddcaa0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetFloat_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetInteger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger (const MethodInfo* method);
// 0x3ddcbf0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetInteger
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetInteger_b__17);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool (const MethodInfo* method);
// 0x3ddcd40

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetBool_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat (const MethodInfo* method);
// 0x3ddce90

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetFloat(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetFloat_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetInteger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger (const MethodInfo* method);
// 0x3ddcfe0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetInteger
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetInteger_b__20);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool (const MethodInfo* method);
// 0x3ddd130

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetBool_b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetTrigger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger (const MethodInfo* method);
// 0x3ddd280

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetTrigger
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTrigger_b__22);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ResetTrigger
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger (const MethodInfo* method);
// 0x3ddd3d0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__ResetTrigger
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ResetTrigger_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029aa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetLayerWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight (const MethodInfo* method);
// 0x3ddd520

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__SetLayerWeight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetLayerWeight_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029ab = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetLayerWeight
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight (const MethodInfo* method);
// 0x3ddd670

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetLayerWeight
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetLayerWeight_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029ac = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o* CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x3ddd7c0

CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *__this;
  
  if (DAT_057029ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationNorma);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029ad = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAnimatorBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAnimatorBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAnimatorBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAnimatorBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ddd910

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057029ae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"PlayAnimationAt");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"GetInteger");
    il2cpp_init_method_metadata(&"SetTrigger");
    il2cpp_init_method_metadata(&"Update");
    il2cpp_init_method_metadata(&"GetLayerWeight");
    il2cpp_init_method_metadata(&"GetFloat");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"HasRootMotion");
    il2cpp_init_method_metadata(&"GetTransitionDuration");
    il2cpp_init_method_metadata(&"DeltaPosition");
    il2cpp_init_method_metadata(&"SetLayerWeight");
    il2cpp_init_method_metadata(&"SetInteger");
    il2cpp_init_method_metadata(&"GetBool");
    il2cpp_init_method_metadata(&"ApplyRootMotion");
    il2cpp_init_method_metadata(&"SetSpeed");
    il2cpp_init_method_metadata(&"SetFloat");
    il2cpp_init_method_metadata(&"GetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"GetTransitionNormalizedTime");
    il2cpp_init_method_metadata(&"ApplyBuiltinRootMotion");
    il2cpp_init_method_metadata(&"DeltaRotation");
    il2cpp_init_method_metadata(&"IsTag");
    il2cpp_init_method_metadata(&"ResetTrigger");
    il2cpp_init_method_metadata(&"IsPlaying");
    il2cpp_init_method_metadata(&"SetBool");
    DAT_057029ae = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"DeltaPosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DeltaRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasRootMotion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ApplyRootMotion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ApplyBuiltinRootMotion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Update",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlaying",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsTag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTransitionDuration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTransitionNormalizedTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimationAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetInteger",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetInteger",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetTrigger",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ResetTrigger",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetLayerWeight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetLayerWeight",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationNormalizedTime",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaPosition>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaPosition_g____getter_2_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x3dddd00

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__<__CreatePropertyBinding__DeltaPosition>g____getter_2_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaRotation>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__DeltaRotation_g____getter_3_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x3dddd20

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__<__CreatePropertyBinding__DeltaRotation>g____getter_3_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if (__i == (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = (MethodInfo *)(__i->fields).Value;
  if (method_00 != (MethodInfo *)0x0) {
    q = UnityEngine_Animator__get_deltaRotation
                  ((UnityEngine_Animator_o *)method_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__HasRootMotion>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__HasRootMotion_g____getter_4_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x3dddd40

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__<__CreatePropertyBinding__HasRootMotion>g____getter_4_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____getter_5_0 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, const MethodInfo* method);
// 0x3dddd70

Il2CppObject *
CustomLogic_CustomLogicAnimatorBuiltin_Bindings__<__CreatePropertyBinding__ApplyRootMotion>g____getter_5_0
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin_Bindings_____CreatePropertyBinding__ApplyRootMotion_g____setter_5_1 (CustomLogic_CustomLogicAnimatorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dddda0

void CustomLogic_CustomLogicAnimatorBuiltin_Bindings__<__CreatePropertyBinding__ApplyRootMotion>g____setter_5_1
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Animator_o *__this;
  uint uVar1;
  
  if (DAT_057029af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029af = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicAnimatorBuiltin_o *)0x0) {
    __this = (__i->fields).Value;
    if (__this != (UnityEngine_Animator_o *)0x0) {
      UnityEngine_Animator__set_applyRootMotion(__this,uVar1 & 0xff,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin___ctor (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3dda570

void CustomLogic_CustomLogicAnimatorBuiltin___ctor
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin___ctor (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_Animator_o* animator, const MethodInfo* method);
// 0x3dda580

void CustomLogic_CustomLogicAnimatorBuiltin___ctor
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *owner,UnityEngine_Animator_o *animator,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__AnimationClip__o **ppSVar1;
  byte bVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  Il2CppClass *pIVar4;
  uint uVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UnityEngine_RuntimeAnimatorController_o *__this_02;
  UnityEngine_AnimationClip_array *pUVar7;
  System_String_o *key;
  uint uVar8;
  
  if (DAT_0570298a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Animator);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Animation);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__AnimationClip);
    DAT_0570298a = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)animator,
             (MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_glue(&(__this->fields).OwnerBuiltin,owner);
  pIVar4 = TypeInfo_Animator;
  pUVar3 = (__this->fields).Component;
  if (pUVar3 == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_Animator_o *)0x0;
LAB_03dda663:
    il2cpp_runtime_glue(&(__this->fields).Value);
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__AnimationClip);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_UnityEngine_Animation);
    ppSVar1 = &(__this->fields)._animatorClips;
    (__this->fields)._animatorClips =
         (System_Collections_Generic_Dictionary_string__AnimationClip__o *)pSVar6;
    il2cpp_runtime_glue(ppSVar1);
    __this_00 = (__this->fields).Value;
    if (((__this_00 != (UnityEngine_Animator_o *)0x0) &&
        (__this_02 = UnityEngine_Animator__get_runtimeAnimatorController
                               (__this_00,(MethodInfo *)0x0),
        __this_02 != (UnityEngine_RuntimeAnimatorController_o *)0x0)) &&
       (pUVar7 = UnityEngine_RuntimeAnimatorController__get_animationClips
                           (__this_02,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_AnimationClip_array *)0x0)) {
      uVar5 = (uint)pUVar7->max_length;
      if (0 < (int)uVar5) {
        uVar8 = 0;
        do {
          if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_01 = pUVar7->m_Items[(int)uVar8];
          if (__this_01 == (UnityEngine_AnimationClip_o *)0x0) goto LAB_03dda732;
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
          key = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03dda732;
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar6,(Il2CppObject *)key,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
          uVar8 = uVar8 + 1;
          uVar5 = (uint)pUVar7->max_length;
        } while ((int)uVar8 < (int)uVar5);
      }
      return;
    }
LAB_03dda732:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = (TypeInfo_Animator->_2).naturalAligment;
  if ((bVar2 <= (pUVar3->klass->_2).naturalAligment) &&
     ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Animator)) {
    (__this->fields).Value = (UnityEngine_Animator_o *)pUVar3;
    if ((bVar2 <= (pUVar3->klass->_2).naturalAligment) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar4)) goto LAB_03dda663;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar3,pIVar4);
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaPosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3dda750

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaPosition
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UVar1 = UnityEngine_Animator__get_deltaPosition(__this_00,(MethodInfo *)0x0);
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
    (__this_01->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
    (__this_01->fields).Value.fields.z = UVar1.fields.z;
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaRotation (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3dda810

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_DeltaRotation
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  method_00 = (MethodInfo *)(__this->fields).Value;
  if (method_00 != (MethodInfo *)0x0) {
    q = UnityEngine_Animator__get_deltaRotation
                  ((UnityEngine_Animator_o *)method_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_HasRootMotion
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3dda830

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__get_HasRootMotion
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    bVar1 = UnityEngine_Animator__get_hasRootMotion(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_ApplyRootMotion
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3dda850

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__get_ApplyRootMotion
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    bVar1 = UnityEngine_Animator__get_applyRootMotion(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$set_ApplyRootMotion
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__set_ApplyRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3dda870

void CustomLogic_CustomLogicAnimatorBuiltin__set_ApplyRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__set_applyRootMotion(__this_00,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$ApplyBuiltinRootMotion
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3dda890

void CustomLogic_CustomLogicAnimatorBuiltin__ApplyBuiltinRootMotion
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__ApplyBuiltinRootMotion(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$Update
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__Update (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, float deltaTime, const MethodInfo* method);
// 0x3dda8b0

void CustomLogic_CustomLogicAnimatorBuiltin__Update
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,float deltaTime,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__Update(__this_00,deltaTime,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, int32_t layer, const MethodInfo* method);
// 0x3dda8d0

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__IsPlaying
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,int32_t layer,
          MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  UnityEngine_AnimatorStateInfo_o __this_00;
  bool_conflict bVar2;
  UnityEngine_AnimatorStateInfo_Fields local_70 [2];
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if ((char)bVar2 == '\0') {
        UnityEngine_Animator__GetCurrentAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)local_70,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Animator__GetNextAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)local_70,pUVar1,layer,(MethodInfo *)0x0);
      }
      __this_00.fields.m_FullPath = local_70[0].m_FullPath;
      __this_00.fields.m_NormalizedTime = local_70[0].m_NormalizedTime;
      __this_00.fields.m_Name = local_70[0].m_Name;
      __this_00.fields.m_Path = local_70[0].m_Path;
      __this_00.fields.m_Length = local_70[0].m_Length;
      __this_00.fields.m_Speed = local_70[0].m_Speed;
      __this_00.fields.m_SpeedMultiplier = local_70[0].m_SpeedMultiplier;
      __this_00.fields.m_Tag = local_70[0].m_Tag;
      __this_00.fields.m_Loop = local_70[0].m_Loop;
      bVar2 = UnityEngine_AnimatorStateInfo__IsName
                        (__this_00,(System_String_o *)&stack0xffffffffffffff68,(MethodInfo *)anim);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$IsTag
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__IsTag (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* tag, int32_t layer, const MethodInfo* method);
// 0x3dda9e0

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__IsTag
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *tag,int32_t layer,
          MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  UnityEngine_AnimatorStateInfo_o __this_00;
  bool_conflict bVar2;
  UnityEngine_AnimatorStateInfo_Fields local_70 [2];
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if ((char)bVar2 == '\0') {
        UnityEngine_Animator__GetCurrentAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)local_70,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Animator__GetNextAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)local_70,pUVar1,layer,(MethodInfo *)0x0);
      }
      __this_00.fields.m_FullPath = local_70[0].m_FullPath;
      __this_00.fields.m_NormalizedTime = local_70[0].m_NormalizedTime;
      __this_00.fields.m_Name = local_70[0].m_Name;
      __this_00.fields.m_Path = local_70[0].m_Path;
      __this_00.fields.m_Length = local_70[0].m_Length;
      __this_00.fields.m_Speed = local_70[0].m_Speed;
      __this_00.fields.m_SpeedMultiplier = local_70[0].m_SpeedMultiplier;
      __this_00.fields.m_Tag = local_70[0].m_Tag;
      __this_00.fields.m_Loop = local_70[0].m_Loop;
      bVar2 = UnityEngine_AnimatorStateInfo__IsTag
                        (__this_00,(System_String_o *)&stack0xffffffffffffff68,(MethodInfo *)tag);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionDuration
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x3ddaa80

float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionDuration
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimatorTransitionInfo_o __this_01;
  float fVar1;
  Il2CppType *local_20;
  Il2CppType **ppIStack_18;
  _union_13 local_10;
  _union_14 _Stack_8;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__GetAnimatorTransitionInfo
              ((UnityEngine_AnimatorTransitionInfo_o *)&stack0xffffffffffffffe0,__this_00,layer,
               (MethodInfo *)0x0);
    __this_01.fields._8_8_ = ppIStack_18;
    __this_01.fields._0_8_ = local_20;
    __this_01.fields._16_8_ = local_10.rgctx_data;
    __this_01.fields._24_8_ = _Stack_8.genericMethod;
    fVar1 = UnityEngine_AnimatorTransitionInfo__get_duration
                      (__this_01,(MethodInfo *)&stack0xffffffffffffffb8);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x3ddaad0

float CustomLogic_CustomLogicAnimatorBuiltin__GetTransitionNormalizedTime
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  UnityEngine_AnimatorTransitionInfo_o __this_01;
  float fVar1;
  Il2CppType *local_20;
  Il2CppType **ppIStack_18;
  _union_13 local_10;
  _union_14 _Stack_8;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__GetAnimatorTransitionInfo
              ((UnityEngine_AnimatorTransitionInfo_o *)&stack0xffffffffffffffe0,__this_00,layer,
               (MethodInfo *)0x0);
    __this_01.fields._8_8_ = ppIStack_18;
    __this_01.fields._0_8_ = local_20;
    __this_01.fields._16_8_ = local_10.rgctx_data;
    __this_01.fields._24_8_ = _Stack_8.genericMethod;
    fVar1 = UnityEngine_AnimatorTransitionInfo__get_normalizedTime
                      (__this_01,(MethodInfo *)&stack0xffffffffffffffb8);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, float fade, int32_t layer, const MethodInfo* method);
// 0x3ddab20

void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimation
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,float fade,
               int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__CrossFade(__this_00,anim,fade,layer,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, float normalizedTime, float fade, int32_t layer, const MethodInfo* method);
// 0x3ddab40

void CustomLogic_CustomLogicAnimatorBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,
               float normalizedTime,float fade,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__CrossFade(__this_00,anim,fade,layer,normalizedTime,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetSpeed
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, float speed, const MethodInfo* method);
// 0x3ddab60

void CustomLogic_CustomLogicAnimatorBuiltin__SetSpeed
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,float speed,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__set_speed(__this_00,speed,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* anim, const MethodInfo* method);
// 0x3ddab80

float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *anim,
                MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_AnimationClip_o *__this_01;
  float fVar1;
  
  if (DAT_0570298b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AnimationClip_get_Item);
    DAT_0570298b = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._animatorClips;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = (UnityEngine_AnimationClip_o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (__this_00,(Il2CppObject *)anim,MethodInfo_AnimationClip_get_Item);
    if (__this_01 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar1 = UnityEngine_AnimationClip__get_length(__this_01,(MethodInfo *)0x0);
      return fVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetFloat
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetFloat (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ddabe0

float CustomLogic_CustomLogicAnimatorBuiltin__GetFloat
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,
                MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    fVar1 = UnityEngine_Animator__GetFloat(__this_00,name,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetInteger
// il2cpp: int32_t CustomLogic_CustomLogicAnimatorBuiltin__GetInteger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ddac00

int32_t CustomLogic_CustomLogicAnimatorBuiltin__GetInteger
                  (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,
                  MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    iVar1 = UnityEngine_Animator__GetInteger(__this_00,name,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetBool
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__GetBool (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ddac20

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__GetBool
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,MethodInfo *method
          )

{
  UnityEngine_Animator_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    bVar1 = UnityEngine_Animator__GetBool(__this_00,name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetFloat
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetFloat (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, float value, const MethodInfo* method);
// 0x3ddac40

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetInteger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetInteger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, int32_t value, const MethodInfo* method);
// 0x3ddac60

void CustomLogic_CustomLogicAnimatorBuiltin__SetInteger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,int32_t value
               ,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetInteger(__this_00,name,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetBool
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetBool (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, bool value, const MethodInfo* method);
// 0x3ddac80

void CustomLogic_CustomLogicAnimatorBuiltin__SetBool
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,
               bool_conflict value,MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetBool(__this_00,name,value & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetTrigger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ddaca0

void CustomLogic_CustomLogicAnimatorBuiltin__SetTrigger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetTrigger(__this_00,name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$ResetTrigger
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3ddacc0

void CustomLogic_CustomLogicAnimatorBuiltin__ResetTrigger
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,System_String_o *name,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__ResetTrigger(__this_00,name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$SetLayerWeight
// il2cpp: void CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, float weight, const MethodInfo* method);
// 0x3ddace0

void CustomLogic_CustomLogicAnimatorBuiltin__SetLayerWeight
               (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,float weight,
               MethodInfo *method)

{
  UnityEngine_Animator_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_Animator_o *)0x0) {
    UnityEngine_Animator__SetLayerWeight(__this_00,layer,weight,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetLayerWeight
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetLayerWeight (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x3ddad00

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x3ddad20

float CustomLogic_CustomLogicAnimatorBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  UnityEngine_AnimatorStateInfo_o __this_00;
  bool_conflict bVar2;
  float fVar3;
  Il2CppType *local_60;
  Il2CppType **ppIStack_58;
  _union_13 local_50;
  _union_14 _Stack_48;
  uint32_t local_40;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if ((char)bVar2 == '\0') {
        UnityEngine_Animator__GetCurrentAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)&local_60,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Animator__GetNextAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)&local_60,pUVar1,layer,(MethodInfo *)0x0);
      }
      __this_00.fields._8_8_ = ppIStack_58;
      __this_00.fields._0_8_ = local_60;
      __this_00.fields._16_8_ = local_50.rgctx_data;
      __this_00.fields._24_8_ = _Stack_48.genericMethod;
      __this_00.fields.m_Loop = local_40;
      fVar3 = UnityEngine_AnimatorStateInfo__get_normalizedTime
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff78);
      return fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$GetCurrentStateInfo
// il2cpp: UnityEngine_AnimatorStateInfo_o CustomLogic_CustomLogicAnimatorBuiltin__GetCurrentStateInfo (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, int32_t layer, const MethodInfo* method);
// 0x3dda970

UnityEngine_AnimatorStateInfo_o *
CustomLogic_CustomLogicAnimatorBuiltin__GetCurrentStateInfo
          (UnityEngine_AnimatorStateInfo_o *__return_storage_ptr__,
          CustomLogic_CustomLogicAnimatorBuiltin_o *__this,int32_t layer,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_AnimatorStateInfo_Fields UStack_40;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
    bVar2 = UnityEngine_Animator__IsInTransition(pUVar1,layer,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Value;
    if (pUVar1 != (UnityEngine_Animator_o *)0x0) {
      if ((char)bVar2 == '\0') {
        UnityEngine_Animator__GetCurrentAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)&UStack_40,pUVar1,layer,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Animator__GetNextAnimatorStateInfo
                  ((UnityEngine_AnimatorStateInfo_o *)&UStack_40,pUVar1,layer,(MethodInfo *)0x0);
      }
      (__return_storage_ptr__->fields).m_Loop = UStack_40.m_Loop;
      (__return_storage_ptr__->fields).m_Length = UStack_40.m_Length;
      (__return_storage_ptr__->fields).m_Speed = UStack_40.m_Speed;
      (__return_storage_ptr__->fields).m_SpeedMultiplier = UStack_40.m_SpeedMultiplier;
      (__return_storage_ptr__->fields).m_Tag = UStack_40.m_Tag;
      (__return_storage_ptr__->fields).m_Name = UStack_40.m_Name;
      (__return_storage_ptr__->fields).m_Path = UStack_40.m_Path;
      (__return_storage_ptr__->fields).m_FullPath = UStack_40.m_FullPath;
      (__return_storage_ptr__->fields).m_NormalizedTime = UStack_40.m_NormalizedTime;
      return __return_storage_ptr__;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAnimatorBuiltin__get_ClassName (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3ddadb0

System_String_o *
CustomLogic_CustomLogicAnimatorBuiltin__get_ClassName
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570298c == '\0') {
    il2cpp_init_method_metadata(&"Animator");
    DAT_0570298c = '\x01';
  }
  return "Animator";
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsAbstract (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3ddade0

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_IsStatic (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3ddadf0

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__get_IsStatic
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAnimatorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAnimatorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAnimatorBuiltin_o* __this, const MethodInfo* method);
// 0x3ddae00

bool_conflict
CustomLogic_CustomLogicAnimatorBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicAnimatorBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



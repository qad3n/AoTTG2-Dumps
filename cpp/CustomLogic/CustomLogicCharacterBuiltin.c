// Type: CustomLogic.CustomLogicCharacterBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicCharacterBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicCharacterBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dfa860

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCharacterBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCharacterBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dfff90

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702b6f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b6f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e00000

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetDisplayName>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetDisplayName_b__28_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00010

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__SetDisplayName>b__28_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  uint uVar2;
  System_String_o *name;
  
  if (DAT_05702b70 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b70 = '\x01';
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
    uVar2 = 1;
    if (1 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName
                (__c,name,uVar2 & 0xff,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKilled>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetKilled_b__29_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00100

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__GetKilled>b__29_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *killer;
  
  if (DAT_05702b71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b71 = '\x01';
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
    killer = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__GetKilled(__c,killer,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetDamaged>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetDamaged_b__30_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e001a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__GetDamaged>b__30_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  int32_t damage;
  System_String_o *killer;
  
  if (DAT_05702b72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b72 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e00255:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    killer = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      damage = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCharacterBuiltin__GetDamaged(__c,killer,damage,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e00255;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Emote>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Emote_b__31_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00260

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__Emote>b__31_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *emote;
  
  if (DAT_05702b73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b73 = '\x01';
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
    emote = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__Emote(__c,emote,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__32_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00300

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimation>b__32_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  System_String_o *animation;
  float fade;
  
  if (DAT_05702b74 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b74 = '\x01';
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
    if ((int)__a->max_length < 2) {
      fade = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation(__c,animation,fade,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__33_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e003f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayAnimationAt>b__33_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  byte bVar2;
  bool_conflict bVar3;
  System_String_o *animation;
  float t;
  float fade;
  
  if (DAT_05702b75 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b75 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03e00563:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    animation = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if ((uint)__a->max_length < 2) goto LAB_03e00563;
    t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
    if ((int)__a->max_length < 3) {
      fade = 0.1;
      bVar2 = 0;
    }
    else {
      pIVar1 = __a->m_Items[2];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 4) {
        bVar2 = 0;
        if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) goto LAB_03e0055e;
        goto LAB_03e004bd;
      }
      pIVar1 = __a->m_Items[3];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      bVar2 = (byte)bVar3;
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
LAB_03e004bd:
      CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt
                (__c,animation,t,fade,(uint)bVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e0055e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__34_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00570

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationSpeed>b__34_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  System_String_o *animation;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702b76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b76 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed(__c,animation,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__35_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00620

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__SetAnimationSpeed>b__35_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  uint uVar2;
  System_String_o *animation;
  float speed;
  
  if (DAT_05702b77 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b77 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e00730:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    animation = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      speed = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      uVar2 = 1;
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar1,MethodInfo_Boolean_ConvertTo_Boolean);
      }
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed
                  (__c,animation,speed,uVar2 & 0xff,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e00730;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__36_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00740

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__IsPlayingAnimation>b__36_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *animation;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05702b78 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b78 = '\x01';
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
    animation = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation
                        (__c,animation,(MethodInfo *)0x0);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__37_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e007f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationNormalizedTime>b__37_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  System_String_o *animation;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702b79 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b79 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__GetAnimationNormalizedTime
                (__c,animation,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ForceAnimation>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ForceAnimation_b__38_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e008a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__ForceAnimation>b__38_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  System_String_o *animation;
  float fade;
  
  if (DAT_05702b7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b7a = '\x01';
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
    if ((int)__a->max_length < 2) {
      fade = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fade = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__ForceAnimation(__c,animation,fade,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__39_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00990

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__GetAnimationLength>b__39_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  System_String_o *animation;
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (DAT_05702b7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b7b = '\x01';
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
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength(__c,animation,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_14);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingSound>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingSound_b__40_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00a40

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__IsPlayingSound>b__40_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  System_String_o *sound;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05702b7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b7c = '\x01';
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
    sound = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound(__c,sound,(MethodInfo *)0x0);
      uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__41_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00af0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__PlaySound>b__41_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *sound;
  
  if (DAT_05702b7d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b7d = '\x01';
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
    sound = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__PlaySound(__c,sound,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__42_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00b90

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__StopSound>b__42_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *sound;
  
  if (DAT_05702b7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b7e = '\x01';
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
    sound = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String)
    ;
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__StopSound(__c,sound,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__FadeSound>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__FadeSound_b__43_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00c30

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__FadeSound>b__43_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  System_String_o *sound;
  float volume;
  float time;
  
  if (DAT_05702b7f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b7f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      sound = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        volume = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          time = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
            CustomLogic_CustomLogicCharacterBuiltin__FadeSound
                      (__c,sound,volume,time,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto LAB_03e00d17;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e00d17:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__44_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00d20

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__LookAt>b__44_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  
  if (DAT_05702b80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b80 = '\x01';
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
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__LookAt(__c,position,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__45_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00dc0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__AddForce>b__45_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *force;
  
  if (DAT_05702b81 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b81 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e00e55:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    force = (CustomLogic_CustomLogicVector3Builtin_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCharacterBuiltin__AddForce
                  (__c,force,__a->m_Items[1],(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e00e55;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reveal>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Reveal_b__46_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00e60

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__Reveal>b__46_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  float delay;
  
  if (DAT_05702b82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b82 = '\x01';
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
    delay = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__Reveal(__c,delay,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddOutline>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddOutline_b__47_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e00ef0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__AddOutline>b__47_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  System_String_o *mode;
  
  if (DAT_05702b83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&"OutlineAll");
    DAT_05702b83 = '\x01';
  }
  mode = "OutlineAll";
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      color = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
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
      color = (CustomLogic_CustomLogicColorBuiltin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicColorBuiltin_ConvertTo_CustomLogicCol);
      if (1 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        mode = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
        if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) goto LAB_03e00ff1;
        goto LAB_03e00fd5;
      }
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
LAB_03e00fd5:
      CustomLogic_CustomLogicCharacterBuiltin__AddOutline(__c,color,mode,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e00ff1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveOutline>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__RemoveOutline_b__48_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e01000

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveOutline>b__48_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__49_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e01020

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__49_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  int iVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                        (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__50_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e01070

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__50_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin____Hash__(__c,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dfa8f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702b2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"PlayAnimationAt");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"ForceAnimation");
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"GetDamaged");
    il2cpp_init_method_metadata(&"SetDisplayName");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"StopSound");
    il2cpp_init_method_metadata(&"CustomDamage");
    il2cpp_init_method_metadata(&"IsPlayingSound");
    il2cpp_init_method_metadata(&"Transform");
    il2cpp_init_method_metadata(&"QuaternionRotation");
    il2cpp_init_method_metadata(&"IsAlive");
    il2cpp_init_method_metadata(&"CustomDamageEnabled");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"SetAnimationSpeed");
    il2cpp_init_method_metadata(&"ViewID");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"FadeSound");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"AddOutline");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"HasTargetDirection");
    il2cpp_init_method_metadata(&"MaxHealth");
    il2cpp_init_method_metadata(&"Health");
    il2cpp_init_method_metadata(&"IsMine");
    il2cpp_init_method_metadata(&"IsMainCharacter");
    il2cpp_init_method_metadata(&"IsPlayingAnimation");
    il2cpp_init_method_metadata(&"GetAnimationSpeed");
    il2cpp_init_method_metadata(&"PlaySound");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"CurrentAnimation");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"RemoveOutline");
    il2cpp_init_method_metadata(&"Velocity");
    il2cpp_init_method_metadata(&"AddForce");
    il2cpp_init_method_metadata(&"GetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"Player");
    il2cpp_init_method_metadata(&"GetKilled");
    il2cpp_init_method_metadata(&"TargetDirection");
    il2cpp_init_method_metadata(&"IsAI");
    il2cpp_init_method_metadata(&"LookAt");
    il2cpp_init_method_metadata(&"Grounded");
    il2cpp_init_method_metadata(&"Reveal");
    DAT_05702b2d = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x59397013) {
    if (uVar3 < 0x23315dde) {
      if (uVar3 < 0x19f47650) {
        if (uVar3 < 0xfe07307) {
          if (uVar3 == 0x232777f) {
            bVar4 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702b38 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
                il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
                DAT_05702b38 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
              System_Func<object__object>___ctor();
              pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
              System_Action<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if (uVar3 == 0x864c5e5) {
            bVar4 = System_String__op_Equality(name,"RemoveOutline",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702b5c == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
                il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveOutline_b);
                il2cpp_init_method_metadata(&TypeInfo_c);
                DAT_05702b5c = '\x01';
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_c + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_init_class();
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
              }
              else {
                pSVar10 = *(System_Func_T__object____object__o **)
                           (*(long *)(TypeInfo_c + 0xb8) + 0xa8);
              }
              if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
                System_Func<object__object__object>___ctor();
                lVar2 = *(long *)(TypeInfo_c + 0xb8);
                *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = pSVar10;
                il2cpp_runtime_glue(lVar2 + 0xa8,pSVar10);
              }
              pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar11;
            }
          }
          else if ((uVar3 == 0xfe07306) &&
                  (bVar4 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b2e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Name_g____setter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
              DAT_05702b2e = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x137f7d63) {
          bVar4 = System_String__op_Equality(name,"Emote",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b4b == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Emote_b__31_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702b4b = '\x01';
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
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x15676746) {
          bVar4 = System_String__op_Equality(name,"GetKilled",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b49 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKilled_b__29_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702b49 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x10);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x19f4764f) &&
                (bVar4 = System_String__op_Equality(name,"IsAI",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b31 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsAI_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b31 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x1c70fc21) {
        if (uVar3 == 0x1ae30f5a) {
          bVar4 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b4e == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationSpeed);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702b4e = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x38);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x38);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x1c21234b) {
          bVar4 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b51 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationNorma);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702b51 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x50);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x50);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x1c70fc20) &&
                (bVar4 = System_String__op_Equality(name,"Player",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b30 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Player_g____get);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b30 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x1e9e9f85) {
        bVar4 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b3c == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b3c = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x2329c92c) {
        bVar4 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b40 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Team_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Team_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b40 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x23315ddd) &&
              (bVar4 = System_String__op_Equality(name,"IsPlayingAnimation",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b50 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlayingAnimatio);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702b50 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x42f35941) {
      if (uVar3 < 0x2ba6c2e3) {
        if (uVar3 == 0x26d90d14) {
          bVar4 = System_String__op_Equality(name,"IsPlayingSound",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b54 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlayingSound_b);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702b54 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x68);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x68);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if (uVar3 == 0x296dba07) {
          bVar4 = System_String__op_Equality(name,"AddForce",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b59 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddForce_b__45_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702b59 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x90);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x90);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x90,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x2ba6c2e2) &&
                (bVar4 = System_String__op_Equality(name,"PlaySound",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b55 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlaySound_b__41_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b55 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x2fe74447) {
        bVar4 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b39 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionRotat);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionRotatio);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b39 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x369870e0) {
        bVar4 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b2f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Guild_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Guild_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b2f = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x42f35940) &&
              (bVar4 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b3d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_17);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b3d = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x54531f33) {
      if (uVar3 == 0x47bfe69f) {
        bVar4 = System_String__op_Equality(name,"Grounded",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b46 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grounded_g____g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b46 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x492a3ccf) {
        bVar4 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b53 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b53 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x60);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x60);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x54531f32) &&
              (bVar4 = System_String__op_Equality(name,"FadeSound",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b57 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FadeSound_b__43_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702b57 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x54cb8f06) {
      bVar4 = System_String__op_Equality(name,"IsMine",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b34 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMine_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b34 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x55aebb4e) {
      bVar4 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b4d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationAt_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702b4d = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x59397012) &&
            (bVar4 = System_String__op_Equality(name,"ForceAnimation",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b52 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ForceAnimation_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702b52 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0x91a036e3) {
    if (uVar3 < 0x708f5d7c) {
      if (uVar3 < 0x5e2c4c74) {
        if (uVar3 == 0x59701b9b) {
          bVar4 = System_String__op_Equality(name,"MaxHealth",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b42 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxHealth_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxHealth_g____se);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
              DAT_05702b42 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x5ad5e045) {
          bVar4 = System_String__op_Equality(name,"ViewID",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702b33 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ViewID_g____get);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
              DAT_05702b33 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x5e2c4c73) &&
                (bVar4 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b58 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookAt_b__44_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b58 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x88);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x88);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x88,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x65c8db57) {
        bVar4 = System_String__op_Equality(name,"IsMainCharacter",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b35 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMainCharacter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b35 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x6cb57a76) {
        bVar4 = System_String__op_Equality(name,"GetDamaged",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b4a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetDamaged_b__30);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b4a = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x708f5d7b) &&
              (bVar4 = System_String__op_Equality(name,"CustomDamage",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CustomDamage_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CustomDamage_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b44 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x7dc09c41) {
      if (uVar3 == 0x792a6491) {
        bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b5e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__50_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b5e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xb8);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xb8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x7b5a42d8) {
        bVar4 = System_String__op_Equality(name,"CurrentAnimation",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b45 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentAnimatio);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b45 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x7dc09c40) &&
              (bVar4 = System_String__op_Equality(name,"CustomDamageEnabled",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b43 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CustomDamageEna);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CustomDamageEnabl);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b43 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x8b6f3716) {
      bVar4 = System_String__op_Equality(name,"IsAlive",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b32 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsAlive_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b32 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x8c83015b) {
      bVar4 = System_String__op_Equality(name,"HasTargetDirection",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b3e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasTargetDirect);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b3e = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x91a036e2) &&
            (bVar4 = System_String__op_Equality(name,"AddOutline",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b5b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddOutline_b__47);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702b5b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xa0);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0xa0,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xba408253) {
    if (uVar3 < 0x9dba7b5a) {
      if (uVar3 == 0x91efe6d7) {
        bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b5d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__49_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702b5d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0xb0);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0xb0,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x986145af) {
        bVar4 = System_String__op_Equality(name,"Health",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702b41 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Health_g____get);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Health_g____sette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
            DAT_05702b41 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x9dba7b59) &&
              (bVar4 = System_String__op_Equality(name,"TargetDirection",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b3f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TargetDirection);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TargetDirection_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b3f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xa3370cc8) {
      bVar4 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b47 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rigidbody_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b47 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xad82abbb) {
      bVar4 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b36 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Transform_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b36 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xba408252) &&
            (bVar4 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b3a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Velocity_g____g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Velocity_g____set);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        DAT_05702b3a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xd64c477c) {
    if (uVar3 == 0xbba2a3f0) {
      bVar4 = System_String__op_Equality(name,"Reveal",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b5a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reveal_b__46_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702b5a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x98);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x98) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x98,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xcb7df474) {
      bVar4 = System_String__op_Equality(name,"StopSound",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b56 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopSound_b__42_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702b56 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xd64c477b) &&
            (bVar4 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b4c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702b4c = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe50883bb) {
    if (uVar3 == 0xe27f342a) {
      bVar4 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702b37 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
          DAT_05702b37 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe50883ba) &&
            (bVar4 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b3b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
        DAT_05702b3b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe5b11b66) {
    bVar4 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702b4f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAnimationSpeed);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702b4f = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf3ae8778) &&
          (bVar4 = System_String__op_Equality(name,"SetDisplayName",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702b48 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetDisplayName_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702b48 = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 8,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCharacterBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x3dfbae0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Name_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Name_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b2e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x3dfbbc0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Guild_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Guild_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b2f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Player
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player (const MethodInfo* method);
// 0x3dfbca0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Player_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b30 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI (const MethodInfo* method);
// 0x3dfbd40

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsAI_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b31 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAlive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive (const MethodInfo* method);
// 0x3dfbde0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsAlive_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b32 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__ViewID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID (const MethodInfo* method);
// 0x3dfbe80

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b33 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ViewID_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b33 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine (const MethodInfo* method);
// 0x3dfbf20

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMine_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b34 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMainCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter (const MethodInfo* method);
// 0x3dfbfc0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b35 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMainCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b35 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x3dfc060

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Transform_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b36 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3dfc100

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Position_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b37 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x3dfc1e0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rotation_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Rotation_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b38 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x3dfc2c0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__QuaternionRotat);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__QuaternionRotatio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b39 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x3dfc3a0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Velocity_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Velocity_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b3a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x3dfc480

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Forward_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Forward_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b3b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x3dfc560

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Right_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Right_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b3c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x3dfc640

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Up_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Up_g____setter_17);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b3d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__HasTargetDirection
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection (const MethodInfo* method);
// 0x3dfc720

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HasTargetDirect);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b3e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__TargetDirection
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection (const MethodInfo* method);
// 0x3dfc7c0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b3f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TargetDirection);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TargetDirection_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b3f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x3dfc8a0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Team_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Team_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b40 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Health
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health (const MethodInfo* method);
// 0x3dfc980

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Health_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Health_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b41 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__MaxHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth (const MethodInfo* method);
// 0x3dfca60

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxHealth_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxHealth_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b42 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamageEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled (const MethodInfo* method);
// 0x3dfcb40

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CustomDamageEna);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CustomDamageEnabl);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b43 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage (const MethodInfo* method);
// 0x3dfcc20

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicCharacterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CustomDamage_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CustomDamage_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b44 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicCharacterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentAnimation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation (const MethodInfo* method);
// 0x3dfcd00

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentAnimatio);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b45 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Grounded
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded (const MethodInfo* method);
// 0x3dfcda0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b46 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Grounded_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b46 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody (const MethodInfo* method);
// 0x3dfce40

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b47 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rigidbody_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object);
    DAT_05702b47 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetDisplayName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName (const MethodInfo* method);
// 0x3dfcee0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetDisplayName_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b48 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetKilled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled (const MethodInfo* method);
// 0x3dfd030

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKilled_b__29_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b49 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetDamaged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged (const MethodInfo* method);
// 0x3dfd180

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetDamaged_b__30);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b4a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Emote
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote (const MethodInfo* method);
// 0x3dfd2d0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b4b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Emote_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b4b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x3dfd420

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b4c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b4c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x3dfd570

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b4d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayAnimationAt_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b4d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x3dfd6c0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b4e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationSpeed);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b4e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x3dfd810

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b4f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetAnimationSpeed);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b4f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation (const MethodInfo* method);
// 0x3dfd960

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b50 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlayingAnimatio);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b50 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x3dfdab0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b51 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationNorma);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b51 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ForceAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation (const MethodInfo* method);
// 0x3dfdc00

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b52 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ForceAnimation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b52 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x3dfdd50

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b53 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetAnimationLengt);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b53 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound (const MethodInfo* method);
// 0x3dfdea0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsPlayingSound_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b54 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlaySound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound (const MethodInfo* method);
// 0x3dfdff0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlaySound_b__41_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b55 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__StopSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound (const MethodInfo* method);
// 0x3dfe140

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b56 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopSound_b__42_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b56 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__FadeSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound (const MethodInfo* method);
// 0x3dfe290

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b57 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FadeSound_b__43_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b57 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x3dfe3e0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b58 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookAt_b__44_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b58 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce (const MethodInfo* method);
// 0x3dfe530

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b59 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddForce_b__45_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b59 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Reveal
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal (const MethodInfo* method);
// 0x3dfe680

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b5a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reveal_b__46_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b5a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x98) = function;
    il2cpp_runtime_glue(lVar2 + 0x98,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddOutline
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline (const MethodInfo* method);
// 0x3dfe7d0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b5b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddOutline_b__47);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b5b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa0) = function;
    il2cpp_runtime_glue(lVar2 + 0xa0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__RemoveOutline
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline (const MethodInfo* method);
// 0x3dfe920

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b5c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveOutline_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b5c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xa8) = function;
    il2cpp_runtime_glue(lVar2 + 0xa8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3dfea70

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__49_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b5d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb0);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb0) = function;
    il2cpp_runtime_glue(lVar2 + 0xb0,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3dfebc0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this;
  
  if (DAT_05702b5e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__50_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702b5e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0xb8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0xb8) = function;
    il2cpp_runtime_glue(lVar2 + 0xb8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCharacterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dfed10

void CustomLogic_CustomLogicCharacterBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702b5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"PlayAnimationAt");
    il2cpp_init_method_metadata(&"PlayAnimation");
    il2cpp_init_method_metadata(&"ForceAnimation");
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"GetDamaged");
    il2cpp_init_method_metadata(&"SetDisplayName");
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Right");
    il2cpp_init_method_metadata(&"StopSound");
    il2cpp_init_method_metadata(&"CustomDamage");
    il2cpp_init_method_metadata(&"IsPlayingSound");
    il2cpp_init_method_metadata(&"Transform");
    il2cpp_init_method_metadata(&"QuaternionRotation");
    il2cpp_init_method_metadata(&"IsAlive");
    il2cpp_init_method_metadata(&"CustomDamageEnabled");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"SetAnimationSpeed");
    il2cpp_init_method_metadata(&"ViewID");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"FadeSound");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"GetAnimationLength");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"AddOutline");
    il2cpp_init_method_metadata(&"Forward");
    il2cpp_init_method_metadata(&"HasTargetDirection");
    il2cpp_init_method_metadata(&"MaxHealth");
    il2cpp_init_method_metadata(&"Health");
    il2cpp_init_method_metadata(&"IsMine");
    il2cpp_init_method_metadata(&"IsMainCharacter");
    il2cpp_init_method_metadata(&"IsPlayingAnimation");
    il2cpp_init_method_metadata(&"GetAnimationSpeed");
    il2cpp_init_method_metadata(&"PlaySound");
    il2cpp_init_method_metadata(&"Rotation");
    il2cpp_init_method_metadata(&"CurrentAnimation");
    il2cpp_init_method_metadata(&"Up");
    il2cpp_init_method_metadata(&"RemoveOutline");
    il2cpp_init_method_metadata(&"Velocity");
    il2cpp_init_method_metadata(&"AddForce");
    il2cpp_init_method_metadata(&"GetAnimationNormalizedTime");
    il2cpp_init_method_metadata(&"Rigidbody");
    il2cpp_init_method_metadata(&"Player");
    il2cpp_init_method_metadata(&"GetKilled");
    il2cpp_init_method_metadata(&"TargetDirection");
    il2cpp_init_method_metadata(&"IsAI");
    il2cpp_init_method_metadata(&"LookAt");
    il2cpp_init_method_metadata(&"Grounded");
    il2cpp_init_method_metadata(&"Reveal");
    DAT_05702b5f = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Name",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Guild",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Player",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsAI",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsAlive",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ViewID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsMine",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsMainCharacter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Transform",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"QuaternionRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Velocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Forward",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Right",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Up",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HasTargetDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TargetDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Team",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Health",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CustomDamageEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CustomDamage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Grounded",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rigidbody",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetDisplayName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetKilled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetDamaged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Emote",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayAnimationAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetAnimationSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlayingAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationNormalizedTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ForceAnimation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetAnimationLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlayingSound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlaySound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StopSound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FadeSound",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LookAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddForce",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reveal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddOutline",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveOutline",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_2_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff410

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Name>g____getter_2_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(Il2CppObject **)&(pCVar1->fields)._disableKinematicTimeLeft;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__i,0);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_2_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff430

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Name>g____setter_2_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  System_String_o *value;
  
  if (DAT_05702b60 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b60 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    __this = (__i->fields).Character;
    if (__this != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__set_Name(__this,value,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_3_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff4b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Guild>g____getter_3_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(Il2CppObject **)&(pCVar1->fields).HasExplicitNameTag;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__i,0);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____setter_3_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff4d0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Guild>g____setter_3_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05702b61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b61 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      *(Il2CppObject **)&(pCVar1->fields).HasExplicitNameTag = pIVar2;
      il2cpp_runtime_glue(&(pCVar1->fields).HasExplicitNameTag);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception(0,pIVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Player>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Player_g____getter_4_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff550

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Player>g____getter_4_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin,0);
    DAT_05702b1d = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar2 + 0x80);
    __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAI>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAI_g____getter_5_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff570

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__IsAI>g____getter_5_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_IsAI(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAlive>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAlive_g____getter_6_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff5a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__IsAlive>g____getter_6_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__ViewID>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__ViewID_g____getter_7_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff5d0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__ViewID>g____getter_7_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__get_ViewID(__i,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMine>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMine_g____getter_8_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff600

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__IsMine>g____getter_8_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_IsMine(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMainCharacter>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMainCharacter_g____getter_9_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff630

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__IsMainCharacter>g____getter_9_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_10_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff660

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Transform>g____getter_10_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin,0);
    DAT_05702b1f = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) {
    transform = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    __this = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this,transform,(MethodInfo *)0x0);
    return (Il2CppObject *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_11_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff680

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_11_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar1;
  undefined8 in_RDX;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    vtable_dispatch = (__i->klass->vtable)._11_get_Position.methodPtr;
    pIVar1 = (Il2CppObject *)
             (*vtable_dispatch)
                       (__i,(__i->klass->vtable)._11_get_Position.method,in_RDX,
                        vtable_dispatch);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_11_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff6a0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Position>g____setter_11_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_c *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  
  if (DAT_05702b62 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b62 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = __i->klass;
    vtable_dispatch = (pCVar1->vtable)._12_set_Position.methodPtr;
    (*vtable_dispatch)
              (__i,pIVar2,(pCVar1->vtable)._12_set_Position.method,pCVar1,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_12_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff730

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____getter_12_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b21 = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10), __this != (UnityEngine_Transform_o *)0x0
     )) {
    rotation = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
    UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar3.fields.x * 57.29578;
    euler.fields.y = UVar3.fields.y * 57.29578;
    euler.fields.z = UVar3.fields.z * 57.29578;
    UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,UVar3,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_12_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff750

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Rotation>g____setter_12_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702b63 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b63 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pCVar1 = (__i->fields).Character;
      if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
          (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) && (pIVar4 != (Il2CppObject *)0x0))
      {
        __this = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
        euler.fields.x = SUB84(pIVar4[3].klass,0) * 0.017453292;
        euler.fields.y = (float)((ulong)pIVar4[3].klass >> 0x20) * 0.017453292;
        euler.fields.z = *(float *)&pIVar4[3].monitor * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        if (__this != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation(__this,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_13_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff7d0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__QuaternionRotation>g____getter_13_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_13_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff7f0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__QuaternionRotation>g____setter_13_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702b64 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b64 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) && (pIVar4 != (Il2CppObject *)0x0))
       && (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
          __this != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_rotation
                (__this,(UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_14_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff870

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Velocity>g____getter_14_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b23 = '\x01';
  }
  __this = (__i->fields).Character;
  if (__this != (Characters_BaseCharacter_o *)0x0) {
    value = Characters_BaseCharacter__GetVelocity(__this,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_14_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff890

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Velocity>g____setter_14_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702b65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b65 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pCVar1 = (__i->fields).Character;
      if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__SetKinematic(pCVar1,0,1.0,(MethodInfo *)0x0);
        pCVar1 = (__i->fields).Character;
        if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
             (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
            (pIVar4 != (Il2CppObject *)0x0)) &&
           (__this = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
           __this != (UnityEngine_Rigidbody_o *)0x0)) {
          UnityEngine_Rigidbody__set_velocity
                    (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_15_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff910

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____getter_15_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b24 = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10), __this != (UnityEngine_Transform_o *)0x0
     )) {
    value = UnityEngine_Transform__get_forward(__this,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_15_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff930

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Forward>g____setter_15_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702b66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b66 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) && (pIVar4 != (Il2CppObject *)0x0))
       && (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
          __this != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_forward
                (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_16_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dff9b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Right>g____getter_16_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b25 = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10), __this != (UnityEngine_Transform_o *)0x0
     )) {
    value = UnityEngine_Transform__get_right(__this,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_16_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dff9d0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Right>g____setter_16_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702b67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b67 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) && (pIVar4 != (Il2CppObject *)0x0))
       && (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
          __this != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_right
                (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_17_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffa50

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Up>g____getter_17_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b26 = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10), __this != (UnityEngine_Transform_o *)0x0
     )) {
    value = UnityEngine_Transform__get_up(__this,(MethodInfo *)0x0);
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_17_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffa70

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Up>g____setter_17_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702b68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b68 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) && (pIVar4 != (Il2CppObject *)0x0))
       && (__this = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
          __this != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_up
                (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar4 + 3),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__HasTargetDirection>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__HasTargetDirection_g____getter_18_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffaf0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__HasTargetDirection>g____getter_18_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____getter_19_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffb20

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__TargetDirection>g____getter_19_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____setter_19_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffb40

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__TargetDirection>g____setter_19_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05702b69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b69 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (pIVar2 != (Il2CppObject *)0x0) {
      pCVar1 = (__i->fields).Character;
      rotation = UnityEngine_Quaternion__LookRotation
                           ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                            (MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar3.fields.x * 57.29578;
      euler.fields.y = UVar3.fields.y * 57.29578;
      euler.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
        *(float *)&(pCVar1->fields).Detection = UVar3.fields.y;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_20_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffbc0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Team>g____getter_20_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(Il2CppObject **)&(pCVar1->fields).AI;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__i,0);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_20_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffbe0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Team>g____setter_20_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  System_String_o *team;
  
  if (DAT_05702b6a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b6a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  team = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam(pCVar1,team,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____getter_21_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffc60

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Health>g____getter_21_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__get_Health(__i,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____setter_21_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffc90

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Health>g____setter_21_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (DAT_05702b6b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b6b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__set_Health(__i,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____getter_22_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffd10

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__MaxHealth>g____getter_22_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth(__i,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____setter_22_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffd40

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__MaxHealth>g____setter_22_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (DAT_05702b6c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b6c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth(__i,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____getter_23_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffdc0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__CustomDamageEnabled>g____getter_23_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____setter_23_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffdf0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__CustomDamageEnabled>g____setter_23_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05702b6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b6d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9b50;
      *(char *)((long)&(pCVar1->fields).FeedVictimName + 1) = (char)bVar3;
    }
    return;
  }
LAB_03df9b50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____getter_24_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dffe70

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__CustomDamage>g____getter_24_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage(__i,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____setter_24_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dffea0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__CustomDamage>g____setter_24_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_05702b6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702b6e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9baf;
      *(int32_t *)((long)&(pCVar1->fields).FeedVictimName + 4) = iVar3;
    }
    return;
  }
LAB_03df9baf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAnimation>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentAnimation_g____getter_25_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dfff20

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__CurrentAnimation>g____getter_25_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this = (__i->fields).Character;
  if (__this != (Characters_BaseCharacter_o *)0x0) {
    pSVar1 = Characters_BaseCharacter__GetCurrentAnimation(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Grounded>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Grounded_g____getter_26_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dfff40

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Grounded>g____getter_26_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    bVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_Grounded(__i,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_27_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x3dfff70

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__<__CreatePropertyBinding__Rigidbody>g____getter_27_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *rb;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this;
  MethodInfo *in_RCX;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702b28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin,0);
    DAT_05702b28 = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) {
    rb = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
    __this = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor
              (__this,(CustomLogic_BuiltinClassInstance_o *)__i,rb,in_RCX);
    return (Il2CppObject *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin___ctor (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x3df8df0

void CustomLogic_CustomLogicCharacterBuiltin___ctor
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               Characters_BaseCharacter_o *character,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 in_RAX;
  Il2CppObject *value;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05702b1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"IsCharacter");
    DAT_05702b1c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Character = character;
  il2cpp_runtime_glue(&(__this->fields).Character,character);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  uStack_18 = CONCAT17(1,(undefined7)uStack_18);
  value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,"IsCharacter",value,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Name (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df8eb0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Name
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(System_String_o **)&(pCVar1->fields)._disableKinematicTimeLeft;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Name (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3df8ed0

void CustomLogic_CustomLogicCharacterBuiltin__set_Name
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetDisplayName
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* name, bool showTag, const MethodInfo* method);
// 0x3df8ef0

void CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *name,
               bool_conflict showTag,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  byte bVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (name == (System_String_o *)0x0) {
    name = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar1,name,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        if ((char)showTag == '\0') {
          bVar2 = 0;
        }
        else {
          bVar3 = System_String__IsNullOrWhiteSpace((pCVar1->fields).RichTextName,(MethodInfo *)0x0)
          ;
          bVar2 = (byte)bVar3 ^ 1;
        }
        *(byte *)&(pCVar1->fields).VisibleName = bVar2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Guild (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df8f60

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Guild
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(System_String_o **)&(pCVar1->fields).HasExplicitNameTag;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Guild
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Guild (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3df8f80

void CustomLogic_CustomLogicCharacterBuiltin__set_Guild
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    *(System_String_o **)&(pCVar1->fields).HasExplicitNameTag = value;
    il2cpp_runtime_glue(&(pCVar1->fields).HasExplicitNameTag);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Player
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Player (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df8fa0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Player
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (DAT_05702b1d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    DAT_05702b1d = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    player = *(Photon_Realtime_Player_o **)(lVar2 + 0x80);
    __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAI
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAI (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9020

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_IsAI
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),(char)(pCVar1->fields).CustomDamage);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAlive
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9040

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_05702b1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b1e = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)(*(char *)&(pCVar1->fields).FeedVictimName == '\0');
  }
  return uVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_ViewID
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__get_ViewID (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df90b0

int32_t CustomLogic_CustomLogicCharacterBuiltin__get_ViewID
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    return *(int32_t *)(lVar2 + 0x94);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsMine
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMine (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df90e0

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_IsMine
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = Characters_BaseCharacter__IsMine(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsMainCharacter
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9100

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = Characters_BaseCharacter__IsMainCharacter(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Transform (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9120

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Transform
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (DAT_05702b1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
    DAT_05702b1f = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) {
    transform = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    __this_00 = (CustomLogic_CustomLogicTransformBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Position (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9190

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Position
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702b20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b20 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Position (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9220

void CustomLogic_CustomLogicCharacterBuiltin__set_Position
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
        (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Rotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9290

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Rotation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05702b21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b21 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar3.fields.x * 57.29578;
    euler.fields.y = UVar3.fields.y * 57.29578;
    euler.fields.z = UVar3.fields.z * 57.29578;
    UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,UVar3,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Rotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9340

void CustomLogic_CustomLogicCharacterBuiltin__set_Rotation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  pCVar3 = (__this->fields).Character;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar5 = Characters_BaseCharacter__IsMine(pCVar3,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pCVar3 = (__this->fields).Character;
    if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
        (lVar4 = *(long *)&(pCVar3->fields).Dead, lVar4 != 0)) &&
       (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      __this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
      uVar1 = (value->fields).Value.fields.x;
      uVar2 = (value->fields).Value.fields.y;
      euler.fields.x = (float)uVar1 * 0.017453292;
      euler.fields.y = (float)uVar2 * 0.017453292;
      euler.fields.z = (value->fields).Value.fields.z * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df93c0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05702b22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_05702b22 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
    CustomLogic_CustomLogicQuaternionBuiltin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x3df9450

void CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
        (value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_rotation
                (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Velocity (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df94c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Velocity
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702b23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b23 = '\x01';
  }
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    value = Characters_BaseCharacter__GetVelocity(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Velocity
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Velocity (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9540

void CustomLogic_CustomLogicCharacterBuiltin__set_Velocity
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetKinematic(pCVar1,0,1.0,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
           (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
          (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
         __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__set_velocity
                  (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Forward (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df95c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Forward
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702b24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b24 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Forward (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9650

void CustomLogic_CustomLogicCharacterBuiltin__set_Forward
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
        (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_forward
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Right (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df96c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Right
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702b25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b25 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value = UnityEngine_Transform__get_right(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Right (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9750

void CustomLogic_CustomLogicCharacterBuiltin__set_Right
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
        (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_right
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Up (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df97c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Up
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702b26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b26 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Up (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9850

void CustomLogic_CustomLogicCharacterBuiltin__set_Up
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) &&
        (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_up
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_HasTargetDirection
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df98c0

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).Detection + 4));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_TargetDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df98e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  undefined8 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float in_XMM1_Da;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702b27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702b27 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    uVar2 = (*(pCVar1->klass->vtable)._95_GetTargetDirection.methodPtr)();
    __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = in_XMM1_Da;
    value.fields.x = (float)(int)uVar2;
    value.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_TargetDirection
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_TargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3df9960

void CustomLogic_CustomLogicCharacterBuiltin__set_TargetDirection
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pCVar1 = (__this->fields).Character;
    rotation = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
    UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar2.fields.x * 57.29578;
    euler.fields.y = UVar2.fields.y * 57.29578;
    euler.fields.z = UVar2.fields.z * 57.29578;
    UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      *(float *)&(pCVar1->fields).Detection = UVar2.fields.y;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Team (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df99b0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Team
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(System_String_o **)&(pCVar1->fields).AI;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Team (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3df99d0

void CustomLogic_CustomLogicCharacterBuiltin__set_Team
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Health
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_Health (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9a20

float CustomLogic_CustomLogicCharacterBuiltin__get_Health
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (float)*(int *)&(pCVar1->fields).Cache;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Health
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Health (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3df9a40

void CustomLogic_CustomLogicCharacterBuiltin__set_Health
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth(pCVar1,(int)value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_MaxHealth
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9a90

float CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (float)*(int *)&(pCVar1->fields).field_0x6c;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_MaxHealth
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3df9ab0

void CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth(pCVar1,(int)value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamageEnabled
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9b00

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).FeedVictimName + 1));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamageEnabled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamageEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3df9b20

void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamageEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9b50;
      *(char *)((long)&(pCVar1->fields).FeedVictimName + 1) = (char)value;
    }
    return;
  }
LAB_03df9b50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamage
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9b60

int32_t CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return *(int32_t *)((long)&(pCVar1->fields).FeedVictimName + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamage
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamage (CustomLogic_CustomLogicCharacterBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3df9b80

void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamage
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9baf;
      *(int32_t *)((long)&(pCVar1->fields).FeedVictimName + 4) = value;
    }
    return;
  }
LAB_03df9baf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentAnimation
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_CurrentAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9bc0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_CurrentAnimation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    pSVar1 = Characters_BaseCharacter__GetCurrentAnimation(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Grounded
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_Grounded (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9be0

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_Grounded
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).Animation + 4));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Rigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Rigidbody (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3df9c00

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Rigidbody
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *rb;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_00;
  MethodInfo *in_RCX;
  
  if (DAT_05702b28 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRigidbodyBuiltin);
    DAT_05702b28 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) {
    rb = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
    __this_00 = (CustomLogic_CustomLogicRigidbodyBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRigidbodyBuiltin);
    CustomLogic_CustomLogicRigidbodyBuiltin___ctor
              (__this_00,(CustomLogic_BuiltinClassInstance_o *)__this,rb,in_RCX);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetKilled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__GetKilled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* killer, const MethodInfo* method);
// 0x3df9c70

void CustomLogic_CustomLogicCharacterBuiltin__GetKilled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *killer,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    vtable_dispatch = (pCVar1->klass->vtable)._87_GetKilled.methodPtr;
    (*vtable_dispatch)
              (pCVar1,killer,(pCVar1->klass->vtable)._87_GetKilled.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetDamaged
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__GetDamaged (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* killer, int32_t damage, const MethodInfo* method);
// 0x3df9ca0

void CustomLogic_CustomLogicCharacterBuiltin__GetDamaged
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *killer,
               int32_t damage,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._86_GetDamaged.methodPtr)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$Emote
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Emote (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3df9cd0

void CustomLogic_CustomLogicCharacterBuiltin__Emote
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *emote,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9d22;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        vtable_dispatch = (pCVar1->klass->vtable)._70_Emote.methodPtr;
        (*vtable_dispatch)
                  (pCVar1,emote,(pCVar1->klass->vtable)._70_Emote.method,vtable_dispatch);
        return;
      }
    }
    return;
  }
LAB_03df9d22:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x3df9d30

void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
               float fade,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9d85;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar1,animation,fade,0.0,(MethodInfo *)0x0)
        ;
        return;
      }
    }
    return;
  }
LAB_03df9d85:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float t, float fade, bool force, const MethodInfo* method);
// 0x3df9d90

void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float t
               ,float fade,bool_conflict force,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9e16;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        if ((char)force != '\0') {
          Characters_BaseCharacter__CrossFade(pCVar1,animation,fade,t,(MethodInfo *)0x0);
          return;
        }
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar1,animation,fade,t,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03df9e16:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3df9e20

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9e6e;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        fVar3 = Characters_BaseCharacter__GetAnimationSpeed(pCVar1,animation,(MethodInfo *)0x0);
        return fVar3;
      }
    }
    return 1.0;
  }
LAB_03df9e6e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float speed, bool synced, const MethodInfo* method);
// 0x3df9e80

void CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
               float speed,bool_conflict synced,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9ef4;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        if ((char)synced != '\0') {
          Characters_BaseCharacter__SetAnimationSpeed(pCVar1,animation,speed,(MethodInfo *)0x0);
          return;
        }
        Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar1,animation,speed,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03df9ef4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingAnimation
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3df9f00

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
          MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    bVar2 = Characters_AnimationHandler__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3df9f30

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (pCVar2 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS,
     pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,animation,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return 1.0;
    }
    pCVar1 = (__this->fields).Character;
    if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
       (pCVar2 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS,
       pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
      fVar4 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
      return fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$ForceAnimation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__ForceAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x3df9f80

void CustomLogic_CustomLogicCharacterBuiltin__ForceAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
               float fade,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03df9fde;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        vtable_dispatch = (pCVar1->klass->vtable)._71_ForceAnimation.methodPtr;
        (*vtable_dispatch)
                  (fade,pCVar1,animation,(pCVar1->klass->vtable)._71_ForceAnimation.method,
                   vtable_dispatch);
        return;
      }
    }
    return;
  }
LAB_03df9fde:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3df9ff0

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(pCVar1->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    fVar2 = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingSound
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x3dfa020

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,
          MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = Characters_BaseCharacter__IsPlayingSound(__this_00,sound,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlaySound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlaySound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x3dfa040

void CustomLogic_CustomLogicCharacterBuiltin__PlaySound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03dfa09d;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pCVar1 = (__this->fields).Character;
          if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
            Characters_BaseCharacter__PlaySound(pCVar1,sound,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03dfa09d;
        }
      }
    }
    return;
  }
LAB_03dfa09d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$StopSound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__StopSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x3dfa0b0

void CustomLogic_CustomLogicCharacterBuiltin__StopSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03dfa10d;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pCVar1 = (__this->fields).Character;
          if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
            Characters_BaseCharacter__StopSound(pCVar1,sound,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03dfa10d;
        }
      }
    }
    return;
  }
LAB_03dfa10d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$FadeSound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__FadeSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, float volume, float time, const MethodInfo* method);
// 0x3dfa120

void CustomLogic_CustomLogicCharacterBuiltin__FadeSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,
               float volume,float time,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03dfa17c;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        Characters_BaseCharacter__FadeSound(pCVar1,sound,volume,time,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03dfa17c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__LookAt (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x3dfa190

void CustomLogic_CustomLogicCharacterBuiltin__LookAt
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      if (*(char *)&(pCVar1->fields).FeedVictimName != '\0') {
        return;
      }
      lVar2 = *(long *)&(pCVar1->fields).Dead;
      if (((lVar2 != 0) && (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__LookAt
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$AddForce
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__AddForce (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* force, Il2CppObject* mode, const MethodInfo* method);
// 0x3dfa200

void CustomLogic_CustomLogicCharacterBuiltin__AddForce
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *force,Il2CppObject *mode,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  long lVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  int32_t *piVar4;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_00;
  int32_t mode_00;
  UnityEngine_Rigidbody_o *__this_01;
  undefined *puVar7;
  float fVar8;
  UnityEngine_Vector3_o force_00;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  if (DAT_05702b29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_ForceMode);
    il2cpp_init_method_metadata(&TypeRef_ForceMode);
    DAT_05702b29 = '\x01';
  }
  local_3c = 0;
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
LAB_03dfa3dc:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = Characters_BaseCharacter__IsMine(pCVar1,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03dfa3dc;
  Characters_BaseCharacter__SetKinematic(pCVar1,0,1.0,(MethodInfo *)0x0);
  if (mode == (Il2CppObject *)0x0) {
LAB_03dfa3e1:
    puVar7 = &"Invalid force mode: {0}";
  }
  else {
    if (mode->klass != DAT_05711068) {
      if (mode->klass == DAT_057110b0) {
        if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = System_Enum__TryParse<Int32Enum>((System_String_o *)mode,&local_3c,MethodInfo_Boolean_TryParse_ForceMode);
        if ((char)bVar3 != '\0') {
          pCVar1 = (__this->fields).Character;
          if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
              (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 == 0)) ||
             ((force == (CustomLogic_CustomLogicVector3Builtin_o *)0x0 ||
              (__this_01 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
              __this_01 == (UnityEngine_Rigidbody_o *)0x0)))) goto LAB_03dfa3dc;
          fVar8 = (force->fields).Value.fields.z;
          uVar6._0_4_ = (force->fields).Value.fields.x;
          uVar6._4_4_ = (force->fields).Value.fields.y;
          mode_00 = local_3c;
          goto LAB_03dfa3c6;
        }
        pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown force mode: ");
        pSVar5 = System_String__Concat(pSVar5,(System_String_o *)mode,(MethodInfo *)0x0);
        goto LAB_03dfa434;
      }
      goto LAB_03dfa3e1;
    }
    piVar4 = (int32_t *)il2cpp_glue_022c7330(mode);
    handle.fields.value = TypeRef_ForceMode.fields.value;
    mode_00 = *piVar4;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    local_34 = mode_00;
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 == 0)) ||
          (force == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this_01 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
         __this_01 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03dfa3dc;
      fVar8 = (force->fields).Value.fields.z;
      uVar6._0_4_ = (force->fields).Value.fields.x;
      uVar6._4_4_ = (force->fields).Value.fields.y;
LAB_03dfa3c6:
      force_00.fields.z = fVar8;
      force_00.fields.x = (float)(int)uVar6;
      force_00.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
      UnityEngine_Rigidbody__AddForce(__this_01,force_00,mode_00,(MethodInfo *)0x0);
      return;
    }
    local_38 = mode_00;
    mode = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    puVar7 = &"Unknown force mode: {0}";
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(puVar7);
  pSVar5 = System_String__Format(pSVar5,mode,(MethodInfo *)0x0);
LAB_03dfa434:
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar6);
  System_ArgumentException___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_Void_AddForce);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar6);
}


// CustomLogic.CustomLogicCharacterBuiltin$$Reveal
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Reveal (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float delay, const MethodInfo* method);
// 0x3dfa480

void CustomLogic_CustomLogicCharacterBuiltin__Reveal
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(__this_00,0.0,delay,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$AddOutline
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__AddOutline (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, System_String_o* mode, const MethodInfo* method);
// 0x3dfa4a0

void CustomLogic_CustomLogicCharacterBuiltin__AddOutline
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicColorBuiltin_o *color,System_String_o *mode,MethodInfo *method
               )

{
  int iVar1;
  Utility_Color255_o *__this_00;
  Characters_BaseCharacter_o *__this_01;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  System_ArgumentException_o *__this_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar7;
  int32_t local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (DAT_05702b2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_Outline_Mode);
    DAT_05702b2a = '\x01';
  }
  local_3c = 0;
  if (color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    local_28 = ZEXT816(0x3f8000003f800000);
    local_38 = ZEXT816(0x3f8000003f800000);
    iVar1 = *(int *)(DAT_057110b8 + 0xe4);
  }
  else {
    __this_00 = (color->fields).Value;
    if (__this_00 == (Utility_Color255_o *)0x0) goto LAB_03dfa582;
    UVar7 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    local_28._8_4_ = extraout_XMM0_Dc;
    local_28._0_8_ = UVar7.fields._0_8_;
    local_28._12_4_ = extraout_XMM0_Dd;
    local_38._8_4_ = in_XMM1_Dc;
    local_38._0_8_ = UVar7.fields._8_8_;
    local_38._12_4_ = in_XMM1_Dd;
    iVar1 = *(int *)(DAT_057110b8 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_Enum__TryParse<Int32Enum>(mode,&local_3c,MethodInfo_Boolean_TryParse_Outline_Mode);
  auVar3 = local_28;
  auVar2 = local_38;
  if ((char)bVar4 == '\0') {
    pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Unknown outline mode: ");
    pSVar5 = System_String__Concat(pSVar5,mode,(MethodInfo *)0x0);
    uVar6 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar6);
    System_ArgumentException___ctor(__this_02,pSVar5,(MethodInfo *)0x0);
    uVar6 = il2cpp_init_method_metadata(&MethodInfo_Void_AddOutline);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_02,uVar6);
  }
  __this_01 = (__this->fields).Character;
  if (__this_01 != (Characters_BaseCharacter_o *)0x0) {
    UVar7.fields.b = (float)local_38._0_4_;
    UVar7.fields.a = (float)local_38._4_4_;
    UVar7.fields.r = (float)local_28._0_4_;
    UVar7.fields.g = (float)local_28._4_4_;
    local_38 = auVar2;
    local_28 = auVar3;
    Characters_BaseCharacter__AddOutlineWithColor(__this_01,UVar7,local_3c,(MethodInfo *)0x0);
    return;
  }
LAB_03dfa582:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$RemoveOutline
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa5e0

void CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__RemoveOutline(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__Equals (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* other, const MethodInfo* method);
// 0x3dfa600

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__Equals
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *other,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RCX;
  
  bVar1 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                    (__this,(Il2CppObject *)__this,other,in_RCX);
  return bVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin____Eq__ (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dfa610

/* WARNING: Type propagation algorithm not settling */

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin____Eq__
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  bool_conflict bVar4;
  Il2CppClass *x;
  Il2CppClass *x_00;
  
  if (DAT_05702b2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702b2b = '\x01';
  }
  if (other == (Il2CppObject *)0x0) {
LAB_03dfa667:
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
    if ((other->klass->_2).naturalAligment < bVar1) goto LAB_03dfa667;
    pIVar3 = (Il2CppObject *)0x0;
    if ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicCharacterBuiltin) {
      pIVar3 = other;
    }
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
    if ((bVar1 <= (self->klass->_2).naturalAligment) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
      x_00 = self[3].klass;
      goto joined_r0x03dfa696;
    }
  }
  x_00 = (Il2CppClass *)0x0;
joined_r0x03dfa696:
  if (pIVar3 == (Il2CppObject *)0x0) {
    x = (Il2CppClass *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    x = ((Il2CppObject *)((long)pIVar3 + 0x30))->klass;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)other >> 8),1);
    }
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      return bVar4;
    }
  }
  return 0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin____Hash__ (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa7b0

int32_t CustomLogic_CustomLogicCharacterBuiltin____Hash__
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._2_GetHashCode.methodPtr;
  iVar1 = (*vtable_dispatch)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method,in_RDX,
                     vtable_dispatch);
  return iVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__GetHashCode (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa7d0

int32_t CustomLogic_CustomLogicCharacterBuiltin__GetHashCode
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    vtable_dispatch = (pCVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pCVar1,(pCVar1->klass->vtable)._2_GetHashCode.method,in_RDX,
                       vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_ClassName (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa800

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_ClassName
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702b2c == '\0') {
    il2cpp_init_method_metadata(&"Character");
    DAT_05702b2c = '\x01';
  }
  return "Character";
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAbstract (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa830

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsStatic (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa840

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x3dfa850

bool_conflict
CustomLogic_CustomLogicCharacterBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



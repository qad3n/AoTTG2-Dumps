// Type: CustomLogic.CustomLogicAudioSourceBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAudioSourceBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicAudioSourceBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAudioSourceBuiltin_o* CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ddf120

CustomLogic_CustomLogicAudioSourceBuiltin_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicAudioSourceBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057029c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicAudioSourceBuiltin);
    DAT_057029c7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicAudioSourceBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicAudioSourceBuiltin);
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
                 (MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicAudioSourceBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicAudioSourceBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3de04a0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057029d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029d6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3de0510

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Play>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Play_b__6_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de0520

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c__<__CreateMethodBinding__Play>b__6_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayDelayed>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__PlayDelayed_b__7_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de0540

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c__<__CreateMethodBinding__PlayDelayed>b__7_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_AudioSource_o *__this_00;
  float delay;
  
  if (DAT_057029d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029d7 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Value, __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__PlayDelayed(__this_00,delay,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stop>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Stop_b__8_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de05e0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c__<__CreateMethodBinding__Stop>b__8_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Stop(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pause>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Pause_b__9_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de0600

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c__<__CreateMethodBinding__Pause>b__9_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings.<>c$$<__CreateMethodBinding__Unpause>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_____CreateMethodBinding__Unpause_b__10_0 (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicAudioSourceBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de0620

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_<>c__<__CreateMethodBinding__Unpause>b__10_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicAudioSourceBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value,
     __this = (CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___c_o *)0x0,
     __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ddf210

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_057029c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Unpause");
    il2cpp_init_method_metadata(&"Play");
    il2cpp_init_method_metadata(&"PlayDelayed");
    il2cpp_init_method_metadata(&"Time");
    il2cpp_init_method_metadata(&"Pitch");
    il2cpp_init_method_metadata(&"Stop");
    il2cpp_init_method_metadata(&"Pause");
    il2cpp_init_method_metadata(&"IsPlaying");
    il2cpp_init_method_metadata(&"Volume");
    DAT_057029c8 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7324416d) {
    if (uVar3 < 0x44f9bf2e) {
      if (uVar3 == 0x29ab6f83) {
        bVar4 = System_String__op_Equality(name,"Play",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057029cd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Play_b__6_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057029cd = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 8,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x44f9bf2d) &&
              (bVar4 = System_String__op_Equality(name,"Pause",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029d0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Pause_b__9_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029d0 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x4b7f7705) {
      bVar4 = System_String__op_Equality(name,"Stop",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029cf == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Stop_b__8_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057029cf = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x7324416c) &&
            (bVar4 = System_String__op_Equality(name,"Unpause",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029d1 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Unpause_b__10_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057029d1 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0x785a8152) {
    if (uVar3 == 0x74f576af) {
      bVar4 = System_String__op_Equality(name,"Volume",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057029c9 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Volume_g____get);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Volume_g____sette);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
          DAT_057029c9 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x785a8151) &&
            (bVar4 = System_String__op_Equality(name,"Pitch",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029cb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pitch_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Pitch_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
        DAT_057029cb = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xdfe4e404) {
    bVar4 = System_String__op_Equality(name,"Time",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029ca == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Time_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Time_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
        DAT_057029ca = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xe4b35065) {
    bVar4 = System_String__op_Equality(name,"IsPlaying",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057029cc == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPlaying_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
        DAT_057029cc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xf0f90de3) &&
          (bVar4 = System_String__op_Equality(name,"PlayDelayed",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057029ce == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayDelayed_b__7);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_057029ce = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicAudioSourceBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Volume
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume (const MethodInfo* method);
// 0x3ddf670

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Volume
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Volume_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Volume_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
    DAT_057029c9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Time
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time (const MethodInfo* method);
// 0x3ddf750

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Time
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Time_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Time_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
    DAT_057029ca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__Pitch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch (const MethodInfo* method);
// 0x3ddf830

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__Pitch
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pitch_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Pitch_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
    DAT_057029cb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicAudioSourceBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreatePropertyBinding__IsPlaying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying (const MethodInfo* method);
// 0x3ddf910

CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreatePropertyBinding__IsPlaying
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsPlaying_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
    DAT_057029cc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicAudioSourceBuilti);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Play
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play (const MethodInfo* method);
// 0x3ddf9b0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Play(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Play_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029cd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__PlayDelayed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed (const MethodInfo* method);
// 0x3ddfb00

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__PlayDelayed
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PlayDelayed_b__7);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029ce = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Stop
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop (const MethodInfo* method);
// 0x3ddfc50

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Stop(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Stop_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029cf = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Pause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause (const MethodInfo* method);
// 0x3ddfda0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Pause(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Pause_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029d0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$__CreateMethodBinding__Unpause
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause (const MethodInfo* method);
// 0x3ddfef0

CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings____CreateMethodBinding__Unpause
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *__this;
  
  if (DAT_057029d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Unpause_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057029d1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicAudioSourceBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicAudioSourceBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicAudioSourceBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicAudioSourceBuiltin);
  return __this;
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3de0040

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057029d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Unpause");
    il2cpp_init_method_metadata(&"Play");
    il2cpp_init_method_metadata(&"PlayDelayed");
    il2cpp_init_method_metadata(&"Time");
    il2cpp_init_method_metadata(&"Pitch");
    il2cpp_init_method_metadata(&"Stop");
    il2cpp_init_method_metadata(&"Pause");
    il2cpp_init_method_metadata(&"IsPlaying");
    il2cpp_init_method_metadata(&"Volume");
    DAT_057029d2 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Volume",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Time",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pitch",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsPlaying",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Play",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PlayDelayed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stop",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Unpause",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____getter_2_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x3de0220

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__Volume>g____getter_2_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__get_volume(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Volume>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Volume_g____setter_2_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de0260

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__Volume>g____setter_2_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (DAT_057029d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_volume(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____getter_3_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x3de02e0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__Time>g____getter_3_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__get_time(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Time>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Time_g____setter_3_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de0320

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__Time>g____setter_3_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (DAT_057029d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029d4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_time(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____getter_4_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x3de03a0

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__Pitch>g____getter_4_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__get_pitch(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__Pitch>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__Pitch_g____setter_4_1 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3de03e0

void CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__Pitch>g____setter_4_1
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  float value;
  
  if (DAT_057029d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057029d5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__set_pitch(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin.Bindings$$<__CreatePropertyBinding__IsPlaying>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAudioSourceBuiltin_Bindings_____CreatePropertyBinding__IsPlaying_g____getter_5_0 (CustomLogic_CustomLogicAudioSourceBuiltin_o* __i, const MethodInfo* method);
// 0x3de0460

Il2CppObject *
CustomLogic_CustomLogicAudioSourceBuiltin_Bindings__<__CreatePropertyBinding__IsPlaying>g____getter_5_0
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicAudioSourceBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AudioSource_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar1 = UnityEngine_AudioSource__get_isPlaying(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddeea0

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin___ctor (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, CustomLogic_BuiltinClassInstance_o* owner, UnityEngine_AudioSource_o* audioSource, const MethodInfo* method);
// 0x3ddeeb0

void CustomLogic_CustomLogicAudioSourceBuiltin___ctor
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,
               CustomLogic_BuiltinClassInstance_o *owner,UnityEngine_AudioSource_o *audioSource,
               MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  UnityEngine_Component_c *pUVar2;
  
  if (DAT_057029c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AudioSource);
    DAT_057029c5 = '\x01';
  }
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)audioSource
             ,(MethodInfo *)0x0);
  (__this->fields).OwnerBuiltin = owner;
  il2cpp_runtime_glue(&(__this->fields).OwnerBuiltin,owner);
  pUVar2 = TypeInfo_AudioSource;
  pUVar1 = (__this->fields).Component;
  if (pUVar1 == (UnityEngine_Component_o *)0x0) {
    (__this->fields).Value = (UnityEngine_AudioSource_o *)0x0;
  }
  else if ((pUVar1->klass != TypeInfo_AudioSource) ||
          ((__this->fields).Value = (UnityEngine_AudioSource_o *)pUVar1, pUVar1->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar1,pUVar2);
  }
  il2cpp_runtime_glue(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Volume
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddef40

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Volume
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    fVar1 = UnityEngine_AudioSource__get_volume(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Volume
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ddef60

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Volume
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_volume(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Time
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddef80

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Time
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    fVar1 = UnityEngine_AudioSource__get_time(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Time
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ddefa0

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Time
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_time(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_Pitch
// il2cpp: float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddefc0

float CustomLogic_CustomLogicAudioSourceBuiltin__get_Pitch
                (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    fVar1 = UnityEngine_AudioSource__get_pitch(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$set_Pitch
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ddefe0

void CustomLogic_CustomLogicAudioSourceBuiltin__set_Pitch
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__set_pitch(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsPlaying
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf000

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsPlaying
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    bVar1 = UnityEngine_AudioSource__get_isPlaying(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Play
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Play (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf020

void CustomLogic_CustomLogicAudioSourceBuiltin__Play
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Play(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$PlayDelayed
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, float seconds, const MethodInfo* method);
// 0x3ddf040

void CustomLogic_CustomLogicAudioSourceBuiltin__PlayDelayed
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,float seconds,MethodInfo *method
               )

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__PlayDelayed(__this_00,seconds,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Stop
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Stop (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf060

void CustomLogic_CustomLogicAudioSourceBuiltin__Stop
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Stop(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Pause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Pause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf080

void CustomLogic_CustomLogicAudioSourceBuiltin__Pause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__Pause(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$Unpause
// il2cpp: void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf0a0

void CustomLogic_CustomLogicAudioSourceBuiltin__Unpause
               (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
    UnityEngine_AudioSource__UnPause(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf0c0

System_String_o *
CustomLogic_CustomLogicAudioSourceBuiltin__get_ClassName
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057029c6 == '\0') {
    il2cpp_init_method_metadata(&"AudioSource");
    DAT_057029c6 = '\x01';
  }
  return "AudioSource";
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf0f0

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf100

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_IsStatic
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAudioSourceBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicAudioSourceBuiltin_o* __this, const MethodInfo* method);
// 0x3ddf110

bool_conflict
CustomLogic_CustomLogicAudioSourceBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicAudioSourceBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



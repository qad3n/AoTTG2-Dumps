// Type: CustomLogic.CustomLogicCutsceneBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCutsceneBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicCutsceneBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicCutsceneBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCutsceneBuiltin_o* CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eb02d0

CustomLogic_CustomLogicCutsceneBuiltin_o *
CustomLogic_CustomLogicCutsceneBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703823 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCutsceneBuiltin);
    DAT_05703823 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCutsceneBuiltin);
      if (DAT_0570381b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570381b = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCutsceneBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCutsceneBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCutsceneBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3eb0c40

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570382a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570382a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3eb0cb0

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__Start>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__Start_b__2_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eb0cc0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings_<>c__<__CreateMethodBinding__Start>b__2_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *name;
  
  if (DAT_0570382b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570382b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03eb0d74:
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
      if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCutsceneBuiltin__Start(__c,name,uVar1 & 0xff,method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03eb0d74;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogue>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogue_b__3_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eb0d80

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowDialogue>b__3_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  CustomLogic_CustomLogicCutsceneBuiltin_o *__this_00;
  MethodInfo *in_R8;
  
  if (DAT_0570382c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570382c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      icon = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        title = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          __this_00 = (CustomLogic_CustomLogicCutsceneBuiltin_o *)__a->m_Items[2];
          content = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              ((Il2CppObject *)__this_00,MethodInfo_String_ConvertTo_String);
          if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
            CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue(__this_00,icon,title,content,in_R8)
            ;
            return (Il2CppObject *)0x0;
          }
          goto LAB_03eb0e45;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03eb0e45:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__ShowDialogueForTime>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__ShowDialogueForTime_b__4_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eb0e50

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings_<>c__<__CreateMethodBinding__ShowDialogueForTime>b__4_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_R8;
  float time;
  
  if (DAT_0570382d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570382d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      icon = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        title = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          content = (System_String_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (3 < (uint)__a->max_length) {
            time = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[3],MethodInfo_Single_ConvertTo_Single);
            if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
              if (DAT_0570381e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
                DAT_0570381e = '\x01';
              }
              if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
                il2cpp_init_class();
              }
              __this_00 = (UnityEngine_MonoBehaviour_o *)
                          **(undefined8 **)
                            &TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
              routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                                  (TypeInfo_CustomLogicManager,icon,title,content,time,in_R8);
              if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                UnityEngine_MonoBehaviour__StartCoroutine(__this_00,routine,(MethodInfo *)0x0);
                return (Il2CppObject *)0x0;
              }
            }
            goto LAB_03eb0fc4;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03eb0fc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings.<>c$$<__CreateMethodBinding__HideDialogue>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_____CreateMethodBinding__HideDialogue_b__5_0 (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCutsceneBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eb0fd0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings_<>c__<__CreateMethodBinding__HideDialogue>b__5_0
          (CustomLogic_CustomLogicCutsceneBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCutsceneBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicCutsceneBuiltin_o *)0x0) {
    CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
              ((CustomLogic_CustomLogicCutsceneBuiltin_o *)__this,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3eb03f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_Exception_o *__this;
  System_Func_T__object____object__o *pSVar6;
  CustomLogic_CLMethodBinding_T__o *pCVar7;
  
  if (DAT_05703824 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ShowDialogue");
    il2cpp_init_method_metadata(&"Start");
    il2cpp_init_method_metadata(&"ShowDialogueForTime");
    il2cpp_init_method_metadata(&"HideDialogue");
    DAT_05703824 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Start",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703825 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Start_b__2_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703825 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
      il2cpp_runtime_glue(lVar2 + 8,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  bVar3 = System_String__op_Equality(name,"ShowDialogue",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703826 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowDialogue_b__3);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703826 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  bVar3 = System_String__op_Equality(name,"ShowDialogueForTime",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"HideDialogue",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCutsceneBuiltin not found");
      pSVar4 = System_String__Concat(pSVar4,name,str2,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
      System_Exception___ctor(__this,pSVar4,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this,uVar5);
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703828 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HideDialogue_b__5);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703828 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar6;
      il2cpp_runtime_glue(lVar2 + 0x20,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703827 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowDialogueForTi);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703827 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
    il2cpp_runtime_glue(lVar2 + 0x18,pSVar6);
  }
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__Start
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start (const MethodInfo* method);
// 0x3eb05d0

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__Start(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (DAT_05703825 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Start_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703825 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue (const MethodInfo* method);
// 0x3eb0720

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogue
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (DAT_05703826 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowDialogue_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703826 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__ShowDialogueForTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime (const MethodInfo* method);
// 0x3eb0870

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__ShowDialogueForTime
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (DAT_05703827 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ShowDialogueForTi);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703827 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$__CreateMethodBinding__HideDialogue
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o* CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue (const MethodInfo* method);
// 0x3eb09c0

CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *
CustomLogic_CustomLogicCutsceneBuiltin_Bindings____CreateMethodBinding__HideDialogue
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *__this;
  
  if (DAT_05703828 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__HideDialogue_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703828 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCutsceneBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCutsceneBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCutsceneBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCutsceneBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCutsceneBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3eb0b10

void CustomLogic_CustomLogicCutsceneBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703829 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ShowDialogue");
    il2cpp_init_method_metadata(&"Start");
    il2cpp_init_method_metadata(&"ShowDialogueForTime");
    il2cpp_init_method_metadata(&"HideDialogue");
    DAT_05703829 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Start",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowDialogue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowDialogueForTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HideDialogue",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6___ctor (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3eb0ff0

void CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x3eb1010

void CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x3eb1020

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6__MoveNext
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_String_o *className;
  UI_InGameMenu_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  Il2CppObject *pIVar4;
  
  if (DAT_05703879 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Start");
    DAT_05703879 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicManager__ToggleCutscene(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_InGameMenu_o *)0x0) goto LAB_03eb11f6;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    className = (__this->fields).name;
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      classInstance =
           CustomLogic_CustomLogicEvaluator__CreateClassInstance
                     (pCVar3,className,(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8)
                      ,1,(MethodInfo *)0x0);
      CustomLogic_CustomLogicManager__ToggleCutscene
                ((uint)(byte)(__this->fields).full,(MethodInfo *)0x0);
      pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (pCVar3,classInstance,"Start",(System_Object_array *)0x0,0,
                            (MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
LAB_03eb11f6:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x3eb1200

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x3eb1210

void CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicCutsceneBuiltin.<StartCutscene>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o* __this, const MethodInfo* method);
// 0x3eb1250

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5___ctor (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3eb1260

void CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_IDisposable_Dispose (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x3eb1280

void CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__MoveNext (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x3eb1290

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5__MoveNext
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *pUVar3;
  System_String_o *icon;
  System_String_o *title;
  System_String_o *content;
  UnityEngine_WaitForSeconds_o *__this_00;
  bool_conflict bVar4;
  
  if (DAT_0570387a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570387a = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar3 == (UI_InGameMenu_o *)0x0) {
LAB_03eb146b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    bVar4 = 0;
    UI_InGameMenu__HideCutsceneMenu(pUVar3,(MethodInfo *)0x0);
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    icon = (__this->fields).icon;
    title = (__this->fields).title;
    content = (__this->fields).content;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_03eb146b;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((pUVar3->klass->_2).naturalAligment < bVar1) ||
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar3);
    }
    UI_InGameMenu__ShowCutsceneMenu
              (pUVar3,icon,title,content,(uint)*(byte *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38),
               (MethodInfo *)0x0);
    seconds = (__this->fields).time;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x3eb1480

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x3eb1490

void CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicCutsceneBuiltin.<routine_ShowDialogueForTime>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o* __this, const MethodInfo* method);
// 0x3eb14d0

Il2CppObject *
CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin___ctor (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x3eafd80

void CustomLogic_CustomLogicCutsceneBuiltin___ctor
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570381b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570381b = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCutsceneBuiltin$$Start
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__Start (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x3eafdf0

void CustomLogic_CustomLogicCutsceneBuiltin__Start
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,
               bool_conflict full,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this_00;
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this_01;
  
  if (DAT_0570381c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570381c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    __this_00 = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (DAT_05703821 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StartCutscene_d__6);
    DAT_05703821 = '\x01';
  }
  __this_01 = (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *)
              il2cpp_runtime_glue(TypeInfo_StartCutscene_d__6);
  CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *)0x0) {
    (__this_01->fields).name = name;
    il2cpp_runtime_glue(&(__this_01->fields).name,name);
    *(char *)&(__this_01->fields).full = (char)full;
    if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine
                (__this_00,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, const MethodInfo* method);
// 0x3eaff70

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,
               System_String_o *title,System_String_o *content,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (DAT_0570381d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570381d = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowCutsceneMenu
                (__this_00,icon,title,content,(uint)*(byte *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38)
                 ,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this_00);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$ShowDialogueForTime
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x3eb0060

void CustomLogic_CustomLogicCutsceneBuiltin__ShowDialogueForTime
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,
               System_String_o *title,System_String_o *content,float time,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_0570381e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570381e = '\x01';
  }
  if (TypeInfo_CustomLogicManager[4].fields._Namespace_k__BackingField.fields.hasValue == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              **(undefined8 **)&TypeInfo_CustomLogicManager[3].fields._Namespace_k__BackingField.fields.value;
  routine = CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
                      (TypeInfo_CustomLogicManager,icon,title,content,time,method);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine(__this_00,routine,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$HideDialogue
// il2cpp: void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x3eb01b0

void CustomLogic_CustomLogicCutsceneBuiltin__HideDialogue
               (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this_00;
  
  if (DAT_0570381f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570381f = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__HideCutsceneMenu(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$routine_ShowDialogueForTime
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, float time, const MethodInfo* method);
// 0x3eb0100

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *icon,
          System_String_o *title,System_String_o *content,float time,MethodInfo *method)

{
  CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *__this_00;
  
  if (DAT_05703820 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_routine_ShowDialogueForTime_d__5);
    DAT_05703820 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *)
              il2cpp_runtime_glue(TypeInfo_routine_ShowDialogueForTime_d__5);
  CustomLogic_CustomLogicCutsceneBuiltin_<routine_ShowDialogueForTime>d__5___ctor
            (__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicCutsceneBuiltin__routine_ShowDialogueForTime_d__5_o *)0x0
     ) {
    (__this_00->fields).icon = icon;
    il2cpp_runtime_glue(&(__this_00->fields).icon,icon);
    (__this_00->fields).title = title;
    il2cpp_runtime_glue(&(__this_00->fields).title,title);
    (__this_00->fields).content = content;
    il2cpp_runtime_glue(&(__this_00->fields).content,content);
    (__this_00->fields).time = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$StartCutscene
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, System_String_o* name, bool full, const MethodInfo* method);
// 0x3eaff00

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,System_String_o *name,bool_conflict full
          ,MethodInfo *method)

{
  CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *__this_00;
  
  if (DAT_05703821 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StartCutscene_d__6);
    DAT_05703821 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *)
              il2cpp_runtime_glue(TypeInfo_StartCutscene_d__6);
  CustomLogic_CustomLogicCutsceneBuiltin_<StartCutscene>d__6___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicCutsceneBuiltin__StartCutscene_d__6_o *)0x0) {
    (__this_00->fields).name = name;
    il2cpp_runtime_glue(&(__this_00->fields).name,name);
    *(char *)&(__this_00->fields).full = (char)full;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x3eb0270

System_String_o *
CustomLogic_CustomLogicCutsceneBuiltin__get_ClassName
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703822 == '\0') {
    il2cpp_init_method_metadata(&"Cutscene");
    DAT_05703822 = '\x01';
  }
  return "Cutscene";
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x3eb02a0

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x3eb02b0

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCutsceneBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCutsceneBuiltin_o* __this, const MethodInfo* method);
// 0x3eb02c0

bool_conflict
CustomLogic_CustomLogicCutsceneBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCutsceneBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



// Type: CustomLogic.CustomLogicSliderBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSliderBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicSliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee61a0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicSliderBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicSliderBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ee7910

void CustomLogic_CustomLogicSliderBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703aee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703aee = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ee7980

void CustomLogic_CustomLogicSliderBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee7990

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_<>c__<__CreateMethodBinding__OnValueChanged>b__10_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (DAT_05703aef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aef = '\x01';
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
    pCVar1 = (CustomLogic_UserMethod_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      il2cpp_runtime_glue(&(__c->fields)._valueChangedEvent,pCVar1);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee7a30

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_<>c__<__CreateMethodBinding__SetValueWithoutNotify>b__11_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify
                (__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee6230

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703adb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"IsIntSlider");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"PageSize");
    il2cpp_init_method_metadata(&"HighValue");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"ShowInputField");
    il2cpp_init_method_metadata(&"LowValue");
    il2cpp_init_method_metadata(&"Direction");
    DAT_05703adb = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x86253654) {
    if (uVar3 < 0x3a2089b8) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703ade == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowValue_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LowValue_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
            DAT_05703ade = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x3a2089b7) &&
              (bVar4 = System_String__op_Equality(name,"PageSize",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703ae0 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PageSize_g____g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PageSize_g____set);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
          DAT_05703ae0 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x86253653) {
      bVar4 = System_String__op_Equality(name,"IsIntSlider",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703ae3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsIntSlider_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
          DAT_05703ae3 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x4c979c42) {
      bVar4 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703adf == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HighValue_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HighValue_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
          DAT_05703adf = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x61fefc0a) &&
            (bVar4 = System_String__op_Equality(name,"Direction",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703ae1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Direction_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Direction_g____se);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
        DAT_05703ae1 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xacc881fd) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703adc == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
          DAT_05703adc = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xacc881fc) &&
            (bVar4 = System_String__op_Equality(name,"ShowInputField",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703ae2 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShowInputField);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShowInputField_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
        DAT_05703ae2 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703add == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
        DAT_05703add = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703ae5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703ae5 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703ae4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703ae4 = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 8,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicSliderBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x3ee66f0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703adc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703adc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x3ee67d0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703add == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703add = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x3ee68b0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ade == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowValue_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LowValue_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703ade = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x3ee6990

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703adf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HighValue_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HighValue_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703adf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__PageSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize (const MethodInfo* method);
// 0x3ee6a70

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ae0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__PageSize_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__PageSize_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703ae0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Direction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction (const MethodInfo* method);
// 0x3ee6b50

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ae1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Direction_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Direction_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703ae1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__ShowInputField
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField (const MethodInfo* method);
// 0x3ee6c30

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ae2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicSliderBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ShowInputField);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ShowInputField_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703ae2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicSliderBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__IsIntSlider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider (const MethodInfo* method);
// 0x3ee6d10

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ae3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsIntSlider_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object);
    DAT_05703ae3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x3ee6db0

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ae4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ae4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x3ee6f00

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *__this;
  
  if (DAT_05703ae5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ae5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSliderBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSliderBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee7050

void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703ae6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"IsIntSlider");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"PageSize");
    il2cpp_init_method_metadata(&"HighValue");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"ShowInputField");
    il2cpp_init_method_metadata(&"LowValue");
    il2cpp_init_method_metadata(&"Direction");
    DAT_05703ae6 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LowValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HighValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PageSize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Direction",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ShowInputField",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsIntSlider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee7250

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__Label>g____getter_2_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  UnityEngine_UIElements_Slider_o *__this_00;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (DAT_05703ad0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_String_get_label);
      il2cpp_init_method_metadata(&MethodInfo_String_get_label);
      DAT_05703ad0 = '\x01';
    }
    if ((char)(__i->fields)._isIntSlider == '\0') {
      __this_00 = (__i->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
        pSVar1 = UnityEngine_UIElements_BaseField<float>__get_label
                           ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,MethodInfo_String_get_label
                           );
        return (Il2CppObject *)pSVar1;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        pSVar1 = UnityEngine_UIElements_BaseField<int>__get_label
                           ((UnityEngine_UIElements_BaseField_int__o *)__this,MethodInfo_String_get_label);
        return (Il2CppObject *)pSVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee72c0

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__Label>g____setter_2_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  UnityEngine_UIElements_Slider_o *__this_00;
  System_String_o *value;
  
  if (DAT_05703ae7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ae7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (DAT_05703ad1 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
      il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
      DAT_05703ad1 = '\x01';
    }
    if ((char)(__i->fields)._isIntSlider == '\0') {
      __this_00 = (__i->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
        UnityEngine_UIElements_BaseField<float>__set_label
                  ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,MethodInfo_Void_set_label);
        return;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        UnityEngine_UIElements_BaseField<int>__set_label
                  ((UnityEngine_UIElements_BaseField_int__o *)__this,value,MethodInfo_Void_set_label);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee73a0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__Value>g____getter_3_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  UnityEngine_UIElements_Slider_o *pUVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar2 = (__i->fields)._floatSlider;
      if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
        uVar3 = (*(pUVar2->klass->vtable)._105_get_value.methodPtr)
                          (pUVar2,(pUVar2->klass->vtable)._105_get_value.method);
        uStack_8 = CONCAT44(uStack_8._4_4_,uVar3);
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_8);
        return pIVar4;
      }
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
      if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        uVar3 = (*(pUVar1->klass->vtable)._105_get_value.methodPtr)
                          (pUVar1,(pUVar1->klass->vtable)._105_get_value.method);
        uStack_8 = CONCAT44(uVar3,(undefined4)uStack_8);
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
        return pIVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee7420

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__Value>g____setter_3_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (DAT_05703ae8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_ConvertTo_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ae8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_Object_ConvertTo_Object);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    CustomLogic_CustomLogicSliderBuiltin__set_Value(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee74a0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__LowValue>g____getter_4_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicSliderBuiltin__get_LowValue(__i,method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee74c0

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__LowValue>g____setter_4_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  int32_t value;
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  float value_00;
  
  if (DAT_05703ae9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_ConvertTo_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ae9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_Object_ConvertTo_Object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703ad3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_lowValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_lowValue);
    DAT_05703ad3 = '\x01';
  }
  if ((char)(__i->fields)._isIntSlider == '\0') {
    if (pIVar4 != (Il2CppObject *)0x0) {
      if (pIVar4->klass == DAT_05711098) {
        pfVar1 = (float *)il2cpp_glue_022c7330(pIVar4);
        __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_00 = *pfVar1;
          goto LAB_03ee5ac7;
        }
      }
      else {
        if (pIVar4->klass != DAT_05711068) {
          return;
        }
        piVar3 = (int *)il2cpp_glue_022c7330(pIVar4);
        __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_00 = (float)*piVar3;
LAB_03ee5ac7:
          UnityEngine_UIElements_BaseSlider<float>__set_lowValue(__this_00,value_00,MethodInfo_Void_set_lowValue);
          return;
        }
      }
      goto LAB_03ee5add;
    }
  }
  else if (pIVar4 != (Il2CppObject *)0x0) {
    if (pIVar4->klass == DAT_05711068) {
      piVar2 = (int32_t *)il2cpp_glue_022c7330(pIVar4);
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
      if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto LAB_03ee5add;
      value = *piVar2;
    }
    else {
      if (pIVar4->klass != DAT_05711098) {
        return;
      }
      pfVar1 = (float *)il2cpp_glue_022c7330(pIVar4);
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
      if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5add:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value = (int32_t)*pfVar1;
    }
    UnityEngine_UIElements_BaseSlider<int>__set_lowValue(__this,value,MethodInfo_Void_set_lowValue);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee7540

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__HighValue>g____getter_5_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__i,method);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee7560

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__HighValue>g____setter_5_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int *piVar3;
  Il2CppObject *pIVar4;
  int32_t value;
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  float value_00;
  
  if (DAT_05703aea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_ConvertTo_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aea = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_Object_ConvertTo_Object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703ad5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_highValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_highValue);
    DAT_05703ad5 = '\x01';
  }
  if ((char)(__i->fields)._isIntSlider == '\0') {
    if (pIVar4 != (Il2CppObject *)0x0) {
      if (pIVar4->klass == DAT_05711098) {
        pfVar1 = (float *)il2cpp_glue_022c7330(pIVar4);
        __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_00 = *pfVar1;
          goto LAB_03ee5c87;
        }
      }
      else {
        if (pIVar4->klass != DAT_05711068) {
          return;
        }
        piVar3 = (int *)il2cpp_glue_022c7330(pIVar4);
        __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
        if (__this_00 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_00 = (float)*piVar3;
LAB_03ee5c87:
          UnityEngine_UIElements_BaseSlider<float>__set_highValue(__this_00,value_00,MethodInfo_Void_set_highValue);
          return;
        }
      }
      goto LAB_03ee5c9d;
    }
  }
  else if (pIVar4 != (Il2CppObject *)0x0) {
    if (pIVar4->klass == DAT_05711068) {
      piVar2 = (int32_t *)il2cpp_glue_022c7330(pIVar4);
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
      if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto LAB_03ee5c9d;
      value = *piVar2;
    }
    else {
      if (pIVar4->klass != DAT_05711098) {
        return;
      }
      pfVar1 = (float *)il2cpp_glue_022c7330(pIVar4);
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
      if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5c9d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value = (int32_t)*pfVar1;
    }
    UnityEngine_UIElements_BaseSlider<int>__set_highValue(__this,value,MethodInfo_Void_set_highValue);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee75e0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__PageSize>g____getter_6_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar1 = (__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      (*(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._120_get_pageSize.methodPtr)
                (pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                        _120_get_pageSize.method);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee7630

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__PageSize>g____setter_6_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  
  if (DAT_05703aeb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aeb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar1 = (__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      (*(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._121_set_pageSize.methodPtr)
                (pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                        _121_set_pageSize.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee76d0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__Direction>g____getter_7_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (DAT_05703ad6 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_SliderDirection_get_direction);
      il2cpp_init_method_metadata(&MethodInfo_SliderDirection_get_direction);
      DAT_05703ad6 = '\x01';
    }
    if ((char)(__i->fields)._isIntSlider == '\0') {
      __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto LAB_03ee7760;
      local_c = UnityEngine_UIElements_BaseSlider<float>__get_direction(__this_00,MethodInfo_SliderDirection_get_direction);
    }
    else {
      __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
      if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto LAB_03ee7760;
      local_c = UnityEngine_UIElements_BaseSlider<int>__get_direction(__this,MethodInfo_SliderDirection_get_direction);
    }
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
    return pIVar1;
  }
LAB_03ee7760:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee7770

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__Direction>g____setter_7_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  int32_t value;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_01;
  int32_t iStack_30;
  int32_t aiStack_2c [3];
  
  if (DAT_05703aec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aec = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05703ad7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_direction);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_direction);
    il2cpp_init_method_metadata(&TypeRef_SliderDirection);
    DAT_05703ad7 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
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
  if ((char)bVar1 == '\0') {
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid slider direction: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_Direction);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar4);
  }
  if ((char)(__i->fields)._isIntSlider == '\0') {
    __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
    if (__this_00 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto LAB_03ee5f1a;
    UnityEngine_UIElements_BaseSlider<float>__set_direction(__this_00,value,MethodInfo_Void_set_direction);
  }
  else {
    __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
    if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5f1a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UIElements_BaseSlider<int>__set_direction(__this,value,MethodInfo_Void_set_direction);
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee77f0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__ShowInputField>g____getter_8_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar1 = (__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      uStack_8 = in_RAX;
      uVar2 = (*(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                _122_get_showInputField.methodPtr)
                        (pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                                _122_get_showInputField.method);
      uStack_8 = CONCAT17(uVar2,(undefined7)uStack_8);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee7840

void CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__ShowInputField>g____setter_8_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  UnityEngine_UIElements_SliderInt_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  uint uVar3;
  
  if (DAT_05703aed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aed = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((char)(__i->fields)._isIntSlider == '\0') {
      pUVar1 = (__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (UnityEngine_UIElements_Slider_o *)(__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
      pUVar2 = (UnityEngine_UIElements_SliderInt_c *)pUVar1->klass;
      vtable_dispatch = (pUVar2->vtable)._123_set_showInputField.methodPtr;
      (*vtable_dispatch)
                (pUVar1,(ulong)(uVar3 & 0xff),(pUVar2->vtable)._123_set_showInputField.method,pUVar2
                 ,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__IsIntSlider>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x3ee78e0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings__<__CreatePropertyBinding__IsIntSlider>g____getter_9_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_Slider_o* slider, const MethodInfo* method);
// 0x3ee5340

void CustomLogic_CustomLogicSliderBuiltin___ctor
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_Slider_o *slider,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703acc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void___ctor_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    DAT_05703acc = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)slider,method);
  (__this->fields)._floatSlider = slider;
  il2cpp_runtime_glue(&(__this->fields)._floatSlider,slider);
  *(undefined1 *)&(__this->fields)._isIntSlider = 0;
  control = (__this->fields)._floatSlider;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)
             il2cpp_runtime_glue(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback<object>___ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback<float>
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_SliderInt_o* sliderInt, const MethodInfo* method);
// 0x3ee53f0

void CustomLogic_CustomLogicSliderBuiltin___ctor
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_SliderInt_o *sliderInt,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703acd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void___ctor_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ChangeEvent_int);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_RegisterValueChangedCallback_Int32);
    DAT_05703acd = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)sliderInt,method);
  (__this->fields)._intSlider = sliderInt;
  il2cpp_runtime_glue(&(__this->fields)._intSlider,sliderInt);
  *(undefined1 *)&(__this->fields)._isIntSlider = 1;
  control = (__this->fields)._intSlider;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)
             il2cpp_runtime_glue(TypeInfo_EventCallback_ChangeEvent_int);
  UnityEngine_UIElements_EventCallback<object>___ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback<int>
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Int32);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee54a0

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auStack_24 [4];
  
  if (DAT_05703ace == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703ace = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    userMethod = (__this->fields)._valueChangedEvent;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_24);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
       lVar2 == 0)) {
      uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = pIVar1;
    il2cpp_runtime_glue(parameterValues->m_Items,pIVar1);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ee55c0

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  CustomLogic_UserMethod_o *userMethod;
  int32_t iStack_2c;
  
  if (DAT_05703acf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703acf = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    userMethod = (__this->fields)._valueChangedEvent;
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  iStack_2c = value;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
       lVar2 == 0)) {
      uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = pIVar1;
    il2cpp_runtime_glue(parameterValues->m_Items,pIVar1);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee56e0

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_Label
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  System_String_o *pSVar1;
  
  if (DAT_05703ad0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_label);
    il2cpp_init_method_metadata(&MethodInfo_String_get_label);
    DAT_05703ad0 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField<float>__get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,MethodInfo_String_get_label);
      return pSVar1;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField<int>__get_label
                         ((UnityEngine_UIElements_BaseField_int__o *)__this_00,MethodInfo_String_get_label);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee5750

void CustomLogic_CustomLogicSliderBuiltin__set_Label
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  
  if (DAT_05703ad1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
    DAT_05703ad1 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      UnityEngine_UIElements_BaseField<float>__set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,value,MethodInfo_Void_set_label);
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      UnityEngine_UIElements_BaseField<int>__set_label
                ((UnityEngine_UIElements_BaseField_int__o *)__this_00,value,MethodInfo_Void_set_label);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Value
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee57e0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_Value
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  UnityEngine_UIElements_Slider_o *pUVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar2 = (__this->fields)._floatSlider;
    if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
      uVar3 = (*(pUVar2->klass->vtable)._105_get_value.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._105_get_value.method);
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar3);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&uStack_8);
      return pIVar4;
    }
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      uVar3 = (*(pUVar1->klass->vtable)._105_get_value.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._105_get_value.method);
      uStack_8 = CONCAT44(uVar3,(undefined4)uStack_8);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&uStack_8 + 4);
      return pIVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3ee5860

void CustomLogic_CustomLogicSliderBuiltin__set_Value
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch_00;
  float *pfVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  UnityEngine_UIElements_SliderInt_o *pUVar5;
  UnityEngine_UIElements_Slider_o *pUVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == DAT_05711098) {
        auVar8 = il2cpp_glue_022c7330(value);
        uVar3 = auVar8._8_8_;
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = *auVar8._0_8_;
          goto LAB_03ee5910;
        }
      }
      else {
        if (value->klass != DAT_05711068) {
          return;
        }
        auVar8 = il2cpp_glue_022c7330(value);
        uVar3 = auVar8._8_8_;
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = (float)*auVar8._0_8_;
LAB_03ee5910:
          vtable_dispatch_00 = (pUVar6->klass->vtable)._106_set_value.methodPtr;
          (*vtable_dispatch_00)
                    (fVar7,pUVar6,(pUVar6->klass->vtable)._106_set_value.method,uVar3,
                     vtable_dispatch_00);
          return;
        }
      }
      goto LAB_03ee5924;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == DAT_05711068) {
      puVar2 = (uint *)il2cpp_glue_022c7330(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) goto LAB_03ee5924;
      uVar4 = *puVar2;
    }
    else {
      if (value->klass != DAT_05711098) {
        return;
      }
      pfVar1 = (float *)il2cpp_glue_022c7330(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
LAB_03ee5924:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar4 = (uint)*pfVar1;
    }
    vtable_dispatch_00 = (pUVar5->klass->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch_00)
              (pUVar5,(ulong)uVar4,(pUVar5->klass->vtable)._106_set_value.method,
               vtable_dispatch_00);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_LowValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee5930

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_LowValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  undefined8 *puVar1;
  Il2CppObject *pIVar2;
  float *pfVar3;
  float local_10;
  float local_c;
  
  if (DAT_05703ad2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_lowValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_lowValue);
    DAT_05703ad2 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto LAB_03ee59d0;
    local_10 = UnityEngine_UIElements_BaseSlider<float>__get_lowValue(__this_01,MethodInfo_Single_get_lowValue);
    pfVar3 = &local_10;
    puVar1 = &DAT_05711098;
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee59d0:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_c = (float)UnityEngine_UIElements_BaseSlider<int>__get_lowValue(__this_00,MethodInfo_Int32_get_lowValue);
    pfVar3 = &local_c;
    puVar1 = &DAT_05711068;
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(*puVar1,pfVar3);
  return pIVar2;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3ee59e0

void CustomLogic_CustomLogicSliderBuiltin__set_LowValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,
               MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int *piVar3;
  int32_t value_00;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  float value_01;
  
  if (DAT_05703ad3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_lowValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_lowValue);
    DAT_05703ad3 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == DAT_05711098) {
        pfVar1 = (float *)il2cpp_glue_022c7330(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = *pfVar1;
          goto LAB_03ee5ac7;
        }
      }
      else {
        if (value->klass != DAT_05711068) {
          return;
        }
        piVar3 = (int *)il2cpp_glue_022c7330(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = (float)*piVar3;
LAB_03ee5ac7:
          UnityEngine_UIElements_BaseSlider<float>__set_lowValue(__this_01,value_01,MethodInfo_Void_set_lowValue);
          return;
        }
      }
      goto LAB_03ee5add;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == DAT_05711068) {
      piVar2 = (int32_t *)il2cpp_glue_022c7330(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto LAB_03ee5add;
      value_00 = *piVar2;
    }
    else {
      if (value->klass != DAT_05711098) {
        return;
      }
      pfVar1 = (float *)il2cpp_glue_022c7330(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5add:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value_00 = (int32_t)*pfVar1;
    }
    UnityEngine_UIElements_BaseSlider<int>__set_lowValue(__this_00,value_00,MethodInfo_Void_set_lowValue);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_HighValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee5af0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_HighValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  undefined8 *puVar1;
  Il2CppObject *pIVar2;
  float *pfVar3;
  float local_10;
  float local_c;
  
  if (DAT_05703ad4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_highValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_highValue);
    DAT_05703ad4 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto LAB_03ee5b90;
    local_10 = UnityEngine_UIElements_BaseSlider<float>__get_highValue(__this_01,MethodInfo_Single_get_highValue);
    pfVar3 = &local_10;
    puVar1 = &DAT_05711098;
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5b90:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_c = (float)UnityEngine_UIElements_BaseSlider<int>__get_highValue(__this_00,MethodInfo_Int32_get_highValue);
    pfVar3 = &local_c;
    puVar1 = &DAT_05711068;
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(*puVar1,pfVar3);
  return pIVar2;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3ee5ba0

void CustomLogic_CustomLogicSliderBuiltin__set_HighValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,
               MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int *piVar3;
  int32_t value_00;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  float value_01;
  
  if (DAT_05703ad5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_highValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_highValue);
    DAT_05703ad5 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == DAT_05711098) {
        pfVar1 = (float *)il2cpp_glue_022c7330(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = *pfVar1;
          goto LAB_03ee5c87;
        }
      }
      else {
        if (value->klass != DAT_05711068) {
          return;
        }
        piVar3 = (int *)il2cpp_glue_022c7330(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = (float)*piVar3;
LAB_03ee5c87:
          UnityEngine_UIElements_BaseSlider<float>__set_highValue(__this_01,value_01,MethodInfo_Void_set_highValue);
          return;
        }
      }
      goto LAB_03ee5c9d;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == DAT_05711068) {
      piVar2 = (int32_t *)il2cpp_glue_022c7330(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto LAB_03ee5c9d;
      value_00 = *piVar2;
    }
    else {
      if (value->klass != DAT_05711098) {
        return;
      }
      pfVar1 = (float *)il2cpp_glue_022c7330(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5c9d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value_00 = (int32_t)*pfVar1;
    }
    UnityEngine_UIElements_BaseSlider<int>__set_highValue(__this_00,value_00,MethodInfo_Void_set_highValue);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_PageSize
// il2cpp: float CustomLogic_CustomLogicSliderBuiltin__get_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee5cb0

float CustomLogic_CustomLogicSliderBuiltin__get_PageSize
                (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar2;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar1 = (__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
    vtable_dispatch =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._120_get_pageSize.methodPtr
    ;
    fVar2 = (float)(*vtable_dispatch)
                             (pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)
                                     ._120_get_pageSize.method,in_RDX,vtable_dispatch);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_PageSize
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee5cf0

void CustomLogic_CustomLogicSliderBuiltin__set_PageSize
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar1 = (__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
    vtable_dispatch =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._121_set_pageSize.methodPtr
    ;
    (*vtable_dispatch)
              (pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                      _121_set_pageSize.method,in_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Direction
// il2cpp: int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee5d30

int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction
                  (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  int32_t iVar1;
  
  if (DAT_05703ad6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SliderDirection_get_direction);
    il2cpp_init_method_metadata(&MethodInfo_SliderDirection_get_direction);
    DAT_05703ad6 = '\x01';
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar1 = UnityEngine_UIElements_BaseSlider<float>__get_direction(__this_01,MethodInfo_SliderDirection_get_direction);
      return iVar1;
    }
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar1 = UnityEngine_UIElements_BaseSlider<int>__get_direction(__this_00,MethodInfo_SliderDirection_get_direction);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Direction
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3ee5da0

void CustomLogic_CustomLogicSliderBuiltin__set_Direction
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this_02;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (DAT_05703ad7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_direction);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_direction);
    il2cpp_init_method_metadata(&TypeRef_SliderDirection);
    DAT_05703ad7 = '\x01';
  }
  handle.fields.value = TypeRef_SliderDirection.fields.value;
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
  if ((char)bVar1 == '\0') {
    iStack_30 = value;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_30);
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid slider direction: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this_02,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_Void_set_Direction);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_02,uVar4);
  }
  if ((char)(__this->fields)._isIntSlider == '\0') {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto LAB_03ee5f1a;
    UnityEngine_UIElements_BaseSlider<float>__set_direction(__this_01,value,MethodInfo_Void_set_direction);
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
LAB_03ee5f1a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UIElements_BaseSlider<int>__set_direction(__this_00,value,MethodInfo_Void_set_direction);
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ShowInputField
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee5f20

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 in_RDX;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar1 = (__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
    vtable_dispatch =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._122_get_showInputField.
         methodPtr;
    bVar2 = (*vtable_dispatch)
                      (pUVar1,(((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
                              _122_get_showInputField.method,in_RDX,vtable_dispatch);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_ShowInputField
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee5f60

void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined4 in_register_00000034;
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    pUVar1 = (__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (UnityEngine_UIElements_Slider_o *)(__this->fields)._intSlider;
  }
  if (pUVar1 != (UnityEngine_UIElements_Slider_o *)0x0) {
    vtable_dispatch =
         (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable)._123_set_showInputField.
         methodPtr;
    (*vtable_dispatch)
              (pUVar1,(ulong)(byte)value,
               (((UnityEngine_UIElements_SliderInt_c *)pUVar1->klass)->vtable).
               _123_set_showInputField.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(0,CONCAT44(in_register_00000034,value));
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsIntSlider
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee5fa0

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isIntSlider);
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3ee5fb0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_glue(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3ee5fd0

void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch_00;
  float *pfVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  UnityEngine_UIElements_SliderInt_o *pUVar5;
  UnityEngine_UIElements_Slider_o *pUVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if ((char)(__this->fields)._isIntSlider == '\0') {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == DAT_05711098) {
        auVar8 = il2cpp_glue_022c7330(value);
        uVar3 = auVar8._8_8_;
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = *auVar8._0_8_;
          goto LAB_03ee6080;
        }
      }
      else {
        if (value->klass != DAT_05711068) {
          return;
        }
        auVar8 = il2cpp_glue_022c7330(value);
        uVar3 = auVar8._8_8_;
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = (float)*auVar8._0_8_;
LAB_03ee6080:
          vtable_dispatch_00 = (pUVar6->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
          (*vtable_dispatch_00)
                    (fVar7,pUVar6,(pUVar6->klass->vtable)._114_SetValueWithoutNotify.method,uVar3,
                     vtable_dispatch_00);
          return;
        }
      }
      goto LAB_03ee6094;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == DAT_05711068) {
      puVar2 = (uint *)il2cpp_glue_022c7330(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) goto LAB_03ee6094;
      uVar4 = *puVar2;
    }
    else {
      if (value->klass != DAT_05711098) {
        return;
      }
      pfVar1 = (float *)il2cpp_glue_022c7330(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
LAB_03ee6094:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar4 = (uint)*pfVar1;
    }
    vtable_dispatch_00 = (pUVar5->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtable_dispatch_00)
              (pUVar5,(ulong)uVar4,(pUVar5->klass->vtable)._114_SetValueWithoutNotify.method,
               vtable_dispatch_00);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_ClassName (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee60a0

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703ad8 == '\0') {
    il2cpp_init_method_metadata(&"Slider");
    DAT_05703ad8 = '\x01';
  }
  return "Slider";
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee60d0

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsStatic (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee60e0

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_IsStatic
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x3ee60f0

bool_conflict
CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__4_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x3ee6100

void CustomLogic_CustomLogicSliderBuiltin__<_ctor>b__4_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 auStack_24 [4];
  undefined *puStack_20;
  
  if (DAT_05703ad9 == '\0') {
    puStack_20 = (undefined *)0x3ee611f;
    il2cpp_init_method_metadata(&MethodInfo_Single_get_newValue);
    DAT_05703ad9 = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    puStack_20 = &UNK_03ee6144;
    il2cpp_raise_exception();
  }
  if (DAT_05703ace == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703ace = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      userMethod = (__this->fields)._valueChangedEvent;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_24);
    if (parameterValues != (System_Object_array *)0x0) {
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
         lVar2 == 0)) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameterValues->m_Items[0] = pIVar1;
      il2cpp_runtime_glue(parameterValues->m_Items,pIVar1);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__5_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_int__o* evt, const MethodInfo* method);
// 0x3ee6150

void CustomLogic_CustomLogicSliderBuiltin__<_ctor>b__5_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_int__o *evt,MethodInfo *method)

{
  int32_t iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  CustomLogic_UserMethod_o *userMethod;
  int32_t aiStack_2c [3];
  
  if (DAT_05703ada == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_newValue);
    DAT_05703ada = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (evt->fields)._newValue_k__BackingField;
  if (DAT_05703acf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703acf = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod != (CustomLogic_UserMethod_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      userMethod = (__this->fields)._valueChangedEvent;
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    aiStack_2c[0] = iVar1;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_2c);
    if (parameterValues != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameterValues->obj).klass)->_1).element_class),
         lVar3 == 0)) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
      if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameterValues->m_Items[0] = pIVar2;
      il2cpp_runtime_glue(parameterValues->m_Items,pIVar2);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}



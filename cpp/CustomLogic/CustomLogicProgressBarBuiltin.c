// Type: CustomLogic.CustomLogicProgressBarBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProgressBarBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicProgressBarBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee1fb0

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicProgressBarBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicProgressBarBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ee31b0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703ab0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703ab0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ee3220

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee3230

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_<>c__<__CreateMethodBinding__OnValueChanged>b__6_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (DAT_05703ab1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ab1 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      il2cpp_runtime_glue(&(__c->fields)._valueChangedEvent,pCVar1);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee32d0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_<>c__<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  float newValue;
  
  if (DAT_05703ab2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ab2 = '\x01';
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
    newValue = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (__this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__c->fields)._progressBar,
       __this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
      UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify
                (__this_00,newValue,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPercentage>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee3370

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_<>c__<__CreateMethodBinding__GetPercentage>b__8_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o **ppUVar1;
  float fVar2;
  UnityEngine_UIElements_ProgressBar_o *pUVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float local_c;
  
  if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar3 = (__c->fields)._progressBar, pUVar3 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    fVar5 = *(float *)((long)&(pUVar3->fields).m_Progress + 4);
    local_c = 0.0;
    ppUVar1 = &(pUVar3->fields).m_Progress;
    if ((fVar5 != *(float *)ppUVar1) || (NAN(fVar5) || NAN(*(float *)ppUVar1))) {
      fVar5 = (float)(*(pUVar3->klass->vtable)._103_get_value.methodPtr)
                               (pUVar3,(pUVar3->klass->vtable)._103_get_value.method);
      pUVar3 = (__c->fields)._progressBar;
      if (pUVar3 == (UnityEngine_UIElements_ProgressBar_o *)0x0) goto LAB_03ee33fe;
      fVar2 = *(float *)&(pUVar3->fields).m_Progress;
      local_c = ((fVar5 - fVar2) / (*(float *)((long)&(pUVar3->fields).m_Progress + 4) - fVar2)) *
                100.0;
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03ee33fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPercentage>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ee3410

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_<>c__<__CreateMethodBinding__SetPercentage>b__9_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  float fVar1;
  Il2CppObject *obj;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_05703ab3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ab3 = '\x01';
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
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (pUVar2 = (__c->fields)._progressBar, pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0))
    {
      fVar4 = 100.0;
      if (fVar3 <= 100.0) {
        fVar4 = fVar3;
      }
      fVar1 = *(float *)&(pUVar2->fields).m_Progress;
      (*(pUVar2->klass->vtable)._104_set_value.methodPtr)
                (((*(float *)((long)&(pUVar2->fields).m_Progress + 4) - fVar1) *
                 (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4)) / 100.0 + fVar1,pUVar2,
                 (pUVar2->klass->vtable)._104_set_value.method);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee2040

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703aa2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"HighValue");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"GetPercentage");
    il2cpp_init_method_metadata(&"SetPercentage");
    il2cpp_init_method_metadata(&"LowValue");
    DAT_05703aa2 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8991c1ec) {
    if (uVar3 < 0x24d471aa) {
      if (uVar3 == 0xf54ee6e) {
        bVar4 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703aa5 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowValue_g____g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LowValue_g____set);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
            DAT_05703aa5 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x24d471a9) &&
              (bVar4 = System_String__op_Equality(name,"Title",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703aa3 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Title_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Title_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
          DAT_05703aa3 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x8991c1eb) {
      bVar4 = System_String__op_Equality(name,"SetPercentage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703aaa == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPercentage_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703aaa = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x4c979c42) &&
            (bVar4 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703aa6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HighValue_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HighValue_g____se);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
        DAT_05703aa6 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xd1dd43b6) {
    if (uVar3 == 0xd147f96a) {
      bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703aa4 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
          DAT_05703aa4 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xd1dd43b5) &&
            (bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703aa8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703aa8 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 == 0xda3ade4f) {
    bVar4 = System_String__op_Equality(name,"GetPercentage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703aa9 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetPercentage_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703aa9 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703aa7 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703aa7 = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 8,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicProgressBarBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Title
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title (const MethodInfo* method);
// 0x3ee2430

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Title_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Title_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
    DAT_05703aa3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x3ee2510

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
    DAT_05703aa4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x3ee25f0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LowValue_g____g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LowValue_g____set);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
    DAT_05703aa5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x3ee26d0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HighValue_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HighValue_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
    DAT_05703aa6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicProgressBarBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicProgressBarBuilti);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x3ee27b0

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703aa7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x3ee2900

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703aa8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__GetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage (const MethodInfo* method);
// 0x3ee2a50

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aa9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetPercentage_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703aa9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage (const MethodInfo* method);
// 0x3ee2ba0

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this;
  
  if (DAT_05703aaa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetPercentage_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703aaa = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProgressBarBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicProgressBarBuiltin);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ee2cf0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703aab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"HighValue");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"GetPercentage");
    il2cpp_init_method_metadata(&"SetPercentage");
    il2cpp_init_method_metadata(&"LowValue");
    DAT_05703aab = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Title",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LowValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HighValue",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetPercentage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetPercentage",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x3ee2eb0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__Title>g____getter_2_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    pSVar1 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee2ed0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__Title>g____setter_2_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  System_String_o *value;
  
  if (DAT_05703aac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aac = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x3ee2f50

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__Value>g____getter_3_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    (*(pUVar1->klass->vtable)._103_get_value.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._103_get_value.method);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee2fa0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__Value>g____setter_3_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  if (DAT_05703aad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aad = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._progressBar, pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    (*(pUVar1->klass->vtable)._104_set_value.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._104_set_value.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x3ee3030

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__LowValue>g____getter_4_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     ((__i->fields)._progressBar != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee3070

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__LowValue>g____setter_4_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  float value;
  
  if (DAT_05703aae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aae = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x3ee30f0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__HighValue>g____getter_5_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     ((__i->fields)._progressBar != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ee3130

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings__<__CreatePropertyBinding__HighValue>g____setter_5_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  float value;
  
  if (DAT_05703aaf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703aaf = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin___ctor (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ProgressBar_o* progressBar, const MethodInfo* method);
// 0x3ee1af0

void CustomLogic_CustomLogicProgressBarBuiltin___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ProgressBar_o *progressBar,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a9e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void___ctor_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ChangeEvent_float);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_RegisterValueChangedCallback_Single);
    DAT_05703a9e = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)progressBar,method);
  (__this->fields)._progressBar = progressBar;
  il2cpp_runtime_glue(&(__this->fields)._progressBar,progressBar);
  control = (__this->fields)._progressBar;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)
             il2cpp_runtime_glue(TypeInfo_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback<object>___ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback<float>
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Single);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee1ba0

void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 local_24 [4];
  
  if (DAT_05703a9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703a9f = '\x01';
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
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,local_24);
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


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Title
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1cc0

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_Title
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Title
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee1ce0

void CustomLogic_CustomLogicProgressBarBuiltin__set_Title
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_title(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Value
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1d00

float CustomLogic_CustomLogicProgressBarBuiltin__get_Value
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  float fVar2;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._103_get_value.methodPtr;
    fVar2 = (float)(*vtable_dispatch)
                             (pUVar1,(pUVar1->klass->vtable)._103_get_value.method,in_RDX,
                              vtable_dispatch);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee1d30

void CustomLogic_CustomLogicProgressBarBuiltin__set_Value
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._104_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(pUVar1->klass->vtable)._104_set_value.method,in_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_LowValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1d60

float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    return *(float *)&(pUVar1->fields).m_Progress;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee1d80

void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_HighValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1da0

float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    return *(float *)((long)&(pUVar1->fields).m_Progress + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee1dc0

void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3ee1de0

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_glue(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3ee1e00

void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify
              (__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$GetPercentage
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1e20

float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_VisualElement_o **ppUVar1;
  float fVar2;
  UnityEngine_UIElements_ProgressBar_o *pUVar3;
  float fVar4;
  
  pUVar3 = (__this->fields)._progressBar;
  if (pUVar3 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    fVar4 = *(float *)((long)&(pUVar3->fields).m_Progress + 4);
    ppUVar1 = &(pUVar3->fields).m_Progress;
    if ((fVar4 == *(float *)ppUVar1) && (!NAN(fVar4) && !NAN(*(float *)ppUVar1))) {
      return 0.0;
    }
    fVar4 = (float)(*(pUVar3->klass->vtable)._103_get_value.methodPtr)
                             (pUVar3,(pUVar3->klass->vtable)._103_get_value.method);
    pUVar3 = (__this->fields)._progressBar;
    if (pUVar3 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
      fVar2 = *(float *)&(pUVar3->fields).m_Progress;
      return ((fVar4 - fVar2) / (*(float *)((long)&(pUVar3->fields).m_Progress + 4) - fVar2)) *
             100.0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetPercentage
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float percentage, const MethodInfo* method);
// 0x3ee1e90

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float percentage,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields)._progressBar;
  if (pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    fVar3 = 100.0;
    if (percentage <= 100.0) {
      fVar3 = percentage;
    }
    fVar1 = *(float *)&(pUVar2->fields).m_Progress;
    (*(pUVar2->klass->vtable)._104_set_value.methodPtr)
              (((*(float *)((long)&(pUVar2->fields).m_Progress + 4) - fVar1) *
               (float)(-(uint)(0.0 <= percentage) & (uint)fVar3)) / 100.0 + fVar1,pUVar2,
               (pUVar2->klass->vtable)._104_set_value.method);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1f00

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703aa0 == '\0') {
    il2cpp_init_method_metadata(&"ProgressBar");
    DAT_05703aa0 = '\x01';
  }
  return "ProgressBar";
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1f30

bool_conflict
CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1f40

bool_conflict
CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x3ee1f50

bool_conflict
CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProgressBarBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x3ee1f60

void CustomLogic_CustomLogicProgressBarBuiltin__<_ctor>b__2_0
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  UnityEngine_UIElements_ChangeEvent_float__o *method_00;
  
  method_00 = evt;
  if (DAT_05703aa1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_newValue);
    DAT_05703aa1 = '\x01';
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
              (__this,(evt->fields)._newValue_k__BackingField,(MethodInfo *)method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



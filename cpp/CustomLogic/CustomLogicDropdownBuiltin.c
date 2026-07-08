// Type: CustomLogic.CustomLogicDropdownBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDropdownBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicDropdownBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3eddf60

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicDropdownBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicDropdownBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3edf590

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a78 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3edf600

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edf610

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c__<__CreateMethodBinding__OnValueChanged>b__6_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (DAT_05703a79 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a79 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      il2cpp_runtime_glue(&(__c->fields)._valueChangedEvent,pCVar1);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edf6b0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c__<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05703a7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a7a = '\x01';
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
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._dropdown, pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0))
    {
      (*(pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr)
                (pUVar1,pIVar2,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIndexWithoutNotify>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetIndexWithoutNotify_b__8_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edf750

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c__<__CreateMethodBinding__SetIndexWithoutNotify>b__8_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  MethodInfo *method_00;
  
  if (DAT_05703a7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a7b = '\x01';
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
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify(__c,index,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddChoice>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edf7e0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c__<__CreateMethodBinding__AddChoice>b__9_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *choice;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (DAT_05703a7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a7c = '\x01';
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
    choice = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__AddChoice(__c,choice,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveChoice>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edf870

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveChoice>b__10_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *choice;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (DAT_05703a7d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a7d = '\x01';
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
    choice = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice(__c,choice,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearChoices>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edf900

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_<>c__<__CreateMethodBinding__ClearChoices>b__11_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (DAT_05703a65 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
      il2cpp_init_method_metadata(&TypeInfo_List_string);
      DAT_05703a65 = '\x01';
    }
    pUVar1 = (__c->fields)._dropdown;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
    if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
                (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3eddff0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703a68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"RemoveChoice");
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"AddChoice");
    il2cpp_init_method_metadata(&"Index");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Choices");
    il2cpp_init_method_metadata(&"ClearChoices");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"SetIndexWithoutNotify");
    DAT_05703a68 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7ed1d727) {
    if (uVar3 < 0x19e378c0) {
      if (uVar3 == 0x337847e) {
        bVar4 = System_String__op_Equality(name,"RemoveChoice",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703a71 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveChoice_b__1);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703a71 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x19e378bf) &&
              (bVar4 = System_String__op_Equality(name,"AddChoice",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a70 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddChoice_b__9_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a70 = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x31359a62) {
      bVar4 = System_String__op_Equality(name,"SetIndexWithoutNotify",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a6f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetIndexWithoutNo);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a6f = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x3dac88df) {
      bVar4 = System_String__op_Equality(name,"Choices",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a6c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Choices_g____ge);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Choices_g____sett);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
          DAT_05703a6c = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x7ed1d726) &&
            (bVar4 = System_String__op_Equality(name,"ClearChoices",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a72 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearChoices_b__1);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703a72 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xaec7ae4c) {
    if (uVar3 == 0x9eccf29d) {
      bVar4 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a69 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
          DAT_05703a69 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xaec7ae4b) &&
            (bVar4 = System_String__op_Equality(name,"Index",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a6b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Index_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Index_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
        DAT_05703a6b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd147f96a) {
    bVar4 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a6a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
        DAT_05703a6a = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xd1dd43b5) {
    bVar4 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a6e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703a6e = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf722a79f) &&
          (bVar4 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a6d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703a6d = '\x01';
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
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 8,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicDropdownBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x3ede4b0

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
    DAT_05703a69 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x3ede590

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
    DAT_05703a6a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Index
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index (const MethodInfo* method);
// 0x3ede670

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Index_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Index_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
    DAT_05703a6b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Choices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices (const MethodInfo* method);
// 0x3ede750

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicDropdownBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Choices_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Choices_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object);
    DAT_05703a6c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicDropdownBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x3ede830

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a6d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a6d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x3ede980

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a6e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetIndexWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify (const MethodInfo* method);
// 0x3edead0

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetIndexWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a6f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__AddChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice (const MethodInfo* method);
// 0x3edec20

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a70 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AddChoice_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a70 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__RemoveChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice (const MethodInfo* method);
// 0x3eded70

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveChoice_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a71 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__ClearChoices
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices (const MethodInfo* method);
// 0x3edeec0

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this;
  
  if (DAT_05703a72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClearChoices_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a72 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDropdownBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDropdownBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3edf010

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"RemoveChoice");
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"AddChoice");
    il2cpp_init_method_metadata(&"Index");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Choices");
    il2cpp_init_method_metadata(&"ClearChoices");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"SetIndexWithoutNotify");
    DAT_05703a73 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Index",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Choices",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetIndexWithoutNotify",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AddChoice",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveChoice",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClearChoices",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x3edf210

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Label>g____getter_2_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (DAT_05703a5c == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_String_get_label);
      DAT_05703a5c = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField<object>__get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edf260

void CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Label>g____setter_2_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  System_String_o *value;
  
  if (DAT_05703a74 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a74 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (DAT_05703a5d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
      DAT_05703a5d = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      UnityEngine_UIElements_BaseField<object>__set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,MethodInfo_Void_set_label);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x3edf310

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Value>g____getter_3_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  undefined8 in_RDX;
  
  if ((__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._dropdown, pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0)) {
    vtable_dispatch = (pUVar1->klass->vtable)._105_get_value.methodPtr;
    pIVar2 = (Il2CppObject *)
             (*vtable_dispatch)
                       (pUVar1,(pUVar1->klass->vtable)._105_get_value.method,in_RDX,
                        vtable_dispatch);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edf340

void CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Value>g____setter_3_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  UnityEngine_UIElements_DropdownField_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  
  if (DAT_05703a75 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a75 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._dropdown, pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtable_dispatch = (pUVar2->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,pIVar3,(pUVar2->vtable)._106_set_value.method,pUVar2,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x3edf3d0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Index>g____getter_4_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (DAT_05703a5e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_index);
      DAT_05703a5e = '\x01';
    }
    __this = (UnityEngine_UIElements_PopupField_T__o *)(__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      local_c = UnityEngine_UIElements_PopupField<object>__get_index(__this,MethodInfo_Int32_get_index);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edf440

void CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Index>g____setter_4_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this;
  int32_t value;
  
  if (DAT_05703a76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a76 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (DAT_05703a5f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_index);
      DAT_05703a5f = '\x01';
    }
    __this = (UnityEngine_UIElements_PopupField_T__o *)(__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField<object>__set_index(__this,value,MethodInfo_Void_set_index);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x3edf4f0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Choices>g____getter_5_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__get_Choices(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3edf510

void CustomLogic_CustomLogicDropdownBuiltin_Bindings__<__CreatePropertyBinding__Choices>g____setter_5_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  MethodInfo *method_00;
  
  if (DAT_05703a77 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a77 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (CustomLogic_CustomLogicListBuiltin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDropdownBuiltin__set_Choices(__i,value,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin___ctor (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_DropdownField_o* dropdown, const MethodInfo* method);
// 0x3edd310

void CustomLogic_CustomLogicDropdownBuiltin___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_DropdownField_o *dropdown,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a5a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void___ctor_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ChangeEvent_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_RegisterValueChangedCallback_String);
    DAT_05703a5a = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)dropdown,method);
  (__this->fields)._dropdown = dropdown;
  il2cpp_runtime_glue(&(__this->fields)._dropdown,dropdown);
  control = (__this->fields)._dropdown;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)
             il2cpp_runtime_glue(TypeInfo_EventCallback_ChangeEvent_string);
  UnityEngine_UIElements_EventCallback<object>___ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback<object>
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_String);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3edd3c0

void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  long lVar1;
  undefined8 uVar2;
  CustomLogic_UserMethod_o *userMethod;
  
  if (DAT_05703a5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703a5b = '\x01';
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
  if (parameterValues != (System_Object_array *)0x0) {
    if (value != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(value,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
        uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar2,0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = (Il2CppObject *)value;
    il2cpp_runtime_glue(parameterValues->m_Items,value);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3edd4c0

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Label
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  System_String_o *pSVar1;
  
  if (DAT_05703a5c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_label);
    DAT_05703a5c = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField<object>__get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,MethodInfo_String_get_label);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3edd500

void CustomLogic_CustomLogicDropdownBuiltin__set_Label
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  
  if (DAT_05703a5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
    DAT_05703a5d = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    UnityEngine_UIElements_BaseField<object>__set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,MethodInfo_Void_set_label);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3edd550

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Value
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._105_get_value.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pUVar1,(pUVar1->klass->vtable)._105_get_value.method,in_RDX,
                        vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3edd580

void CustomLogic_CustomLogicDropdownBuiltin__set_Value
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._106_set_value.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Index
// il2cpp: int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3edd5b0

int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index
                  (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this_00;
  int32_t iVar1;
  
  if (DAT_05703a5e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_index);
    DAT_05703a5e = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_PopupField_T__o *)(__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    iVar1 = UnityEngine_UIElements_PopupField<object>__get_index(__this_00,MethodInfo_Int32_get_index);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Index
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3edd5f0

void CustomLogic_CustomLogicDropdownBuiltin__set_Index
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this_00;
  
  if (DAT_05703a5f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_index);
    DAT_05703a5f = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_PopupField_T__o *)(__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    UnityEngine_UIElements_PopupField<object>__set_index(__this_00,value,MethodInfo_Void_set_index);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Choices
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__get_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3edd640

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Choices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  System_Collections_Generic_List_object__o *pSVar7;
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *item;
  
  if (DAT_05703a60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    DAT_05703a60 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._dropdown;
  if ((pUVar3 == (UnityEngine_UIElements_DropdownField_o *)0x0) ||
     (pSVar7 = (System_Collections_Generic_List_object__o *)
               (*(pUVar3->klass->vtable)._118_get_choices.methodPtr)
                         (pUVar3,(pUVar3->klass->vtable)._118_get_choices.method),
     pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,pSVar7,
             MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_01.fields._8_8_ = pIVar9;
    __this_01.fields._list = pSVar8;
    __this_01.fields._current = item;
    bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
    if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_00.fields._8_8_ = pIVar9, __this_00.fields._list = pSVar8,
          __this_00.fields._current = item,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
          lVar5 = MethodInfo_Void_Add, (char)bVar6 != '\0') {
      pSVar7 = (__this_03->fields).List;
      if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar7->fields)._items;
      if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (pSVar7->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar7->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar7,item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_02.fields._8_8_ = pIVar9;
  __this_02.fields._list = pSVar8;
  __this_02.fields._current = item;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  return __this_03;
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Choices
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x3edd880

void CustomLogic_CustomLogicDropdownBuiltin__set_Choices
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               CustomLogic_CustomLogicListBuiltin_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  UnityEngine_UIElements_DropdownField_o *pUVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_04;
  Il2CppObject *item;
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_05703a61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703a61 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    pSVar7 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    pIVar9 = local_30;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      while (__this_01.fields._8_8_ = pSVar8, __this_01.fields._list = pSVar7,
            __this_01.fields._current = (Il2CppObject *)pIVar9,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar6 != '\0') {
        if (pIVar9 != (Il2CppType *)0x0) {
          (*pIVar9->data->vtable[3].methodPtr)(pIVar9,pIVar9->data->vtable[3].method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_02.fields._8_8_ = pSVar8, __this_02.fields._list = pSVar7,
            __this_02.fields._current = (Il2CppObject *)pIVar9,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar6 != '\0') {
        if (pIVar9 != (Il2CppType *)0x0) {
          item = (Il2CppObject *)
                 (*pIVar9->data->vtable[3].methodPtr)(pIVar9,pIVar9->data->vtable[3].method);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_04->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_03.fields._8_8_ = pSVar8;
    __this_03.fields._list = pSVar7;
    __this_03.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    pUVar4 = (__this->fields)._dropdown;
    if (pUVar4 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar4->klass->vtable)._119_set_choices.methodPtr)
                (pUVar4,__this_04,(pUVar4->klass->vtable)._119_set_choices.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3eddb10

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_glue(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3eddb30

void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtable_dispatch)
              (pUVar1,value,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetIndexWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3eddb60

void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  UnityEngine_UIElements_DropdownField_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a62 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_05703a62 = '\x01';
    method = extraout_RDX;
  }
  if (index < 0) {
    return;
  }
  pUVar1 = (__this->fields)._dropdown;
  if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
     (lVar3 = (*(pUVar1->klass->vtable)._118_get_choices.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._118_get_choices.method,method), lVar3 != 0)
     ) {
    if (*(int *)(lVar3 + 0x18) <= index) {
      return;
    }
    pUVar1 = (__this->fields)._dropdown;
    if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)
                    (*(pUVar1->klass->vtable)._118_get_choices.methodPtr)
                              (pUVar1,(pUVar1->klass->vtable)._118_get_choices.method),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      pIVar4 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_String_get_Item);
      pUVar2 = pUVar1->klass;
      vtable_dispatch = (pUVar2->vtable)._114_SetValueWithoutNotify.methodPtr;
      (*vtable_dispatch)
                (pUVar1,pIVar4,(pUVar2->vtable)._114_SetValueWithoutNotify.method,pUVar2,
                 vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$AddChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__AddChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x3eddc20

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__AddChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a63 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703a63 = '\x01';
    method = extraout_RDX;
  }
  pUVar3 = (__this->fields)._dropdown;
  if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar3->klass->vtable)._118_get_choices.methodPtr)
                           (pUVar3,(pUVar3->klass->vtable)._118_get_choices.method,method);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,collection,MethodInfo_List_1_System_String);
    lVar5 = MethodInfo_Void_Add;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)choice;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,choice);
          pUVar3 = (__this->fields)._dropdown;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)choice,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          pUVar3 = (__this->fields)._dropdown;
        }
        if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
          (*(pUVar3->klass->vtable)._119_set_choices.methodPtr)
                    (pUVar3,__this_00,(pUVar3->klass->vtable)._119_set_choices.method);
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$RemoveChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x3eddd50

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,
          MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a64 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703a64 = '\x01';
    method = extraout_RDX;
  }
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar1->klass->vtable)._118_get_choices.methodPtr)
                           (pUVar1,(pUVar1->klass->vtable)._118_get_choices.method,method);
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,collection,MethodInfo_List_1_System_String);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Remove(__this_00,(Il2CppObject *)choice,MethodInfo_Boolean_Remove)
      ;
      pUVar1 = (__this->fields)._dropdown;
      if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
                  (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$ClearChoices
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__ClearChoices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3edde20

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__ClearChoices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_05703a65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703a65 = '\x01';
  }
  pUVar1 = (__this->fields)._dropdown;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    (*(pUVar1->klass->vtable)._119_set_choices.methodPtr)
              (pUVar1,__this_00,(pUVar1->klass->vtable)._119_set_choices.method);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_ClassName (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3eddeb0

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_ClassName
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a66 == '\0') {
    il2cpp_init_method_metadata(&"Dropdown");
    DAT_05703a66 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3eddee0

bool_conflict
CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3eddef0

bool_conflict
CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x3eddf00

bool_conflict
CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDropdownBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x3eddf10

void CustomLogic_CustomLogicDropdownBuiltin__<_ctor>b__2_0
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (DAT_05703a67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_newValue);
    DAT_05703a67 = '\x01';
    method = extraout_RDX;
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) {
    CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
              (__this,(evt->fields)._newValue_k__BackingField,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



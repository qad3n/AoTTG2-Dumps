// Type: CustomLogic.CustomLogicDropdownBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicDropdownBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicDropdownBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5afd260

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDropdownBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5afe820

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546f57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f57 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5afe890

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afe8a0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546f58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f58 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afe940

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546f59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f59 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._dropdown, pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0)) {
      (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIndexWithoutNotify>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetIndexWithoutNotify_b__8_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afe9e0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetIndexWithoutNotify_b__8_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f5a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify(__c,index,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddChoice>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afea70

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *choice;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f5b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    choice = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__AddChoice(__c,choice,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveChoice>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afeb00

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *choice;
  CustomLogic_CustomLogicDropdownBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f5c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    choice = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice(__c,choice,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearChoices>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afeb90

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546f44 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
      Il2CppMethodInitialized_07546f44 = '\x01';
    }
    pUVar1 = (__c->fields)._dropdown;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar1->klass->vtable)._164_set_choices.methodPtr)
                (pUVar1,__this_00,(pUVar1->klass->vtable)._164_set_choices.method);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5afd2f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveChoice");
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"AddChoice");
    il2cpp_codegen_initialize_runtime_metadata(&"Index");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Choices");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearChoices");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"SetIndexWithoutNotify");
    Il2CppMethodInitialized_07546f47 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7ed1d727) {
    if (uVar2 < 0x19e378c0) {
      if (uVar2 == 0x337847e) {
        bVar1 = System_String__op_Equality(name,"RemoveChoice",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x19e378bf) {
        bVar1 = System_String__op_Equality(name,"AddChoice",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x31359a62) {
      bVar1 = System_String__op_Equality(name,"SetIndexWithoutNotify",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3dac88df) {
      bVar1 = System_String__op_Equality(name,"Choices",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x7ed1d726) {
      bVar1 = System_String__op_Equality(name,"ClearChoices",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xaec7ae4c) {
    if (uVar2 == 0x9eccf29d) {
      bVar1 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xaec7ae4b) {
      bVar1 = System_String__op_Equality(name,"Index",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xd147f96a) {
    bVar1 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xd1dd43b5) {
    bVar1 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf722a79f) {
    bVar1 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDropdownBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x5afd7b0

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
    Il2CppMethodInitialized_07546f48 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x5afd890

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
    Il2CppMethodInitialized_07546f49 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Index
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index (const MethodInfo* method);
// 0x5afd970

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
    Il2CppMethodInitialized_07546f4a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Choices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices (const MethodInfo* method);
// 0x5afda50

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
    Il2CppMethodInitialized_07546f4b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x5afdb30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afdb65: jmp 0x5afdbd5

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDropdownBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f4c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicDropdownBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x5afdc70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afdca5: jmp 0x5afdd15

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDropdownBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f4d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicDropdownBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetIndexWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify (const MethodInfo* method);
// 0x5afddb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afdde5: jmp 0x5afde55

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDropdownBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetIndexWithoutNotify_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f4e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicDropdownBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetIndexWithoutNotify_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__AddChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice (const MethodInfo* method);
// 0x5afdef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afdf25: jmp 0x5afdf95

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDropdownBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__AddChoice_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f4f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicDropdownBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__AddChoice_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__RemoveChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice (const MethodInfo* method);
// 0x5afe030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afe065: jmp 0x5afe0d5

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDropdownBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__RemoveChoice_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f50 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicDropdownBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__RemoveChoice_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__ClearChoices
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices (const MethodInfo* method);
// 0x5afe170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afe1a5: jmp 0x5afe215

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicDropdownBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__ClearChoices_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f51 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicDropdownBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__ClearChoices_b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5afe2b0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveChoice");
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"AddChoice");
    il2cpp_codegen_initialize_runtime_metadata(&"Index");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Choices");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearChoices");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"SetIndexWithoutNotify");
    Il2CppMethodInitialized_07546f52 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Index",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Choices",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetIndexWithoutNotify",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddChoice",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveChoice",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearChoices",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x5afe4b0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546f3b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      Il2CppMethodInitialized_07546f3b = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_object___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,
                          (MethodInfo_4668E40 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afe500

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f53 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546f3c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      Il2CppMethodInitialized_07546f3c = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,
                 (MethodInfo_4668E70 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x5afe5b0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar2;
  undefined8 in_RDX;
  
  if ((__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._dropdown, pUVar1 == (UnityEngine_UIElements_DropdownField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._148_get_value.methodPtr;
  pIVar2 = (Il2CppObject *)
           (*vtableDispatch)
                     (pUVar1,(pUVar1->klass->vtable)._148_get_value.method,in_RDX,vtableDispatch);
  return pIVar2;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afe5e0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  UnityEngine_UIElements_DropdownField_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546f54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f54 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._dropdown, pUVar1 == (UnityEngine_UIElements_DropdownField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pUVar2 = pUVar1->klass;
  vtableDispatch = (pUVar2->vtable)._149_set_value.methodPtr;
  (*vtableDispatch)(pUVar1,pSVar3,(pUVar2->vtable)._149_set_value.method,pUVar2,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x5afe670

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546f3d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_PopupField_string_get_index);
      Il2CppMethodInitialized_07546f3d = '\x01';
    }
    __this = (UnityEngine_UIElements_PopupField_T__o *)(__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      local_c = UnityEngine_UIElements_PopupField_object___get_index
                          (__this,(MethodInfo_3DC2560 *)
                                  MethodInfo_UnityEngine_UIElements_PopupField_string_get_index);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afe6e0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_07546f55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f55 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546f3e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_PopupField_string_set_index);
      Il2CppMethodInitialized_07546f3e = '\x01';
    }
    __this = (UnityEngine_UIElements_PopupField_T__o *)(__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_PopupField_T__o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                (__this,value,
                 (MethodInfo_3DC2570 *)MethodInfo_UnityEngine_UIElements_PopupField_string_set_index);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x5afe790

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__get_Choices(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afe7a0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f56 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i == (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicDropdownBuiltin__set_Choices(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin___ctor (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_DropdownField_o* dropdown, const MethodInfo* method);
// 0x5afc670

void CustomLogic_CustomLogicDropdownBuiltin___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_DropdownField_o *dropdown,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *control;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
              );
    Il2CppMethodInitialized_07546f39 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)dropdown,(MethodInfo *)0x0);
  (__this->fields)._dropdown = dropdown;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdown);
  control = (__this->fields)._dropdown;
  __this_00 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0,(MethodInfo_4E7A6A0 *)0x0
            );
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_3568850 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
            );
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5afc720

void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  CustomLogic_UserMethod_o *userMethod;
  
  if (Il2CppMethodInitialized_07546f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546f3a = '\x01';
  }
  userMethod = (__this->fields)._valueChangedEvent;
  if (userMethod == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    userMethod = (__this->fields)._valueChangedEvent;
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (value != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)value,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = (Il2CppObject *)value;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afc820

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Label
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
    Il2CppMethodInitialized_07546f3b = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 == (UnityEngine_UIElements_DropdownField_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_BaseField_object___get_label
                     ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                      (MethodInfo_4668E40 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
  return pSVar1;
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5afc860

void CustomLogic_CustomLogicDropdownBuiltin__set_Label
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  
  if (Il2CppMethodInitialized_07546f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
    Il2CppMethodInitialized_07546f3c = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 == (UnityEngine_UIElements_DropdownField_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_BaseField_object___set_label
            ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
             (MethodInfo_4668E70 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afc8b0

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Value
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 == (UnityEngine_UIElements_DropdownField_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._148_get_value.methodPtr;
  pSVar2 = (System_String_o *)
           (*vtableDispatch)
                     (pUVar1,(pUVar1->klass->vtable)._148_get_value.method,in_RDX,vtableDispatch);
  return pSVar2;
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5afc8e0

void CustomLogic_CustomLogicDropdownBuiltin__set_Value
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 == (UnityEngine_UIElements_DropdownField_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._149_set_value.methodPtr;
  (*vtableDispatch)(pUVar1,value,(pUVar1->klass->vtable)._149_set_value.method,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Index
// il2cpp: int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afc910

int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index
                  (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07546f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_PopupField_string_get_index)
    ;
    Il2CppMethodInitialized_07546f3d = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_PopupField_T__o *)(__this->fields)._dropdown;
  if (__this_00 == (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_UIElements_PopupField_object___get_index
                    (__this_00,
                     (MethodInfo_3DC2560 *)MethodInfo_UnityEngine_UIElements_PopupField_string_get_index);
  return iVar1;
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Index
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5afc950

void CustomLogic_CustomLogicDropdownBuiltin__set_Index
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_PopupField_T__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_PopupField_string_set_index)
    ;
    Il2CppMethodInitialized_07546f3e = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_PopupField_T__o *)(__this->fields)._dropdown;
  if (__this_00 == (UnityEngine_UIElements_PopupField_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_PopupField_object___set_index
            (__this_00,value,
             (MethodInfo_3DC2570 *)MethodInfo_UnityEngine_UIElements_PopupField_string_set_index);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Choices
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__get_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afc9a0
// eh: try 0x5afcaaf..0x5afcb4a -> pad 0x5afcb4e (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5afcb6a..0x5afcb6f -> pad 0x5afcb8e cleanup
// eh: try 0x5afcb91..0x5afcb9b -> pad 0x5afcba3 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afca8c: lea r15, [rip + 0x179206d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5afca93: mov rbx, rsp
// asm:   0x5afca96: lea r12, [rip + 0x1799163]  ; MethodInfo_System_Collections_Generic_List_object_Add
// asm:   0x5afca9d: jmp 0x5afcab4
// asm:   0x5afcb4a: jmp 0x5afcb52
// asm:   0x5afcb4c: jmp 0x5afcb52
// asm:   0x5afcb4e: jmp 0x5afcb52
// asm:   0x5afcb50: jmp 0x5afcb52
// asm:   0x5afcb52: mov rbx, rax
// asm:   0x5afcb55: cmp edx, 1
// asm:   0x5afcb58: jne 0x5afcb91
// asm:   0x5afcb5a: mov rdi, rbx
// asm:   0x5afcb5d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5afcb62: mov rbx, qword ptr [rax]
// asm:   0x5afcb65: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5afcb6a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5afcb6f: lea rax, [rip + 0x1791f82]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5afcb76: mov rsi, qword ptr [rax]
// asm:   0x5afcb79: mov rdi, rsp
// asm:   0x5afcb7c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5afcb81: test rbx, rbx
// asm:   0x5afcb84: je 0x5afcb2c
// asm:   0x5afcb86: mov rdi, rbx
// asm:   0x5afcb89: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5afcb8e: mov rbx, rax
// asm:   0x5afcb91: lea rdi, [rsp + 0x20]
// asm:   0x5afcb96: call 0x2fd6610  ; il2cpp_runtime_helper_02fd6610()
// asm:   0x5afcb9b: mov rdi, rbx
// asm:   0x5afcb9e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5afcba3: mov rdi, rax
// asm:   0x5afcba6: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Choices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o SStack_58;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (Il2CppMethodInitialized_07546f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    Il2CppMethodInitialized_07546f3f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._dropdown;
  if ((pUVar3 == (UnityEngine_UIElements_DropdownField_o *)0x0) ||
     (pSVar7 = (System_Collections_Generic_List_object__o *)
               (*(pUVar3->klass->vtable)._163_get_choices.methodPtr)
                         (pUVar3,(pUVar3->klass->vtable)._163_get_choices.method),
     pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_38,pSVar7,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  SStack_58.fields._current = pIStack_28;
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)auStack_38._0_8_;
  SStack_58.fields._index = auStack_38._8_4_;
  SStack_58.fields._version = auStack_38._12_4_;
  auStack_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_38._8_8_ = &SStack_58;
  if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    auStack_38._8_8_ = &SStack_58;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (bVar6) {
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&SStack_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add, bVar6) {
      pSVar7 = (__this_00->fields).List;
      if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
label_05afcb3b:
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar7->fields)._items;
      if (pSVar4 == (System_Object_array *)0x0) goto label_05afcb3b;
      uVar2 = (pSVar7->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar7->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = SStack_58.fields._current;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar7,SStack_58.fields._current,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&SStack_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return __this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Choices
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x5afcbb0
// eh: try 0x5afccd2..0x5afcdaf -> pad 0x5afcdb6 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5afcdd4..0x5afcdd9 -> pad 0x5afcdfc cleanup
// eh: try 0x5afcdff..0x5afce09 -> pad 0x5afce11 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afcca8: lea r13, [rip + 0x1799ca9]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5afccaf: jmp 0x5afcd3a
// asm:   0x5afcdb4: jmp 0x5afcdbc
// asm:   0x5afcdb6: jmp 0x5afcdbc
// asm:   0x5afcdb8: jmp 0x5afcdbc
// asm:   0x5afcdba: jmp 0x5afcdbc
// asm:   0x5afcdbc: mov r15, rax
// asm:   0x5afcdbf: cmp edx, 1
// asm:   0x5afcdc2: jne 0x5afcdff
// asm:   0x5afcdc4: mov rdi, r15
// asm:   0x5afcdc7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5afcdcc: mov r15, qword ptr [rax]
// asm:   0x5afcdcf: mov qword ptr [rsp + 0x18], r15
// asm:   0x5afcdd4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5afcdd9: lea rax, [rip + 0x1791838]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x5afcde0: mov rsi, qword ptr [rax]
// asm:   0x5afcde3: mov rdi, rsp
// asm:   0x5afcde6: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5afcdeb: test r15, r15
// asm:   0x5afcdee: je 0x5afccf0
// asm:   0x5afcdf4: mov rdi, r15
// asm:   0x5afcdf7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5afcdfc: mov r15, rax
// asm:   0x5afcdff: lea rdi, [rsp + 0x18]
// asm:   0x5afce04: call 0x2fd6640  ; il2cpp_runtime_helper_02fd6640()
// asm:   0x5afce09: mov rdi, r15
// asm:   0x5afce0c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5afce11: mov rdi, rax
// asm:   0x5afce14: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicDropdownBuiltin__set_Choices
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,CustomLogic_CustomLogicListBuiltin_o *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  undefined1 *puVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *item;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_07546f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07546f40 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_48 = local_30;
    local_58._0_8_ = local_40._0_8_;
    local_58._8_8_ = local_40._8_8_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = local_58;
    puVar6 = local_58;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        local_40._8_8_ = puVar6;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
        if (!bVar7) goto label_05afccde;
        puVar6 = (undefined1 *)local_40._8_8_;
      } while (local_48 == (Il2CppObject *)0x0);
      (*local_48->klass->vtable[3].methodPtr)(local_48,local_48->klass->vtable[3].method);
label_05afcdaa:
      ThrowNullReferenceException();
    }
    while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext), bVar7) {
      if (local_48 != (Il2CppObject *)0x0) {
        item = (System_String_o *)
               (*local_48->klass->vtable[3].methodPtr)(local_48,local_48->klass->vtable[3].method);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_05afcdaa;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
    }
label_05afccde:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    pUVar3 = (__this->fields)._dropdown;
    if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar3->klass->vtable)._164_set_choices.methodPtr)
                (pUVar3,__this_01,(pUVar3->klass->vtable)._164_set_choices.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5afce20

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged_59fce20
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5afce40

void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 == (UnityEngine_UIElements_DropdownField_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr;
  (*vtableDispatch)
            (pUVar1,value,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetIndexWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x5afce70

void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  UnityEngine_UIElements_DropdownField_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07546f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_07546f41 = '\x01';
  }
  if (index < 0) {
    return;
  }
  pUVar1 = (__this->fields)._dropdown;
  if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
     (lVar3 = (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) <= index) {
      return;
    }
    pUVar1 = (__this->fields)._dropdown;
    if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)
                    (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                              (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      pSVar4 = System_Collections_Generic_List_object___get_Item
                         (__this_00,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pUVar2 = pUVar1->klass;
      vtableDispatch = (pUVar2->vtable)._159_SetValueWithoutNotify.methodPtr;
      (*vtableDispatch)
                (pUVar1,pSVar4,(pUVar2->vtable)._159_SetValueWithoutNotify.method,pUVar2,vtableDispatch
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$AddChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__AddChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x5afcf30

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__AddChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07546f42 = '\x01';
  }
  pUVar3 = (__this->fields)._dropdown;
  if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar3->klass->vtable)._163_get_choices.methodPtr)
                           (pUVar3,(pUVar3->klass->vtable)._163_get_choices.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = choice;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)choice,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pUVar3 = (__this->fields)._dropdown;
        if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
          (*(pUVar3->klass->vtable)._164_set_choices.methodPtr)
                    (pUVar3,__this_00,(pUVar3->klass->vtable)._164_set_choices.method);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$RemoveChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x5afd050

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07546f43 = '\x01';
  }
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                           (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)choice,
                 (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove);
      pUVar1 = (__this->fields)._dropdown;
      if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        (*(pUVar1->klass->vtable)._164_set_choices.methodPtr)
                  (pUVar1,__this_00,(pUVar1->klass->vtable)._164_set_choices.method);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$ClearChoices
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__ClearChoices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afd120

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__ClearChoices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07546f44 = '\x01';
  }
  pUVar1 = (__this->fields)._dropdown;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (pUVar1 == (UnityEngine_UIElements_DropdownField_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._164_set_choices.methodPtr)
            (pUVar1,__this_00,(pUVar1->klass->vtable)._164_set_choices.method);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_ClassName (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afd1b0

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_ClassName
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_07546f45 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afd1e0

bool CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afd1f0

bool CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x5afd200

bool CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicDropdownBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x5afd210

void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_string_get_newValue);
    Il2CppMethodInitialized_07546f46 = '\x01';
    method = extraout_RDX;
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
            (__this,(evt->fields)._newValue_k__BackingField,method);
  return;
}



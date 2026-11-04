// Type: CustomLogic.CustomLogicDropdownBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDropdownBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicDropdownBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820746c0

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDropdownBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x18207b2e0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346592 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182077f90

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *value;
  
  if (Il2CppMethodInitialized_184346593 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346593 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = value;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent,value);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18207a030

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346594 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346594 = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
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
// 0x182078eb0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__SetIndexWithoutNotify_b__8_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  int32_t index;
  longlong lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346595 = '\x01';
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
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434657c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Item);
        Il2CppMethodInitialized_18434657c = '\x01';
      }
      if (index < 0) {
        return (Il2CppObject *)0x0;
      }
      pUVar1 = (__c->fields)._dropdown;
      if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
         (lVar2 = (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                            (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x18) <= index) {
          return (Il2CppObject *)0x0;
        }
        pUVar1 = (__c->fields)._dropdown;
        if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
           (__this_00 = (System_Collections_Generic_List_object__o *)
                        (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                                  (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method),
           __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
          pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,index,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                    (pUVar1,pSVar3,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
          return (Il2CppObject *)0x0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddChoice>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076160

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__AddChoice_b__9_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *obj;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *item;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346596 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_1820762f9:
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    item = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434657d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
        Il2CppMethodInitialized_18434657d = '\x01';
      }
      pUVar3 = (__c->fields)._dropdown;
      if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)
                     (*(pUVar3->klass->vtable)._163_get_choices.methodPtr)
                               (pUVar3,(pUVar3->klass->vtable)._163_get_choices.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor_94fb10
                  ((System_Collections_Generic_List_object__o *)__this_00,collection,
                   (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 != (System_String_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              if ((uint)pSVar4->max_length <= uVar2) goto label_1820762f9;
              pSVar4->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                         (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            pUVar3 = (__c->fields)._dropdown;
            if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
              (*(pUVar3->klass->vtable)._164_set_choices.methodPtr)
                        (pUVar3,__this_00,(pUVar3->klass->vtable)._164_set_choices.method);
              return (Il2CppObject *)__c;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveChoice>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820787e0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__RemoveChoice_b__10_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_String_o *item;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346597 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346597 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    item = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434657e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
        Il2CppMethodInitialized_18434657e = '\x01';
      }
      pUVar1 = (__c->fields)._dropdown;
      if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)
                     (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                               (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor_94fb10
                  ((System_Collections_Generic_List_object__o *)__this_00,collection,
                   (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
          pUVar1 = (__c->fields)._dropdown;
          if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
            (*(pUVar1->klass->vtable)._164_set_choices.methodPtr)
                      (pUVar1,__this_00,(pUVar1->klass->vtable)._164_set_choices.method);
            return (Il2CppObject *)__c;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearChoices>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0 (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDropdownBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182076b40

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_____CreateMethodBinding__ClearChoices_b__11_0
          (CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDropdownBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434657f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
      Il2CppMethodInitialized_18434657f = '\x01';
    }
    pUVar1 = (__c->fields)._dropdown;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
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
// 0x18204a5a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicDropdownBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184346582 == '\0') {
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
    Il2CppMethodInitialized_184346582 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7ed1d727) {
    if (uVar3 < 0x19e378c0) {
      if (uVar3 == 0x337847e) {
        bVar2 = System_String__op_Equality(name,"RemoveChoice",(MethodInfo *)0x0);
        if (!bVar2) goto label_18204b0e5;
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434658b == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434658b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__10_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b0b1;
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__RemoveChoice_b__10_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__10_0 =
             (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__10_0;
      }
      else {
        if (uVar3 != 0x19e378bf) goto label_18204b0e5;
        bVar2 = System_String__op_Equality(name,"AddChoice",(MethodInfo *)0x0);
        if (!bVar2) goto label_18204b0e5;
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434658a == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434658a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__9_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b0b1;
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__AddChoice_b__9_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__9_0 =
             (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__9_0;
      }
    }
    else if (uVar3 == 0x31359a62) {
      bVar2 = System_String__op_Equality(name,"SetIndexWithoutNotify",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204b0e5;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346589 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346589 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b0b1;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetIndexWithoutNotify_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__8_0;
    }
    else {
      if (uVar3 == 0x3dac88df) {
        bVar2 = System_String__op_Equality(name,"Choices",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346586 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
            Il2CppMethodInitialized_184346586 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____getter_5_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____setter_5_1
          ;
          goto label_18204aa42;
        }
        goto label_18204b0e5;
      }
      if (uVar3 != 0x7ed1d726) goto label_18204b0e5;
      bVar2 = System_String__op_Equality(name,"ClearChoices",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204b0e5;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434658c == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434658c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__11_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b0b1;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__ClearChoices_b__11_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__11_0 =
           (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__11_0;
    }
  }
  else {
    if (uVar3 < 0xaec7ae4c) {
      if (uVar3 == 0x9eccf29d) {
        bVar2 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346583 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
            Il2CppMethodInitialized_184346583 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
          ;
label_18204aa42:
          System_Action_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)__this_02,(System_Func_T__object__o *)__this,
                     (System_Action_T__object__o *)__this_00,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)__this_02;
        }
      }
      else if (uVar3 == 0xaec7ae4b) {
        bVar2 = System_String__op_Equality(name,"Index",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346585 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
            Il2CppMethodInitialized_184346585 = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____getter_4_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____setter_4_1
          ;
          goto label_18204aa42;
        }
      }
label_18204b0e5:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDropdownBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
      pMVar5 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
    }
    if (uVar3 == 0xd147f96a) {
      bVar2 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346584 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
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
          Il2CppMethodInitialized_184346584 = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
        ;
        goto label_18204aa42;
      }
      goto label_18204b0e5;
    }
    if (uVar3 == 0xd1dd43b5) {
      bVar2 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204b0e5;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346588 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346588 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b0b1;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__7_0;
    }
    else {
      if (uVar3 != 0xf722a79f) goto label_18204b0e5;
      bVar2 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
      if (!bVar2) goto label_18204b0e5;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346587 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346587 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18204b0b1;
      if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__6_0;
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_18204b0b1:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x182062870

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346583 == '\0') {
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
    Il2CppMethodInitialized_184346583 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x182063d60

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346584 == '\0') {
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
    Il2CppMethodInitialized_184346584 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Index
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index (const MethodInfo* method);
// 0x182062500

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Index(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346585 == '\0') {
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
    Il2CppMethodInitialized_184346585 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Choices
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices (const MethodInfo* method);
// 0x182061830

CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreatePropertyBinding__Choices(MethodInfo *method)

{
  System_Func_CustomLogicDropdownBuiltin__object__o *__this;
  System_Action_CustomLogicDropdownBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346586 == '\0') {
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
    Il2CppMethodInitialized_184346586 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicDropdownBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicDropdownBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x18205b640

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346587 == '\0') {
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
    Il2CppMethodInitialized_184346587 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x18205f330

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346588 == '\0') {
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
    Il2CppMethodInitialized_184346588 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetIndexWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify (const MethodInfo* method);
// 0x18205dd60

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__SetIndexWithoutNotify
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346589 == '\0') {
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
    Il2CppMethodInitialized_184346589 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetIndexWithoutNotify_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__AddChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice (const MethodInfo* method);
// 0x182056d90

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__AddChoice(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434658a == '\0') {
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
    Il2CppMethodInitialized_18434658a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__AddChoice_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__RemoveChoice
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice (const MethodInfo* method);
// 0x18205ce60

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__RemoveChoice(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434658b == '\0') {
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
    Il2CppMethodInitialized_18434658b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__RemoveChoice_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__ClearChoices
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o* CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices (const MethodInfo* method);
// 0x182058d40

CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *
CustomLogic_CustomLogicDropdownBuiltin_Bindings____CreateMethodBinding__ClearChoices(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434658c == '\0') {
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
    Il2CppMethodInitialized_18434658c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicDropdownBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__ClearChoices_b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicDropdownBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicDropdownBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182065b40

void CustomLogic_CustomLogicDropdownBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434658d == '\0') {
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
    Il2CppMethodInitialized_18434658d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Index",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Choices",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetIndexWithoutNotify",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddChoice",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveChoice",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearChoices",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x182055140

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346576 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      Il2CppMethodInitialized_184346576 = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,
                          (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182055230

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_18434658e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434658e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346577 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      Il2CppMethodInitialized_184346577 = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      UnityEngine_UIElements_BaseField_Vector2Int___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,
                 (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x1820565b0

Il2CppObject*
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0(CustomLogic_CustomLogicDropdownBuiltin_o* __i, MethodInfo* method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
    pSVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056820

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434658f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434658f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._dropdown, pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0)) {
    (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._149_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x182054e70

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____getter_4_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346578 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_PopupField_string_get_index);
      Il2CppMethodInitialized_184346578 = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      local_res8[0] =
           UnityEngine_UIElements_PopupField_object___get_index
                     ((UnityEngine_UIElements_PopupField_T__o *)__this,
                      (MethodInfo_B5F9D0 *)MethodInfo_UnityEngine_UIElements_PopupField_string_get_index);
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182054ed0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Index_g____setter_4_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this;
  int32_t value;
  
  if (Il2CppMethodInitialized_184346590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346590 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184346579 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_PopupField_string_set_index);
      Il2CppMethodInitialized_184346579 = '\x01';
    }
    __this = (__i->fields)._dropdown;
    if (__this != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      UnityEngine_UIElements_PopupField_object___set_index
                ((UnityEngine_UIElements_PopupField_T__o *)__this,value,
                 (MethodInfo_B5FFF0 *)MethodInfo_UnityEngine_UIElements_PopupField_string_set_index);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, const MethodInfo* method);
// 0x1820540d0

Il2CppObject *
CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____getter_5_0
          (CustomLogic_CustomLogicDropdownBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicDropdownBuiltin__get_Choices(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1 (CustomLogic_CustomLogicDropdownBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820540f0

void CustomLogic_CustomLogicDropdownBuiltin_Bindings_____CreatePropertyBinding__Choices_g____setter_5_1
               (CustomLogic_CustomLogicDropdownBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *value;
  
  if (Il2CppMethodInitialized_184346591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346591 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (__i != (CustomLogic_CustomLogicDropdownBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDropdownBuiltin__set_Choices(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin___ctor (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_DropdownField_o* dropdown, const MethodInfo* method);
// 0x182066b90

void CustomLogic_CustomLogicDropdownBuiltin___ctor
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_DropdownField_o *dropdown,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *control;
  DG_Tweening_Core_DOSetter_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184346574 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
              );
    Il2CppMethodInitialized_184346574 = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)dropdown,(MethodInfo *)0x0);
  (__this->fields)._dropdown = dropdown;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dropdown,dropdown);
  control = (__this->fields)._dropdown;
  __this_00 = (DG_Tweening_Core_DOSetter_T__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0,(MethodInfo_EB6EC0 *)0x0)
  ;
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_Vector3Int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_7118E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
            );
  return;
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182066770

void CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184346575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346575 = '\x01';
  }
  if ((__this->fields)._valueChangedEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields)._valueChangedEvent;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((value != (System_String_o *)0x0) &&
       (pIVar1 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)value,(((parameterValues->obj).klass)->_1).element_class),
       pIVar1 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = (Il2CppObject *)value;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,value);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x182066eb0

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Label
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346576 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
    Il2CppMethodInitialized_184346576 = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField_Vector2Int___get_label
                       ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                        (MethodInfo_100AEC0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Label (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182067160

void CustomLogic_CustomLogicDropdownBuiltin__set_Label
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  
  if (Il2CppMethodInitialized_184346577 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
    Il2CppMethodInitialized_184346577 = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    UnityEngine_UIElements_BaseField_Vector2Int___set_label
              ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
               (MethodInfo_100C7D0 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x182066f00

System_String_o*
CustomLogic_CustomLogicDropdownBuiltin__get_Value(CustomLogic_CustomLogicDropdownBuiltin_o* __this, MethodInfo* method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    uVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
    return (bool)uVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Value (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820671c0

void
CustomLogic_CustomLogicDropdownBuiltin__set_Value(CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, MethodInfo* method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._149_set_value.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Index
// il2cpp: int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x182066e60

int32_t CustomLogic_CustomLogicDropdownBuiltin__get_Index
                  (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184346578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_PopupField_string_get_index)
    ;
    Il2CppMethodInitialized_184346578 = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    iVar1 = UnityEngine_UIElements_PopupField_object___get_index
                      ((UnityEngine_UIElements_PopupField_T__o *)__this_00,
                       (MethodInfo_B5F9D0 *)MethodInfo_UnityEngine_UIElements_PopupField_string_get_index);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Index
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Index (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x182067100

void CustomLogic_CustomLogicDropdownBuiltin__set_Index
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *__this_00;
  
  if (Il2CppMethodInitialized_184346579 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_PopupField_string_set_index)
    ;
    Il2CppMethodInitialized_184346579 = '\x01';
  }
  __this_00 = (__this->fields)._dropdown;
  if (__this_00 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    UnityEngine_UIElements_PopupField_object___set_index
              ((UnityEngine_UIElements_PopupField_T__o *)__this_00,value,
               (MethodInfo_B5FFF0 *)MethodInfo_UnityEngine_UIElements_PopupField_string_set_index);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_Choices
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__get_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x182066c40
// eh: try 0x182066d40..0x182066e26 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182066ddc: mov rdx, qword ptr [rip + 0x2030b35]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182066de3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182066de8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182066ded: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182066df2: test rcx, rcx
// asm:   0x182066df5: jne 0x182066e26
// asm:   0x182066df7: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x182066e26: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__get_Choices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_DropdownField_o *pUVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Collections_Generic_List_T__o *__this_02;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434657a == '\0') {
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
    Il2CppMethodInitialized_18434657a = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  pUVar3 = (__this->fields)._dropdown;
  if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    __this_02 = (System_Collections_Generic_List_T__o *)
                (*(pUVar3->klass->vtable)._163_get_choices.methodPtr)
                          (pUVar3,(pUVar3->klass->vtable)._163_get_choices.method);
    if (__this_02 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          return __this_01;
        }
        if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (__this_01->fields).List;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = local_28.fields._current;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,local_28.fields._current);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,local_28.fields._current,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$set_Choices
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__set_Choices (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_CustomLogicListBuiltin_o* value, const MethodInfo* method);
// 0x182066f30
// eh: try 0x182067030..0x1820670ec -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18206708d: mov rdx, qword ptr [rip + 0x2027df4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x182067094: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182067099: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18206709e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820670a3: test rcx, rcx
// asm:   0x1820670a6: jne 0x1820670ec
// asm:   0x1820670a8: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1820670ad: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x1820670ec: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicDropdownBuiltin__set_Choices
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,CustomLogic_CustomLogicListBuiltin_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_01;
  undefined8 uVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_18434657b == '\0') {
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
    Il2CppMethodInitialized_18434657b = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((value != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this_00 = (value->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (!bVar2) break;
      if (local_18 != (Il2CppObject *)0x0) {
        uVar3 = (*local_18->klass->vtable[3].methodPtr)(local_18,local_18->klass->vtable[3].method);
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_01,uVar3,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    pUVar1 = (__this->fields)._dropdown;
    if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
      (*(pUVar1->klass->vtable)._164_set_choices.methodPtr)
                (pUVar1,__this_01,(pUVar1->klass->vtable)._164_set_choices.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged (CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x18055deb0

CustomLogic_CustomLogicDropdownBuiltin_o*
CustomLogic_CustomLogicDropdownBuiltin__OnValueChanged(CustomLogic_CustomLogicDropdownBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, MethodInfo* method)

{
  (__this->fields)._valueChangedEvent = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent,action);
  return __this;
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182066a20

void
CustomLogic_CustomLogicDropdownBuiltin__SetValueWithoutNotify(CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* value, MethodInfo* method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$SetIndexWithoutNotify
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify (CustomLogic_CustomLogicDropdownBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x182066960

void CustomLogic_CustomLogicDropdownBuiltin__SetIndexWithoutNotify
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  longlong lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434657c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_18434657c = '\x01';
  }
  if (index < 0) {
    return;
  }
  pUVar1 = (__this->fields)._dropdown;
  if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
     (lVar2 = (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) <= index) {
      return;
    }
    pUVar1 = (__this->fields)._dropdown;
    if ((pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_List_object__o *)
                    (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                              (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method),
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
      pSVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (__this_00,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$AddChoice
// il2cpp: CustomLogic_CustomLogicDropdownBuiltin_o* CustomLogic_CustomLogicDropdownBuiltin__AddChoice (CustomLogic_CustomLogicDropdownBuiltin_o* __this, System_String_o* choice, const MethodInfo* method);
// 0x1820665a0

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
  
  if (Il2CppMethodInitialized_18434657d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_18434657d = '\x01';
  }
  pUVar3 = (__this->fields)._dropdown;
  if (pUVar3 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar3->klass->vtable)._163_get_choices.methodPtr)
                           (pUVar3,(pUVar3->klass->vtable)._163_get_choices.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = choice;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,choice);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)choice,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
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
// 0x182066880

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__RemoveChoice
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,System_String_o *choice,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_18434657e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_18434657e = '\x01';
  }
  pUVar1 = (__this->fields)._dropdown;
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (*(pUVar1->klass->vtable)._163_get_choices.methodPtr)
                           (pUVar1,(pUVar1->klass->vtable)._163_get_choices.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)choice,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
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
// 0x1820666d0

CustomLogic_CustomLogicDropdownBuiltin_o *
CustomLogic_CustomLogicDropdownBuiltin__ClearChoices
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_DropdownField_o *pUVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_18434657f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_18434657f = '\x01';
  }
  pUVar1 = (__this->fields)._dropdown;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (pUVar1 != (UnityEngine_UIElements_DropdownField_o *)0x0) {
    (*(pUVar1->klass->vtable)._164_set_choices.methodPtr)
              (pUVar1,__this_00,(pUVar1->klass->vtable)._164_set_choices.method);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDropdownBuiltin__get_ClassName (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x182066e30

System_String_o *
CustomLogic_CustomLogicDropdownBuiltin__get_ClassName
          (CustomLogic_CustomLogicDropdownBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346580 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    Il2CppMethodInitialized_184346580 = '\x01';
  }
  return "Dropdown";
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicDropdownBuiltin__get_IsAbstract(CustomLogic_CustomLogicDropdownBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicDropdownBuiltin__get_IsStatic(CustomLogic_CustomLogicDropdownBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicDropdownBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDropdownBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicDropdownBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicDropdownBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicDropdownBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicDropdownBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x182066a50

void CustomLogic_CustomLogicDropdownBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicDropdownBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  System_String_o *obj;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184346581 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_string_get_newValue);
    Il2CppMethodInitialized_184346581 = '\x01';
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) {
    obj = (evt->fields)._newValue_k__BackingField;
    if (Il2CppMethodInitialized_184346575 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      Il2CppMethodInitialized_184346575 = '\x01';
    }
    if ((__this->fields)._valueChangedEvent == (CustomLogic_UserMethod_o *)0x0) {
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    userMethod = (__this->fields)._valueChangedEvent;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameterValues != (System_Object_array *)0x0) {
      if ((obj != (System_String_o *)0x0) &&
         (pIVar1 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)obj,(((parameterValues->obj).klass)->_1).element_class),
         pIVar1 == (Il2CppObject *)0x0)) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
      if ((int)parameterValues->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameterValues->m_Items[0] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items,obj);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}



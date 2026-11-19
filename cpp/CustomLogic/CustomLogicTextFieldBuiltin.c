// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTextFieldBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTextFieldBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b072f0

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextFieldBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b086b0

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fe9 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b08720

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterValueChangedEventCallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b08730

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *changeEvent;
  CustomLogic_CustomLogicTextFieldBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fea = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    changeEvent = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (obj,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback
                         (__c,changeEvent,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0 (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTextFieldBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b087c0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__9_0
          (CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTextFieldBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546feb = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._textField, pUVar1 != (UnityEngine_UIElements_TextField_o *)0x0)) {
      (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b07380

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterValueChangedEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"SelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiline");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IsDelayed");
    Il2CppMethodInitialized_07546fd9 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0xd147f96b) {
    if (uVar2 < 0x6d3fc92a) {
      if (uVar2 == 0x14e6c5e8) {
        bVar1 = System_String__op_Equality(name,"SelectionColor",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6d3fc929) {
        bVar1 = System_String__op_Equality(name,"IsDelayed",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9eccf29d) {
      bVar1 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd147f96a) {
      bVar1 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd989409f) {
    if (uVar2 == 0xd1dd43b5) {
      bVar1 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd989409e) {
      bVar1 = System_String__op_Equality(name,"CursorColor",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe890d540) {
    bVar1 = System_String__op_Equality(name,"Multiline",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf35844be) {
    bVar1 = System_String__op_Equality(name,"RegisterValueChangedEventCallback",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextFieldBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__IsDelayed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed (const MethodInfo* method);
// 0x5b07770

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__IsDelayed(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_07546fda = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Multiline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline (const MethodInfo* method);
// 0x5b07850

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Multiline(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_07546fdb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x5b07930

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_07546fdc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x5b07a10

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_07546fdd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__SelectionColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor (const MethodInfo* method);
// 0x5b07af0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__SelectionColor(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_07546fde = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__CursorColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor (const MethodInfo* method);
// 0x5b07bd0

CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreatePropertyBinding__CursorColor(MethodInfo *method)

{
  System_Func_CustomLogicTextFieldBuiltin__object__o *__this;
  System_Action_CustomLogicTextFieldBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
    Il2CppMethodInitialized_07546fdf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTextFieldBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback (const MethodInfo* method);
// 0x5b07cb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b07ce5: jmp 0x5b07d55

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__RegisterValueChangedEventCallback
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTextFieldBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fe0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicTextFieldBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o* CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x5b07df0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b07e25: jmp 0x5b07e95

CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTextFieldBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fe1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicTextFieldBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTextFieldBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTextFieldBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b07f30

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterValueChangedEventCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"SelectionColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiline");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorColor");
    il2cpp_codegen_initialize_runtime_metadata(&"IsDelayed");
    Il2CppMethodInitialized_07546fe2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsDelayed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Multiline",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Label",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SelectionColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CursorColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterValueChangedEventCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x5b080f0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____getter_2_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_9;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fcf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
      Il2CppMethodInitialized_07546fcf = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      local_9 = UnityEngine_UIElements_TextInputBaseField_object___get_isDelayed
                          (__this,(MethodInfo_4229FA0 *)
                                  MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
      pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b08160

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__IsDelayed_g____setter_2_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07546fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fe3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fd0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
      Il2CppMethodInitialized_07546fd0 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed
                (__this,value,
                 (MethodInfo_422A070 *)
                 MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x5b08210

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____getter_3_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) ||
     (__this = (__i->fields)._textField, __this == (UnityEngine_UIElements_TextField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = UnityEngine_UIElements_TextField__get_multiline(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b08250

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Multiline_g____setter_3_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07546fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fe4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) ||
     (__this = (__i->fields)._textField, __this == (UnityEngine_UIElements_TextField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextField__set_multiline(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x5b082d0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_4_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fd1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      Il2CppMethodInitialized_07546fd1 = '\x01';
    }
    __this = (__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextField_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_object___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,
                          (MethodInfo_4668E40 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b08320

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_4_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fe5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fd2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      Il2CppMethodInitialized_07546fd2 = '\x01';
    }
    __this = (__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextField_o *)0x0) {
      UnityEngine_UIElements_BaseField_object___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this,value,
                 (MethodInfo_4668E70 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x5b083d0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_5_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._textField, pUVar1 == (UnityEngine_UIElements_TextField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
  return (Il2CppObject *)pSVar2;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b08400

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_5_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546fe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fe6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._textField, pUVar1 == (UnityEngine_UIElements_TextField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
            (pUVar1,pSVar2,(pUVar1->klass->vtable)._149_set_value.method);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x5b08490

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____getter_6_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fd3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
      Il2CppMethodInitialized_07546fd3 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      color = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor
                        (__this,(MethodInfo_422A550 *)
                                MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor
                        );
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa210(__this_00,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b08520

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__SelectionColor_g____setter_6_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fe7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, const MethodInfo* method);
// 0x5b085a0

Il2CppObject *
CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____getter_7_0
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  UnityEngine_Color_o color;
  
  if (__i != (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fd5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
      Il2CppMethodInitialized_07546fd5 = '\x01';
    }
    __this = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__i->fields)._textField;
    if (__this != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
      color = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor
                        (__this,(MethodInfo_422A620 *)
                                MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_58aa210(__this_00,color,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1 (CustomLogic_CustomLogicTextFieldBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b08630

void CustomLogic_CustomLogicTextFieldBuiltin_Bindings_____CreatePropertyBinding__CursorColor_g____setter_7_1
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fe8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  if (__i == (CustomLogic_CustomLogicTextFieldBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x5b07250

void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$<RegisterValueChangedEventCallback>b__0
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0 (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o* __this, UnityEngine_UIElements_ChangeEvent_string__o* evt, const MethodInfo* method);
// 0x5b08860

void CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0___RegisterValueChangedEventCallback_b__0
               (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this,
               UnityEngine_UIElements_ChangeEvent_string__o *evt,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_String_o *pSVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07546fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_string_get_newValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_string_get_previousValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546fec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).changeEvent;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if ((evt == (UnityEngine_UIElements_ChangeEvent_string__o *)0x0) ||
     (parameterValues == (System_Object_array *)0x0)) {
label_05b0898e:
    ThrowNullReferenceException();
  }
  pSVar1 = (evt->fields)._newValue_k__BackingField;
  if (pSVar1 != (System_String_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pSVar1,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05b08998;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)pSVar1;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    pSVar1 = (evt->fields)._previousValue_k__BackingField;
    if (pSVar1 != (System_String_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)pSVar1,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_05b08998:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = (Il2CppObject *)pSVar1;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                  (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return;
      }
      goto label_05b0898e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin___ctor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, UnityEngine_UIElements_TextField_o* textField, const MethodInfo* method);
// 0x5b06c60

void CustomLogic_CustomLogicTextFieldBuiltin___ctor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,
               UnityEngine_UIElements_TextField_o *textField,MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)textField,(MethodInfo *)0x0);
  (__this->fields)._textField = textField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._textField);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsDelayed
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b06c90

bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsDelayed
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07546fcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
    Il2CppMethodInitialized_07546fcf = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_UIElements_TextInputBaseField_object___get_isDelayed
                    (__this_00,
                     (MethodInfo_4229FA0 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_isDelayed);
  return bVar1;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_IsDelayed
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b06cd0

void CustomLogic_CustomLogicTextFieldBuiltin__set_IsDelayed
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
    Il2CppMethodInitialized_07546fd0 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextInputBaseField_object___set_isDelayed
            (__this_00,value,
             (MethodInfo_422A070 *)MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_set_isDelayed);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Multiline
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b06d20

bool CustomLogic_CustomLogicTextFieldBuiltin__get_Multiline
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_UIElements_TextField__get_multiline(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Multiline
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b06d40

void CustomLogic_CustomLogicTextFieldBuiltin__set_Multiline
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  
  __this_00 = (__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextField__set_multiline(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b06d60

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Label
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
    Il2CppMethodInitialized_07546fd1 = '\x01';
  }
  __this_00 = (__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_BaseField_object___get_label
                     ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                      (MethodInfo_4668E40 *)MethodInfo_UnityEngine_UIElements_BaseField_string_get_label);
  return pSVar1;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Label (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b06da0

void CustomLogic_CustomLogicTextFieldBuiltin__set_Label
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *__this_00;
  
  if (Il2CppMethodInitialized_07546fd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
    Il2CppMethodInitialized_07546fd2 = '\x01';
  }
  __this_00 = (__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_BaseField_object___set_label
            ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
             (MethodInfo_4668E70 *)MethodInfo_UnityEngine_UIElements_BaseField_string_set_label);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_Value
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b06df0

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_Value
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
  return pSVar2;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_Value (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b06e20

void CustomLogic_CustomLogicTextFieldBuiltin__set_Value
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._149_set_value.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._149_set_value.method);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_SelectionColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b06e50

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_SelectionColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07546fd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
    Il2CppMethodInitialized_07546fd3 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    ThrowNullReferenceException();
  }
  color = UnityEngine_UIElements_TextInputBaseField_object___get_selectionColor
                    (__this_00,
                     (MethodInfo_422A550 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_selectionColor);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa210(__this_01,color,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_SelectionColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x5b06ee0

void CustomLogic_CustomLogicTextFieldBuiltin__set_SelectionColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_07546fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ITextSelection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    Il2CppMethodInitialized_07546fd4 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    obj = (Il2CppObject *)
          UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                    (__this_00,
                     (MethodInfo_4228A30 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      value_00 = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_ITextSelection_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_ITextSelection) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 5);
              goto label_05b06fc7;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection,5);
label_05b06fc7:
        (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_CursorColor
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b06fe0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_CursorColor
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this_01;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07546fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
    Il2CppMethodInitialized_07546fd5 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 == (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    ThrowNullReferenceException();
  }
  color = UnityEngine_UIElements_TextInputBaseField_object___get_cursorColor
                    (__this_00,
                     (MethodInfo_422A620 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_cursorColor);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
  CustomLogic_CustomLogicColorBuiltin___ctor_58aa210(__this_01,color,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$set_CursorColor
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* value, const MethodInfo* method);
// 0x5b07070

void CustomLogic_CustomLogicTextFieldBuiltin__set_CursorColor
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *value
               ,MethodInfo *method)

{
  UnityEngine_UIElements_TextInputBaseField_TValueType__o *__this_00;
  Utility_Color255_o *__this_01;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_07546fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_ITextSelection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    Il2CppMethodInitialized_07546fd6 = '\x01';
  }
  __this_00 = (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)(__this->fields)._textField;
  if (__this_00 != (UnityEngine_UIElements_TextInputBaseField_TValueType__o *)0x0) {
    obj = (Il2CppObject *)
          UnityEngine_UIElements_TextInputBaseField_object___get_textSelection
                    (__this_00,
                     (MethodInfo_4228A30 *)
                     MethodInfo_UnityEngine_UIElements_TextInputBaseField_string_get_textSelection);
    if ((value != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
       (__this_01 = (value->fields).Value, __this_01 != (Utility_Color255_o *)0x0)) {
      value_00 = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      if (obj != (Il2CppObject *)0x0) {
        pIVar1 = obj->klass;
        uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
        if (uVar4 != 0) {
          pIVar2 = (pIVar1->_1).interfaceOffsets;
          lVar5 = 0;
          do {
            if (*(UnityEngine_UIElements_ITextSelection_c **)((long)&pIVar2->interfaceType + lVar5) ==
                TypeInfo_UnityEngine_UIElements_ITextSelection) {
              pVVar3 = pIVar1->vtable + (*(int *)((long)&pIVar2->offset + lVar5) + 3);
              goto label_05b07157;
            }
            lVar5 = lVar5 + 0x10;
          } while (uVar4 * 0x10 != lVar5);
        }
        pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_UnityEngine_UIElements_ITextSelection,3);
label_05b07157:
        (*pVVar3->methodPtr)(obj,value_00,pVVar3->method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTextFieldBuiltin$$RegisterValueChangedEventCallback
// il2cpp: CustomLogic_CustomLogicTextFieldBuiltin_o* CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, CustomLogic_UserMethod_o* changeEvent, const MethodInfo* method);
// 0x5b07170

CustomLogic_CustomLogicTextFieldBuiltin_o *
CustomLogic_CustomLogicTextFieldBuiltin__RegisterValueChangedEventCallback
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,CustomLogic_UserMethod_o *changeEvent,
          MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *control;
  CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *__this_00;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0);
    Il2CppMethodInitialized_07546fd7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicTextFieldBuiltin___c__DisplayClass20_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).changeEvent = changeEvent;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).changeEvent);
  control = (__this->fields)._textField;
  __this_01 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_string);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b
             ,(MethodInfo_4E7A6A0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_object_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_01,
             (MethodInfo_3568850 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_string
            );
  return __this;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b07260

void CustomLogic_CustomLogicTextFieldBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_TextField_o *pUVar1;
  
  pUVar1 = (__this->fields)._textField;
  if (pUVar1 == (UnityEngine_UIElements_TextField_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
  return;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b07290

System_String_o *
CustomLogic_CustomLogicTextFieldBuiltin__get_ClassName
          (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TextField");
    Il2CppMethodInitialized_07546fd8 = '\x01';
  }
  return "TextField";
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b072c0

bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b072d0

bool CustomLogic_CustomLogicTextFieldBuiltin__get_IsStatic
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicTextFieldBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTextFieldBuiltin_o* __this, const MethodInfo* method);
// 0x5b072e0

bool CustomLogic_CustomLogicTextFieldBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicTextFieldBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



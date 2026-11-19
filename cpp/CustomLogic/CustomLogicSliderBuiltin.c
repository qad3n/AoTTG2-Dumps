// Type: CustomLogic.CustomLogicSliderBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicSliderBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b053e0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSliderBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b06b10

void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546fcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fcd = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b06b80

void CustomLogic_CustomLogicSliderBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b06b90

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__10_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546fce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fce = '\x01';
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
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0 (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b06c30

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__11_0
          (CustomLogic_CustomLogicSliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b05470

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSliderBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicSliderBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"IsIntSlider");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"PageSize");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInputField");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Direction");
    Il2CppMethodInitialized_07546fba = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x86253654) {
    if (uVar2 < 0x3a2089b8) {
      if (uVar2 == 0xf54ee6e) {
        bVar1 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3a2089b7) {
        bVar1 = System_String__op_Equality(name,"PageSize",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x86253653) {
      bVar1 = System_String__op_Equality(name,"IsIntSlider",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x4c979c42) {
      bVar1 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x61fefc0a) {
      bVar1 = System_String__op_Equality(name,"Direction",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xacc881fd) {
    if (uVar2 == 0x9eccf29d) {
      bVar1 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xacc881fc) {
      bVar1 = System_String__op_Equality(name,"ShowInputField",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xd147f96a) {
    bVar1 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xd1dd43b5) {
    bVar1 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf722a79f) {
    bVar1 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSliderBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x5b05930

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fbb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x5b05a10

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fbc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x5b05af0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fbd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x5b05bd0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__HighValue(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fbe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__PageSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize (const MethodInfo* method);
// 0x5b05cb0

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__PageSize(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fbf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Direction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction (const MethodInfo* method);
// 0x5b05d90

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__Direction(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fc0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__ShowInputField
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField (const MethodInfo* method);
// 0x5b05e70

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__ShowInputField(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  System_Action_CustomLogicSliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicSliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicSliderBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__IsIntSlider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider (const MethodInfo* method);
// 0x5b05f50

CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreatePropertyBinding__IsIntSlider(MethodInfo *method)

{
  System_Func_CustomLogicSliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
    Il2CppMethodInitialized_07546fc2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x5b05ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b06025: jmp 0x5b06095

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fc3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicSliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o* CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x5b06130
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b06165: jmp 0x5b061d5

CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *
CustomLogic_CustomLogicSliderBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSliderBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSliderBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546fc4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicSliderBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b06270

void CustomLogic_CustomLogicSliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"IsIntSlider");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"PageSize");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowInputField");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Direction");
    Il2CppMethodInitialized_07546fc5 = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowValue",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HighValue",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PageSize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Direction",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShowInputField",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsIntSlider",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b06470

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  UnityEngine_UIElements_Slider_o *__this_00;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546faf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_get_label)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
      Il2CppMethodInitialized_07546faf = '\x01';
    }
    if ((__i->fields)._isIntSlider == false) {
      __this_00 = (__i->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
        pSVar1 = UnityEngine_UIElements_BaseField_float___get_label
                           ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,
                            (MethodInfo_4672610 *)MethodInfo_UnityEngine_UIElements_BaseField_float_get_label)
        ;
        return (Il2CppObject *)pSVar1;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        pSVar1 = UnityEngine_UIElements_BaseField_int___get_label
                           ((UnityEngine_UIElements_BaseField_int__o *)__this,
                            (MethodInfo_46629C0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
        return (Il2CppObject *)pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b064e0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this;
  UnityEngine_UIElements_Slider_o *__this_00;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546fc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fc6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fb0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_set_label)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
      Il2CppMethodInitialized_07546fb0 = '\x01';
    }
    if ((__i->fields)._isIntSlider == false) {
      __this_00 = (__i->fields)._floatSlider;
      if (__this_00 != (UnityEngine_UIElements_Slider_o *)0x0) {
        UnityEngine_UIElements_BaseField_float___set_label
                  ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_00,value,
                   (MethodInfo_4672640 *)MethodInfo_UnityEngine_UIElements_BaseField_float_set_label);
        return;
      }
    }
    else {
      __this = (__i->fields)._intSlider;
      if (__this != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        UnityEngine_UIElements_BaseField_int___set_label
                  ((UnityEngine_UIElements_BaseField_int__o *)__this,value,
                   (MethodInfo_46629F0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b065c0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
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
    if ((__i->fields)._isIntSlider == false) {
      pUVar2 = (__i->fields)._floatSlider;
      if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
        uVar3 = (*(pUVar2->klass->vtable)._148_get_value.methodPtr)
                          (pUVar2,(pUVar2->klass->vtable)._148_get_value.method);
        uStack_8 = CONCAT44(uStack_8._4_4_,uVar3);
        pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_8);
        return pIVar4;
      }
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
      if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
        uVar3 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                          (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
        uStack_8 = CONCAT44(uVar3,(undefined4)uStack_8);
        pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
        return pIVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b06640

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fc7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSliderBuiltin__set_Value(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b066c0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicSliderBuiltin__get_LowValue(__i,method);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b066d0

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fc8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSliderBuiltin__set_LowValue(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b06750

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicSliderBuiltin__get_HighValue(__i,method);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b06760

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Il2CppObject *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fc9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_object);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSliderBuiltin__set_HighValue(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b067e0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____getter_6_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      (*(pUVar1->klass->vtable)._165_get_pageSize.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._165_get_pageSize.method);
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b06830

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__PageSize_g____setter_6_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07546fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      (*(pUVar1->klass->vtable)._166_set_pageSize.methodPtr)
                (pUVar1,fVar2,(pUVar1->klass->vtable)._166_set_pageSize.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b068d0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____getter_7_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this;
  UnityEngine_UIElements_BaseSlider_float__o *__this_00;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
label_05b06960:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07546fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
    Il2CppMethodInitialized_07546fb5 = '\x01';
  }
  if ((__i->fields)._isIntSlider == false) {
    __this_00 = (UnityEngine_UIElements_BaseSlider_float__o *)(__i->fields)._floatSlider;
    if (__this_00 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto label_05b06960;
    local_c = UnityEngine_UIElements_BaseSlider_float___get_direction
                        (__this_00,
                         (MethodInfo_48164E0 *)
                         MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
  }
  else {
    __this = (UnityEngine_UIElements_BaseSlider_int__o *)(__i->fields)._intSlider;
    if (__this == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto label_05b06960;
    local_c = UnityEngine_UIElements_BaseSlider_int___get_direction
                        (__this,(MethodInfo_480F750 *)
                                MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b06970

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__Direction_g____setter_7_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546fcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fcb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSliderBuiltin__set_Direction(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b069f0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____getter_8_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      uStack_8 = in_RAX;
      uVar2 = (*(pUVar1->klass->vtable)._167_get_showInputField.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._167_get_showInputField.method);
      uStack_8 = CONCAT17(uVar2,(undefined7)uStack_8);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1 (CustomLogic_CustomLogicSliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b06a40

void CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__ShowInputField_g____setter_8_1
               (CustomLogic_CustomLogicSliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  UnityEngine_UIElements_SliderInt_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fcc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    if ((__i->fields)._isIntSlider == false) {
      pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__i->fields)._floatSlider;
    }
    else {
      pUVar1 = (__i->fields)._intSlider;
    }
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      pUVar2 = pUVar1->klass;
      vtableDispatch = (pUVar2->vtable)._168_set_showInputField.methodPtr;
      (*vtableDispatch)
                (pUVar1,(ulong)bVar3,(pUVar2->vtable)._168_set_showInputField.method,pUVar2,
                 vtableDispatch);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__IsIntSlider>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0 (CustomLogic_CustomLogicSliderBuiltin_o* __i, const MethodInfo* method);
// 0x5b06ae0

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin_Bindings_____CreatePropertyBinding__IsIntSlider_g____getter_9_0
          (CustomLogic_CustomLogicSliderBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i == (CustomLogic_CustomLogicSliderBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_Slider_o* slider, const MethodInfo* method);
// 0x5b04580

void CustomLogic_CustomLogicSliderBuiltin___ctor
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_Slider_o *slider,
               MethodInfo *method)

{
  UnityEngine_UIElements_Slider_o *control;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    Il2CppMethodInitialized_07546fab = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)slider,(MethodInfo *)0x0);
  (__this->fields)._floatSlider = slider;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._floatSlider);
  (__this->fields)._isIntSlider = false;
  control = (__this->fields)._floatSlider;
  __this_00 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0,(MethodInfo_4E7A6A0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_35688E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
            );
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin___ctor (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_SliderInt_o* sliderInt, const MethodInfo* method);
// 0x5b04630

void CustomLogic_CustomLogicSliderBuiltin___ctor_5a04630
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_SliderInt_o *sliderInt,
               MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *control;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int
              );
    Il2CppMethodInitialized_07546fac = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)sliderInt,(MethodInfo *)0x0);
  (__this->fields)._intSlider = sliderInt;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._intSlider);
  (__this->fields)._isIntSlider = true;
  control = (__this->fields)._intSlider;
  __this_00 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_int);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0,(MethodInfo_4E7A6A0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_int_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_35687C0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_int)
  ;
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b046e0

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 local_24 [4];
  
  if (Il2CppMethodInitialized_07546fad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546fad = '\x01';
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
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,local_24);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b04800

void CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_5a04800
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_UserMethod_o *userMethod;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07546fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546fae = '\x01';
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
  iStack_2c = value;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b04920

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_Label
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_get_label);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
    Il2CppMethodInitialized_07546faf = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_float___get_label
                         ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,
                          (MethodInfo_4672610 *)MethodInfo_UnityEngine_UIElements_BaseField_float_get_label);
      return pSVar1;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_int___get_label
                         ((UnityEngine_UIElements_BaseField_int__o *)__this_00,
                          (MethodInfo_46629C0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_get_label);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Label (CustomLogic_CustomLogicSliderBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b04990

void CustomLogic_CustomLogicSliderBuiltin__set_Label
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *__this_00;
  UnityEngine_UIElements_Slider_o *__this_01;
  
  if (Il2CppMethodInitialized_07546fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_set_label);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
    Il2CppMethodInitialized_07546fb0 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_Slider_o *)0x0) {
      UnityEngine_UIElements_BaseField_float___set_label
                ((UnityEngine_UIElements_BaseField_TValueType__o *)__this_01,value,
                 (MethodInfo_4672640 *)MethodInfo_UnityEngine_UIElements_BaseField_float_set_label);
      return;
    }
  }
  else {
    __this_00 = (__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      UnityEngine_UIElements_BaseField_int___set_label
                ((UnityEngine_UIElements_BaseField_int__o *)__this_00,value,
                 (MethodInfo_46629F0 *)MethodInfo_UnityEngine_UIElements_BaseField_int_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Value
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b04a20

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
  if ((__this->fields)._isIntSlider == false) {
    pUVar2 = (__this->fields)._floatSlider;
    if (pUVar2 != (UnityEngine_UIElements_Slider_o *)0x0) {
      uVar3 = (*(pUVar2->klass->vtable)._148_get_value.methodPtr)
                        (pUVar2,(pUVar2->klass->vtable)._148_get_value.method);
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar3);
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_8);
      return pIVar4;
    }
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
    if (pUVar1 != (UnityEngine_UIElements_SliderInt_o *)0x0) {
      uVar3 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
      uStack_8 = CONCAT44(uVar3,(undefined4)uStack_8);
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
      return pIVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Value (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5b04aa0

void CustomLogic_CustomLogicSliderBuiltin__set_Value
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  float *pfVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  UnityEngine_UIElements_SliderInt_o *pUVar5;
  UnityEngine_UIElements_Slider_o *pUVar6;
  float fVar7;
  
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_07556740) {
        pfVar1 = il2cpp_vm_Object_Unbox(value);
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = *pfVar1;
          goto label_05b04b50;
        }
      }
      else {
        if (value->klass != g_data_07556710) {
          return;
        }
        piVar3 = il2cpp_vm_Object_Unbox(value);
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = (float)*piVar3;
label_05b04b50:
          (*(pUVar6->klass->vtable)._149_set_value.methodPtr)
                    (fVar7,pUVar6,(pUVar6->klass->vtable)._149_set_value.method);
          return;
        }
      }
      goto label_05b04b64;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == g_data_07556710) {
      puVar2 = il2cpp_vm_Object_Unbox(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) goto label_05b04b64;
      uVar4 = *puVar2;
    }
    else {
      if (value->klass != g_data_07556740) {
        return;
      }
      pfVar1 = il2cpp_vm_Object_Unbox(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
label_05b04b64:
        ThrowNullReferenceException();
      }
      uVar4 = (uint)*pfVar1;
    }
    vtableDispatch = (pUVar5->klass->vtable)._149_set_value.methodPtr;
    (*vtableDispatch)
              (pUVar5,(ulong)uVar4,(pUVar5->klass->vtable)._149_set_value.method,vtableDispatch);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_LowValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b04b70

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_LowValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  Il2CppObject *pIVar1;
  float local_10;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07546fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_lowValue);
    Il2CppMethodInitialized_07546fb1 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      local_10 = UnityEngine_UIElements_BaseSlider_float___get_lowValue
                           (__this_01,
                            (MethodInfo_4815820 *)
                            MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_lowValue);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&local_10);
      return pIVar1;
    }
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      local_c = UnityEngine_UIElements_BaseSlider_int___get_lowValue
                          (__this_00,
                           (MethodInfo_480EB60 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue
                          );
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_LowValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5b04c20

void CustomLogic_CustomLogicSliderBuiltin__set_LowValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int *piVar3;
  int32_t value_00;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  float value_01;
  
  if (Il2CppMethodInitialized_07546fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_lowValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_lowValue);
    Il2CppMethodInitialized_07546fb2 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_07556740) {
        pfVar1 = il2cpp_vm_Object_Unbox(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = *pfVar1;
          goto label_05b04d07;
        }
      }
      else {
        if (value->klass != g_data_07556710) {
          return;
        }
        piVar3 = il2cpp_vm_Object_Unbox(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = (float)*piVar3;
label_05b04d07:
          UnityEngine_UIElements_BaseSlider_float___set_lowValue
                    (__this_01,value_01,
                     (MethodInfo_4815830 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_lowValue);
          return;
        }
      }
      goto label_05b04d1d;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == g_data_07556710) {
      piVar2 = il2cpp_vm_Object_Unbox(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto label_05b04d1d;
      value_00 = *piVar2;
    }
    else {
      if (value->klass != g_data_07556740) {
        return;
      }
      pfVar1 = il2cpp_vm_Object_Unbox(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
label_05b04d1d:
        ThrowNullReferenceException();
      }
      value_00 = (int32_t)*pfVar1;
    }
    UnityEngine_UIElements_BaseSlider_int___set_lowValue
              (__this_00,value_00,
               (MethodInfo_480EB70 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_lowValue);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_HighValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSliderBuiltin__get_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b04d30

Il2CppObject *
CustomLogic_CustomLogicSliderBuiltin__get_HighValue
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  Il2CppObject *pIVar1;
  float local_10;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07546fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_highValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_highValue);
    Il2CppMethodInitialized_07546fb3 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      local_10 = UnityEngine_UIElements_BaseSlider_float___get_highValue
                           (__this_01,
                            (MethodInfo_4815960 *)
                            MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_highValue);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&local_10);
      return pIVar1;
    }
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      local_c = UnityEngine_UIElements_BaseSlider_int___get_highValue
                          (__this_00,
                           (MethodInfo_480ECA0 *)
                           MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_highValue);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_HighValue (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5b04de0

void CustomLogic_CustomLogicSliderBuiltin__set_HighValue
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  int *piVar3;
  int32_t value_00;
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  float value_01;
  
  if (Il2CppMethodInitialized_07546fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_highValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_highValue);
    Il2CppMethodInitialized_07546fb4 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_07556740) {
        pfVar1 = il2cpp_vm_Object_Unbox(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = *pfVar1;
          goto label_05b04ec7;
        }
      }
      else {
        if (value->klass != g_data_07556710) {
          return;
        }
        piVar3 = il2cpp_vm_Object_Unbox(value);
        __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
        if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
          value_01 = (float)*piVar3;
label_05b04ec7:
          UnityEngine_UIElements_BaseSlider_float___set_highValue
                    (__this_01,value_01,
                     (MethodInfo_4815970 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_highValue);
          return;
        }
      }
      goto label_05b04edd;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == g_data_07556710) {
      piVar2 = il2cpp_vm_Object_Unbox(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) goto label_05b04edd;
      value_00 = *piVar2;
    }
    else {
      if (value->klass != g_data_07556740) {
        return;
      }
      pfVar1 = il2cpp_vm_Object_Unbox(value);
      __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
      if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
label_05b04edd:
        ThrowNullReferenceException();
      }
      value_00 = (int32_t)*pfVar1;
    }
    UnityEngine_UIElements_BaseSlider_int___set_highValue
              (__this_00,value_00,
               (MethodInfo_480ECB0 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_highValue);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_PageSize
// il2cpp: float CustomLogic_CustomLogicSliderBuiltin__get_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b04ef0

float CustomLogic_CustomLogicSliderBuiltin__get_PageSize
                (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  float fVar2;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = (*(pUVar1->klass->vtable)._165_get_pageSize.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._165_get_pageSize.method);
  return fVar2;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_PageSize
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_PageSize (CustomLogic_CustomLogicSliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b04f30

void CustomLogic_CustomLogicSliderBuiltin__set_PageSize
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._166_set_pageSize.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._166_set_pageSize.method);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_Direction
// il2cpp: int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b04f70

int32_t CustomLogic_CustomLogicSliderBuiltin__get_Direction
                  (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07546fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
    Il2CppMethodInitialized_07546fb5 = '\x01';
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 != (UnityEngine_UIElements_BaseSlider_float__o *)0x0) {
      iVar1 = UnityEngine_UIElements_BaseSlider_float___get_direction
                        (__this_01,
                         (MethodInfo_48164E0 *)
                         MethodInfo_UnityEngine_UIElements_BaseSlider_float_get_direction);
      return iVar1;
    }
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 != (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
      iVar1 = UnityEngine_UIElements_BaseSlider_int___get_direction
                        (__this_00,
                         (MethodInfo_480F750 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_direction)
      ;
      return iVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSliderBuiltin$$set_Direction
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_Direction (CustomLogic_CustomLogicSliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b04fe0

void CustomLogic_CustomLogicSliderBuiltin__set_Direction
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseSlider_int__o *__this_00;
  UnityEngine_UIElements_BaseSlider_float__o *__this_01;
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_02;
  MethodInfo *lastManagedFrame;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07546fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_direction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_direction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_SliderDirection);
    Il2CppMethodInitialized_07546fb6 = '\x01';
  }
  handle = TypeRef_UnityEngine_UIElements_SliderDirection;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    iStack_30 = value;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid slider direction: {0}");
    pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_02,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_set_Direction);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  if ((__this->fields)._isIntSlider == false) {
    __this_01 = (UnityEngine_UIElements_BaseSlider_float__o *)(__this->fields)._floatSlider;
    if (__this_01 == (UnityEngine_UIElements_BaseSlider_float__o *)0x0) goto label_05b0515a;
    UnityEngine_UIElements_BaseSlider_float___set_direction
              (__this_01,value,
               (MethodInfo_48164F0 *)MethodInfo_UnityEngine_UIElements_BaseSlider_float_set_direction);
  }
  else {
    __this_00 = (UnityEngine_UIElements_BaseSlider_int__o *)(__this->fields)._intSlider;
    if (__this_00 == (UnityEngine_UIElements_BaseSlider_int__o *)0x0) {
label_05b0515a:
      ThrowNullReferenceException();
    }
    UnityEngine_UIElements_BaseSlider_int___set_direction
              (__this_00,value,
               (MethodInfo_480F760 *)MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_direction);
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ShowInputField
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b05160

bool CustomLogic_CustomLogicSliderBuiltin__get_ShowInputField
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined1 uVar2;
  undefined8 in_RDX;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._167_get_showInputField.methodPtr;
  uVar2 = (*vtableDispatch)
                    (pUVar1,(pUVar1->klass->vtable)._167_get_showInputField.method,in_RDX,
                     vtableDispatch);
  return (bool)uVar2;
}


// CustomLogic.CustomLogicSliderBuiltin$$set_ShowInputField
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField (CustomLogic_CustomLogicSliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b051a0

void CustomLogic_CustomLogicSliderBuiltin__set_ShowInputField
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_SliderInt_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  if ((__this->fields)._isIntSlider == false) {
    pUVar1 = (UnityEngine_UIElements_SliderInt_o *)(__this->fields)._floatSlider;
  }
  else {
    pUVar1 = (__this->fields)._intSlider;
  }
  if (pUVar1 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._168_set_showInputField.methodPtr;
  (*vtableDispatch)
            (pUVar1,(ulong)value,(pUVar1->klass->vtable)._168_set_showInputField.method,vtableDispatch)
  ;
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsIntSlider
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b051e0

bool CustomLogic_CustomLogicSliderBuiltin__get_IsIntSlider
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._isIntSlider;
}


// CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicSliderBuiltin_o* CustomLogic_CustomLogicSliderBuiltin__OnValueChanged (CustomLogic_CustomLogicSliderBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b051f0

CustomLogic_CustomLogicSliderBuiltin_o *
CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_5a051f0
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicSliderBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicSliderBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5b05210

void CustomLogic_CustomLogicSliderBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  float *pfVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  UnityEngine_UIElements_SliderInt_o *pUVar5;
  UnityEngine_UIElements_Slider_o *pUVar6;
  float fVar7;
  
  if ((__this->fields)._isIntSlider == false) {
    if (value != (Il2CppObject *)0x0) {
      if (value->klass == g_data_07556740) {
        pfVar1 = il2cpp_vm_Object_Unbox(value);
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = *pfVar1;
          goto label_05b052c0;
        }
      }
      else {
        if (value->klass != g_data_07556710) {
          return;
        }
        piVar3 = il2cpp_vm_Object_Unbox(value);
        pUVar6 = (__this->fields)._floatSlider;
        if (pUVar6 != (UnityEngine_UIElements_Slider_o *)0x0) {
          fVar7 = (float)*piVar3;
label_05b052c0:
          (*(pUVar6->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                    (fVar7,pUVar6,(pUVar6->klass->vtable)._159_SetValueWithoutNotify.method);
          return;
        }
      }
      goto label_05b052d4;
    }
  }
  else if (value != (Il2CppObject *)0x0) {
    if (value->klass == g_data_07556710) {
      puVar2 = il2cpp_vm_Object_Unbox(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) goto label_05b052d4;
      uVar4 = *puVar2;
    }
    else {
      if (value->klass != g_data_07556740) {
        return;
      }
      pfVar1 = il2cpp_vm_Object_Unbox(value);
      pUVar5 = (__this->fields)._intSlider;
      if (pUVar5 == (UnityEngine_UIElements_SliderInt_o *)0x0) {
label_05b052d4:
        ThrowNullReferenceException();
      }
      uVar4 = (uint)*pfVar1;
    }
    vtableDispatch = (pUVar5->klass->vtable)._159_SetValueWithoutNotify.methodPtr;
    (*vtableDispatch)
              (pUVar5,(ulong)uVar4,(pUVar5->klass->vtable)._159_SetValueWithoutNotify.method,
               vtableDispatch);
    return;
  }
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSliderBuiltin__get_ClassName (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b052e0

System_String_o *
CustomLogic_CustomLogicSliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    Il2CppMethodInitialized_07546fb7 = '\x01';
  }
  return "Slider";
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b05310

bool CustomLogic_CustomLogicSliderBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_IsStatic (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b05320

bool CustomLogic_CustomLogicSliderBuiltin__get_IsStatic
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicSliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSliderBuiltin_o* __this, const MethodInfo* method);
// 0x5b05330

bool CustomLogic_CustomLogicSliderBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__4_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x5b05340

void CustomLogic_CustomLogicSliderBuiltin____ctor_b__4_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  UnityEngine_UIElements_ChangeEvent_float__o *method_00;
  
  method_00 = evt;
  if (Il2CppMethodInitialized_07546fb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_float_get_newValue);
    Il2CppMethodInitialized_07546fb8 = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSliderBuiltin__OnValueChanged
            (__this,(evt->fields)._newValue_k__BackingField,(MethodInfo *)method_00);
  return;
}


// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__5_0
// il2cpp: void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0 (CustomLogic_CustomLogicSliderBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_int__o* evt, const MethodInfo* method);
// 0x5b05390

void CustomLogic_CustomLogicSliderBuiltin____ctor_b__5_0
               (CustomLogic_CustomLogicSliderBuiltin_o *__this,UnityEngine_UIElements_ChangeEvent_int__o *evt,
               MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_int_get_newValue);
    Il2CppMethodInitialized_07546fb9 = '\x01';
    method = extraout_RDX;
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSliderBuiltin__OnValueChanged_5a04800
            (__this,(evt->fields)._newValue_k__BackingField,method);
  return;
}



// Type: CustomLogic.CustomLogicProgressBarBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicProgressBarBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProgressBarBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b01280

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProgressBarBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b02440

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546f8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546f8f = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b024b0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b024c0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__6_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546f90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f90 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b02560

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__7_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  float newValue;
  
  if (Il2CppMethodInitialized_07546f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f91 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    newValue = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (obj,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (__this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__c->fields)._progressBar,
       __this_00 != (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
      UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,newValue,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPercentage>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b02600

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__GetPercentage_b__8_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  UnityEngine_UIElements_ProgressBar_o *pUVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float local_c;
  
  if ((__c == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (pUVar3 = (__c->fields)._progressBar, pUVar3 == (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
label_05b0268e:
    ThrowNullReferenceException();
  }
  fVar5 = (pUVar3->fields).m_HighValue;
  local_c = 0.0;
  pfVar1 = &(pUVar3->fields).m_LowValue;
  if ((fVar5 != *pfVar1) || (NAN(fVar5) || NAN(*pfVar1))) {
    fVar5 = (*(pUVar3->klass->vtable)._146_get_value.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._146_get_value.method);
    pUVar3 = (__c->fields)._progressBar;
    if (pUVar3 == (UnityEngine_UIElements_ProgressBar_o *)0x0) goto label_05b0268e;
    fVar2 = (pUVar3->fields).m_LowValue;
    local_c = ((fVar5 - fVar2) / ((pUVar3->fields).m_HighValue - fVar2)) * 100.0;
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPercentage>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0 (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicProgressBarBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b026a0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_____CreateMethodBinding__SetPercentage_b__9_0
          (CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicProgressBarBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *obj;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07546f92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f92 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) &&
       (pUVar2 = (__c->fields)._progressBar, pUVar2 != (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
      fVar4 = 100.0;
      if (fVar3 <= 100.0) {
        fVar4 = fVar3;
      }
      fVar1 = (pUVar2->fields).m_LowValue;
      (*(pUVar2->klass->vtable)._147_set_value.methodPtr)
                (pUVar2,(((pUVar2->fields).m_HighValue - fVar1) * (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4)
                        ) / 100.0 + fVar1,(pUVar2->klass->vtable)._147_set_value.method);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b01310

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546f81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    Il2CppMethodInitialized_07546f81 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x8991c1ec) {
    if (uVar2 < 0x24d471aa) {
      if (uVar2 == 0xf54ee6e) {
        bVar1 = System_String__op_Equality(name,"LowValue",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x24d471a9) {
        bVar1 = System_String__op_Equality(name,"Title",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8991c1eb) {
      bVar1 = System_String__op_Equality(name,"SetPercentage",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x4c979c42) {
      bVar1 = System_String__op_Equality(name,"HighValue",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd1dd43b6) {
    if (uVar2 == 0xd147f96a) {
      bVar1 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd1dd43b5) {
      bVar1 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xda3ade4f) {
    bVar1 = System_String__op_Equality(name,"GetPercentage",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf722a79f) {
    bVar1 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProgressBarBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Title
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title (const MethodInfo* method);
// 0x5b01700

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Title(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_07546f82 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x5b017e0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_07546f83 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__LowValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue (const MethodInfo* method);
// 0x5b018c0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__LowValue(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_07546f84 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__HighValue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue (const MethodInfo* method);
// 0x5b019a0

CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreatePropertyBinding__HighValue(MethodInfo *method)

{
  System_Func_CustomLogicProgressBarBuiltin__object__o *__this;
  System_Action_CustomLogicProgressBarBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object);
    Il2CppMethodInitialized_07546f85 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicProgressBarBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProgressBarBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x5b01a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b01ab5: jmp 0x5b01b25

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicProgressBarBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546f86 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x5b01bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b01bf5: jmp 0x5b01c65

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicProgressBarBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546f87 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__GetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage (const MethodInfo* method);
// 0x5b01d00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b01d35: jmp 0x5b01da5

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__GetPercentage(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicProgressBarBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546f88 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetPercentage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o* CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage (const MethodInfo* method);
// 0x5b01e40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b01e75: jmp 0x5b01ee5

CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings____CreateMethodBinding__SetPercentage(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicProgressBarBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546f89 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicProgressBarBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicProgressBarBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicProgressBarBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b01f80

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"HighValue");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPercentage");
    il2cpp_codegen_initialize_runtime_metadata(&"LowValue");
    Il2CppMethodInitialized_07546f8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Title",
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPercentage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPercentage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x5b02140

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____getter_2_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  System_String_o *pSVar1;
  
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b02160

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Title_g____setter_2_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f8b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__set_title(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x5b021e0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_3_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._progressBar, pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._146_get_value.methodPtr)(pUVar1,(pUVar1->klass->vtable)._146_get_value.method);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b02230

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_3_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07546f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f8c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._progressBar, pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._147_set_value.methodPtr)
            (pUVar1,fVar2,(pUVar1->klass->vtable)._147_set_value.method);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x5b022c0

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____getter_4_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     ((__i->fields)._progressBar == (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b02300

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__LowValue_g____setter_4_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07546f8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f8d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, const MethodInfo* method);
// 0x5b02380

Il2CppObject *
CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____getter_5_0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     ((__i->fields)._progressBar == (UnityEngine_UIElements_ProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1 (CustomLogic_CustomLogicProgressBarBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b023c0

void CustomLogic_CustomLogicProgressBarBuiltin_Bindings_____CreatePropertyBinding__HighValue_g____setter_5_1
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_07546f8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f8e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicProgressBarBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_AbstractProgressBar_o *)(__i->fields)._progressBar,
     __this == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin___ctor (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ProgressBar_o* progressBar, const MethodInfo* method);
// 0x5b00dc0

void CustomLogic_CustomLogicProgressBarBuiltin___ctor
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ProgressBar_o *progressBar,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *control;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
              );
    Il2CppMethodInitialized_07546f7d = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)progressBar,(MethodInfo *)0x0);
  (__this->fields)._progressBar = progressBar;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._progressBar);
  control = (__this->fields)._progressBar;
  __this_00 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_float);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0,
             (MethodInfo_4E7A6A0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_float_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_35688E0 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_float
            );
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b00e70

void CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 local_24 [4];
  
  if (Il2CppMethodInitialized_07546f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546f7e = '\x01';
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


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Title
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b00f90

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_Title
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_AbstractProgressBar__get_title(__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Title
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Title (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b00fb0

void CustomLogic_CustomLogicProgressBarBuiltin__set_Title
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__set_title(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_Value
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b00fd0

float CustomLogic_CustomLogicProgressBarBuiltin__get_Value
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  float fVar2;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = (*(pUVar1->klass->vtable)._146_get_value.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._146_get_value.method);
  return fVar2;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_Value (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b01000

void CustomLogic_CustomLogicProgressBarBuiltin__set_Value
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._147_set_value.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._147_set_value.method);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_LowValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b01030

float CustomLogic_CustomLogicProgressBarBuiltin__get_LowValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).m_LowValue;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_LowValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b01050

void CustomLogic_CustomLogicProgressBarBuiltin__set_LowValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__set_lowValue(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_HighValue
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b01070

float CustomLogic_CustomLogicProgressBarBuiltin__get_HighValue
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_ProgressBar_o *pUVar1;
  
  pUVar1 = (__this->fields)._progressBar;
  if (pUVar1 == (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).m_HighValue;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$set_HighValue
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b01090

void CustomLogic_CustomLogicProgressBarBuiltin__set_HighValue
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__set_highValue(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b010b0

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged_5a010b0
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b010d0

void CustomLogic_CustomLogicProgressBarBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_UIElements_AbstractProgressBar_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_AbstractProgressBar_o *)(__this->fields)._progressBar;
  if (__this_00 == (UnityEngine_UIElements_AbstractProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_AbstractProgressBar__SetValueWithoutNotify(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$GetPercentage
// il2cpp: float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b010f0

float CustomLogic_CustomLogicProgressBarBuiltin__GetPercentage
                (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  UnityEngine_UIElements_ProgressBar_o *pUVar3;
  float fVar4;
  
  pUVar3 = (__this->fields)._progressBar;
  if (pUVar3 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    fVar4 = (pUVar3->fields).m_HighValue;
    pfVar1 = &(pUVar3->fields).m_LowValue;
    if ((fVar4 == *pfVar1) && (!NAN(fVar4) && !NAN(*pfVar1))) {
      return 0.0;
    }
    fVar4 = (*(pUVar3->klass->vtable)._146_get_value.methodPtr)
                      (pUVar3,(pUVar3->klass->vtable)._146_get_value.method);
    pUVar3 = (__this->fields)._progressBar;
    if (pUVar3 != (UnityEngine_UIElements_ProgressBar_o *)0x0) {
      fVar2 = (pUVar3->fields).m_LowValue;
      return ((fVar4 - fVar2) / ((pUVar3->fields).m_HighValue - fVar2)) * 100.0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicProgressBarBuiltin$$SetPercentage
// il2cpp: CustomLogic_CustomLogicProgressBarBuiltin_o* CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, float percentage, const MethodInfo* method);
// 0x5b01160

CustomLogic_CustomLogicProgressBarBuiltin_o *
CustomLogic_CustomLogicProgressBarBuiltin__SetPercentage
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,float percentage,MethodInfo *method)

{
  float fVar1;
  UnityEngine_UIElements_ProgressBar_o *pUVar2;
  float fVar3;
  
  pUVar2 = (__this->fields)._progressBar;
  if (pUVar2 == (UnityEngine_UIElements_ProgressBar_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar3 = 100.0;
  if (percentage <= 100.0) {
    fVar3 = percentage;
  }
  fVar1 = (pUVar2->fields).m_LowValue;
  (*(pUVar2->klass->vtable)._147_set_value.methodPtr)
            (pUVar2,(((pUVar2->fields).m_HighValue - fVar1) *
                    (float)(-(uint)(0.0 <= percentage) & (uint)fVar3)) / 100.0 + fVar1,
             (pUVar2->klass->vtable)._147_set_value.method);
  return __this;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b011d0

System_String_o *
CustomLogic_CustomLogicProgressBarBuiltin__get_ClassName
          (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar");
    Il2CppMethodInitialized_07546f7f = '\x01';
  }
  return "ProgressBar";
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b01200

bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b01210

bool CustomLogic_CustomLogicProgressBarBuiltin__get_IsStatic
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, const MethodInfo* method);
// 0x5b01220

bool CustomLogic_CustomLogicProgressBarBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicProgressBarBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicProgressBarBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_float__o* evt, const MethodInfo* method);
// 0x5b01230

void CustomLogic_CustomLogicProgressBarBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicProgressBarBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_float__o *evt,MethodInfo *method)

{
  UnityEngine_UIElements_ChangeEvent_float__o *method_00;
  
  method_00 = evt;
  if (Il2CppMethodInitialized_07546f80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_float_get_newValue);
    Il2CppMethodInitialized_07546f80 = '\x01';
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_float__o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicProgressBarBuiltin__OnValueChanged
            (__this,(evt->fields)._newValue_k__BackingField,(MethodInfo *)method_00);
  return;
}



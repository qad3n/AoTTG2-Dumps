// Type: CustomLogic.CustomLogicToggleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicToggleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicToggleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b08db0

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicToggleBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b09950

void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ffd = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b099c0

void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b099d0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ffe = '\x01';
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
    if (__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._valueChangedEvent);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b09a70

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_Toggle_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546fff = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    if ((__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
      (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
                (pUVar1,bVar2,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b08e40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *pCVar2;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicToggleBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_07546ff3 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    pCVar3 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  bVar1 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings)
      ;
    }
    pCVar3 = CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicToggleBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x5b09070

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  System_Action_CustomLogicToggleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    Il2CppMethodInitialized_07546ff4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x5b09150

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  System_Action_CustomLogicToggleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    Il2CppMethodInitialized_07546ff5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x5b09230

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_CustomLogicToggleBuiltin__object__o *__this;
  System_Action_CustomLogicToggleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicToggleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
    Il2CppMethodInitialized_07546ff6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicToggleBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x5b09310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b09345: jmp 0x5b093b5

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicToggleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicToggleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ff7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicToggleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x5b09450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b09485: jmp 0x5b094f5

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicToggleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicToggleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ff8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicToggleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicToggleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b09590

void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OnValueChanged");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"SetValueWithoutNotify");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_07546ff9 = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Text",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Value",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnValueChanged",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetValueWithoutNotify",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicToggleBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x5b096e0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546fef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
      Il2CppMethodInitialized_07546fef = '\x01';
    }
    __this = (__i->fields)._toggle;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField_bool___get_label
                         ((UnityEngine_UIElements_BaseField_bool__o *)__this,
                          (MethodInfo_44DD050 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b09730

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ffa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07546ff0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
      Il2CppMethodInitialized_07546ff0 = '\x01';
    }
    __this = (__i->fields)._toggle;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      UnityEngine_UIElements_BaseField_bool___set_label
                ((UnityEngine_UIElements_BaseField_bool__o *)__this,value,
                 (MethodInfo_44DD080 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x5b097e0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this;
  System_String_o *pSVar1;
  
  if ((__i == (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_BaseBoolField_o *)(__i->fields)._toggle,
     __this == (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text(__this,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b09800

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ffb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_BaseBoolField_o *)(__i->fields)._toggle,
     __this == (UnityEngine_UIElements_BaseBoolField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_BaseBoolField__set_text(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x5b09880

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._toggle, pUVar1 == (UnityEngine_UIElements_Toggle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  uVar2 = (*(pUVar1->klass->vtable)._148_get_value.methodPtr)
                    (pUVar1,(pUVar1->klass->vtable)._148_get_value.method);
  uStack_8 = CONCAT17(uVar2,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b098c0

void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  UnityEngine_UIElements_Toggle_c *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ffc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._toggle, pUVar1 == (UnityEngine_UIElements_Toggle_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pUVar2 = pUVar1->klass;
  vtableDispatch = (pUVar2->vtable)._149_set_value.methodPtr;
  (*vtableDispatch)
            (pUVar1,(ulong)bVar3,(pUVar2->vtable)._149_set_value.method,pUVar2,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin___ctor (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_Toggle_o* toggle, const MethodInfo* method);
// 0x5b089b0

void CustomLogic_CustomLogicToggleBuiltin___ctor
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,UnityEngine_UIElements_Toggle_o *toggle,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *control;
  UnityEngine_UIElements_EventCallback_TEventType__o *__this_00;
  
  if (Il2CppMethodInitialized_07546fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
              );
    Il2CppMethodInitialized_07546fed = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)toggle,(MethodInfo *)0x0);
  (__this->fields)._toggle = toggle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggle);
  control = (__this->fields)._toggle;
  __this_00 = (UnityEngine_UIElements_EventCallback_TEventType__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UnityEngine_UIElements_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicToggleBuiltin_ctor_b__2_0,(MethodInfo_4E7A6A0 *)0x0);
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback_bool_
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,
             (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)__this_00,
             (MethodInfo_3568730 *)
             MethodInfo_UnityEngine_UIElements_INotifyValueChangedExtensions_RegisterValueChangedCallback_bool
            );
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b08a60

void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 local_29;
  
  if (Il2CppMethodInitialized_07546fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07546fee = '\x01';
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
  local_29 = value;
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_29);
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


// CustomLogic.CustomLogicToggleBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08b80

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Label
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07546fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
    Il2CppMethodInitialized_07546fef = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 == (UnityEngine_UIElements_Toggle_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_BaseField_bool___get_label
                     ((UnityEngine_UIElements_BaseField_bool__o *)__this_00,
                      (MethodInfo_44DD050 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_get_label);
  return pSVar1;
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b08bc0

void CustomLogic_CustomLogicToggleBuiltin__set_Label
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  
  if (Il2CppMethodInitialized_07546ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
    Il2CppMethodInitialized_07546ff0 = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 == (UnityEngine_UIElements_Toggle_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_BaseField_bool___set_label
            ((UnityEngine_UIElements_BaseField_bool__o *)__this_00,value,
             (MethodInfo_44DD080 *)MethodInfo_UnityEngine_UIElements_BaseField_bool_set_label);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08c10

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Text
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (UnityEngine_UIElements_BaseBoolField_o *)(__this->fields)._toggle;
  if (__this_00 == (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text(__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b08c30

void CustomLogic_CustomLogicToggleBuiltin__set_Text
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_BaseBoolField_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_BaseBoolField_o *)(__this->fields)._toggle;
  if (__this_00 == (UnityEngine_UIElements_BaseBoolField_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_BaseBoolField__set_text(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Value
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08c50

bool CustomLogic_CustomLogicToggleBuiltin__get_Value
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined1 uVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 == (UnityEngine_UIElements_Toggle_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._148_get_value.methodPtr;
  uVar2 = (*vtableDispatch)
                    (pUVar1,(pUVar1->klass->vtable)._148_get_value.method,in_RDX,vtableDispatch);
  return (bool)uVar2;
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b08c80

void CustomLogic_CustomLogicToggleBuiltin__set_Value
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 == (UnityEngine_UIElements_Toggle_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (pUVar1->klass->vtable)._149_set_value.methodPtr;
  (*vtableDispatch)
            (pUVar1,(ulong)value,(pUVar1->klass->vtable)._149_set_value.method,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x5b08cb0

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin__OnValueChanged_5a08cb0
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,CustomLogic_UserMethod_o *valueChangedEvent,
          MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b08cd0

void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 == (UnityEngine_UIElements_Toggle_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._159_SetValueWithoutNotify.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._159_SetValueWithoutNotify.method);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_ClassName (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08d00

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_ClassName
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    Il2CppMethodInitialized_07546ff1 = '\x01';
  }
  return "Toggle";
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08d30

bool CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsStatic (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08d40

bool CustomLogic_CustomLogicToggleBuiltin__get_IsStatic
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x5b08d50

bool CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicToggleBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_bool__o* evt, const MethodInfo* method);
// 0x5b08d60

void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,UnityEngine_UIElements_ChangeEvent_bool__o *evt
               ,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_UIElements_ChangeEvent_bool_get_newValue);
    Il2CppMethodInitialized_07546ff2 = '\x01';
    method = extraout_RDX;
  }
  if (evt == (UnityEngine_UIElements_ChangeEvent_bool__o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicToggleBuiltin__OnValueChanged(__this,(evt->fields)._newValue_k__BackingField,method);
  return;
}



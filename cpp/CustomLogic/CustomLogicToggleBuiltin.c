// Type: CustomLogic.CustomLogicToggleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicToggleBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicToggleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ee9bd0

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicToggleBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicToggleBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3eea790

void CustomLogic_CustomLogicToggleBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703b1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b1e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3eea800

void CustomLogic_CustomLogicToggleBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__OnValueChanged_b__5_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eea810

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_<>c__<__CreateMethodBinding__OnValueChanged>b__5_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (DAT_05703b1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b1f = '\x01';
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
    if (__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
      (__c->fields)._valueChangedEvent = pCVar1;
      il2cpp_runtime_glue(&(__c->fields)._valueChangedEvent,pCVar1);
      return (Il2CppObject *)__c;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings___c_____CreateMethodBinding__SetValueWithoutNotify_b__6_0 (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicToggleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eea8b0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings_<>c__<__CreateMethodBinding__SetValueWithoutNotify>b__6_0
          (CustomLogic_CustomLogicToggleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicToggleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_UIElements_Toggle_o *pUVar1;
  uint uVar2;
  
  if (DAT_05703b20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b20 = '\x01';
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
    uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    if ((__c != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
       (pUVar1 = (__c->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
      (*(pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr)
                (pUVar1,(ulong)(uVar2 & 0xff),
                 (pUVar1->klass->vtable)._114_SetValueWithoutNotify.method);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ee9c60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicToggleBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar6;
  System_Action_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05703b14 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Value");
    DAT_05703b14 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Label",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703b15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicToggleBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object);
      DAT_05703b15 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicToggleBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703b16 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicToggleBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Text_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Text_g____setter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object);
      DAT_05703b16 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicToggleBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"Value",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703b17 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicToggleBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object);
      DAT_05703b17 = '\x01';
    }
    pSVar6 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar7 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicToggleBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar6,pSVar7,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  bVar3 = System_String__op_Equality(name,"OnValueChanged",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703b18 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703b18 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 8,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  bVar3 = System_String__op_Equality(name,"SetValueWithoutNotify",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicToggleBuiltin not found");
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
  if (DAT_05703b19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b19 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
    il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
  }
  pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar10;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Label
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label (const MethodInfo* method);
// 0x3ee9e90

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Label(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (DAT_05703b15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicToggleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Label_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Label_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object);
    DAT_05703b15 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicToggleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x3ee9f70

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (DAT_05703b16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicToggleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Text_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Text_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object);
    DAT_05703b16 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicToggleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreatePropertyBinding__Value
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value (const MethodInfo* method);
// 0x3eea050

CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreatePropertyBinding__Value(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (DAT_05703b17 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicToggleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Value_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Value_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object);
    DAT_05703b17 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicToggleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicToggleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged (const MethodInfo* method);
// 0x3eea130

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__OnValueChanged
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (DAT_05703b18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__OnValueChanged_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b18 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o* CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify (const MethodInfo* method);
// 0x3eea280

CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *
CustomLogic_CustomLogicToggleBuiltin_Bindings____CreateMethodBinding__SetValueWithoutNotify
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *__this;
  
  if (DAT_05703b19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetValueWithoutNo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703b19 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicToggleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicToggleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicToggleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicToggleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3eea3d0

void CustomLogic_CustomLogicToggleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703b1a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"OnValueChanged");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"SetValueWithoutNotify");
    il2cpp_init_method_metadata(&"Value");
    DAT_05703b1a = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Label",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Text",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Value",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"OnValueChanged",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetValueWithoutNotify",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____getter_2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x3eea520

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings__<__CreatePropertyBinding__Label>g____getter_2_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (DAT_05703b10 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_String_get_label);
      DAT_05703b10 = '\x01';
    }
    __this = (__i->fields)._toggle;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      pSVar1 = UnityEngine_UIElements_BaseField<bool>__get_label
                         ((UnityEngine_UIElements_BaseField_bool__o *)__this,MethodInfo_String_get_label);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Label_g____setter_2_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eea570

void CustomLogic_CustomLogicToggleBuiltin_Bindings__<__CreatePropertyBinding__Label>g____setter_2_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *value;
  
  if (DAT_05703b1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b1b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) {
    if (DAT_05703b11 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
      DAT_05703b11 = '\x01';
    }
    __this = (__i->fields)._toggle;
    if (__this != (UnityEngine_UIElements_Toggle_o *)0x0) {
      UnityEngine_UIElements_BaseField<bool>__set_label
                ((UnityEngine_UIElements_BaseField_bool__o *)__this,value,MethodInfo_Void_set_label);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_3_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x3eea620

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings__<__CreatePropertyBinding__Text>g____getter_3_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (__this = (__i->fields)._toggle, __this != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text
                       ((UnityEngine_UIElements_BaseBoolField_o *)__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_3_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eea640

void CustomLogic_CustomLogicToggleBuiltin_Bindings__<__CreatePropertyBinding__Text>g____setter_3_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this;
  System_String_o *value;
  
  if (DAT_05703b1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b1c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (__this = (__i->fields)._toggle, __this != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    UnityEngine_UIElements_BaseBoolField__set_text
              ((UnityEngine_UIElements_BaseBoolField_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____getter_4_0 (CustomLogic_CustomLogicToggleBuiltin_o* __i, const MethodInfo* method);
// 0x3eea6c0

Il2CppObject *
CustomLogic_CustomLogicToggleBuiltin_Bindings__<__CreatePropertyBinding__Value>g____getter_4_0
          (CustomLogic_CustomLogicToggleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    uStack_8 = in_RAX;
    uVar2 = (*(pUVar1->klass->vtable)._105_get_value.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._105_get_value.method);
    uStack_8 = CONCAT17(uVar2,(undefined7)uStack_8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin_Bindings_____CreatePropertyBinding__Value_g____setter_4_1 (CustomLogic_CustomLogicToggleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3eea700

void CustomLogic_CustomLogicToggleBuiltin_Bindings__<__CreatePropertyBinding__Value>g____setter_4_1
               (CustomLogic_CustomLogicToggleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  UnityEngine_UIElements_Toggle_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  uint uVar3;
  
  if (DAT_05703b1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703b1d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicToggleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._toggle, pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0)) {
    pUVar2 = pUVar1->klass;
    vtable_dispatch = (pUVar2->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(ulong)(uVar3 & 0xff),(pUVar2->vtable)._106_set_value.method,pUVar2,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin___ctor (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_Toggle_o* toggle, const MethodInfo* method);
// 0x3ee97d0

void CustomLogic_CustomLogicToggleBuiltin___ctor
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,
               UnityEngine_UIElements_Toggle_o *toggle,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *control;
  UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *callback;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703b0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void___ctor_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_EventCallback_ChangeEvent_bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_RegisterValueChangedCallback_Boolean);
    DAT_05703b0e = '\x01';
    method = extraout_RDX;
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)toggle,method);
  (__this->fields)._toggle = toggle;
  il2cpp_runtime_glue(&(__this->fields)._toggle,toggle);
  control = (__this->fields)._toggle;
  callback = (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o *)
             il2cpp_runtime_glue(TypeInfo_EventCallback_ChangeEvent_bool);
  UnityEngine_UIElements_EventCallback<object>___ctor();
  UnityEngine_UIElements_INotifyValueChangedExtensions__RegisterValueChangedCallback<bool>
            ((UnityEngine_UIElements_INotifyValueChanged_T__o *)control,callback,MethodInfo_Boolean_RegisterValueChangedCallback_Boolean);
  return;
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee9880

void CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  CustomLogic_UserMethod_o *userMethod;
  undefined1 local_29;
  
  if (DAT_05703b0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703b0f = '\x01';
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
  local_29 = (undefined1)value;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_29);
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


// CustomLogic.CustomLogicToggleBuiltin$$get_Label
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee99a0

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Label
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  System_String_o *pSVar1;
  
  if (DAT_05703b10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_label);
    DAT_05703b10 = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseField<bool>__get_label
                       ((UnityEngine_UIElements_BaseField_bool__o *)__this_00,MethodInfo_String_get_label);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Label
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Label (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee99e0

void CustomLogic_CustomLogicToggleBuiltin__set_Label
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  
  if (DAT_05703b11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_label);
    DAT_05703b11 = '\x01';
  }
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    UnityEngine_UIElements_BaseField<bool>__set_label
              ((UnityEngine_UIElements_BaseField_bool__o *)__this_00,value,MethodInfo_Void_set_label);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee9a30

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_Text
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    pSVar1 = UnityEngine_UIElements_BaseBoolField__get_text
                       ((UnityEngine_UIElements_BaseBoolField_o *)__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Text (CustomLogic_CustomLogicToggleBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ee9a50

void CustomLogic_CustomLogicToggleBuiltin__set_Text
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *__this_00;
  
  __this_00 = (__this->fields)._toggle;
  if (__this_00 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    UnityEngine_UIElements_BaseBoolField__set_text
              ((UnityEngine_UIElements_BaseBoolField_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin$$get_Value
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee9a70

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_Value
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._105_get_value.methodPtr;
    bVar2 = (*vtable_dispatch)
                      (pUVar1,(pUVar1->klass->vtable)._105_get_value.method,in_RDX,
                       vtable_dispatch);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicToggleBuiltin$$set_Value
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__set_Value (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee9aa0

void CustomLogic_CustomLogicToggleBuiltin__set_Value
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined4 in_register_00000034;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._106_set_value.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(ulong)(byte)value,(pUVar1->klass->vtable)._106_set_value.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(0,CONCAT44(in_register_00000034,value));
}


// CustomLogic.CustomLogicToggleBuiltin$$OnValueChanged
// il2cpp: CustomLogic_CustomLogicToggleBuiltin_o* CustomLogic_CustomLogicToggleBuiltin__OnValueChanged (CustomLogic_CustomLogicToggleBuiltin_o* __this, CustomLogic_UserMethod_o* valueChangedEvent, const MethodInfo* method);
// 0x3ee9ad0

CustomLogic_CustomLogicToggleBuiltin_o *
CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,
          CustomLogic_UserMethod_o *valueChangedEvent,MethodInfo *method)

{
  (__this->fields)._valueChangedEvent = valueChangedEvent;
  il2cpp_runtime_glue(&(__this->fields)._valueChangedEvent);
  return __this;
}


// CustomLogic.CustomLogicToggleBuiltin$$SetValueWithoutNotify
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify (CustomLogic_CustomLogicToggleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ee9af0

void CustomLogic_CustomLogicToggleBuiltin__SetValueWithoutNotify
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  UnityEngine_UIElements_Toggle_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined4 in_register_00000034;
  
  pUVar1 = (__this->fields)._toggle;
  if (pUVar1 != (UnityEngine_UIElements_Toggle_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._114_SetValueWithoutNotify.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(ulong)(byte)value,(pUVar1->klass->vtable)._114_SetValueWithoutNotify.method,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(0,CONCAT44(in_register_00000034,value));
}


// CustomLogic.CustomLogicToggleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicToggleBuiltin__get_ClassName (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee9b20

System_String_o *
CustomLogic_CustomLogicToggleBuiltin__get_ClassName
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703b12 == '\0') {
    il2cpp_init_method_metadata(&"Toggle");
    DAT_05703b12 = '\x01';
  }
  return "Toggle";
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee9b50

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicToggleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_IsStatic (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee9b60

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_IsStatic
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicToggleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicToggleBuiltin_o* __this, const MethodInfo* method);
// 0x3ee9b70

bool_conflict
CustomLogic_CustomLogicToggleBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicToggleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicToggleBuiltin$$<.ctor>b__2_0
// il2cpp: void CustomLogic_CustomLogicToggleBuiltin____ctor_b__2_0 (CustomLogic_CustomLogicToggleBuiltin_o* __this, UnityEngine_UIElements_ChangeEvent_bool__o* evt, const MethodInfo* method);
// 0x3ee9b80

void CustomLogic_CustomLogicToggleBuiltin__<_ctor>b__2_0
               (CustomLogic_CustomLogicToggleBuiltin_o *__this,
               UnityEngine_UIElements_ChangeEvent_bool__o *evt,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (DAT_05703b13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_newValue);
    DAT_05703b13 = '\x01';
    method = extraout_RDX;
  }
  if (evt != (UnityEngine_UIElements_ChangeEvent_bool__o *)0x0) {
    CustomLogic_CustomLogicToggleBuiltin__OnValueChanged
              (__this,(uint)*(byte *)((long)&(evt->fields)._previousValue_k__BackingField + 1),
               method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



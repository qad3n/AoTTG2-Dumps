// Type: CustomLogic.CustomLogicLocaleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLocaleBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicLocaleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLocaleBuiltin_o* CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ec8360

CustomLogic_CustomLogicLocaleBuiltin_o *
CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicLocaleBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_0570396d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_0570396d = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicLocaleBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLocaleBuiltin);
      CustomLogic_CustomLogicLocaleBuiltin___ctor(__this,method);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicLocaleBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicLocaleBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ec95b0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570397b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570397b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ec9620

void CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec9630

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c__<__CreateMethodBinding__Get>b__4_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  long lVar1;
  Il2CppObject *obj;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_Exception_o *__this_00;
  System_String_o *pSVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  
  if (DAT_0570397c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_0570397c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
  method_00 = extraout_RDX_01;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_02;
  }
  if (DAT_05703964 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703964 = '\x01';
    method_00 = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    pSVar2 = *(System_String_o **)(lVar1 + 0x18);
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    pSVar2 = CustomLogic_CustomLogicLocaleBuiltin__ResolveString(pSVar4,pSVar2,method_00);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Localized string not found: ");
      pSVar4 = System_String__Concat(pSVar2,pSVar4,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
      System_Exception___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
      uVar3 = il2cpp_init_method_metadata(&MethodInfo_String_Get);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_00,uVar3);
    }
    return (Il2CppObject *)pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec96e0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c__<__CreateMethodBinding__Set>b__5_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *language;
  System_String_o *key;
  System_String_o *value;
  
  if (DAT_0570397d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_0570397d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      language = (System_String_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        key = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          value = (System_String_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_CustomLogicLocaleBuiltin__Set(language,key,value,method);
          return (Il2CppObject *)0x0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguage>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec97d0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterLanguage>b__6_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *language;
  CustomLogic_CustomLogicDictBuiltin_o *strings;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_0570397e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDict);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_0570397e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    language = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      strings = (CustomLogic_CustomLogicDictBuiltin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicDictBuiltin_ConvertTo_CustomLogicDict);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage(language,strings,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguages>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec98b0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterLanguages>b__7_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pattern;
  MethodInfo *method_00;
  
  if (DAT_0570397f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_0570397f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      pattern = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                          (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pattern,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec9960

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c__<__CreateMethodBinding__RegisterFallback>b__8_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  Il2CppObject *value;
  
  if (DAT_05703980 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703980 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto LAB_03ec9a9f;
  if ((int)__a->max_length == 0) {
LAB_03ec9aa4:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
  if ((uint)__a->max_length < 2) goto LAB_03ec9aa4;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05703968 != '\0') goto LAB_03ec9a15;
LAB_03ec9a5c:
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703968 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    if (DAT_05703968 == '\0') goto LAB_03ec9a5c;
LAB_03ec9a15:
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,pIVar2,value,MethodInfo_Void_set_Item);
    return (Il2CppObject *)0x0;
  }
LAB_03ec9a9f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFallback>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec9ab0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveFallback>b__9_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  
  if (DAT_05703981 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703981 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto LAB_03ec9bd4;
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05703969 != '\0') goto LAB_03ec9b4b;
LAB_03ec9b91:
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05703969 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    if (DAT_05703969 == '\0') goto LAB_03ec9b91;
LAB_03ec9b4b:
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Remove(__this_00,pIVar2,MethodInfo_Boolean_Remove);
    return (Il2CppObject *)0x0;
  }
LAB_03ec9bd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ec8450

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding
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
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Action_T__object__o *setter;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_0570396e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"DefaultLanguage");
    il2cpp_init_method_metadata(&"RegisterLanguage");
    il2cpp_init_method_metadata(&"CurrentLanguage");
    il2cpp_init_method_metadata(&"RegisterLanguages");
    il2cpp_init_method_metadata(&"RegisterFallback");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"RemoveFallback");
    il2cpp_init_method_metadata(&"Get");
    DAT_0570396e = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x5e1c8cab) {
    if (uVar3 < 0x37915e09) {
      if (uVar3 == 0x28b19ea3) {
        bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703972 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__5_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703972 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x37915e08) &&
              (bVar4 = System_String__op_Equality(name,"CurrentLanguage",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570396f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentLanguage);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object);
          DAT_0570396f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x5b89647c) {
      bVar4 = System_String__op_Equality(name,"DefaultLanguage",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703970 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLocaleBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultLanguage);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultLanguage_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object);
          DAT_05703970 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object);
        System_Func<object__object>___ctor();
        setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLocaleBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x5e1c8caa) &&
            (bVar4 = System_String__op_Equality(name,"RegisterLanguage",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703973 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterLanguage);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703973 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x9cbb72c4) {
    if (uVar3 == 0x9cbb72c3) {
      bVar4 = System_String__op_Equality(name,"RemoveFallback",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703976 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveFallback_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703976 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x7106e006) &&
            (bVar4 = System_String__op_Equality(name,"RegisterFallback",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703975 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterFallback);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703975 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar4 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703971 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Get_b__4_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703971 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xfff1b99b) &&
          (bVar4 = System_String__op_Equality(name,"RegisterLanguages",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703974 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterLanguages);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703974 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicLocaleBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__CurrentLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage (const MethodInfo* method);
// 0x3ec8840

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_0570396f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CurrentLanguage);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object);
    DAT_0570396f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__DefaultLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage (const MethodInfo* method);
// 0x3ec88e0

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703970 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicLocaleBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DefaultLanguage);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DefaultLanguage_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object);
    DAT_05703970 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicLocaleBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x3ec89c0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703971 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Get_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703971 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x3ec8b10

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703972 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703972 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage (const MethodInfo* method);
// 0x3ec8c60

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703973 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterLanguage);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703973 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguages
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages (const MethodInfo* method);
// 0x3ec8db0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703974 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterLanguages);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703974 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback (const MethodInfo* method);
// 0x3ec8f00

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703975 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RegisterFallback);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703975 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RemoveFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback (const MethodInfo* method);
// 0x3ec9050

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this;
  
  if (DAT_05703976 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveFallback_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703976 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicLocaleBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicLocaleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ec91a0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703977 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"DefaultLanguage");
    il2cpp_init_method_metadata(&"RegisterLanguage");
    il2cpp_init_method_metadata(&"CurrentLanguage");
    il2cpp_init_method_metadata(&"RegisterLanguages");
    il2cpp_init_method_metadata(&"RegisterFallback");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"RemoveFallback");
    il2cpp_init_method_metadata(&"Get");
    DAT_05703977 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"CurrentLanguage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DefaultLanguage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Get",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterLanguage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterLanguages",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RegisterFallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveFallback",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__CurrentLanguage>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x3ec9360

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings__<__CreatePropertyBinding__CurrentLanguage>g____getter_2_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05703978 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703978 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703961 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703961 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    return *(Il2CppObject **)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x3ec9410

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings__<__CreatePropertyBinding__DefaultLanguage>g____getter_3_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703979 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703979 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703a16 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3ec94c0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings__<__CreatePropertyBinding__DefaultLanguage>g____setter_3_1
               (CustomLogic_CustomLogicLocaleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_0570397a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_0570397a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703a15 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(Il2CppObject **)(lVar2 + 0x10) = pIVar3;
  il2cpp_runtime_glue(lVar2 + 0x10,pIVar3);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___ctor (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x3ec72c0

void CustomLogic_CustomLogicLocaleBuiltin___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (DAT_05703960 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703960 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703a15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703a15 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(System_String_o **)(lVar2 + 0x10) = pSVar4;
  il2cpp_runtime_glue(lVar2 + 0x10,pSVar4);
  pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
  pSVar5 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
  if (DAT_05703968 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703968 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,MethodInfo_Void_set_Item);
    pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    pSVar5 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    if (DAT_05703968 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
      DAT_05703968 = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    else {
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_CurrentLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage (const MethodInfo* method);
// 0x3ec7590

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703961 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703961 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    return *(System_String_o **)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_DefaultLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage (const MethodInfo* method);
// 0x3ec75f0

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703962 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703962 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin$$set_DefaultLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage (System_String_o* value, const MethodInfo* method);
// 0x3ec7660

void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage
               (System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703963 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703963 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_glue(lVar1 + 0x10,value);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$Get
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__Get (System_String_o* key, const MethodInfo* method);
// 0x3ec76c0

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__Get(System_String_o *key,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_Exception_o *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05703964 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703964 = '\x01';
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = *(System_String_o **)(lVar1 + 0x18);
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  pSVar2 = CustomLogic_CustomLogicLocaleBuiltin__ResolveString(key,pSVar2,in_RDX);
  if (pSVar2 != (System_String_o *)0x0) {
    return pSVar2;
  }
  pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Localized string not found: ");
  pSVar2 = System_String__Concat(pSVar2,key,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
  System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&MethodInfo_String_Get);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar3);
}


// CustomLogic.CustomLogicLocaleBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__Set (System_String_o* language, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x3ec7a80

void CustomLogic_CustomLogicLocaleBuiltin__Set
               (System_String_o *language,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *local_30;
  
  if (DAT_05703965 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    DAT_05703965 = '\x01';
  }
  local_30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)language,
                       (Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
      System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
      local_30 = __this;
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03ec7bd4;
      System_Collections_Generic_Dictionary<object__object>__set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)language,
                 (Il2CppObject *)local_30,MethodInfo_Void_set_Item);
    }
    if (local_30 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (local_30,(Il2CppObject *)key,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      return;
    }
  }
LAB_03ec7bd4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage (System_String_o* language, CustomLogic_CustomLogicDictBuiltin_o* strings, const MethodInfo* method);
// 0x3ec7be0

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage
               (System_String_o *language,CustomLogic_CustomLogicDictBuiltin_o *strings,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  int32_t capacity;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  ulong in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05703966 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    DAT_05703966 = '\x01';
  }
  if (strings != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    capacity = CustomLogic_CustomLogicDictBuiltin__get_Count(strings,(MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_03,capacity,MethodInfo_Dictionary_2_System_String_System_String);
    pCVar2 = CustomLogic_CustomLogicDictBuiltin__get_Keys(strings,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
       (__this = (pCVar2->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0))
    {
      System_Collections_Generic_List<object>__GetEnumerator(&local_48,__this,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
      if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_01.fields._index = 0;
        __this_01.fields._version = 0;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_01.fields._current = (Il2CppObject *)local_48.fields._list;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar1 != '\0') {
          if (local_48.fields._current != (Il2CppObject *)0x0) {
            (*(local_48.fields._current)->klass->vtable[3].methodPtr)
                      (local_48.fields._current,(local_48.fields._current)->klass->vtable[3].method)
            ;
            pIVar3 = CustomLogic_CustomLogicDictBuiltin__Get
                               (strings,local_48.fields._current,(Il2CppObject *)0x0,
                                (MethodInfo *)0x0);
            if (pIVar3 != (Il2CppObject *)0x0) {
              (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03ec7e60:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03ec7e34:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        while( true ) {
          __this_00.fields._8_8_ = __this_03;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88
          ;
          __this_00.fields._current = (Il2CppObject *)pSVar5;
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          local_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
          if ((char)bVar1 == '\0') break;
          if (local_48.fields._current == (Il2CppObject *)0x0) goto LAB_03ec7e34;
          pIVar3 = (Il2CppObject *)
                   (*(local_48.fields._current)->klass->vtable[3].methodPtr)
                             (local_48.fields._current,
                              (local_48.fields._current)->klass->vtable[3].method);
          pIVar4 = CustomLogic_CustomLogicDictBuiltin__Get
                             (strings,local_48.fields._current,(Il2CppObject *)0x0,(MethodInfo *)0x0
                             );
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03ec7e60;
          pIVar4 = (Il2CppObject *)
                   (*pIVar4->klass->vtable[3].methodPtr)(pIVar4,pIVar4->klass->vtable[3].method);
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (__this_03,pIVar3,pIVar4,MethodInfo_Void_set_Item);
        }
      }
      __this_02.fields._8_8_ = __this_03;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)local_48.fields._list;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)language,
                   (Il2CppObject *)__this_03,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguages
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages (System_String_o* pattern, const MethodInfo* method);
// 0x3ec7f60

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages
               (System_String_o *pattern,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_01;
  undefined1 auVar2 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar7;
  
  if (DAT_05703967 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String__get_Va);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703967 = '\x01';
  }
  pIVar5 = (Il2CppObject *)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = UI_UIManager__GetLocaleCategoryStrings(pattern,(MethodInfo *)0x0);
  if (__this_01 !=
      (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffa8,
               (System_Collections_Generic_Dictionary_object__object__o *)__this_01,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    while( true ) {
      __this.fields._8_8_ = pIVar4;
      __this.fields._dictionary = pSVar3;
      __this.fields._current.fields.key = pIVar5;
      __this.fields._current.fields.value = pIVar6;
      __this.fields._32_8_ = pSVar7;
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this,(MethodInfo_31CFE90 *)&stack0xffffffffffffffa8);
      if ((char)bVar1 == '\0') {
        __this_00.fields._8_8_ = pIVar4;
        __this_00.fields._dictionary = pSVar3;
        __this_00.fields._current.fields.key = pIVar5;
        __this_00.fields._current.fields.value = pIVar6;
        __this_00.fields._32_8_ = pSVar7;
        System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                  (__this_00,(MethodInfo_31CFFB0 *)&stack0xffffffffffffffa8);
        return;
      }
      auVar2 = il2cpp_glue_032bf890(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System);
      if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary<object__object>__set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),auVar2._0_8_,auVar2._8_8_,MethodInfo_Void_set_Item);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback (System_String_o* fromLanguage, System_String_o* toLanguage, const MethodInfo* method);
// 0x3ec74f0

void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback
               (System_String_o *fromLanguage,System_String_o *toLanguage,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05703968 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703968 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)fromLanguage,(Il2CppObject *)toLanguage,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RemoveFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback (System_String_o* fromLanguage, const MethodInfo* method);
// 0x3ec8180

void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback
               (System_String_o *fromLanguage,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05703969 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05703969 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Remove
              (__this,(Il2CppObject *)fromLanguage,MethodInfo_Boolean_Remove);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$ResolveString
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__ResolveString (System_String_o* key, System_String_o* requestedLang, const MethodInfo* method);
// 0x3ec77b0

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__ResolveString
          (System_String_o *key,System_String_o *requestedLang,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_Exception_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Il2CppObject **value;
  System_Collections_Generic_Dictionary_object__object__o *local_68;
  System_Collections_Generic_Dictionary_object__object__o *local_60;
  Il2CppObject *local_58;
  System_Collections_Generic_Dictionary_object__object__o *local_50;
  Il2CppObject *local_48 [3];
  
  if (DAT_0570396a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_0570396a = '\x01';
  }
  local_50 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[2] = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_60 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[1] = (Il2CppObject *)0x0;
  local_68 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[0] = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03ec7a22;
  bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),(Il2CppObject *)requestedLang,
                     (Il2CppObject **)&local_50,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar2 != '\0') {
    if (local_50 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03ec7a22;
    value = local_48 + 2;
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (local_50,(Il2CppObject *)key,value,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 != '\0') goto LAB_03ec7a10;
  }
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 8);
  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03ec7a22;
  bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    (pSVar5,(Il2CppObject *)requestedLang,&local_58,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03ec7a22;
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),local_58,(Il2CppObject **)&local_60,
                       MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 != '\0') {
      if (local_60 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03ec7a22;
      value = local_48 + 1;
      bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (local_60,(Il2CppObject *)key,value,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar2 != '\0') goto LAB_03ec7a10;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    if (DAT_05703a16 == '\0') goto LAB_03ec79a9;
LAB_03ec797b:
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  else {
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
    if (DAT_05703a16 != '\0') goto LAB_03ec797b;
LAB_03ec79a9:
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    DAT_05703a16 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicLocaleBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (pSVar5,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) + 0x10),
                       (Il2CppObject **)&local_68,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 != '\0') {
      if (local_68 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03ec7a22;
      value = local_48;
      bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (local_68,(Il2CppObject *)key,value,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar2 != '\0') {
LAB_03ec7a10:
        return (System_String_o *)*value;
      }
    }
    pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Locale string not found: ");
    pSVar3 = System_String__Concat(pSVar3,key,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
    System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_String_ResolveString);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar4);
  }
LAB_03ec7a22:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_ClassName (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x3ec8220

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__get_ClassName
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570396b == '\0') {
    il2cpp_init_method_metadata(&"Locale");
    DAT_0570396b = '\x01';
  }
  return "Locale";
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x3ec8250

bool_conflict
CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x3ec8260

bool_conflict
CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x3ec8270

bool_conflict
CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicLocaleBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___cctor (const MethodInfo* method);
// 0x3ec8280

void CustomLogic_CustomLogicLocaleBuiltin___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (DAT_0570396c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLocaleBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__string);
    DAT_0570396c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  **(undefined8 **)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicLocaleBuiltin + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}



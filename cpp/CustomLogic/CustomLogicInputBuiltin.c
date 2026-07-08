// Type: CustomLogic.CustomLogicInputBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicInputBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicInputBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputBuiltin_o* CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ec4a40

CustomLogic_CustomLogicInputBuiltin_o *
CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703941 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputBuiltin);
    DAT_05703941 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputBuiltin);
      if (DAT_0570392c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_0570392c = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicInputBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ec6970

void CustomLogic_CustomLogicInputBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703954 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703954 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ec69e0

void CustomLogic_CustomLogicInputBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyName>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec69f0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetKeyName>b__2_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_05703955 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703955 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                         (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      pSVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyName(pSVar1,method_00);
      return (Il2CppObject *)pSVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyHold>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6a70

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetKeyHold>b__3_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *key;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (DAT_05703956 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703956 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      key = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                      (pIVar2,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyHold(key,method_00);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyDown>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6b10

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetKeyDown>b__4_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *key;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (DAT_05703957 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703957 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      key = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                      (pIVar2,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyDown(key,method_00);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyUp>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6bb0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetKeyUp>b__5_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *key;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (DAT_05703958 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703958 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar2 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      key = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                      (pIVar2,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      bVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyUp(key,method_00);
      local_9 = (undefined1)bVar1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_9);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseAim>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6c50

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetMouseAim>b__6_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim(method);
  return pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCursorAimDirection>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6c60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetCursorAimDirection>b__7_0
          (MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection(method);
  return pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6c70

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetMouseSpeed>b__8_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar1;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703936 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    DAT_05703936 = '\x01';
  }
  value.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = fVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMousePosition>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6d10

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetMousePosition>b__9_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703937 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703937 = '\x01';
  }
  value = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetScreenDimensions>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6d80

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__GetScreenDimensions>b__10_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703938 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703938 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = (float)iVar2;
  value.fields.x = (float)iVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyDefaultEnabled>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6df0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetKeyDefaultEnabled>b__11_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *key;
  MethodInfo *method_00;
  
  if (DAT_05703959 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703959 = '\x01';
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
    key = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled(key,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyHold>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6ea0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetKeyHold>b__12_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *key;
  MethodInfo *method_00;
  
  if (DAT_0570395a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570395a = '\x01';
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
    key = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      CustomLogic_CustomLogicInputBuiltin__SetKeyHold(key,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCategoryKeysEnabled>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec6f50

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetCategoryKeysEnabled>b__13_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  System_String_o *category;
  MethodInfo *method_00;
  
  if (DAT_0570395b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570395b = '\x01';
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
    category = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled(category,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetGeneralKeysEnabled>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec7000

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetGeneralKeysEnabled>b__14_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_0570395c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570395c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX;
      if (DAT_0570393c == '\0') {
        il2cpp_init_method_metadata(&"General");
        DAT_0570393c = '\x01';
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("General",uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteractionKeysEnabled>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec70b0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetInteractionKeysEnabled>b__15_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_0570395d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570395d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX;
      if (DAT_0570393d == '\0') {
        il2cpp_init_method_metadata(&"Interaction");
        DAT_0570393d = '\x01';
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("Interaction",uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTitanKeysEnabled>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec7160

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetTitanKeysEnabled>b__16_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_0570395e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570395e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX;
      if (DAT_0570393e == '\0') {
        il2cpp_init_method_metadata(&"Titan");
        DAT_0570393e = '\x01';
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("Titan",uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetHumanKeysEnabled>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ec7210

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings_<>c__<__CreateMethodBinding__SetHumanKeysEnabled>b__17_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_0570395f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570395f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX;
      if (DAT_0570393f == '\0') {
        il2cpp_init_method_metadata(&"Human");
        DAT_0570393f = '\x01';
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
                ("Human",uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ec4b60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_05703942 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SetGeneralKeysEnabled");
    il2cpp_init_method_metadata(&"GetScreenDimensions");
    il2cpp_init_method_metadata(&"GetKeyHold");
    il2cpp_init_method_metadata(&"SetCategoryKeysEnabled");
    il2cpp_init_method_metadata(&"SetHumanKeysEnabled");
    il2cpp_init_method_metadata(&"GetKeyName");
    il2cpp_init_method_metadata(&"GetMouseAim");
    il2cpp_init_method_metadata(&"GetKeyDown");
    il2cpp_init_method_metadata(&"SetKeyDefaultEnabled");
    il2cpp_init_method_metadata(&"GetCursorAimDirection");
    il2cpp_init_method_metadata(&"GetMouseSpeed");
    il2cpp_init_method_metadata(&"SetInteractionKeysEnabled");
    il2cpp_init_method_metadata(&"GetMousePosition");
    il2cpp_init_method_metadata(&"GetKeyUp");
    il2cpp_init_method_metadata(&"SetTitanKeysEnabled");
    il2cpp_init_method_metadata(&"SetKeyHold");
    DAT_05703942 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8b47cad3) {
    if (uVar3 < 0x299fa333) {
      if (uVar3 < 0x1fca2dcc) {
        if (uVar3 == 0x2888963) {
          bVar4 = System_String__op_Equality(name,"GetKeyUp",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703946 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyUp_b__5_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703946 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x1fca2dcb) &&
                (bVar4 = System_String__op_Equality(name,"GetCursorAimDirection",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703948 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetCursorAimDirec);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703948 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x230f7b6c) {
        bVar4 = System_String__op_Equality(name,"SetTitanKeysEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703951 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTitanKeysEnabl);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703951 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x78,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x299fa332) &&
              (bVar4 = System_String__op_Equality(name,"SetGeneralKeysEnabled",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570394f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetGeneralKeysEna);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570394f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x423fef7d) {
      if (uVar3 == 0x3ce5bffd) {
        bVar4 = System_String__op_Equality(name,"SetHumanKeysEnabled",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703952 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetHumanKeysEnabl);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703952 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x80,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x423fef7c) &&
              (bVar4 = System_String__op_Equality(name,"SetKeyDefaultEnabled",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570394c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetKeyDefaultEnab);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570394c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x8b47cad2) {
      bVar4 = System_String__op_Equality(name,"SetInteractionKeysEnabled",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703950 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetInteractionKey);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703950 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x779ad7dd) &&
            (bVar4 = System_String__op_Equality(name,"GetMousePosition",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570394a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMousePosition);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570394a = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xbd218aad) {
    if (uVar3 < 0xa3a3c236) {
      if (uVar3 == 0xa17036af) {
        bVar4 = System_String__op_Equality(name,"GetKeyHold",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703944 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyHold_b__3_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703944 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xa3a3c235) &&
              (bVar4 = System_String__op_Equality(name,"GetMouseSpeed",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703949 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMouseSpeed_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703949 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xa4899163) {
      bVar4 = System_String__op_Equality(name,"SetKeyHold",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570394d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetKeyHold_b__12);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570394d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xbd218aac) &&
            (bVar4 = System_String__op_Equality(name,"SetCategoryKeysEnabled",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570394e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCategoryKeysEn);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570394e = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xca5c42a8) {
    if (uVar3 == 0xc37a5fcd) {
      bVar4 = System_String__op_Equality(name,"GetKeyName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703943 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyName_b__2_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703943 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xca5c42a7) &&
            (bVar4 = System_String__op_Equality(name,"GetMouseAim",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703947 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMouseAim_b__6);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703947 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xd098c4f6) {
    bVar4 = System_String__op_Equality(name,"GetKeyDown",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703945 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyDown_b__4_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703945 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xd6be4d6a) &&
          (bVar4 = System_String__op_Equality(name,"GetScreenDimensions",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570394b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetScreenDimensio);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_0570394b = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName (const MethodInfo* method);
// 0x3ec51b0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703943 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyName_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703943 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold (const MethodInfo* method);
// 0x3ec5300

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703944 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyHold_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703944 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyDown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown (const MethodInfo* method);
// 0x3ec5450

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703945 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyDown_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703945 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyUp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp (const MethodInfo* method);
// 0x3ec55a0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703946 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetKeyUp_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703946 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseAim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim (const MethodInfo* method);
// 0x3ec56f0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703947 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMouseAim_b__6);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703947 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetCursorAimDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection (const MethodInfo* method);
// 0x3ec5840

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703948 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetCursorAimDirec);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703948 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed (const MethodInfo* method);
// 0x3ec5990

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703949 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMouseSpeed_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703949 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMousePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition (const MethodInfo* method);
// 0x3ec5ae0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_0570394a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetMousePosition);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570394a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetScreenDimensions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions (const MethodInfo* method);
// 0x3ec5c30

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_0570394b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetScreenDimensio);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570394b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyDefaultEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled (const MethodInfo* method);
// 0x3ec5d80

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_0570394c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetKeyDefaultEnab);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570394c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold (const MethodInfo* method);
// 0x3ec5ed0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_0570394d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetKeyHold_b__12);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570394d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetCategoryKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled (const MethodInfo* method);
// 0x3ec6020

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_0570394e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetCategoryKeysEn);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570394e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetGeneralKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled (const MethodInfo* method);
// 0x3ec6170

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_0570394f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetGeneralKeysEna);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570394f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetInteractionKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled (const MethodInfo* method);
// 0x3ec62c0

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703950 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetInteractionKey);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703950 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetTitanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled (const MethodInfo* method);
// 0x3ec6410

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703951 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetTitanKeysEnabl);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703951 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetHumanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled (const MethodInfo* method);
// 0x3ec6560

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this;
  
  if (DAT_05703952 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetHumanKeysEnabl);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703952 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicInputBuiltin);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ec66b0

void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703953 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SetGeneralKeysEnabled");
    il2cpp_init_method_metadata(&"GetScreenDimensions");
    il2cpp_init_method_metadata(&"GetKeyHold");
    il2cpp_init_method_metadata(&"SetCategoryKeysEnabled");
    il2cpp_init_method_metadata(&"SetHumanKeysEnabled");
    il2cpp_init_method_metadata(&"GetKeyName");
    il2cpp_init_method_metadata(&"GetMouseAim");
    il2cpp_init_method_metadata(&"GetKeyDown");
    il2cpp_init_method_metadata(&"SetKeyDefaultEnabled");
    il2cpp_init_method_metadata(&"GetCursorAimDirection");
    il2cpp_init_method_metadata(&"GetMouseSpeed");
    il2cpp_init_method_metadata(&"SetInteractionKeysEnabled");
    il2cpp_init_method_metadata(&"GetMousePosition");
    il2cpp_init_method_metadata(&"GetKeyUp");
    il2cpp_init_method_metadata(&"SetTitanKeysEnabled");
    il2cpp_init_method_metadata(&"SetKeyHold");
    DAT_05703953 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"GetKeyName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetKeyHold",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetKeyDown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetKeyUp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetMouseAim",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetCursorAimDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetMouseSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetMousePosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetScreenDimensions",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetKeyDefaultEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetKeyHold",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetCategoryKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetGeneralKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetInteractionKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetTitanKeysEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetHumanKeysEnabled",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin___ctor (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x3ec34a0

void CustomLogic_CustomLogicInputBuiltin___ctor
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570392c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_0570392c = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeybind
// il2cpp: Settings_KeybindSetting_o* CustomLogic_CustomLogicInputBuiltin__GetKeybind (System_String_o* key, const MethodInfo* method);
// 0x3ec3510

Settings_KeybindSetting_o *
CustomLogic_CustomLogicInputBuiltin__GetKeybind(System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_String_array *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  
  if (DAT_0570392d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570392d = '\x01';
  }
  if (key != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(key,0x2f,0,(MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if ((lVar2 != 0) && (pSVar4 != (System_String_array *)0x0)) {
      if ((int)pSVar4->max_length == 0) {
LAB_03ec3635:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar2 + 0x10);
      if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        pSVar5 = (Settings_KeybindSetting_o *)
                 System_Collections_Specialized_OrderedDictionary__get_Item
                           (pSVar3,(Il2CppObject *)pSVar4->m_Items[0],(MethodInfo *)0x0);
        if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
          bVar1 = (TypeInfo_SaveableSettingsContainer->_2).naturalAligment;
          if (((((Il2CppClass *)pSVar5->klass)->_2).naturalAligment < bVar1) ||
             ((((Il2CppClass *)pSVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SaveableSettingsContainer))
          {
LAB_03ec362d:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar5);
          }
          if ((uint)pSVar4->max_length < 2) goto LAB_03ec3635;
          pSVar3 = (System_Collections_Specialized_OrderedDictionary_o *)(pSVar5->fields).InputKeys;
          if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
            pSVar5 = (Settings_KeybindSetting_o *)
                     System_Collections_Specialized_OrderedDictionary__get_Item
                               (pSVar3,(Il2CppObject *)pSVar4->m_Items[1],(MethodInfo *)0x0);
            if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
              bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
              if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting))
              goto LAB_03ec362d;
            }
            return pSVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$GetCustomKeyCode
// il2cpp: System_Nullable_KeyCode__o CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode (System_String_o* key, const MethodInfo* method);
// 0x3ec3640

System_Nullable_KeyCode__o
CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *value;
  System_Nullable_KeyCode__Fields SVar2;
  int32_t local_1c;
  System_Nullable_KeyCode__Fields local_18;
  
  if (DAT_0570392e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryParse_KeyCode);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_KeyCode);
    il2cpp_init_method_metadata(&"CustomKey/");
    DAT_0570392e = '\x01';
  }
  local_1c = 0;
  if (key != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(key,"CustomKey/",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if ("CustomKey/" == (System_String_o *)0x0) goto LAB_03ec373f;
      value = System_String__Substring(key,("CustomKey/"->fields)._stringLength,(MethodInfo *)0x0);
      if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_Enum__TryParse<Int32Enum>(value,&local_1c,MethodInfo_Boolean_TryParse_KeyCode);
      if ((char)bVar1 != '\0') {
        local_18.hasValue = 0;
        local_18.value = 0;
        System_Nullable<Int32Enum>___ctor
                  ((System_Nullable_Int32Enum__o)&local_18,local_1c,MethodInfo_Nullable_1_UnityEngine_KeyCode);
        return (System_Nullable_KeyCode__o)local_18;
      }
    }
    SVar2.hasValue = 0;
    SVar2.value = 0;
    return (System_Nullable_KeyCode__o)SVar2;
  }
LAB_03ec373f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$CanKey
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__CanKey (const MethodInfo* method);
// 0x3ec3750

bool_conflict CustomLogic_CustomLogicInputBuiltin__CanKey(MethodInfo *method)

{
  long *plVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_0570392f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570392f = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
        TypeInfo_InGameManager)) {
      if (*(char *)((long)plVar1 + 0x7a) != '\0') {
        return 0;
      }
      bVar3 = 0;
      bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = 0;
        bVar2 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = (bool_conflict)
                  CONCAT71(0x54d31,*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) == '\0');
        }
      }
      return bVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__GetKeyName (System_String_o* key, const MethodInfo* method);
// 0x3ec3850

System_String_o *
CustomLogic_CustomLogicInputBuiltin__GetKeyName(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  System_Nullable_KeyCode__Fields local_28;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (DAT_05703930 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeyCode);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_KeyCode_get_Value);
    DAT_05703930 = '\x01';
  }
  local_28 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_28.hasValue != '\0') {
    local_10 = System_Nullable<Int32Enum>__get_Value
                         ((System_Nullable_Int32Enum__o)&local_28,MethodInfo_KeyCode_get_Value);
    local_20.klass = TypeInfo_KeyCode;
    local_20.monitor = (void *)0xffffffffffffffff;
    pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar2 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
  if (pSVar2 != (Settings_KeybindSetting_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyHold
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyHold (System_String_o* key, const MethodInfo* method);
// 0x3ec3910

bool_conflict
CustomLogic_CustomLogicInputBuiltin__GetKeyHold(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  uint key_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  System_Nullable_KeyCode__Fields local_10;
  
  if (DAT_05703931 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_KeyCode_get_Value);
    DAT_05703931 = '\x01';
  }
  local_10 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_10.hasValue == '\0') {
    method_00 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = Settings_KeybindSetting__GetKey
                      ((Settings_KeybindSetting_o *)method_00,1,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    key_00 = System_Nullable<Int32Enum>__get_Value
                       ((System_Nullable_Int32Enum__o)&local_10,MethodInfo_KeyCode_get_Value);
    method_00 = (MethodInfo *)(ulong)key_00;
    bVar2 = UnityEngine_Input__GetKey(key_00,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(method_00);
  }
  return bVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyDown
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyDown (System_String_o* key, const MethodInfo* method);
// 0x3ec39b0

bool_conflict
CustomLogic_CustomLogicInputBuiltin__GetKeyDown(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  uint key_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  System_Nullable_KeyCode__Fields local_10;
  
  if (DAT_05703932 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_KeyCode_get_Value);
    DAT_05703932 = '\x01';
  }
  local_10 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_10.hasValue == '\0') {
    method_00 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = Settings_KeybindSetting__GetKeyDown
                      ((Settings_KeybindSetting_o *)method_00,1,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    key_00 = System_Nullable<Int32Enum>__get_Value
                       ((System_Nullable_Int32Enum__o)&local_10,MethodInfo_KeyCode_get_Value);
    method_00 = (MethodInfo *)(ulong)key_00;
    bVar2 = UnityEngine_Input__GetKeyDown(key_00,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(method_00);
  }
  return bVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyUp
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyUp (System_String_o* key, const MethodInfo* method);
// 0x3ec3a50

bool_conflict CustomLogic_CustomLogicInputBuiltin__GetKeyUp(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  uint key_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  System_Nullable_KeyCode__Fields local_10;
  
  if (DAT_05703933 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_KeyCode_get_Value);
    DAT_05703933 = '\x01';
  }
  local_10 = (System_Nullable_KeyCode__Fields)
             CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if ((char)local_10.hasValue == '\0') {
    method_00 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar2 = Settings_KeybindSetting__GetKeyUp
                      ((Settings_KeybindSetting_o *)method_00,1,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    key_00 = System_Nullable<Int32Enum>__get_Value
                       ((System_Nullable_Int32Enum__o)&local_10,MethodInfo_KeyCode_get_Value);
    method_00 = (MethodInfo *)(ulong)key_00;
    bVar2 = UnityEngine_Input__GetKeyUp(key_00,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(method_00);
  }
  return bVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseAim
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseAim (const MethodInfo* method);
// 0x3ec3af0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMouseAim(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  int32_t layerMask;
  bool_conflict bVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  int32_t iVar11;
  float fStack_6c;
  float fStack_68;
  UnityEngine_Ray_o local_60;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  float fStack_18;
  undefined8 uStack_14;
  
  if (DAT_05703934 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703934 = '\x01';
  }
  fStack_18 = 0.0;
  uStack_14 = 0;
  local_38._16_8_ = (InvokerMethod)0x0;
  local_38._24_4_ = 0;
  local_38._28_4_ = 0.0;
  local_38._0_8_ = (Il2CppMethodPointer)0x0;
  local_38._8_8_ = (Il2CppMethodPointer)0x0;
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar1 != 0) {
    __this = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar6 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay(&local_60,__this,UVar6,(MethodInfo *)0x0);
      fVar3 = local_60.fields.m_Origin.fields.x;
      fVar5 = local_60.fields.m_Origin.fields.y;
      iVar11 = 0;
      local_48._0_4_ = local_60.fields.m_Direction.fields.x;
      local_48._4_4_ = local_60.fields.m_Direction.fields.y;
      local_48._8_8_ = 0;
      fVar4 = local_60.fields.m_Origin.fields.z;
      fVar10 = local_60.fields.m_Direction.fields.z;
      if (*(int *)(TypeInfo_Human + 0xe4) == 0) {
        il2cpp_init_class();
        fVar4 = local_60.fields.m_Origin.fields.z;
        fVar10 = local_60.fields.m_Direction.fields.z;
      }
      layerMask = UnityEngine_LayerMask__get_value
                            ((UnityEngine_LayerMask_Fields)
                             (int32_t)*(undefined8 *)(TypeInfo_Human + 0xb8),(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar7 = CONCAT44(fVar5,fVar3);
      fStack_6c = (float)local_48._0_8_;
      fStack_68 = SUB84(local_48._0_8_,4);
      uVar9 = CONCAT44(fVar10,fStack_68);
      uVar8 = CONCAT44(fStack_6c,fVar4);
      ray.fields.m_Origin.fields.z = fVar4;
      ray.fields.m_Direction.fields.x = fStack_6c;
      ray.fields.m_Origin.fields.x = fVar3;
      ray.fields.m_Origin.fields.y = fVar5;
      ray.fields.m_Direction.fields.y = fStack_68;
      ray.fields.m_Direction.fields.z = fVar10;
      bVar2 = UnityEngine_Physics__Raycast
                        (ray,(UnityEngine_RaycastHit_o *)local_38,1000.0,layerMask,(MethodInfo *)0x0
                        );
      if ((char)bVar2 == '\0') {
        fVar3 = fVar3 + (float)local_48._0_4_ * 1000.0;
        fVar5 = fVar5 + (float)local_48._4_4_ * 1000.0;
        fVar4 = fVar4 + fVar10 * 1000.0;
      }
      else {
        __this_00.fields.m_Point.fields.z = (float)(int)uVar8;
        __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)uVar8 >> 0x20);
        __this_00.fields.m_Point.fields.x = (float)(int)uVar7;
        __this_00.fields.m_Point.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
        __this_00.fields.m_Normal.fields.y = (float)(int)uVar9;
        __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)uVar9 >> 0x20);
        __this_00.fields.m_FaceID = (uint32_t)fVar4;
        __this_00.fields.m_Distance = fVar10;
        __this_00.fields.m_UV.fields.x = fVar3;
        __this_00.fields.m_UV.fields.y = fVar5;
        __this_00.fields.m_Collider = iVar11;
        UVar6 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)local_38);
        fVar4 = UVar6.fields.z;
        fVar3 = UVar6.fields.x;
        fVar5 = UVar6.fields.y;
      }
      __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      UVar6.fields.y = fVar5;
      UVar6.fields.x = fVar3;
      UVar6.fields.z = fVar4;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,UVar6,(MethodInfo *)0x0);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$GetCursorAimDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection (const MethodInfo* method);
// 0x3ec3d10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Ray_o local_20;
  
  if (DAT_05703935 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703935 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar1 != 0) {
    __this = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar2 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay(&local_20,__this,UVar2,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      UVar2.fields.z = local_20.fields.m_Direction.fields.z;
      UVar2.fields.x = local_20.fields.m_Direction.fields.x;
      UVar2.fields.y = local_20.fields.m_Direction.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,UVar2,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseSpeed
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed (const MethodInfo* method);
// 0x3ec3df0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar1;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703936 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    DAT_05703936 = '\x01';
  }
  value.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = fVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMousePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMousePosition (const MethodInfo* method);
// 0x3ec3e90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMousePosition(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703937 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703937 = '\x01';
  }
  value = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetScreenDimensions
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions (const MethodInfo* method);
// 0x3ec3f00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703938 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703938 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = (float)iVar2;
  value.fields.x = (float)iVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyDefaultEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x3ec3f70

void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled
               (System_String_o *key,bool_conflict enabled,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool_conflict bVar2;
  Settings_KeybindSetting_o *item;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if (DAT_05703939 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05703939 = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method_00);
  if ((char)enabled == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Remove(pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Remove)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyHold
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyHold (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x3ec40d0

void CustomLogic_CustomLogicInputBuiltin__SetKeyHold
               (System_String_o *key,bool_conflict enabled,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool_conflict bVar2;
  Settings_KeybindSetting_o *item;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,enabled);
  if (DAT_0570393a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_0570393a = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method_00);
  if ((char)enabled == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80);
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Remove(pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Remove)
        ;
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80);
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)item,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputBuiltin$$SetCategoryKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled (System_String_o* category, bool enabled, const MethodInfo* method);
// 0x3ec4240

/* WARNING: Removing unreachable block (ram,0x03ec48c0) */

void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
               (System_String_o *category,bool_conflict enabled,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  System_String_o *message;
  long lVar13;
  char local_34;
  
  if (DAT_0570393b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_DictionaryEntry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Invalid input category: ");
    il2cpp_init_method_metadata(&". Valid categories are: General, Human, Titan, Interaction");
    DAT_0570393b = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar12 != 0) &&
     (pSVar2 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar12 + 0x10),
     pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
    bVar7 = System_Collections_Specialized_OrderedDictionary__Contains
                      (pSVar2,(Il2CppObject *)category,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      message = System_String__Concat("Invalid input category: ",category,". Valid categories are: General, Human, Titan, Interaction",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar12 != 0) &&
        (pSVar2 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar12 + 0x10),
        pSVar2 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
       (pIVar8 = System_Collections_Specialized_OrderedDictionary__get_Item
                           (pSVar2,(Il2CppObject *)category,(MethodInfo *)0x0),
       pIVar8 != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_SaveableSettingsContainer->_2).naturalAligment;
      if (((pIVar8->klass->_2).naturalAligment < bVar1) ||
         ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SaveableSettingsContainer)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar8);
      }
      pIVar3 = pIVar8[1].klass;
      if (pIVar3 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar3->_1).image;
        plVar9 = (long *)(**(code **)((long)pvVar4 + 0x2a8))
                                   (pIVar3,*(undefined8 *)((long)pvVar4 + 0x2b0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          lVar12 = *plVar9;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                puVar10 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + lVar12 +
                          0x138);
                goto LAB_03ec4453;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
          }
          puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_03ec4453:
          cVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (cVar6 == '\0') {
            plVar9 = (long *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable);
            if (plVar9 == (long *)0x0) {
              return;
            }
            lVar12 = *plVar9;
            if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto LAB_03ec47df;
            lVar13 = 0;
            goto LAB_03ec47d0;
          }
          lVar12 = *plVar9;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
                puVar10 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                           lVar12 + 0x138);
                goto LAB_03ec44d8;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
          }
          puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,1);
LAB_03ec44d8:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(long *)(*plVar11 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(plVar11);
          }
          lVar12 = il2cpp_glue_022c7330();
          pIVar8 = *(Il2CppObject **)(lVar12 + 8);
          if (pIVar8 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
            if ((bVar1 <= (pIVar8->klass->_2).naturalAligment) &&
               ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_KeybindSetting)) {
              local_34 = (char)enabled;
              if (local_34 == '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar5 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
                if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar5,pIVar8,MethodInfo_Boolean_Contains);
                if ((char)bVar7 == '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar5 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
                  if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_HashSet<object>__Add(pSVar5,pIVar8,MethodInfo_Boolean_Add);
                }
              }
              else {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar5 = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
                if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar7 = System_Collections_Generic_HashSet<object>__Contains
                                  (pSVar5,pIVar8,MethodInfo_Boolean_Contains);
                if ((char)bVar7 != '\0') {
                  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar5 = *(System_Collections_Generic_HashSet_object__o **)
                            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
                  if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_HashSet<object>__Remove(pSVar5,pIVar8,MethodInfo_Boolean_Remove);
                }
              }
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar13 = lVar13 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13) {
LAB_03ec47d0:
    if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
      goto LAB_03ec47fd;
    }
  }
LAB_03ec47df:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_03ec47fd:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetGeneralKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled (bool enabled, const MethodInfo* method);
// 0x3ec48e0

void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled
               (bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570393c == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_0570393c = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("General",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetInteractionKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled (bool enabled, const MethodInfo* method);
// 0x3ec4920

void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled
               (bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570393d == '\0') {
    il2cpp_init_method_metadata(&"Interaction");
    DAT_0570393d = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Interaction",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetTitanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x3ec4960

void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled
               (bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570393e == '\0') {
    il2cpp_init_method_metadata(&"Titan");
    DAT_0570393e = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Titan",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetHumanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x3ec49a0

void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled
               (bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570393f == '\0') {
    il2cpp_init_method_metadata(&"Human");
    DAT_0570393f = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Human",enabled & 0xff,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__get_ClassName (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x3ec49e0

System_String_o *
CustomLogic_CustomLogicInputBuiltin__get_ClassName
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703940 == '\0') {
    il2cpp_init_method_metadata(&"Input");
    DAT_05703940 = '\x01';
  }
  return "Input";
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsAbstract (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x3ec4a10

bool_conflict
CustomLogic_CustomLogicInputBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsStatic (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x3ec4a20

bool_conflict
CustomLogic_CustomLogicInputBuiltin__get_IsStatic
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x3ec4a30

bool_conflict
CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



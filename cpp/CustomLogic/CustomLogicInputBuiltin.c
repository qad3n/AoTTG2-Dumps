// Type: CustomLogic.CustomLogicInputBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicInputBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicInputBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputBuiltin_o* CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ae06a0

CustomLogic_CustomLogicInputBuiltin_o *
CustomLogic_CustomLogicInputBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin);
    Il2CppMethodInitialized_07546def = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin);
  if (Il2CppMethodInitialized_07546dda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546dda = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicInputBuiltin_o *)__this;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5ae24d0

void CustomLogic_CustomLogicInputBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546e02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e02 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5ae2540

void CustomLogic_CustomLogicInputBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyName>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2550

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyName_b__2_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e03 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  pSVar1 = CustomLogic_CustomLogicInputBuiltin__GetKeyName(pSVar1,method_00);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyHold>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae25d0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyHold_b__3_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546e04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e04 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  local_9 = CustomLogic_CustomLogicInputBuiltin__GetKeyHold(key,method_00);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyDown>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2670

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyDown_b__4_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e05 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  local_9 = CustomLogic_CustomLogicInputBuiltin__GetKeyDown(key,method_00);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyUp>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2710

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetKeyUp_b__5_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e06 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  local_9 = CustomLogic_CustomLogicInputBuiltin__GetKeyUp(key,method_00);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseAim>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae27b0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseAim_b__6_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetMouseAim((MethodInfo *)__this);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCursorAimDirection>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae27c0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetCursorAimDirection_b__7_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection((MethodInfo *)__this);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseSpeed>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae27d0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMouseSpeed_b__8_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar1;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_07546de4 = '\x01';
  }
  value.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  value.fields.y = fVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMousePosition>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2870

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetMousePosition_b__9_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicInputBuiltin__GetMousePosition((MethodInfo *)__this);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetScreenDimensions>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2880

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__GetScreenDimensions_b__10_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546de6 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  value.fields.x = (float)iVar1;
  value.fields.y = (float)iVar2;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyDefaultEnabled>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2900

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *key;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e07 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled(key,enabled,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyHold>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae29c0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetKeyHold_b__12_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *key;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e08 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      CustomLogic_CustomLogicInputBuiltin__SetKeyHold(key,enabled,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCategoryKeysEnabled>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2a80

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  System_String_o *category;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e09 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    category = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (__a->m_Items[1],
                           (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled(category,enabled,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetGeneralKeysEnabled>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2b40

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e0a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_07546dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_07546dea = '\x01';
    method_00 = extraout_RDX_00;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("General",enabled,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteractionKeysEnabled>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2bf0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e0b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_07546deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_07546deb = '\x01';
    method_00 = extraout_RDX_00;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Interaction",enabled,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTitanKeysEnabled>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2ca0

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetTitanKeysEnabled_b__16_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e0c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_07546dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_07546dec = '\x01';
    method_00 = extraout_RDX_00;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Titan",enabled,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetHumanKeysEnabled>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0 (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicInputBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae2d50

Il2CppObject *
CustomLogic_CustomLogicInputBuiltin_Bindings___c_____CreateMethodBinding__SetHumanKeysEnabled_b__17_0
          (CustomLogic_CustomLogicInputBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicInputBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool enabled;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e0d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  enabled = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                      (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_07546ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_07546ded = '\x01';
    method_00 = extraout_RDX_00;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Human",enabled,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ae07c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546df0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetGeneralKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetScreenDimensions");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyHold");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCategoryKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHumanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyName");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseAim");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyDown");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyDefaultEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCursorAimDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteractionKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMousePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyUp");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTitanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyHold");
    Il2CppMethodInitialized_07546df0 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x8b47cad3) {
    if (uVar2 < 0x299fa333) {
      if (uVar2 < 0x1fca2dcc) {
        if (uVar2 == 0x2888963) {
          bVar1 = System_String__op_Equality(name,"GetKeyUp",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1fca2dcb) {
          bVar1 = System_String__op_Equality(name,"GetCursorAimDirection",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x230f7b6c) {
        bVar1 = System_String__op_Equality(name,"SetTitanKeysEnabled",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x299fa332) {
        bVar1 = System_String__op_Equality(name,"SetGeneralKeysEnabled",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x423fef7d) {
      if (uVar2 == 0x3ce5bffd) {
        bVar1 = System_String__op_Equality(name,"SetHumanKeysEnabled",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x423fef7c) {
        bVar1 = System_String__op_Equality(name,"SetKeyDefaultEnabled",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8b47cad2) {
      bVar1 = System_String__op_Equality(name,"SetInteractionKeysEnabled",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x779ad7dd) {
      bVar1 = System_String__op_Equality(name,"GetMousePosition",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xbd218aad) {
    if (uVar2 < 0xa3a3c236) {
      if (uVar2 == 0xa17036af) {
        bVar1 = System_String__op_Equality(name,"GetKeyHold",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa3a3c235) {
        bVar1 = System_String__op_Equality(name,"GetMouseSpeed",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xa4899163) {
      bVar1 = System_String__op_Equality(name,"SetKeyHold",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xbd218aac) {
      bVar1 = System_String__op_Equality(name,"SetCategoryKeysEnabled",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xca5c42a8) {
    if (uVar2 == 0xc37a5fcd) {
      bVar1 = System_String__op_Equality(name,"GetKeyName",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xca5c42a7) {
      bVar1 = System_String__op_Equality(name,"GetMouseAim",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xd098c4f6) {
    bVar1 = System_String__op_Equality(name,"GetKeyDown",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xd6be4d6a) {
    bVar1 = System_String__op_Equality(name,"GetScreenDimensions",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName (const MethodInfo* method);
// 0x5ae0e10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae0e45: jmp 0x5ae0eb5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyName(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold (const MethodInfo* method);
// 0x5ae0f50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae0f85: jmp 0x5ae0ff5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyHold(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyDown
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown (const MethodInfo* method);
// 0x5ae1090
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae10c5: jmp 0x5ae1135

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyDown(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyUp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp (const MethodInfo* method);
// 0x5ae11d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1205: jmp 0x5ae1275

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetKeyUp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseAim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim (const MethodInfo* method);
// 0x5ae1310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1345: jmp 0x5ae13b5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseAim(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetCursorAimDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection (const MethodInfo* method);
// 0x5ae1450
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1485: jmp 0x5ae14f5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetCursorAimDirection(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed (const MethodInfo* method);
// 0x5ae1590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae15c5: jmp 0x5ae1635

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMouseSpeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMousePosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition (const MethodInfo* method);
// 0x5ae16d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1705: jmp 0x5ae1775

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetMousePosition(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetScreenDimensions
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions (const MethodInfo* method);
// 0x5ae1810
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1845: jmp 0x5ae18b5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__GetScreenDimensions(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546df9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546df9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyDefaultEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled (const MethodInfo* method);
// 0x5ae1950
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1985: jmp 0x5ae19f5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyDefaultEnabled(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546dfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546dfa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyHold
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold (const MethodInfo* method);
// 0x5ae1a90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1ac5: jmp 0x5ae1b35

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetKeyHold(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546dfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546dfb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetCategoryKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled (const MethodInfo* method);
// 0x5ae1bd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1c05: jmp 0x5ae1c75

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetCategoryKeysEnabled
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546dfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546dfc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetGeneralKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled (const MethodInfo* method);
// 0x5ae1d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1d45: jmp 0x5ae1db5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetGeneralKeysEnabled(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546dfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546dfd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetInteractionKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled (const MethodInfo* method);
// 0x5ae1e50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1e85: jmp 0x5ae1ef5

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetInteractionKeysEnabled
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546dfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546dfe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetTitanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled (const MethodInfo* method);
// 0x5ae1f90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae1fc5: jmp 0x5ae2035

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetTitanKeysEnabled(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546dff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546dff = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetHumanKeysEnabled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o* CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled (const MethodInfo* method);
// 0x5ae20d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae2108: jmp 0x5ae217b

CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *
CustomLogic_CustomLogicInputBuiltin_Bindings____CreateMethodBinding__SetHumanKeysEnabled(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicInputBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicInputBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e00 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicInputBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicInputBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5ae2210

void CustomLogic_CustomLogicInputBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546e01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetGeneralKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetScreenDimensions");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyHold");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCategoryKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHumanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyName");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseAim");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyDown");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyDefaultEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCursorAimDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SetInteractionKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GetMousePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKeyUp");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTitanKeysEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SetKeyHold");
    Il2CppMethodInitialized_07546e01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyHold",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyDown",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKeyUp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMouseAim",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetCursorAimDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMouseSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetMousePosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetScreenDimensions",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetKeyDefaultEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetKeyHold",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCategoryKeysEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetGeneralKeysEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetInteractionKeysEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTitanKeysEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetHumanKeysEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputBuiltin___ctor (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x5adf0f0

void CustomLogic_CustomLogicInputBuiltin___ctor
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546dda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546dda = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeybind
// il2cpp: Settings_KeybindSetting_o* CustomLogic_CustomLogicInputBuiltin__GetKeybind (System_String_o* key, const MethodInfo* method);
// 0x5adf160

Settings_KeybindSetting_o *
CustomLogic_CustomLogicInputBuiltin__GetKeybind(System_String_o *key,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_String_array *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_07546ddb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07546ddb = '\x01';
  }
  if (key != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(key,0x2f,0,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if ((pSVar2 != (Settings_InputSettings_o *)0x0) && (pSVar4 != (System_String_array *)0x0)) {
      if ((int)pSVar4->max_length == 0) {
label_05adf288:
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = (pSVar2->fields).Settings;
      if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        pSVar5 = (Settings_KeybindSetting_o *)
                 System_Collections_Specialized_OrderedDictionary__get_Item
                           (pSVar3,(Il2CppObject *)pSVar4->m_Items[0],(MethodInfo *)0x0);
        if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_SaveableSettingsContainer->_2).typeHierarchyDepth;
          if (((((Il2CppClass *)pSVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Il2CppClass *)pSVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_SaveableSettingsContainer)) {
label_05adf280:
            il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
          }
          if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05adf288;
          pSVar3 = (System_Collections_Specialized_OrderedDictionary_o *)(pSVar5->fields).InputKeys;
          if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
            pSVar5 = (Settings_KeybindSetting_o *)
                     System_Collections_Specialized_OrderedDictionary__get_Item
                               (pSVar3,(Il2CppObject *)pSVar4->m_Items[1],(MethodInfo *)0x0);
            if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
              bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
              if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) goto label_05adf280;
            }
            return pSVar5;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$GetCustomKeyCode
// il2cpp: System_Nullable_KeyCode__o CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode (System_String_o* key, const MethodInfo* method);
// 0x5adf290

System_Nullable_KeyCode__o
CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  System_Nullable_KeyCode__Fields SVar2;
  int32_t local_1c;
  System_Nullable_KeyCode__Fields local_18;
  
  if (Il2CppMethodInitialized_07546ddc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_KeyCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomKey/");
    Il2CppMethodInitialized_07546ddc = '\x01';
  }
  local_1c = 0;
  if (key == (System_String_o *)0x0) {
label_05adf38f:
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(key,"CustomKey/",(MethodInfo *)0x0);
  if (bVar1) {
    if ("CustomKey/" == (System_String_o *)0x0) goto label_05adf38f;
    value = System_String__Substring(key,("CustomKey/"->fields)._stringLength,(MethodInfo *)0x0);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar1 = System_Enum__TryParse_Int32Enum_
                      (value,&local_1c,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_KeyCode);
    if (bVar1) {
      local_18.hasValue = false;
      local_18._1_3_ = 0;
      local_18.value = 0;
      System_Nullable_Int32Enum____ctor
                ((System_Nullable_Int32Enum__o *)&local_18,local_1c,
                 (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_KeyCode_ctor);
      return (System_Nullable_KeyCode__o)local_18;
    }
  }
  SVar2.hasValue = false;
  SVar2._1_3_ = 0;
  SVar2.value = 0;
  return (System_Nullable_KeyCode__o)SVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$CanKey
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__CanKey (const MethodInfo* method);
// 0x5adf3a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5adf432: xor ebx, ebx

bool CustomLogic_CustomLogicInputBuiltin__CanKey(MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546ddd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546ddd = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  if ((*(char *)((long)&(*(uint64_t *)((char *)pGVar2 + 0x98)) + 1) == '\0') &&
     (bVar3 = UI_InGameMenu__InMenu((MethodInfo *)0x0), !bVar3)) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar3 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      return TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false;
    }
  }
  return false;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__GetKeyName (System_String_o* key, const MethodInfo* method);
// 0x5adf4b0

System_String_o * CustomLogic_CustomLogicInputBuiltin__GetKeyName(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  System_Nullable_KeyCode__o local_28;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07546dde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_KeyCode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_07546dde = '\x01';
  }
  local_28 = CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if (local_28.fields.hasValue != false) {
    local_10 = System_Nullable_Int32Enum___get_Value
                         ((System_Nullable_Int32Enum__o *)&local_28,
                          (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    local_20.klass = (System_Enum_c *)TypeInfo_UnityEngine_KeyCode;
    local_20.monitor = (void *)0xffffffffffffffff;
    pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar2 = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
  if (pSVar2 == (Settings_KeybindSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(pSVar2->klass->vtable)._3_ToString.methodPtr)(pSVar2,(pSVar2->klass->vtable)._3_ToString.method)
  ;
  return pSVar1;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyHold
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyHold (System_String_o* key, const MethodInfo* method);
// 0x5adf570

bool CustomLogic_CustomLogicInputBuiltin__GetKeyHold(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint key_00;
  MethodInfo *pMVar3;
  System_Nullable_KeyCode__o local_10;
  
  if (Il2CppMethodInitialized_07546ddf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_07546ddf = '\x01';
  }
  local_10 = CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if (local_10.fields.hasValue == false) {
    pMVar3 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (pMVar3 == (MethodInfo *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = false;
    bVar1 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pMVar3,true,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar3);
      return bVar2;
    }
  }
  else {
    key_00 = System_Nullable_Int32Enum___get_Value
                       ((System_Nullable_Int32Enum__o *)&local_10,
                        (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    bVar2 = false;
    pMVar3 = (MethodInfo *)(ulong)key_00;
    bVar1 = UnityEngine_Input__GetKey(key_00,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar3);
    }
  }
  return bVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyDown
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyDown (System_String_o* key, const MethodInfo* method);
// 0x5adf620

bool CustomLogic_CustomLogicInputBuiltin__GetKeyDown(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint key_00;
  MethodInfo *pMVar3;
  System_Nullable_KeyCode__o local_10;
  
  if (Il2CppMethodInitialized_07546de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_07546de0 = '\x01';
  }
  local_10 = CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if (local_10.fields.hasValue == false) {
    pMVar3 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (pMVar3 == (MethodInfo *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = false;
    bVar1 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)pMVar3,true,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar3);
      return bVar2;
    }
  }
  else {
    key_00 = System_Nullable_Int32Enum___get_Value
                       ((System_Nullable_Int32Enum__o *)&local_10,
                        (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    bVar2 = false;
    pMVar3 = (MethodInfo *)(ulong)key_00;
    bVar1 = UnityEngine_Input__GetKeyDown(key_00,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar3);
    }
  }
  return bVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetKeyUp
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__GetKeyUp (System_String_o* key, const MethodInfo* method);
// 0x5adf6d0

bool CustomLogic_CustomLogicInputBuiltin__GetKeyUp(System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint key_00;
  MethodInfo *pMVar3;
  System_Nullable_KeyCode__o local_10;
  
  if (Il2CppMethodInitialized_07546de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_KeyCode_get_Value);
    Il2CppMethodInitialized_07546de1 = '\x01';
  }
  local_10 = CustomLogic_CustomLogicInputBuiltin__GetCustomKeyCode(key,method);
  if (local_10.fields.hasValue == false) {
    pMVar3 = (MethodInfo *)CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method);
    if (pMVar3 == (MethodInfo *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = false;
    bVar1 = Settings_KeybindSetting__GetKeyUp((Settings_KeybindSetting_o *)pMVar3,true,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar3);
      return bVar2;
    }
  }
  else {
    key_00 = System_Nullable_Int32Enum___get_Value
                       ((System_Nullable_Int32Enum__o *)&local_10,
                        (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_KeyCode_get_Value);
    bVar2 = false;
    pMVar3 = (MethodInfo *)(ulong)key_00;
    bVar1 = UnityEngine_Input__GetKeyUp(key_00,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = CustomLogic_CustomLogicInputBuiltin__CanKey(pMVar3);
    }
  }
  return bVar2;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseAim
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseAim (const MethodInfo* method);
// 0x5adf780

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicInputBuiltin__GetMouseAim(MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this;
  UnityEngine_Ray_o ray;
  bool bVar2;
  int32_t layerMask;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar3;
  float local_90;
  undefined8 local_88;
  float fStack_6c;
  float fStack_68;
  UnityEngine_Ray_o local_60;
  undefined1 local_48 [16];
  UnityEngine_RaycastHit_o local_38;
  
  if (Il2CppMethodInitialized_07546de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546de2 = '\x01';
  }
  local_38.fields.m_UV.fields.x = 0.0;
  local_38.fields.m_UV.fields.y = 0.0;
  local_38.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_38.fields.m_Normal.fields.y = 0.0;
  local_38.fields.m_Normal.fields.z = 0.0;
  local_38.fields.m_FaceID = 0;
  local_38.fields.m_Distance = 0.0;
  local_38.fields.m_Point.fields.x = 0.0;
  local_38.fields.m_Point.fields.y = 0.0;
  local_38.fields.m_Point.fields.z = 0.0;
  local_38.fields.m_Normal.fields.x = 0.0;
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this = (pCVar1->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UVar3 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_68c1290(&local_60,__this,UVar3,(MethodInfo *)0x0);
      local_48._0_4_ = local_60.fields.m_Direction.fields.x;
      local_48._4_4_ = local_60.fields.m_Direction.fields.y;
      local_48._8_8_ = 0;
      if ((TypeInfo_Characters_Human->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Human);
      }
      layerMask = UnityEngine_LayerMask__get_value
                            (&TypeInfo_Characters_Human->static_fields->AimMask,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      fStack_6c = local_48._0_4_;
      fStack_68 = local_48._4_4_;
      ray.fields.m_Direction.fields.z = local_60.fields.m_Direction.fields.z;
      ray.fields.m_Direction.fields.y = fStack_68;
      ray.fields.m_Direction.fields.x = fStack_6c;
      ray.fields.m_Origin.fields.z = local_60.fields.m_Origin.fields.z;
      ray.fields.m_Origin.fields.x = local_60.fields.m_Origin.fields.x;
      ray.fields.m_Origin.fields.y = local_60.fields.m_Origin.fields.y;
      bVar2 = UnityEngine_Physics__Raycast_69da1f0(ray,&local_38,1000.0,layerMask,(MethodInfo *)0x0);
      if (bVar2) {
        UVar3 = UnityEngine_RaycastHit__get_point(&local_38,(MethodInfo *)0x0);
        local_90 = UVar3.fields.z;
        local_88 = UVar3.fields._0_8_;
      }
      else {
        local_88._0_4_ = local_60.fields.m_Origin.fields.x;
        local_88._4_4_ = local_60.fields.m_Origin.fields.y;
        local_88 = CONCAT44(local_88._4_4_ + (float)local_48._4_4_ * 1000.0,
                            (float)local_88 + (float)local_48._0_4_ * 1000.0);
        local_90 = local_60.fields.m_Origin.fields.z + local_60.fields.m_Direction.fields.z * 1000.0;
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      UVar3.fields.z = local_90;
      UVar3.fields.x = (float)local_88;
      UVar3.fields.y = local_88._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,UVar3,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$GetCursorAimDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection (const MethodInfo* method);
// 0x5adf9a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetCursorAimDirection(MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Ray_o local_20;
  
  if (Il2CppMethodInitialized_07546de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546de3 = '\x01';
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this = (pCVar1->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UVar2 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_68c1290(&local_20,__this,UVar2,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      UVar2.fields.z = local_20.fields.m_Direction.fields.z;
      UVar2.fields.x = local_20.fields.m_Direction.fields.x;
      UVar2.fields.y = local_20.fields.m_Direction.fields.y;
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,UVar2,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$GetMouseSpeed
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed (const MethodInfo* method);
// 0x5adfa80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMouseSpeed(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar1;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_07546de4 = '\x01';
  }
  value.fields.x = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
  fVar1 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  value.fields.y = fVar1;
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetMousePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetMousePosition (const MethodInfo* method);
// 0x5adfb20

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetMousePosition(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Cameras_BaseCamera_c *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_07546de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546de5 = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      UVar5 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
      UVar5.fields.z = UVar5.fields.z;
      fVar4 = UVar5.fields.x;
      UVar5.fields.y = UVar5.fields.y;
      goto label_05adfbb0;
    }
  }
  UVar5 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  UVar5.fields.z = UVar5.fields.z;
  fVar4 = UVar5.fields.x;
  UVar5.fields.y = UVar5.fields.y;
label_05adfbb0:
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  UVar5.fields.y = UVar5.fields.y;
  UVar5.fields.x = fVar4;
  UVar5.fields.z = UVar5.fields.z;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,UVar5,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$GetScreenDimensions
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions (const MethodInfo* method);
// 0x5adfc10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicInputBuiltin__GetScreenDimensions(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546de6 = '\x01';
  }
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  value.fields.x = (float)iVar1;
  value.fields.y = (float)iVar2;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  value.fields.z = 0.0;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyDefaultEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x5adfc90

void CustomLogic_CustomLogicInputBuiltin__SetKeyDefaultEnabled
               (System_String_o *key,bool enabled,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool bVar3;
  Settings_KeybindSetting_o *item;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,enabled);
  if (Il2CppMethodInitialized_07546de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
    Il2CppMethodInitialized_07546de7 = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method_00);
  uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  if (enabled) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar2,(Il2CppObject *)item,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (!bVar3) {
        return;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar2,(Il2CppObject *)item,
                   (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
        return;
      }
    }
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar2,(Il2CppObject *)item,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (bVar3) {
        return;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar2,(Il2CppObject *)item,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$SetKeyHold
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetKeyHold (System_String_o* key, bool enabled, const MethodInfo* method);
// 0x5adfdf0

void CustomLogic_CustomLogicInputBuiltin__SetKeyHold(System_String_o *key,bool enabled,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool bVar3;
  Settings_KeybindSetting_o *item;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,enabled);
  if (Il2CppMethodInitialized_07546de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
    Il2CppMethodInitialized_07546de8 = '\x01';
  }
  item = CustomLogic_CustomLogicInputBuiltin__GetKeybind(key,method_00);
  uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  if (enabled) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar2,(Il2CppObject *)item,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (bVar3) {
        return;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar2,(Il2CppObject *)item,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
        return;
      }
    }
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar2,(Il2CppObject *)item,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
      if (!bVar3) {
        return;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar2,(Il2CppObject *)item,
                   (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputBuiltin$$SetCategoryKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled (System_String_o* category, bool enabled, const MethodInfo* method);
// 0x5adff60
// eh: try 0x5ae018f..0x5ae04da -> pad 0x5ae04f0 (+17 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ae050c..0x5ae0511 -> pad 0x5ae0516 cleanup
// eh: try 0x5ae0519..0x5ae0523 -> pad 0x5ae052b catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae0125: lea rbp, [rip + 0x17992cc]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5ae012c: lea r12, [rip + 0x179799d]  ; TypeInfo_System_Collections_DictionaryEntry
// asm:   0x5ae0133: lea r13, [rip + 0x179a1ce]  ; TypeInfo_Settings_KeybindSetting
// asm:   0x5ae013a: lea r14, [rip + 0x1796dcf]  ; TypeInfo_CustomLogic_CustomLogicManager
// asm:   0x5ae0141: jmp 0x5ae015d
// asm:   0x5ae0150: mov rbx, qword ptr [rsp]
// asm:   0x5ae0154: test rbx, rbx
// asm:   0x5ae0157: je 0x5ae049a
// asm:   0x5ae017d: nop dword ptr [rax]
// asm:   0x5ae04c8: mov rdi, r14
// asm:   0x5ae04cb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae04da: jmp 0x5ae04f4
// asm:   0x5ae04dc: jmp 0x5ae04f4
// asm:   0x5ae04de: jmp 0x5ae04f4
// asm:   0x5ae04e0: jmp 0x5ae04f4
// asm:   0x5ae04e2: jmp 0x5ae04f4
// asm:   0x5ae04e4: jmp 0x5ae04f4
// asm:   0x5ae04e6: jmp 0x5ae04f4
// asm:   0x5ae04e8: jmp 0x5ae04f4
// asm:   0x5ae04ea: jmp 0x5ae04f4
// asm:   0x5ae04ec: jmp 0x5ae04f4
// asm:   0x5ae04ee: jmp 0x5ae04f4
// asm:   0x5ae04f0: jmp 0x5ae04f4
// asm:   0x5ae04f2: jmp 0x5ae04f4
// asm:   0x5ae04f4: mov rbx, rax
// asm:   0x5ae04f7: cmp edx, 1
// asm:   0x5ae04fa: jne 0x5ae0519
// asm:   0x5ae04fc: mov rdi, rbx
// asm:   0x5ae04ff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae0504: mov r14, qword ptr [rax]
// asm:   0x5ae0507: mov qword ptr [rsp + 0x10], r14
// asm:   0x5ae050c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae0511: jmp 0x5ae040f
// asm:   0x5ae0516: mov rbx, rax
// asm:   0x5ae0519: lea rdi, [rsp + 0x10]
// asm:   0x5ae051e: call 0x2fd6190  ; il2cpp_runtime_helper_02fd6190()
// asm:   0x5ae0523: mov rdi, rbx
// asm:   0x5ae0526: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae052b: mov rdi, rax
// asm:   0x5ae052e: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled
               (System_String_o *category,bool enabled,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Settings_InputSettings_o *pSVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  long *plVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Il2CppObject *item;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  bool bVar9;
  char cVar10;
  Il2CppObject *pIVar11;
  VirtualInvokeData *pVVar12;
  void *pvVar13;
  System_String_o *message;
  ulong uVar14;
  long lVar15;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07546de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_DictionaryEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid input category: ");
    il2cpp_codegen_initialize_runtime_metadata(&". Valid categories are: General, Human, Titan, Interaction");
    Il2CppMethodInitialized_07546de9 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar3 != (Settings_InputSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).Settings, pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)
     ) {
    bVar9 = System_Collections_Specialized_OrderedDictionary__Contains
                      (pSVar4,(Il2CppObject *)category,(MethodInfo *)0x0);
    if (!bVar9) {
      message = System_String__Concat_5301f10
                          ("Invalid input category: ",category,". Valid categories are: General, Human, Titan, Interaction",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Settings,
        pSVar4 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) &&
       (pIVar11 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar4,(Il2CppObject *)category,(MethodInfo *)0x0),
       pIVar11 != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_Settings_SaveableSettingsContainer->_2).typeHierarchyDepth;
      if (((pIVar11->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_SaveableSettingsContainer)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar11);
      }
      plVar5 = pIVar11[1].monitor;
      if (plVar5 != (long *)0x0) {
        pIVar11 = (Il2CppObject *)(**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        local_40 = (undefined1 *)&local_58;
        local_48 = 0;
        local_38 = &local_50;
        do {
          local_58 = pIVar11;
          if (pIVar11 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar6 = pIVar11->klass;
          uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
          if (uVar14 != 0) {
            pIVar7 = (pIVar6->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar7->interfaceType + lVar15) ==
                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                pVVar12 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar15);
                goto label_05ae01b3;
              }
              lVar15 = lVar15 + 0x10;
            } while (uVar14 * 0x10 != lVar15);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ae01b3:
          cVar10 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
          pIVar11 = local_58;
          if (cVar10 == '\0') {
            pIVar11 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
            if (pIVar11 == (Il2CppObject *)0x0) {
              return;
            }
            pIVar6 = pIVar11->klass;
            uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
            local_50 = pIVar11;
            if (uVar14 == 0) goto label_05ae045f;
            pIVar7 = (pIVar6->_1).interfaceOffsets;
            lVar15 = 0;
            goto label_05ae0450;
          }
          if (local_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar6 = local_58->klass;
          uVar14 = (ulong)(pIVar6->_2).interface_offsets_count;
          if (uVar14 != 0) {
            pIVar7 = (pIVar6->_1).interfaceOffsets;
            lVar15 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar15) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar12 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar15) + 1);
                goto label_05ae0247;
              }
              lVar15 = lVar15 + 0x10;
            } while (uVar14 * 0x10 != lVar15);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05ae0247:
          pIVar11 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
          if (pIVar11 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pIVar11->klass->_1).element_class !=
              (TypeInfo_System_Collections_DictionaryEntry->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar11);
          }
          pvVar13 = il2cpp_vm_Object_Unbox(pIVar11);
          item = *(Il2CppObject **)((long)pvVar13 + 8);
          pIVar11 = local_58;
          if (item != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
            if ((bVar1 <= (item->klass->_2).typeHierarchyDepth) &&
               ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
              uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
              if (enabled) {
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar8,item,
                                   (MethodInfo_4FB3720 *)
                                   MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
                pIVar11 = local_58;
                if (bVar9) {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                           TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_HashSet_object___Remove
                            (pSVar8,item,
                             (MethodInfo_4FB39F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Remove);
                  pIVar11 = local_58;
                }
              }
              else {
                if (uVar2 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar9 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar8,item,
                                   (MethodInfo_4FB3720 *)
                                   MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
                pIVar11 = local_58;
                if (!bVar9) {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                           TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
                  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (pSVar8,item,
                             (MethodInfo_4FB4450 *)
                             MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Add);
                  pIVar11 = local_58;
                }
              }
            }
          }
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
  while (lVar15 = lVar15 + 0x10, uVar14 * 0x10 != lVar15) {
label_05ae0450:
    if (*(System_IDisposable_c **)((long)&pIVar7->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar12 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar15);
      goto label_05ae047d;
    }
  }
label_05ae045f:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ae047d:
  (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetGeneralKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled (bool enabled, const MethodInfo* method);
// 0x5ae0540

void CustomLogic_CustomLogicInputBuiltin__SetGeneralKeysEnabled(bool enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_07546dea = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("General",enabled,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetInteractionKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled (bool enabled, const MethodInfo* method);
// 0x5ae0580

void CustomLogic_CustomLogicInputBuiltin__SetInteractionKeysEnabled(bool enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_07546deb = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Interaction",enabled,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetTitanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x5ae05c0

void CustomLogic_CustomLogicInputBuiltin__SetTitanKeysEnabled(bool enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_07546dec = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Titan",enabled,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$SetHumanKeysEnabled
// il2cpp: void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled (bool enabled, const MethodInfo* method);
// 0x5ae0600

void CustomLogic_CustomLogicInputBuiltin__SetHumanKeysEnabled(bool enabled,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07546ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_07546ded = '\x01';
    in_RDX = extraout_RDX;
  }
  CustomLogic_CustomLogicInputBuiltin__SetCategoryKeysEnabled("Human",enabled,in_RDX);
  return;
}


// CustomLogic.CustomLogicInputBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputBuiltin__get_ClassName (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x5ae0640

System_String_o *
CustomLogic_CustomLogicInputBuiltin__get_ClassName
          (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Input");
    Il2CppMethodInitialized_07546dee = '\x01';
  }
  return "Input";
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsAbstract (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x5ae0670

bool CustomLogic_CustomLogicInputBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_IsStatic (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x5ae0680

bool CustomLogic_CustomLogicInputBuiltin__get_IsStatic
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicInputBuiltin_o* __this, const MethodInfo* method);
// 0x5ae0690

bool CustomLogic_CustomLogicInputBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



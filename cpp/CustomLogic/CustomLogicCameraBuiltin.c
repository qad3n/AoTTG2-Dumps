// Type: CustomLogic.CustomLogicCameraBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCameraBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCameraBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraBuiltin_o* CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac6160

CustomLogic_CustomLogicCameraBuiltin_o *
CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin);
    Il2CppMethodInitialized_07546c76 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCameraBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin);
  if (Il2CppMethodInitialized_07546c5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c5d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCameraBuiltin_o *)__this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5ac87a0

void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546cdd = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5ac8810

void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetManual>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8820

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546cde = '\x01';
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
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (Il2CppMethodInitialized_07546e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546e96 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera = bVar2;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8900

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  
  if (Il2CppMethodInitialized_07546cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546cdf = '\x01';
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
  position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__SetPosition(position,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8980

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  
  if (Il2CppMethodInitialized_07546ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce0 = '\x01';
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
  rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__SetRotation(rotation,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetVelocity>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8a00

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *velocity;
  
  if (Il2CppMethodInitialized_07546ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce1 = '\x01';
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
  velocity = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__SetVelocity(velocity,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8a80

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  
  if (Il2CppMethodInitialized_07546ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce2 = '\x01';
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
  position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__LookAt(position,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFOV>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8b00

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  float fVar2;
  
  if (Il2CppMethodInitialized_07546ce3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce3 = '\x01';
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
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (Il2CppMethodInitialized_07546e97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546e97 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV = fVar2;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraMode>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8c00

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *mode;
  
  if (Il2CppMethodInitialized_07546ce4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce4 = '\x01';
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
  mode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(mode,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetDistance>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8c80

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicCameraBuiltin__ResetDistance((MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCameraMode>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8c90

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode((MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraLocked>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8ca0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546ce5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce5 = '\x01';
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
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (Il2CppMethodInitialized_07546e98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546e98 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked = bVar2;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCursorVisible>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac8d80

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546ce6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ce6 = '\x01';
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
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (Il2CppMethodInitialized_07546e99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546e99 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible = bVar2;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac6280

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCameraBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCursorVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsManual");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"SetVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraLocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FollowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"SetManual");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    Il2CppMethodInitialized_07546c77 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6dd1aa8b) {
    if (uVar2 < 0x42f35941) {
      if (uVar2 < 0x1e9e9f86) {
        if (uVar2 == 0x232777f) {
          bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x24a169e7) {
        bVar1 = System_String__op_Equality(name,"SetCameraMode",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x2e32cf0b) {
        bVar1 = System_String__op_Equality(name,"FollowDistance",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x42f35940) {
        bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x56e974f5) {
      if (uVar2 == 0x51f457ad) {
        bVar1 = System_String__op_Equality(name,"SetCursorVisible",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x56e974f4) {
        bVar1 = System_String__op_Equality(name,"SetVelocity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0x5853691b) {
      bVar1 = System_String__op_Equality(name,"ResetDistance",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x5e2c4c73) {
      bVar1 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x6dd1aa8a) {
      bVar1 = System_String__op_Equality(name,"SetCameraLocked",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xd6a213a9) {
    if (uVar2 < 0x8adad751) {
      if (uVar2 == 0x8adad750) {
        bVar1 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x6fcec725) {
        bVar1 = System_String__op_Equality(name,"SetManual",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xba408252) {
      bVar1 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd11e3ab2) {
      bVar1 = System_String__op_Equality(name,"SetFOV",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xd6a213a8) {
      bVar1 = System_String__op_Equality(name,"ResetCameraMode",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe27f342b) {
    if (uVar2 == 0xdc33653d) {
      bVar1 = System_String__op_Equality(name,"SetRotation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdeef5e95) {
      bVar1 = System_String__op_Equality(name,"CameraMode",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe27f342a) {
      bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe50883ba) {
    bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf3cda0fc) {
    bVar1 = System_String__op_Equality(name,"FOV",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf1bacbd3) {
    bVar1 = System_String__op_Equality(name,"IsManual",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCameraBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__IsManual
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual (const MethodInfo* method);
// 0x5ac6a80

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5ac6b20

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x5ac6bc0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c7a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x5ac6c60

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c7b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FOV
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV (const MethodInfo* method);
// 0x5ac6d00

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c7c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__CameraMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode (const MethodInfo* method);
// 0x5ac6da0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c7d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x5ac6e40

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546c7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c7e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x5ac6f20

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546c7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c7f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x5ac7000

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546c80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c80 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FollowDistance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance (const MethodInfo* method);
// 0x5ac70e0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546c81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_07546c81 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetManual
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual (const MethodInfo* method);
// 0x5ac71c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac71f5: jmp 0x5ac7265

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c82 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x5ac7300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7335: jmp 0x5ac73a5

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c83 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation (const MethodInfo* method);
// 0x5ac7440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7475: jmp 0x5ac74e5

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c84 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetVelocity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity (const MethodInfo* method);
// 0x5ac7580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac75b5: jmp 0x5ac7625

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c85 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x5ac76c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac76f5: jmp 0x5ac7765

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c86 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetFOV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV (const MethodInfo* method);
// 0x5ac7800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7835: jmp 0x5ac78a5

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c87 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode (const MethodInfo* method);
// 0x5ac7940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7975: jmp 0x5ac79e5

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c88 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetDistance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance (const MethodInfo* method);
// 0x5ac7a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7ab5: jmp 0x5ac7b25

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c89 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode (const MethodInfo* method);
// 0x5ac7bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7bf5: jmp 0x5ac7c65

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c8a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraLocked
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked (const MethodInfo* method);
// 0x5ac7d00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7d35: jmp 0x5ac7da5

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c8b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCursorVisible
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible (const MethodInfo* method);
// 0x5ac7e40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac7e75: jmp 0x5ac7ee5

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCameraBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546c8c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicCameraBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5ac7f80

void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546c8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCursorVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsManual");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"SetVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraLocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FollowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"SetManual");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    Il2CppMethodInitialized_07546c8d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsManual",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Velocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FOV",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CameraMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FollowDistance",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetManual",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetVelocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetFOV",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCameraMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetDistance",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetCameraMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCameraLocked",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCursorVisible",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__IsManual>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac82f0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546cdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546cdb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  local_9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac8370

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Position((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac8380

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Rotation((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac8390

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07546c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c62 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  value = (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraVelocity).fields;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FOV>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac8430

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  float local_c;
  
  if (Il2CppMethodInitialized_07546cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546cdc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  local_c = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__CameraMode>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac84b0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = CustomLogic_CustomLogicCameraBuiltin__get_CameraMode((MethodInfo *)__i);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac84c0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Forward((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5ac84d0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546c8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546c8e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__set_Forward(value,method_00);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac8530

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Right((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5ac8540

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546c8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546c8f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__set_Right(value,method_00);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac85a0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_Up((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5ac85b0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546c90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546c90 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicCameraBuiltin__set_Up(value,method_00);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x5ac8610

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  Il2CppObject *pIVar2;
  undefined1 auStack_4 [4];
  
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this == (Cameras_InGameCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar2;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5ac86b0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546c91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546c91 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 == (Cameras_BaseCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  *(float *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x68)) + 4) = fVar3;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin___ctor (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x5ac4960

void CustomLogic_CustomLogicCameraBuiltin___ctor
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c5d = '\x01';
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


// CustomLogic.CustomLogicCameraBuiltin$$get_CurrentCamera
// il2cpp: Cameras_InGameCamera_o* CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera (const MethodInfo* method);
// 0x5ac49d0

Cameras_InGameCamera_o * CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
    }
  }
  return pCVar2;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsManual
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsManual (const MethodInfo* method);
// 0x5ac4a50

bool CustomLogic_CustomLogicCameraBuiltin__get_IsManual(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c5f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    return TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x49);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Position (const MethodInfo* method);
// 0x5ac4ac0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Position(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546c60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c60 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Rotation (const MethodInfo* method);
// 0x5ac4bb0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Rotation(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_07546c61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c61 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      local_18 = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
      UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
      euler.fields.x = UVar4.fields.x * 57.29578;
      euler.fields.y = UVar4.fields.y * 57.29578;
      euler.fields.z = UVar4.fields.z * 57.29578;
      UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,UVar4,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Velocity (const MethodInfo* method);
// 0x5ac4ce0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Velocity(MethodInfo *method)

{
  UnityEngine_Vector3_Fields value;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07546c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c62 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  value = (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraVelocity).fields;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,(UnityEngine_Vector3_o)value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FOV
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FOV (const MethodInfo* method);
// 0x5ac4d80

float CustomLogic_CustomLogicCameraBuiltin__get_FOV(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c63 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    return TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
  }
  return *(float *)((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x4c);
}


// CustomLogic.CustomLogicCameraBuiltin$$get_CameraMode
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_CameraMode (const MethodInfo* method);
// 0x5ac4df0

System_String_o * CustomLogic_CustomLogicCameraBuiltin__get_CameraMode(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  System_Nullable_CameraInputMode__Fields SVar3;
  Cameras_BaseCamera_o *pCVar4;
  char cVar5;
  System_String_o *pSVar6;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_07546c64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_get_HasValue);
    Il2CppMethodInitialized_07546c64 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    SVar3 = (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields;
    cVar5 = SVar3.hasValue;
  }
  else {
    SVar3 = *(System_Nullable_CameraInputMode__Fields *)
             ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x78);
    cVar5 = SVar3.hasValue;
  }
  if (cVar5 == '\0') {
    if (Il2CppMethodInitialized_07546c5e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_07546c5e = '\x01';
    }
    pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar4 == (Cameras_BaseCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    local_10 = *(int32_t *)&(*(uint64_t *)((char *)pCVar4 + 0x68));
  }
  else {
    local_10 = SVar3.value;
  }
  local_20.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_20.monitor = (void *)0xffffffffffffffff;
  pSVar6 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar6;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Forward (const MethodInfo* method);
// 0x5ac4f40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Forward(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c65 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_forward(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Forward (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5ac5030

void CustomLogic_CustomLogicCameraBuiltin__set_Forward
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  CustomLogic_CustomLogicManager_StaticFields *pCVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o UStack_28;
  
  if (Il2CppMethodInitialized_07546c66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c66 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
label_05ac5205:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_forward
                (pUVar4,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07546c5e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07546c5e = '\x01';
      }
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) goto label_05ac5205;
        pUVar3 = (pCVar2->fields).Cache;
        if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UStack_28 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
          UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_28,(MethodInfo *)0x0);
          euler.fields.x = UVar6.fields.x * 57.29578;
          euler.fields.y = UVar6.fields.y * 57.29578;
          euler.fields.z = UVar6.fields.z * 57.29578;
          UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          (pCVar5->CameraRotation).fields.x = UVar6.fields.x;
          (pCVar5->CameraRotation).fields.y = UVar6.fields.y;
          (pCVar5->CameraRotation).fields.z = UVar6.fields.z;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Right (const MethodInfo* method);
// 0x5ac5210

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicCameraBuiltin__get_Right(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546c67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c67 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_right(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Right (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5ac5300

void CustomLogic_CustomLogicCameraBuiltin__set_Right
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  CustomLogic_CustomLogicManager_StaticFields *pCVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o UStack_28;
  
  if (Il2CppMethodInitialized_07546c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c68 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
label_05ac54d5:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_right
                (pUVar4,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07546c5e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07546c5e = '\x01';
      }
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) goto label_05ac54d5;
        pUVar3 = (pCVar2->fields).Cache;
        if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UStack_28 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
          UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_28,(MethodInfo *)0x0);
          euler.fields.x = UVar6.fields.x * 57.29578;
          euler.fields.y = UVar6.fields.y * 57.29578;
          euler.fields.z = UVar6.fields.z * 57.29578;
          UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          (pCVar5->CameraRotation).fields.x = UVar6.fields.x;
          (pCVar5->CameraRotation).fields.y = UVar6.fields.y;
          (pCVar5->CameraRotation).fields.z = UVar6.fields.z;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Up (const MethodInfo* method);
// 0x5ac54e0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicCameraBuiltin__get_Up(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546c69 = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      value = UnityEngine_Transform__get_up(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Up (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5ac55d0

void CustomLogic_CustomLogicCameraBuiltin__set_Up
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  CustomLogic_CustomLogicManager_StaticFields *pCVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o UStack_28;
  
  if (Il2CppMethodInitialized_07546c6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c6a = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
label_05ac57a5:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       ((value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_up
                (pUVar4,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07546c5e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07546c5e = '\x01';
      }
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) goto label_05ac57a5;
        pUVar3 = (pCVar2->fields).Cache;
        if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UStack_28 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
          UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_28,(MethodInfo *)0x0);
          euler.fields.x = UVar6.fields.x * 57.29578;
          euler.fields.y = UVar6.fields.y * 57.29578;
          euler.fields.z = UVar6.fields.z * 57.29578;
          UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          (pCVar5->CameraRotation).fields.x = UVar6.fields.x;
          (pCVar5->CameraRotation).fields.y = UVar6.fields.y;
          (pCVar5->CameraRotation).fields.z = UVar6.fields.z;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FollowDistance
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance (const MethodInfo* method);
// 0x5ac57b0

float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  float fVar2;
  
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this == (Cameras_InGameCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  fVar2 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicCameraBuiltin$$set_FollowDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance (float value, const MethodInfo* method);
// 0x5ac5830

void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance(float value,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 == (Cameras_BaseCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  *(float *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x68)) + 4) = value;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetManual
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetManual (bool manual, const MethodInfo* method);
// 0x5ac58c0

void CustomLogic_CustomLogicCameraBuiltin__SetManual(bool manual,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c6b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera = manual;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetPosition (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5ac5910

void CustomLogic_CustomLogicCameraBuiltin__SetPosition
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Cameras_InGameCamera_o *__this;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07546c6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c6c = '\x01';
  }
  if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar2 = (position->fields).Value.fields.z;
    fVar4 = (position->fields).Value.fields.x;
    fVar5 = (position->fields).Value.fields.y;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar3->CameraPosition).fields.z = fVar2;
    (pCVar3->CameraPosition).fields.x = fVar4;
    (pCVar3->CameraPosition).fields.y = fVar5;
    __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (__this != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      Cameras_InGameCamera__SyncCustomPosition(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetRotation
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetRotation (CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x5ac59f0

void CustomLogic_CustomLogicCameraBuiltin__SetRotation
               (CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Cameras_InGameCamera_o *__this;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07546c6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c6d = '\x01';
  }
  if (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar2 = (rotation->fields).Value.fields.z;
    fVar4 = (rotation->fields).Value.fields.x;
    fVar5 = (rotation->fields).Value.fields.y;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar3->CameraRotation).fields.z = fVar2;
    (pCVar3->CameraRotation).fields.x = fVar4;
    (pCVar3->CameraRotation).fields.y = fVar5;
    __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (__this != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      Cameras_InGameCamera__SyncCustomPosition(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetVelocity
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetVelocity (CustomLogic_CustomLogicVector3Builtin_o* velocity, const MethodInfo* method);
// 0x5ac5ad0

void CustomLogic_CustomLogicCameraBuiltin__SetVelocity
               (CustomLogic_CustomLogicVector3Builtin_o *velocity,MethodInfo *method)

{
  float fVar1;
  CustomLogic_CustomLogicManager_StaticFields *pCVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07546c6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c6e = '\x01';
  }
  if (velocity == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = (velocity->fields).Value.fields.z;
  fVar3 = (velocity->fields).Value.fields.x;
  fVar4 = (velocity->fields).Value.fields.y;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  (pCVar2->CameraVelocity).fields.z = fVar1;
  (pCVar2->CameraVelocity).fields.x = fVar3;
  (pCVar2->CameraVelocity).fields.y = fVar4;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__LookAt (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5ac5b50

void CustomLogic_CustomLogicCameraBuiltin__LookAt
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  CustomLogic_CustomLogicManager_StaticFields *pCVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_28;
  
  if (Il2CppMethodInitialized_07546c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c6f = '\x01';
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
label_05ac5d25:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (pCVar2->fields).Cache;
    if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
       ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0 &&
        (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__LookAt_692e330
                (pUVar4,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07546c5e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07546c5e = '\x01';
      }
      pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) goto label_05ac5d25;
        pUVar3 = (pCVar2->fields).Cache;
        if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar4 = (pUVar3->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          local_28 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
          UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_28,(MethodInfo *)0x0);
          euler.fields.x = UVar6.fields.x * 57.29578;
          euler.fields.y = UVar6.fields.y * 57.29578;
          euler.fields.z = UVar6.fields.z * 57.29578;
          UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
          (pCVar5->CameraRotation).fields.x = UVar6.fields.x;
          (pCVar5->CameraRotation).fields.y = UVar6.fields.y;
          (pCVar5->CameraRotation).fields.z = UVar6.fields.z;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetFOV
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetFOV (float fov, const MethodInfo* method);
// 0x5ac5d30

void CustomLogic_CustomLogicCameraBuiltin__SetFOV(float fov,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c70 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV = fov;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode (System_String_o* mode, const MethodInfo* method);
// 0x5ac5da0

void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(System_String_o *mode,MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  System_Nullable_CameraInputMode__Fields local_10;
  
  if (Il2CppMethodInitialized_07546c71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_Parse_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07546c71 = '\x01';
  }
  bVar1 = System_String__op_Equality(mode,"null",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
         (System_Nullable_CameraInputMode__Fields)0x0;
    return;
  }
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  value = System_Enum__Parse_Int32Enum_
                    (mode,(MethodInfo_34DC290 *)MethodInfo_System_Enum_Parse_CameraInputMode);
  local_10.hasValue = false;
  local_10._1_3_ = 0;
  local_10.value = 0;
  System_Nullable_Int32Enum____ctor
            ((System_Nullable_Int32Enum__o *)&local_10,value,
             (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_CameraInputMode_ctor);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields = local_10;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetDistance (const MethodInfo* method);
// 0x5ac5eb0

void CustomLogic_CustomLogicCameraBuiltin__ResetDistance(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this == (Cameras_InGameCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Cameras_InGameCamera__ResetDistance(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode (const MethodInfo* method);
// 0x5ac5f30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac602a: jmp 0x5ac5f8c

void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Cameras_InGameCamera_o *__this;
  
  if (Il2CppMethodInitialized_07546c72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c72 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
         (System_Nullable_CameraInputMode__Fields)0x0;
  }
  else {
    *(undefined8 *)((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x78) = 0;
  }
  if (Il2CppMethodInitialized_07546c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07546c5e = '\x01';
  }
  __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this == (Cameras_InGameCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  Cameras_InGameCamera__ResetCameraMode(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraLocked
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked (bool locked, const MethodInfo* method);
// 0x5ac6040

void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked(bool locked,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c73 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked = locked;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCursorVisible
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible (bool visible, const MethodInfo* method);
// 0x5ac60a0

void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible(bool visible,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546c74 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible = visible;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_ClassName (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x5ac6100

System_String_o *
CustomLogic_CustomLogicCameraBuiltin__get_ClassName
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    Il2CppMethodInitialized_07546c75 = '\x01';
  }
  return "Camera";
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x5ac6130

bool CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsStatic (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x5ac6140

bool CustomLogic_CustomLogicCameraBuiltin__get_IsStatic
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x5ac6150

bool CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



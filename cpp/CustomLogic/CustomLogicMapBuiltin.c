// Type: CustomLogic.CustomLogicMapBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapBuiltin_o* CustomLogic_CustomLogicMapBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ae8db0

CustomLogic_CustomLogicMapBuiltin_o *
CustomLogic_CustomLogicMapBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicMapBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicMapBuiltin_c *method_00;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e4d = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  if (Il2CppMethodInitialized_07546e30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e30 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  method_00 = TypeInfo_CustomLogic_CustomLogicMapBuiltin;
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits((MethodInfo *)method_00);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5aeaf70

void CustomLogic_CustomLogicMapBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e62 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5aeafe0

void CustomLogic_CustomLogicMapBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindAllMapObjects>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindAllMapObjects_b__2_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeaff0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindAllMapObjects_b__2_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07546e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e63 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin;
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin = (CustomLogic_CustomLogicMapBuiltin_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pCVar2 = CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects((MethodInfo *)klass);
    return (Il2CppObject *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects((MethodInfo *)klass);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByName>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByName_b__3_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb050

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByName_b__3_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *objectName;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e64 = '\x01';
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
  objectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName(objectName,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName(objectName,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByName>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByName_b__4_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb100

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByName_b__4_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *objectName;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e65 = '\x01';
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
  objectName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName(objectName,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName(objectName,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByRegex>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByRegex_b__5_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb1b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aeb257: jmp 0x5aeb295

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByRegex_b__5_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  bool sorted;
  System_String_o *pattern;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e66 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pattern = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((int)__a->max_length < 2) {
    sorted = false;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX;
  }
  else {
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sorted = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (pIVar2,(MethodInfo_34BD860 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX_00;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    method_00 = extraout_RDX_01;
  }
  pCVar3 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex(pattern,sorted,method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByComponent>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByComponent_b__6_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb2c0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByComponent_b__6_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *className;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e67 = '\x01';
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
  className = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent(className,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent(className,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByComponent>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByComponent_b__7_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb370

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByComponent_b__7_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *className;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e68 = '\x01';
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
  className = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByID>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByID_b__8_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb420

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByID_b__8_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t id;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e69 = '\x01';
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
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int;
  id = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                 (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID(id,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID(id,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByTag>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByTag_b__9_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb4d0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByTag_b__9_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *tag;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e6a = '\x01';
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
  tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag(tag,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag(tag,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByTag>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByTag_b__10_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb580

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByTag_b__10_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *tag;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e6b = '\x01';
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
  tag = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag(tag,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag(tag,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByPlayer>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByPlayer_b__11_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb630

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByPlayer_b__11_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e6c = '\x01';
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
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin;
  player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer(player,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer(player,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObject>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObject_b__12_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb6e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aeb854: jmp 0x5aeb7f8

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObject_b__12_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicPrefabBuiltin_o *prefab;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicVector3Builtin_o *rotation;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *scale;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07546e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPrefabBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e6d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  prefab = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPrefabBuiltin);
  if ((int)__a->max_length < 2) {
    rotation = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    position = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  else {
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar2,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    if ((int)__a->max_length < 3) {
      rotation = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
    }
    else {
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar2,(MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                           );
      if (3 < (int)__a->max_length) {
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        scale = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                          );
        uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05aeb852;
      }
    }
  }
  scale = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
joined_r0x05aeb852:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  pCVar3 = CustomLogic_CustomLogicMapBuiltin__CreateMapObject(prefab,position,rotation,scale,in_R8);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObjectRaw>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObjectRaw_b__13_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb860

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObjectRaw_b__13_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *prefab;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e6e = '\x01';
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
  prefab = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw(prefab,method_00);
    return (Il2CppObject *)pCVar1;
  }
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw(prefab,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrefabFromMapObject>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__PrefabFromMapObject_b__14_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeb910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aeb9b7: jmp 0x5aeb9f5

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__PrefabFromMapObject_b__14_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  bool clearComponents;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  CustomLogic_CustomLogicPrefabBuiltin_o *pCVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e6f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  mapObject = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                        );
  if ((int)__a->max_length < 2) {
    clearComponents = false;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX;
  }
  else {
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    clearComponents =
         CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                   (pIVar2,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    method_00 = extraout_RDX_00;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    method_00 = extraout_RDX_01;
  }
  pCVar3 = CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject(mapObject,clearComponents,method_00);
  return (Il2CppObject *)pCVar3;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapObject>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapObject_b__15_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aeba20

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapObject_b__15_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool includeChildren;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e70 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    mapObject = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      includeChildren =
           CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (__a->m_Items[1],
                      (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      method_00 = extraout_RDX;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObject(mapObject,includeChildren,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CopyMapObject>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CopyMapObject_b__16_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aebb00

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CopyMapObject_b__16_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool includeChildren;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e71 = '\x01';
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
  pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapObjectBuiltin
                     );
  includeChildren = true;
  method_00 = extraout_RDX;
  if (1 < (int)__a->max_length) {
    pIVar1 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    includeChildren =
         CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                   (pIVar1,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    method_00 = extraout_RDX_00;
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    method_00 = extraout_RDX_01;
  }
  pCVar2 = CustomLogic_CustomLogicMapBuiltin__CopyMapObject(pCVar2,includeChildren,method_00);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapTargetable>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapTargetable_b__17_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aebc00

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapTargetable_b__17_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *targetable;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e72 = '\x01';
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
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapTargetableBuiltin;
  targetable = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicMapTargetableBuiltin
                         );
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable(targetable,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMesh>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMesh_b__18_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aebcb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aebccd: cmp byte ptr [rip + 0x1a5b16e], 0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMesh_b__18_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  System_Threading_Tasks_Task_o *__this_00;
  
  if (Il2CppMethodInitialized_07546e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e73 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_07546e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e42 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  else {
    __this_00 = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  if (__this_00 == (System_Threading_Tasks_Task_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Threading_Tasks_Task__Wait(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMeshAsync>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMeshAsync_b__19_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aebd80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aebd9d: cmp byte ptr [rip + 0x1a5b09f], 0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMeshAsync_b__19_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMapBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e74 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_07546e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e43 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ae8ef0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicMapBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMeshAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"FindAllMapObjects");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByID");
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapTargetable");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByName");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"PrefabFromMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByRegex");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObjectRaw");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByName");
    il2cpp_codegen_initialize_runtime_metadata(&"CopyMapObject");
    Il2CppMethodInitialized_07546e4e = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x6a75bbaf) {
    if (uVar2 < 0x3aa79d29) {
      if (uVar2 < 0x23f4b409) {
        if (uVar2 == 0x7042ece) {
          bVar1 = System_String__op_Equality(name,"FindMapObjectsByName",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x23f4b408) {
          bVar1 = System_String__op_Equality(name,"FindMapObjectsByComponent",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x34c16581) {
        bVar1 = System_String__op_Equality(name,"CopyMapObject",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3aa79d28) {
        bVar1 = System_String__op_Equality(name,"UpdateNavMesh",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x4df313e9) {
      if (uVar2 == 0x472155dc) {
        bVar1 = System_String__op_Equality(name,"DestroyMapTargetable",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x4df313e8) {
        bVar1 = System_String__op_Equality(name,"FindMapObjectsByPlayer",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x604b4ecd) {
      bVar1 = System_String__op_Equality(name,"FindMapObjectByName",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6889a906) {
      bVar1 = System_String__op_Equality(name,"CreateMapObject",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x6a75bbae) {
      bVar1 = System_String__op_Equality(name,"DestroyMapObject",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9bea5774) {
    if (uVar2 < 0x926c3e54) {
      if (uVar2 == 0x926c3e53) {
        bVar1 = System_String__op_Equality(name,"FindMapObjectByID",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7b196e7c) {
        bVar1 = System_String__op_Equality(name,"PrefabFromMapObject",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9947e69d) {
      bVar1 = System_String__op_Equality(name,"FindMapObjectByComponent",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9bea5773) {
      bVar1 = System_String__op_Equality(name,"FindAllMapObjects",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc985509d) {
    if (uVar2 == 0xbf6edce0) {
      bVar1 = System_String__op_Equality(name,"FindMapObjectsByRegex",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc985509c) {
      bVar1 = System_String__op_Equality(name,"UpdateNavMeshAsync",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xd805e00e) {
    bVar1 = System_String__op_Equality(name,"FindMapObjectByTag",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xea839630) {
    bVar1 = System_String__op_Equality(name,"CreateMapObjectRaw",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xecb4a36b) {
    bVar1 = System_String__op_Equality(name,"FindMapObjectsByTag",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindAllMapObjects
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects (const MethodInfo* method);
// 0x5ae95f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae9625: jmp 0x5ae9695

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e4f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName (const MethodInfo* method);
// 0x5ae9730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae9765: jmp 0x5ae97d5

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e50 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName (const MethodInfo* method);
// 0x5ae9870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae98a5: jmp 0x5ae9915

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e51 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByRegex
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex (const MethodInfo* method);
// 0x5ae99b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae99e5: jmp 0x5ae9a55

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e52 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent (const MethodInfo* method);
// 0x5ae9af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae9b25: jmp 0x5ae9b95

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e53 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent (const MethodInfo* method);
// 0x5ae9c30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae9c65: jmp 0x5ae9cd5

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e54 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByID
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID (const MethodInfo* method);
// 0x5ae9d70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae9da5: jmp 0x5ae9e15

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e55 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag (const MethodInfo* method);
// 0x5ae9eb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae9ee5: jmp 0x5ae9f55

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e56 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag (const MethodInfo* method);
// 0x5ae9ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea025: jmp 0x5aea095

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e57 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer (const MethodInfo* method);
// 0x5aea130
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea165: jmp 0x5aea1d5

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e58 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject (const MethodInfo* method);
// 0x5aea270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea2a5: jmp 0x5aea315

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e59 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObjectRaw
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw (const MethodInfo* method);
// 0x5aea3b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea3e5: jmp 0x5aea455

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e5a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__PrefabFromMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject (const MethodInfo* method);
// 0x5aea4f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea525: jmp 0x5aea595

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e5b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject (const MethodInfo* method);
// 0x5aea630
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea665: jmp 0x5aea6d5

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e5c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CopyMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject (const MethodInfo* method);
// 0x5aea770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea7a5: jmp 0x5aea815

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e5d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapTargetable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable (const MethodInfo* method);
// 0x5aea8b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aea8e8: jmp 0x5aea95b

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e5e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMesh
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh (const MethodInfo* method);
// 0x5aea9f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aeaa28: jmp 0x5aeaa9b

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e5f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMeshAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync (const MethodInfo* method);
// 0x5aeab30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aeab68: jmp 0x5aeabdb

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMapBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e60 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicMapBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMapBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5aeac70

void CustomLogic_CustomLogicMapBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMeshAsync");
    il2cpp_codegen_initialize_runtime_metadata(&"FindAllMapObjects");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByID");
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateNavMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapTargetable");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByName");
    il2cpp_codegen_initialize_runtime_metadata(&"DestroyMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"PrefabFromMapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectByTag");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByRegex");
    il2cpp_codegen_initialize_runtime_metadata(&"CreateMapObjectRaw");
    il2cpp_codegen_initialize_runtime_metadata(&"FindMapObjectsByName");
    il2cpp_codegen_initialize_runtime_metadata(&"CopyMapObject");
    Il2CppMethodInitialized_07546e61 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindAllMapObjects",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByRegex",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByComponent",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectByTag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByTag",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindMapObjectsByPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreateMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CreateMapObjectRaw",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PrefabFromMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DestroyMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CopyMapObject",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DestroyMapTargetable",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpdateNavMesh",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UpdateNavMeshAsync",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___c___cctor (const MethodInfo* method);
// 0x5aebe30

void CustomLogic_CustomLogicMapBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
    Il2CppMethodInitialized_07546e75 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9 =
       (CustomLogic_CustomLogicMapBuiltin___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___c___ctor (CustomLogic_CustomLogicMapBuiltin___c_o* __this, const MethodInfo* method);
// 0x5aebea0

void CustomLogic_CustomLogicMapBuiltin___c___ctor
               (CustomLogic_CustomLogicMapBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$<FindMapObjectsByRegex>b__8_0
// il2cpp: int32_t CustomLogic_CustomLogicMapBuiltin___c___FindMapObjectsByRegex_b__8_0 (CustomLogic_CustomLogicMapBuiltin___c_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x5aebeb0

int32_t CustomLogic_CustomLogicMapBuiltin___c___FindMapObjectsByRegex_b__8_0
                  (CustomLogic_CustomLogicMapBuiltin___c_o *__this,Il2CppObject *a,Il2CppObject *b,
                  MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_07546e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    Il2CppMethodInitialized_07546e76 = '\x01';
  }
  if (a != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
    if (((a->klass->_2).typeHierarchyDepth < bVar1) ||
       ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
      il2cpp_codegen_raise_invalid_cast_exception(a);
    }
    if (((a[3].klass != (Il2CppClass *)0x0) &&
        (pvVar2 = ((a[3].klass)->_1).byval_arg.data, pvVar2 != (void *)0x0)) && (b != (Il2CppObject *)0x0)) {
      if (((b->klass->_2).typeHierarchyDepth < bVar1) ||
         ((b->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(b);
      }
      if ((b[3].klass != (Il2CppClass *)0x0) &&
         (pvVar3 = ((b[3].klass)->_1).byval_arg.data, pvVar3 != (void *)0x0)) {
        iVar4 = System_String__Compare
                          (*(System_String_o **)((long)pvVar2 + 0x30),
                           *(System_String_o **)((long)pvVar3 + 0x30),(MethodInfo *)0x0);
        return iVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___ctor (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x5ae5640

void CustomLogic_CustomLogicMapBuiltin___ctor(CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicMapBuiltin_c *method_00;
  
  if (Il2CppMethodInitialized_07546e30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e30 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_CustomLogic_CustomLogicMapBuiltin;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits((MethodInfo *)method_00);
    return;
  }
  CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits
            ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$ResetRuntimeNetworkedSpawnLimits
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits (const MethodInfo* method);
// 0x5ae56c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae5781: jmp 0x5ae57a0

void CustomLogic_CustomLogicMapBuiltin__ResetRuntimeNetworkedSpawnLimits(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Utility_RateLimit_o *__this;
  int32_t iVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_07546e31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RateLimit);
    Il2CppMethodInitialized_07546e31 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount = 0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
  if (bVar2) {
    Utility_RateLimit___ctor(__this,0x28,1.0,(MethodInfo *)0x0);
    iVar4 = 1000;
    iVar3 = 1000;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    Utility_RateLimit___ctor(__this,0x14,1.0,(MethodInfo *)0x0);
    iVar4 = 300;
    iVar3 = 300;
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    iVar3 = iVar4;
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit);
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount = iVar3;
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$FindAllMapObjects
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects (const MethodInfo* method);
// 0x5ae57e0
// eh: try 0x5ae594f..0x5ae5a45 -> pad 0x5ae5a4f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae5a69..0x5ae5a6e -> pad 0x5ae5a8f cleanup
// eh: try 0x5ae5a92..0x5ae5a9c -> pad 0x5ae5aa4 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae5a45: jmp 0x5ae5a51
// asm:   0x5ae5a47: jmp 0x5ae5a51
// asm:   0x5ae5a49: jmp 0x5ae5a51
// asm:   0x5ae5a4b: jmp 0x5ae5a51
// asm:   0x5ae5a4d: jmp 0x5ae5a51
// asm:   0x5ae5a4f: jmp 0x5ae5a51
// asm:   0x5ae5a51: mov rbx, rax
// asm:   0x5ae5a54: cmp edx, 1
// asm:   0x5ae5a57: jne 0x5ae5a92
// asm:   0x5ae5a59: mov rdi, rbx
// asm:   0x5ae5a5c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae5a61: mov rbx, qword ptr [rax]
// asm:   0x5ae5a64: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ae5a69: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae5a6e: lea rax, [rip + 0x17a9c83]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x5ae5a75: mov rsi, qword ptr [rax]
// asm:   0x5ae5a78: lea rdi, [rsp + 0x10]
// asm:   0x5ae5a7d: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5ae5a82: test rbx, rbx
// asm:   0x5ae5a85: je 0x5ae5a1d
// asm:   0x5ae5a87: mov rdi, rbx
// asm:   0x5ae5a8a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae5a8f: mov rbx, rax
// asm:   0x5ae5a92: lea rdi, [rsp + 0x30]
// asm:   0x5ae5a97: call 0x2fd6290  ; il2cpp_runtime_helper_02fd6290()
// asm:   0x5ae5a9c: mov rdi, rbx
// asm:   0x5ae5a9f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae5aa4: mov rdi, rax
// asm:   0x5ae5aa7: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppObject *obj;
  bool bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
  undefined1 auStack_48 [16];
  Map_MapObject_o *pMStack_38;
  
  if (Il2CppMethodInitialized_07546e32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_07546e32 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values
                          );
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                 auStack_48,__this_03,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
                );
      SStack_68.fields._currentValue = (Il2CppObject *)pMStack_38;
      SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_48._0_8_
      ;
      SStack_68.fields._index = auStack_48._8_4_;
      SStack_68.fields._version = auStack_48._12_4_;
      auStack_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_48._8_8_ = &SStack_68;
      if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&SStack_68,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                          );
        if (bVar5) {
          ThrowNullReferenceException();
        }
      }
      else {
        while( true ) {
          bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (&SStack_68,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                            );
          obj = SStack_68.fields._currentValue;
          if (!bVar5) break;
          __this_00 = (__this_02->fields).List;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            ThrowNullReferenceException();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_01,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_05ae5a31:
            ThrowNullReferenceException();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_05ae5a31;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (&SStack_68,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                );
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByName
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName (System_String_o* objectName, const MethodInfo* method);
// 0x5ae5ab0
// eh: try 0x5ae5bf4..0x5ae5cb0 -> pad 0x5ae5cbc (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae5cd4..0x5ae5cd9 -> pad 0x5ae5d01 cleanup
// eh: try 0x5ae5d04..0x5ae5d0e -> pad 0x5ae5d16 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae5af4: jmp 0x5ae5ca6
// asm:   0x5ae5cb0: jmp 0x5ae5cbc
// asm:   0x5ae5cb2: jmp 0x5ae5cbc
// asm:   0x5ae5cb4: jmp 0x5ae5cbc
// asm:   0x5ae5cb6: jmp 0x5ae5cbc
// asm:   0x5ae5cb8: jmp 0x5ae5cbc
// asm:   0x5ae5cba: jmp 0x5ae5cbc
// asm:   0x5ae5cbc: mov rbx, rax
// asm:   0x5ae5cbf: cmp edx, 1
// asm:   0x5ae5cc2: jne 0x5ae5d04
// asm:   0x5ae5cc4: mov rdi, rbx
// asm:   0x5ae5cc7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae5ccc: mov rbx, qword ptr [rax]
// asm:   0x5ae5ccf: mov qword ptr [rsp + 8], rbx
// asm:   0x5ae5cd4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae5cd9: lea rax, [rip + 0x17a9a18]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x5ae5ce0: mov rsi, qword ptr [rax]
// asm:   0x5ae5ce3: lea rdi, [rsp + 0x20]
// asm:   0x5ae5ce8: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5ae5ced: test rbx, rbx
// asm:   0x5ae5cf0: jne 0x5ae5cf9
// asm:   0x5ae5cf2: xor r14d, r14d
// asm:   0x5ae5cf5: xor ebx, ebx
// asm:   0x5ae5cf7: jmp 0x5ae5c85
// asm:   0x5ae5cf9: mov rdi, rbx
// asm:   0x5ae5cfc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae5d01: mov rbx, rax
// asm:   0x5ae5d04: lea rdi, [rsp + 8]
// asm:   0x5ae5d09: call 0x2fd62c0  ; il2cpp_runtime_helper_02fd62c0()
// asm:   0x5ae5d0e: mov rdi, rbx
// asm:   0x5ae5d11: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae5d16: mov rdi, rax
// asm:   0x5ae5d19: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName(System_String_o *objectName,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *obj;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  int iVar6;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_07546e33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_07546e33 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x18);
  }
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values
                            ),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
             __this_01,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
            );
  local_48.fields._currentValue = (Il2CppObject *)local_50;
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  local_60._8_8_ = &local_48;
  do {
    bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                      (&local_48,
                       (MethodInfo_4CE7200 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                      );
    obj = local_48.fields._currentValue;
    if (!bVar3) {
      iVar6 = 5;
      goto label_05ae5c71;
    }
    if ((Map_MapObject_o *)local_48.fields._currentValue == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar2 = ((Map_MapObject_Fields *)((long)local_48.fields._currentValue + 0x10))->ScriptObject;
    if (pMVar2 == (Map_MapScriptBaseObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = System_String__op_Equality((pMVar2->fields).Name,objectName,(MethodInfo *)0x0);
  } while (!bVar3);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                     (__this_00,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
  iVar6 = 4;
label_05ae5c71:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (&local_48,
             (MethodInfo_4CE71F0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
            );
  pCVar5 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  if (iVar6 == 4) {
    pCVar5 = pCVar4;
  }
  return pCVar5;
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByName
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName (System_String_o* objectName, const MethodInfo* method);
// 0x5ae5d20
// eh: try 0x5ae5e9f..0x5ae6006 -> pad 0x5ae6019 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae6037..0x5ae603c -> pad 0x5ae605d cleanup
// eh: try 0x5ae6060..0x5ae606a -> pad 0x5ae6072 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae600b: jmp 0x5ae601f
// asm:   0x5ae600d: jmp 0x5ae601f
// asm:   0x5ae600f: jmp 0x5ae601f
// asm:   0x5ae6011: jmp 0x5ae601f
// asm:   0x5ae6013: jmp 0x5ae601f
// asm:   0x5ae6015: jmp 0x5ae601f
// asm:   0x5ae6017: jmp 0x5ae601f
// asm:   0x5ae6019: jmp 0x5ae601f
// asm:   0x5ae601b: jmp 0x5ae601f
// asm:   0x5ae601d: jmp 0x5ae601f
// asm:   0x5ae601f: mov rbx, rax
// asm:   0x5ae6022: cmp edx, 1
// asm:   0x5ae6025: jne 0x5ae6060
// asm:   0x5ae6027: mov rdi, rbx
// asm:   0x5ae602a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae602f: mov rbx, qword ptr [rax]
// asm:   0x5ae6032: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ae6037: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae603c: lea rax, [rip + 0x17a96b5]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x5ae6043: mov rsi, qword ptr [rax]
// asm:   0x5ae6046: lea rdi, [rsp + 0x10]
// asm:   0x5ae604b: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5ae6050: test rbx, rbx
// asm:   0x5ae6053: je 0x5ae5fde
// asm:   0x5ae6055: mov rdi, rbx
// asm:   0x5ae6058: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae605d: mov rbx, rax
// asm:   0x5ae6060: lea rdi, [rsp + 0x30]
// asm:   0x5ae6065: call 0x2fd62f0  ; il2cpp_runtime_helper_02fd62f0()
// asm:   0x5ae606a: mov rdi, rbx
// asm:   0x5ae606d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae6072: mov rdi, rax
// asm:   0x5ae6075: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName(System_String_o *objectName,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *obj;
  bool bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
  undefined1 auStack_48 [16];
  Map_MapObject_o *pMStack_38;
  
  if (Il2CppMethodInitialized_07546e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_07546e34 = '\x01';
  }
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._currentValue = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values
                          );
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                 auStack_48,__this_03,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
                );
      SStack_68.fields._currentValue = (Il2CppObject *)pMStack_38;
      SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_48._0_8_
      ;
      SStack_68.fields._index = auStack_48._8_4_;
      SStack_68.fields._version = auStack_48._12_4_;
      auStack_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_48._8_8_ = &SStack_68;
      if (__this_02 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (&SStack_68,
                             (MethodInfo_4CE7200 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                            );
          if (!bVar6) break;
          if ((Map_MapObject_o *)SStack_68.fields._currentValue == (Map_MapObject_o *)0x0) goto label_05ae5ff2;
          pMVar3 = ((Map_MapObject_Fields *)((long)SStack_68.fields._currentValue + 0x10))->ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05ae5ff7;
          bVar6 = System_String__op_Equality((pMVar3->fields).Name,objectName,(MethodInfo *)0x0);
          if (bVar6) {
            ThrowNullReferenceException();
          }
        }
      }
      else {
label_05ae5eaa:
        bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&SStack_68,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                          );
        obj = SStack_68.fields._currentValue;
        if (bVar6) {
          if ((Map_MapObject_o *)SStack_68.fields._currentValue == (Map_MapObject_o *)0x0) {
label_05ae5ff2:
            ThrowNullReferenceException();
          }
          pMVar3 = ((Map_MapObject_Fields *)((long)SStack_68.fields._currentValue + 0x10))->ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
label_05ae5ff7:
            ThrowNullReferenceException();
          }
          bVar6 = System_String__op_Equality((pMVar3->fields).Name,objectName,(MethodInfo *)0x0);
          if (bVar6) {
            __this_00 = (__this_02->fields).List;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
            pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_00->fields)._items;
              if (pSVar4 != (System_Object_array *)0x0) {
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pSVar4->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_00,(Il2CppObject *)item,
                             (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                goto label_05ae5eaa;
              }
            }
            ThrowNullReferenceException();
          }
          goto label_05ae5eaa;
        }
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (&SStack_68,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                );
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByRegex
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex (System_String_o* pattern, bool sorted, const MethodInfo* method);
// 0x5ae6080
// eh: try 0x5ae626f..0x5ae64ea -> pad 0x5ae64fc (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae651a..0x5ae651f -> pad 0x5ae6542 cleanup
// eh: try 0x5ae6545..0x5ae654f -> pad 0x5ae6557 catch (...) [compiler noexcept guard]
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae623e: lea r14, [rip + 0x17a94bb]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
// asm:   0x5ae6245: mov r12, rsp
// asm:   0x5ae6248: lea r15, [rip + 0x1790cc1]  ; TypeInfo_CustomLogic_CustomLogicManager
// asm:   0x5ae624f: jmp 0x5ae627a
// asm:   0x5ae63b8: jmp 0x5ae6431
// asm:   0x5ae63ba: lea rbp, [rip + 0x17a933f]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
// asm:   0x5ae63c1: mov rbx, rsp
// asm:   0x5ae63c4: nop word ptr cs:[rax + rax]
// asm:   0x5ae64ea: jmp 0x5ae6502
// asm:   0x5ae64ec: jmp 0x5ae6502
// asm:   0x5ae64ee: jmp 0x5ae6502
// asm:   0x5ae64f0: jmp 0x5ae6502
// asm:   0x5ae64f2: jmp 0x5ae6502
// asm:   0x5ae64f4: jmp 0x5ae6502
// asm:   0x5ae64f6: jmp 0x5ae6502
// asm:   0x5ae64f8: jmp 0x5ae6502
// asm:   0x5ae64fa: jmp 0x5ae6502
// asm:   0x5ae64fc: jmp 0x5ae6502
// asm:   0x5ae64fe: jmp 0x5ae6502
// asm:   0x5ae6500: jmp 0x5ae6502
// asm:   0x5ae6502: mov rbx, rax
// asm:   0x5ae6505: cmp edx, 1
// asm:   0x5ae6508: jne 0x5ae6545
// asm:   0x5ae650a: mov rdi, rbx
// asm:   0x5ae650d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae6512: mov rbx, qword ptr [rax]
// asm:   0x5ae6515: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ae651a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae651f: lea rax, [rip + 0x17a91d2]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x5ae6526: mov rsi, qword ptr [rax]
// asm:   0x5ae6529: mov rdi, rsp
// asm:   0x5ae652c: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5ae6531: test rbx, rbx
// asm:   0x5ae6534: je 0x5ae6371
// asm:   0x5ae653a: mov rdi, rbx
// asm:   0x5ae653d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae6542: mov rbx, rax
// asm:   0x5ae6545: lea rdi, [rsp + 0x30]
// asm:   0x5ae654a: call 0x2fd6320  ; il2cpp_runtime_helper_02fd6320()
// asm:   0x5ae654f: mov rdi, rbx
// asm:   0x5ae6552: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae6557: mov rdi, rax
// asm:   0x5ae655a: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex
          (System_String_o *pattern,bool sorted,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *pSVar5;
  Il2CppObject *object;
  MethodInfo *pMVar6;
  Map_MapObject_o *obj;
  undefined1 *puVar7;
  bool bVar8;
  CustomLogic_CustomLogicListBuiltin_o *pCVar9;
  System_Text_RegularExpressions_Regex_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  CustomLogic_CustomLogicMapBuiltin___c_StaticFields *pCVar10;
  System_Comparison_T__o *comparison;
  undefined7 in_register_00000031;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Map_MapObject_o *pMStack_68;
  undefined4 uStack_54;
  CustomLogic_CustomLogicListBuiltin_o *pCStack_50;
  undefined1 auStack_48 [16];
  Map_MapObject_o *pMStack_38;
  
  if (Il2CppMethodInitialized_07546e35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_Sort_7195c58);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_c_FindMapObjectsByRegex_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_07546e35 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pMStack_68 = (Map_MapObject_o *)0x0;
  pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(pCVar9,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(__this_01,pattern,9,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values
                            ),
     __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_48,
               __this_02,
               (MethodInfo_43F93D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    pMStack_68 = pMStack_38;
    auStack_78 = (undefined1  [8])auStack_48._0_8_;
    puStack_70 = (undefined1 *)auStack_48._8_8_;
    auStack_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    uStack_54 = (undefined4)CONCAT71(in_register_00000031,sorted);
    pCStack_50 = pCVar9;
    if (__this_01 == (System_Text_RegularExpressions_Regex_o *)0x0) {
      auStack_48._8_8_ = auStack_78;
      bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         auStack_78,
                         (MethodInfo_4CE7200 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                        );
      if (bVar8) {
        if (pMStack_68 != (Map_MapObject_o *)0x0) {
          if ((pMStack_68->fields).ScriptObject != (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
label_05ae64e0:
          ThrowNullReferenceException();
        }
label_05ae64d4:
        ThrowNullReferenceException();
      }
    }
    else {
      auStack_48._8_8_ = auStack_78;
      puVar7 = auStack_78;
      if (pCVar9 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while (auStack_48._8_8_ = puVar7,
              bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                  *)auStack_78,
                                 (MethodInfo_4CE7200 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                                ), bVar8) {
          if (pMStack_68 == (Map_MapObject_o *)0x0) goto label_05ae64d4;
          pMVar3 = (pMStack_68->fields).ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05ae64e0;
          bVar8 = System_Text_RegularExpressions_Regex__IsMatch_61e3720
                            (__this_01,(pMVar3->fields).Name,(MethodInfo *)0x0);
          puVar7 = (undefined1 *)auStack_48._8_8_;
          if (bVar8) {
            ThrowNullReferenceException();
          }
        }
      }
      else {
label_05ae627a:
        bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )auStack_78,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                          );
        obj = pMStack_68;
        if (bVar8) {
          if (pMStack_68 == (Map_MapObject_o *)0x0) goto label_05ae64d4;
          pMVar3 = (pMStack_68->fields).ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05ae64e0;
          bVar8 = System_Text_RegularExpressions_Regex__IsMatch_61e3720
                            (__this_01,(pMVar3->fields).Name,(MethodInfo *)0x0);
          if (bVar8) {
            pSVar4 = (pCStack_50->fields).List;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_00,obj,(MethodInfo *)0x0);
            pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (pSVar4->fields)._items;
              if (pSVar5 != (System_Object_array *)0x0) {
                uVar2 = (pSVar4->fields)._size;
                if (uVar2 < (uint)pSVar5->max_length) {
                  (pSVar4->fields)._size = uVar2 + 1;
                  pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar4,(Il2CppObject *)item,
                             (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
                }
                goto label_05ae627a;
              }
            }
            ThrowNullReferenceException();
          }
          goto label_05ae627a;
        }
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_78,
               (MethodInfo_4CE71F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    pCVar9 = pCStack_50;
    if ((char)uStack_54 == '\0') {
      return pCVar9;
    }
    if (pCStack_50 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pSVar4 = (pCStack_50->fields).List;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
        pCVar10 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields;
        comparison = (System_Comparison_T__o *)pCVar10->__9__8_0;
      }
      else {
        pCVar10 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields;
        comparison = (System_Comparison_T__o *)pCVar10->__9__8_0;
      }
      if (comparison == (System_Comparison_T__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c)->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin_c);
          pCVar10 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields;
        }
        object = (Il2CppObject *)pCVar10->__9;
        comparison = (System_Comparison_T__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_object);
        System_Comparison_object____ctor
                  ((System_Comparison_object__o *)comparison,object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicMapBuiltin_c_FindMapObjectsByRegex_b__8_0,
                   (MethodInfo_48E28F0 *)0x0);
        pCVar10 = TypeInfo_CustomLogic_CustomLogicMapBuiltin_c->static_fields;
        pCVar10->__9__8_0 = (System_Comparison_object__o *)comparison;
        Il2CppCodeGenWriteBarrier(&pCVar10->__9__8_0);
      }
      if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Sort_395f500
                  (pSVar4,comparison,
                   (MethodInfo_395F500 *)MethodInfo_System_Collections_Generic_List_object_Sort_7195c58);
        return pCVar9;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByComponent
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent (System_String_o* className, const MethodInfo* method);
// 0x5ae6560

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent(System_String_o *className,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  
  if (Il2CppMethodInitialized_07546e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    Il2CppMethodInitialized_07546e36 = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    __this = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method);
  }
  else {
    __this = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method);
  }
  if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = CustomLogic_CustomLogicListBuiltin__get_Count(__this,(MethodInfo *)0x0);
  pCVar5 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  if (0 < iVar3) {
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             CustomLogic_CustomLogicListBuiltin__Get(__this,0,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    if (pCVar4 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
      if (((((Il2CppClass *)pCVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Il2CppClass *)pCVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar4);
      }
      pCVar5 = pCVar4;
    }
  }
  return pCVar5;
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByComponent
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent (System_String_o* className, const MethodInfo* method);
// 0x5ae6660
// eh: try 0x5ae67fa..0x5ae6a00 -> pad 0x5ae6a21 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae6a0b..0x5ae6a15 -> pad 0x5ae6a77 catch (...) [compiler noexcept guard]
// eh: try 0x5ae6a3c..0x5ae6a41 -> pad 0x5ae6a62 cleanup
// eh: try 0x5ae6a65..0x5ae6a6f -> pad 0x5ae6a77 catch (...) [compiler noexcept guard]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae685d: nop dword ptr [rax]
// asm:   0x5ae6977: jmp 0x5ae69f8
// asm:   0x5ae6998: jmp 0x5ae69a6
// asm:   0x5ae699a: jmp 0x5ae69a6
// asm:   0x5ae699c: jmp 0x5ae69a6
// asm:   0x5ae699e: jmp 0x5ae69a6
// asm:   0x5ae69a0: jmp 0x5ae69a6
// asm:   0x5ae69a2: jmp 0x5ae69a6
// asm:   0x5ae69a4: jmp 0x5ae69a6
// asm:   0x5ae69a6: mov rbp, rdx
// asm:   0x5ae69a9: mov r15, rax
// asm:   0x5ae69ac: cmp ebp, 1
// asm:   0x5ae69af: jne 0x5ae6a0b
// asm:   0x5ae69b1: mov rdi, r15
// asm:   0x5ae69b4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae69b9: mov rbp, qword ptr [rax]
// asm:   0x5ae69bc: mov qword ptr [rsp + 8], rbp
// asm:   0x5ae69c1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae69c6: jmp 0x5ae695c
// asm:   0x5ae69f8: mov rdi, rbp
// asm:   0x5ae69fb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae6a05: mov rbp, rdx
// asm:   0x5ae6a08: mov r15, rax
// asm:   0x5ae6a0b: lea rdi, [rsp + 8]
// asm:   0x5ae6a10: call 0x2fd6350  ; il2cpp_runtime_helper_02fd6350()
// asm:   0x5ae6a15: jmp 0x5ae6a27
// asm:   0x5ae6a17: jmp 0x5ae6a21
// asm:   0x5ae6a19: jmp 0x5ae6a21
// asm:   0x5ae6a1b: jmp 0x5ae6a21
// asm:   0x5ae6a1d: jmp 0x5ae6a21
// asm:   0x5ae6a1f: jmp 0x5ae6a21
// asm:   0x5ae6a21: mov rbp, rdx
// asm:   0x5ae6a24: mov r15, rax
// asm:   0x5ae6a27: cmp ebp, 1
// asm:   0x5ae6a2a: jne 0x5ae6a65
// asm:   0x5ae6a2c: mov rdi, r15
// asm:   0x5ae6a2f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae6a34: mov rbx, qword ptr [rax]
// asm:   0x5ae6a37: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5ae6a3c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae6a41: lea rax, [rip + 0x17a8cb0]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
// asm:   0x5ae6a48: mov rsi, qword ptr [rax]
// asm:   0x5ae6a4b: lea rdi, [rsp + 0x20]
// asm:   0x5ae6a50: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5ae6a55: test rbx, rbx
// asm:   0x5ae6a58: je 0x5ae69dc
// asm:   0x5ae6a5a: mov rdi, rbx
// asm:   0x5ae6a5d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae6a62: mov r15, rax
// asm:   0x5ae6a65: lea rdi, [rsp + 0x58]
// asm:   0x5ae6a6a: call 0x2fd6380  ; il2cpp_runtime_helper_02fd6380()
// asm:   0x5ae6a6f: mov rdi, r15
// asm:   0x5ae6a72: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae6a77: mov rdi, rax
// asm:   0x5ae6a7a: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(System_String_o *className,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  Map_MapObject_o *obj;
  bool bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  System_String_o *a;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  undefined1 local_90 [16];
  Map_MapObject_o *local_80;
  undefined1 local_78 [16];
  Map_MapObject_o *local_68;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  Map_MapObject_o *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07546e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
              );
    Il2CppMethodInitialized_07546e37 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (Map_MapObject_o *)0x0;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this,(MethodInfo_4AAD2A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Values
                            ),
     __this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_90,
             __this_04,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_GameObject_MapObject_GetEnumerator
            );
  local_68 = local_80;
  local_78._0_8_ = local_90._0_8_;
  local_78._8_8_ = local_90._8_8_;
  local_40 = 0;
  local_38 = local_78;
  while( true ) {
    bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_78,(MethodInfo_4CE7200 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_MoveNext
                      );
    obj = local_68;
    if (!bVar5) {
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_78,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_GameObject_MapObject_Dispose
                );
      return __this_03;
    }
    if (local_68 == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (local_68->fields).ComponentInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_48 = local_80;
    local_58 = (undefined1  [8])local_90._0_8_;
    pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_90._8_8_;
    local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
    do {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar5) goto label_05ae695a;
      if (local_48 == (Map_MapObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      a = (System_String_o *)
          (*((Il2CppClass *)local_48->klass)->vtable[6].methodPtr)
                    (local_48,*(undefined8 *)&((Il2CppClass *)local_48->klass)->vtable[6].method);
      bVar5 = System_String__op_Equality(a,className,(MethodInfo *)0x0);
    } while (!bVar5);
    if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (__this_03->fields).List;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_02 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this_02,obj,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_01->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) break;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,(Il2CppObject *)item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
    }
label_05ae695a:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByID
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID (int32_t id, const MethodInfo* method);
// 0x5ae6a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae6ab1: jmp 0x5ae6ba7

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID(int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar3;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_07546e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e38 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar3) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (obj = System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar2,id,
                         (MethodInfo_4A0F690 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
       __this != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this,obj,(MethodInfo *)0x0);
      return pCVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByTag
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag (System_String_o* tag, const MethodInfo* method);
// 0x5ae6bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae6beb: jmp 0x5ae6d70

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag(System_String_o *tag,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *__this_00;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  
  if (Il2CppMethodInitialized_07546e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e39 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x20);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)tag,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar3) {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)tag,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item),
       pIVar4 != (Il2CppObject *)0x0)) {
      if (*(int *)&pIVar4[1].monitor < 1) {
        return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (__this_00 = (System_Collections_Generic_List_object__o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)tag,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item
                                 ), __this_00 != (System_Collections_Generic_List_object__o *)0x0)) &&
         (obj = System_Collections_Generic_List_object___get_Item
                          (__this_00,0,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_MapObject_get_Item
                          ), __this != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
        pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this,obj,(MethodInfo *)0x0);
        return pCVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByTag
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag (System_String_o* tag, const MethodInfo* method);
// 0x5ae6d80
// eh: try 0x5ae6f3f..0x5ae7035 -> pad 0x5ae703f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae7059..0x5ae705e -> pad 0x5ae707f cleanup
// eh: try 0x5ae7082..0x5ae708c -> pad 0x5ae7094 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae7035: jmp 0x5ae7041
// asm:   0x5ae7037: jmp 0x5ae7041
// asm:   0x5ae7039: jmp 0x5ae7041
// asm:   0x5ae703b: jmp 0x5ae7041
// asm:   0x5ae703d: jmp 0x5ae7041
// asm:   0x5ae703f: jmp 0x5ae7041
// asm:   0x5ae7041: mov rbx, rax
// asm:   0x5ae7044: cmp edx, 1
// asm:   0x5ae7047: jne 0x5ae7082
// asm:   0x5ae7049: mov rdi, rbx
// asm:   0x5ae704c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae7051: mov rbx, qword ptr [rax]
// asm:   0x5ae7054: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ae7059: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae705e: lea rax, [rip + 0x17a735b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5ae7065: mov rsi, qword ptr [rax]
// asm:   0x5ae7068: lea rdi, [rsp + 0x10]
// asm:   0x5ae706d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ae7072: test rbx, rbx
// asm:   0x5ae7075: je 0x5ae700d
// asm:   0x5ae7077: mov rdi, rbx
// asm:   0x5ae707a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae707f: mov rbx, rax
// asm:   0x5ae7082: lea rdi, [rsp + 0x30]
// asm:   0x5ae7087: call 0x2fd63b0  ; il2cpp_runtime_helper_02fd63b0()
// asm:   0x5ae708c: mov rdi, rbx
// asm:   0x5ae708f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae7094: mov rdi, rax
// asm:   0x5ae7097: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag(System_String_o *tag,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *obj;
  bool bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar7;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  Map_MapObject_o *pMStack_38;
  
  if (Il2CppMethodInitialized_07546e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e3a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->Tags;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)tag,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar6) {
      return __this_00;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar7 = (System_Collections_Generic_List_object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)tag,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item),
       pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar7,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      SStack_68.fields._current = (Il2CppObject *)pMStack_38;
      SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      SStack_68.fields._index = auStack_48._8_4_;
      SStack_68.fields._version = auStack_48._12_4_;
      auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_48._8_8_ = &SStack_68;
      if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        if (bVar6) {
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&SStack_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
              obj = SStack_68.fields._current, bVar6) {
          pSVar7 = (__this_00->fields).List;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            ThrowNullReferenceException();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,(Map_MapObject_o *)obj,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
label_05ae7021:
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar7->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_05ae7021;
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar7,(Il2CppObject *)item,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method
                      );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&SStack_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByPlayer
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer (CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x5ae70a0
// eh: try 0x5ae71d4..0x5ae7282 -> pad 0x5ae7293 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae72ad..0x5ae72b2 -> pad 0x5ae72d1 cleanup
// eh: try 0x5ae72d4..0x5ae72de -> pad 0x5ae72e6 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae71ce: nop 
// asm:   0x5ae7287: jmp 0x5ae7295
// asm:   0x5ae7289: jmp 0x5ae7295
// asm:   0x5ae728b: jmp 0x5ae7295
// asm:   0x5ae728d: jmp 0x5ae7295
// asm:   0x5ae728f: jmp 0x5ae7295
// asm:   0x5ae7291: jmp 0x5ae7295
// asm:   0x5ae7293: jmp 0x5ae7295
// asm:   0x5ae7295: mov rbx, rax
// asm:   0x5ae7298: cmp edx, 1
// asm:   0x5ae729b: jne 0x5ae72d4
// asm:   0x5ae729d: mov rdi, rbx
// asm:   0x5ae72a0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae72a5: mov rbx, qword ptr [rax]
// asm:   0x5ae72a8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5ae72ad: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae72b2: lea rax, [rip + 0x17a858f]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt
// asm:   0x5ae72b9: mov rsi, qword ptr [rax]
// asm:   0x5ae72bc: mov rdi, rsp
// asm:   0x5ae72bf: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x5ae72c4: test rbx, rbx
// asm:   0x5ae72c7: je 0x5ae725b
// asm:   0x5ae72c9: mov rdi, rbx
// asm:   0x5ae72cc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae72d1: mov rbx, rax
// asm:   0x5ae72d4: lea rdi, [rsp + 0x18]
// asm:   0x5ae72d9: call 0x2fd63e0  ; il2cpp_runtime_helper_02fd63e0()
// asm:   0x5ae72de: mov rdi, rbx
// asm:   0x5ae72e1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae72e6: mov rdi, rax
// asm:   0x5ae72e9: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer
          (CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  CustomLogic_CustomLogicPhotonSync_o *pCVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSVar4;
  bool bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
  undefined1 local_40 [16];
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_30;
  
  if (Il2CppMethodInitialized_07546e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Values)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_718f850
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_718f858
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_CustomLogicNetworkViewBuiltin_GetEnume
              );
    Il2CppMethodInitialized_07546e3b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar1->fields).IdToNetworkView,
     __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_int__object___get_Values
                          (__this,(MethodInfo_4A0F4E0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Values
                          );
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_01,
                 (MethodInfo_43E8AC0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_CustomLogicNetworkViewBuiltin_GetEnume
                );
      local_58.fields._currentValue = (Il2CppObject *)local_30;
      local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      local_58.fields._index = local_40._8_4_;
      local_58.fields._version = local_40._12_4_;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = &local_58;
      pSVar4 = &local_58;
      if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        do {
          local_40._8_8_ = pSVar4;
          bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            (&local_58,
                             (MethodInfo_4CA2980 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_718f850
                            );
          pIVar3 = local_58.fields._currentValue;
          if (!bVar5) goto label_05ae7249;
          if ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)local_58.fields._currentValue ==
              (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) goto label_05ae726c;
          pCVar6 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
                             ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)local_58.fields._currentValue,
                              (MethodInfo *)0x0);
          pSVar4 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_40._8_8_;
        } while (pCVar6 != player);
        if (((CustomLogic_CustomLogicNetworkViewBuiltin_Fields *)((long)pIVar3 + 0x10))->Sync !=
            (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          ThrowNullReferenceException();
        }
label_05ae7278:
        ThrowNullReferenceException();
      }
      do {
        do {
          bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            (&local_58,
                             (MethodInfo_4CA2980 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt_718f850
                            );
          pIVar3 = local_58.fields._currentValue;
          if (!bVar5) {
label_05ae7249:
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      (&local_58,
                       (MethodInfo_4CA2970 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_CustomLogicNetworkViewBuilt
                      );
            return __this_00;
          }
          if ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)local_58.fields._currentValue ==
              (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
label_05ae726c:
            ThrowNullReferenceException();
          }
          pCVar6 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
                             ((CustomLogic_CustomLogicNetworkViewBuiltin_o *)local_58.fields._currentValue,
                              (MethodInfo *)0x0);
        } while (pCVar6 != player);
        pCVar2 = ((CustomLogic_CustomLogicNetworkViewBuiltin_Fields *)((long)pIVar3 + 0x10))->Sync;
        if (pCVar2 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_05ae7278;
        CustomLogic_CustomLogicListBuiltin__Add
                  (__this_00,(Il2CppObject *)(pCVar2->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
                   (MethodInfo *)0x0);
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateMapObject (CustomLogic_CustomLogicPrefabBuiltin_o* prefab, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* scale, const MethodInfo* method);
// 0x5ae72f0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateMapObject
          (CustomLogic_CustomLogicPrefabBuiltin_o *prefab,CustomLogic_CustomLogicVector3Builtin_o *position,
          CustomLogic_CustomLogicVector3Builtin_o *rotation,CustomLogic_CustomLogicVector3Builtin_o *scale,
          MethodInfo *method)

{
  bool persistsOwnership;
  MethodInfo *method_00;
  Map_MapScriptSceneObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07546e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_07546e3c = '\x01';
  }
  if ((prefab != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar1 = (prefab->fields).Value, pMVar1 != (Map_MapScriptSceneObject_o *)0x0)) {
    method_00 = (MethodInfo *)
                (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method);
    pMVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(pMVar1,(MethodInfo *)0x0);
    if (pMVar1 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(pMVar1->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar1,(System_String_o *)method_00,(pMVar1->klass->vtable)._9_Deserialize.method);
      method_01 = extraout_RDX;
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        Map_MapScriptBaseObject__SetPosition
                  ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(position->fields).Value.fields,
                   (MethodInfo *)0x0);
        method_01 = extraout_RDX_00;
      }
      if (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        Map_MapScriptBaseObject__SetRotation
                  ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(rotation->fields).Value.fields,
                   (MethodInfo *)0x0);
        method_01 = extraout_RDX_01;
      }
      if (scale != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        Map_MapScriptBaseObject__SetScale
                  ((Map_MapScriptBaseObject_o *)pMVar1,(UnityEngine_Vector3_o)(scale->fields).Value.fields,
                   (MethodInfo *)0x0);
        method_01 = extraout_RDX_02;
      }
      if ((pMVar1->fields).Networked == false) {
        if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        pCVar2 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject(pMVar1,method_00);
        return pCVar2;
      }
      persistsOwnership = (prefab->fields).PersistsOwnership;
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        method_01 = extraout_RDX_03;
      }
      pCVar2 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
                         (pMVar1,persistsOwnership,method_01);
      return pCVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateMapObjectRaw
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw (System_String_o* prefab, const MethodInfo* method);
// 0x5ae7830

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw(System_String_o *prefab,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *value;
  MethodInfo *pMVar2;
  Map_MapScriptSceneObject_o *__this;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07546e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546e3d = '\x01';
  }
  if (prefab != (System_String_o *)0x0) {
    value = System_String__Split(prefab,10,0,(MethodInfo *)0x0);
    pMVar2 = (MethodInfo *)System_String__Join("",value,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this,(MethodInfo *)0x0);
    if (__this != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this->klass->vtable)._9_Deserialize.methodPtr)
                (__this,(System_String_o *)pMVar2,(__this->klass->vtable)._9_Deserialize.method);
      uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
      if ((__this->fields).Networked == false) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        }
        pCVar3 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject(__this,pMVar2);
        return pCVar3;
      }
      pMVar2 = extraout_RDX;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        pMVar2 = extraout_RDX_00;
      }
      pCVar3 = CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject(__this,false,pMVar2);
      return pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$PrefabFromMapObject
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool clearComponents, const MethodInfo* method);
// 0x5ae7920

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject
          (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool clearComponents,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *prefabCSV;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546e3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
    Il2CppMethodInitialized_07546e3e = '\x01';
  }
  if (((mapObject == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
      (pMVar1 = (mapObject->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  prefabCSV = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrefabBuiltin);
  CustomLogic_CustomLogicPrefabBuiltin___ctor_593bd60(__this,prefabCSV,clearComponents,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapObject
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool includeChildren, const MethodInfo* method);
// 0x5ae79a0

void CustomLogic_CustomLogicMapBuiltin__DestroyMapObject
               (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool includeChildren,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  CustomLogic_CustomLogicPhotonSync_o *__this;
  bool bVar5;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (Il2CppMethodInitialized_07546e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    Il2CppMethodInitialized_07546e3f = '\x01';
    method = extraout_RDX;
  }
  if (((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if ((pMVar2->fields).Networked == false) {
label_05ae7b4f:
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
        method = extraout_RDX_01;
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
                ((Il2CppObject *)mapObject,includeChildren,method);
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
        (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
       ((pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0 &&
        (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
        pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)))) {
      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar4,(pMVar2->fields).Id,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      method = extraout_RDX_00;
      if (!bVar5) goto label_05ae7b4f;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
          (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
         ((pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0 &&
          (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
          pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)))) {
        pCVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar4,(pMVar2->fields).Id,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                           );
        pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
             (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
            (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
           (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
           pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          System_Collections_Generic_Dictionary_int__object___Remove
                    (pSVar4,(pMVar2->fields).Id,
                     (MethodInfo_4A10DC0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove
                    );
          if ((pCVar6 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
             (__this = (pCVar6->fields).Sync, __this != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
            CustomLogic_CustomLogicPhotonSync__DestroyMe(__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CopyMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CopyMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool includeChildren, const MethodInfo* method);
// 0x5ae8370

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CopyMapObject
          (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool includeChildren,MethodInfo *method)

{
  int32_t parent;
  CustomLogic_CustomLogicEvaluator_o *__this;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07546e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e40 = '\x01';
  }
  if ((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    parent = (pMVar1->fields).Parent;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    pMVar1 = CustomLogic_CustomLogicMapBuiltin__CopyMapObject_59e8430(pMVar1,parent,includeChildren,in_RCX);
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      (pMVar1->fields).RuntimeCreated = true;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,pMVar1,(MethodInfo *)0x0);
        return pCVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapTargetable
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable (CustomLogic_CustomLogicMapTargetableBuiltin_o* targetable, const MethodInfo* method);
// 0x5ae8860

void CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *targetable,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_MapTargetable__o *__this;
  
  if (Il2CppMethodInitialized_07546e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapTargetable_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07546e41 = '\x01';
  }
  if (targetable != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    obj = (UnityEngine_Object_o *)(targetable->fields)._GameObject_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
    if (__this != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this,
                 (Il2CppObject *)(targetable->fields)._Value_k__BackingField,
                 (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_MapTargetable_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$UpdateNavMesh
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__UpdateNavMesh (const MethodInfo* method);
// 0x5ae8910

void CustomLogic_CustomLogicMapBuiltin__UpdateNavMesh(MethodInfo *method)

{
  uint32_t uVar1;
  System_Threading_Tasks_Task_o *__this;
  
  if (Il2CppMethodInitialized_07546e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e42 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  else {
    __this = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  if (__this == (System_Threading_Tasks_Task_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Threading_Tasks_Task__Wait(__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$UpdateNavMeshAsync
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__UpdateNavMeshAsync (const MethodInfo* method);
// 0x5ae8980

void CustomLogic_CustomLogicMapBuiltin__UpdateNavMeshAsync(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e43 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
    return;
  }
  Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeNetworkedMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject (Map_MapScriptSceneObject_o* script, bool persistsOwnership, const MethodInfo* method);
// 0x5ae7460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae7496: jmp 0x5ae76f0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
          (Map_MapScriptSceneObject_o *script,bool persistsOwnership,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint32_t uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  System_Object_array *data;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *csvScript;
  Il2CppClass *klass;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o position;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07546e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
    Il2CppMethodInitialized_07546e44 = '\x01';
    uVar5 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin;
  }
  else {
    uVar5 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin;
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin = (CustomLogic_CustomLogicMapBuiltin_c *)klass;
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject((MethodInfo *)klass);
  }
  else {
    CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject((MethodInfo *)klass);
  }
  if (script != (Map_MapScriptSceneObject_o *)0x0) {
    (script->fields).Id = -1;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    (script->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
    (script->fields).Networked = true;
    data = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    uStack_5c = 2;
    pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_5c);
    if (data != (System_Object_array *)0x0) {
      if ((pIVar8 != (Il2CppObject *)0x0) &&
         (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((data->obj).klass)->_1).element_class),
         pIVar9 == (Il2CppObject *)0x0)) {
        pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
      }
      if ((int)data->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      data->m_Items[0] = pIVar8;
      Il2CppCodeGenWriteBarrier(data->m_Items);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2._0_4_ = (pUVar6->zeroVector).fields.x;
      uVar2._4_4_ = (pUVar6->zeroVector).fields.y;
      fVar1 = (pUVar6->zeroVector).fields.z;
      uVar10 = 0;
      uVar11 = 0;
      if (g_data_0753e72b == '\0') {
        uStack_50 = 0;
        uStack_58 = uVar2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        g_data_0753e72b = '\x01';
        uVar2._0_4_ = (undefined4)uStack_58;
        uVar2._4_4_ = uStack_58._4_4_;
        uVar10 = (undefined4)uStack_50;
        uVar11 = uStack_50._4_4_;
      }
      pUVar7 = TypeInfo_UnityEngine_Quaternion->static_fields;
      uVar3._0_4_ = (pUVar7->identityQuaternion).fields.x;
      uVar3._4_4_ = (pUVar7->identityQuaternion).fields.y;
      uVar4._0_4_ = (pUVar7->identityQuaternion).fields.z;
      uVar4._4_4_ = (pUVar7->identityQuaternion).fields.w;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        uStack_58 = CONCAT44(uVar2._4_4_,(undefined4)uVar2);
        uStack_50 = CONCAT44(uVar11,uVar10);
        uStack_30 = 0;
        uStack_40 = 0;
        uStack_48 = uVar4;
        uStack_38 = uVar3;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        uVar2._0_4_ = (undefined4)uStack_58;
        uVar2._4_4_ = uStack_58._4_4_;
        uVar3._0_4_ = (undefined4)uStack_38;
        uVar3._4_4_ = uStack_38._4_4_;
        uVar4._0_4_ = (undefined4)uStack_48;
        uVar4._4_4_ = uStack_48._4_4_;
      }
      rotation.fields.y = (float)uVar3._4_4_;
      rotation.fields.x = (float)(undefined4)uVar3;
      rotation.fields.w = (float)uVar4._4_4_;
      rotation.fields.z = (float)(undefined4)uVar4;
      position.fields.y = (float)uVar2._4_4_;
      position.fields.x = (float)(undefined4)uVar2;
      position.fields.z = fVar1;
      __this = Photon_Pun_PhotonNetwork__Instantiate
                         ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,0,data,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
        csvScript = (*(script->klass->vtable)._8_Serialize.methodPtr)
                              (script,(script->klass->vtable)._8_Serialize.method);
        if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          CustomLogic_CustomLogicPhotonSync__InitDynamic
                    (__this_00,persistsOwnership,csvScript,(MethodInfo *)0x0);
          return (__this_00->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject (Map_MapScriptSceneObject_o* script, const MethodInfo* method);
// 0x5ae7710
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae773f: jmp 0x5ae7825

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject
          (Map_MapScriptSceneObject_o *script,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  int32_t iVar3;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_07546e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07546e45 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    iVar3 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
  }
  else {
    iVar3 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
  }
  if (script != (Map_MapScriptSceneObject_o *)0x0) {
    (script->fields).Id = iVar3;
    (script->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
    (script->fields).Networked = false;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)script,false,(MethodInfo *)0x0);
    Map_MapLoader__SetParent_58998f0(mapObject,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents(pCVar2,mapObject,true,(MethodInfo *)0x0),
       mapObject != (Map_MapObject_o *)0x0)) {
      (mapObject->fields).RuntimeCreated = true;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (pCVar2,mapObject,(MethodInfo *)0x0);
        return pCVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$CopyMapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicMapBuiltin__CopyMapObject (Map_MapObject_o* obj, int32_t parent, bool recursive, const MethodInfo* method);
// 0x5ae8430
// eh: try 0x5ae86f0..0x5ae87ea -> pad 0x5ae87f4 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae8812..0x5ae8817 -> pad 0x5ae8836 cleanup
// eh: try 0x5ae8839..0x5ae8843 -> pad 0x5ae884b catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae87ea: jmp 0x5ae87fa
// asm:   0x5ae87ec: jmp 0x5ae87fa
// asm:   0x5ae87ee: jmp 0x5ae87fa
// asm:   0x5ae87f0: jmp 0x5ae87fa
// asm:   0x5ae87f2: jmp 0x5ae87fa
// asm:   0x5ae87f4: jmp 0x5ae87fa
// asm:   0x5ae87f6: jmp 0x5ae87fa
// asm:   0x5ae87f8: jmp 0x5ae87fa
// asm:   0x5ae87fa: mov rbx, rax
// asm:   0x5ae87fd: cmp edx, 1
// asm:   0x5ae8800: jne 0x5ae8839
// asm:   0x5ae8802: mov rdi, rbx
// asm:   0x5ae8805: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae880a: mov rbx, qword ptr [rax]
// asm:   0x5ae880d: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5ae8812: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae8817: lea rax, [rip + 0x17a59c2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5ae881e: mov rsi, qword ptr [rax]
// asm:   0x5ae8821: mov rdi, rsp
// asm:   0x5ae8824: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5ae8829: test rbx, rbx
// asm:   0x5ae882c: je 0x5ae87c4
// asm:   0x5ae882e: mov rdi, rbx
// asm:   0x5ae8831: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae8836: mov rbx, rax
// asm:   0x5ae8839: lea rdi, [rsp + 0x18]
// asm:   0x5ae883e: call 0x2fd6410  ; il2cpp_runtime_helper_02fd6410()
// asm:   0x5ae8843: mov rdi, rbx
// asm:   0x5ae8846: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae884b: mov rdi, rax
// asm:   0x5ae884e: call 0x2ab61e0  ; __clang_call_terminate()

Map_MapObject_o *
CustomLogic_CustomLogicMapBuiltin__CopyMapObject_59e8430
          (Map_MapObject_o *obj,int32_t parent,bool recursive,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  Map_MapScriptSceneObject_o *__this_00;
  System_String_o *pSVar5;
  Map_MapObject_o *pMVar6;
  System_Collections_Generic_HashSet_int__o *__this_01;
  MethodInfo **method_00;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_07546e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_07546e46 = '\x01';
  }
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (pSVar5 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method),
     __this_00 != (Map_MapScriptSceneObject_o *)0x0)) {
    (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
              (__this_00,pSVar5,(__this_00->klass->vtable)._9_Deserialize.method);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar4 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
    (__this_00->fields).Id = iVar4;
    (__this_00->fields).Parent = parent;
    (__this_00->fields).Networked = false;
    pMVar6 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_00,false,(MethodInfo *)0x0);
    Map_MapLoader__SetParent_58998f0(pMVar6,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents(__this,pMVar6,true,(MethodInfo *)0x0),
       pMVar6 != (Map_MapObject_o *)0x0)) {
      (pMVar6->fields).RuntimeCreated = true;
      if (!recursive) {
        return pMVar6;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar1 = (obj->fields).ScriptObject;
      if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren,
         pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar2,(pMVar1->fields).Id,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
        if (!bVar3) {
          return pMVar6;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pMVar1 = (obj->fields).ScriptObject;
        if (((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
            (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToChildren,
            pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
           (local_38 = pMVar6,
           __this_01 = (System_Collections_Generic_HashSet_int__o *)
                       System_Collections_Generic_Dictionary_int__object___get_Item
                                 (pSVar2,(pMVar1->fields).Id,
                                  (MethodInfo_4A0F690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
           __this_01 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
          method_00 = &MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator;
          System_Collections_Generic_HashSet_int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_01,
                     (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_68.fields._current = local_40;
          local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_50._0_8_;
          local_68.fields._index = local_50._8_4_;
          local_68.fields._version = local_50._12_4_;
          local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_50._8_8_ = &local_68;
          while( true ) {
            bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                              (&local_68,
                               (MethodInfo_4C3AEE0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
            if (!bVar3) {
              System_Collections_Generic_HashSet_Enumerator_int___Dispose
                        (&local_68,
                         (MethodInfo_4C3AED0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
              return local_38;
            }
            iVar4 = (int32_t)local_68.fields._current;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
            bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar2,iVar4,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (bVar3) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                                 (pSVar2,iVar4,
                                  (MethodInfo_4A0F690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              iVar4 = (__this_00->fields).Id;
              if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
              }
              CustomLogic_CustomLogicMapBuiltin__CopyMapObject_59e8430
                        (pMVar6,iVar4,true,(MethodInfo *)method_00);
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin (Il2CppObject* obj, bool recursive, const MethodInfo* method);
// 0x5ae7b80
// eh: try 0x5ae7fd4..0x5ae8258 -> pad 0x5ae8264 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae827c..0x5ae8281 -> pad 0x5ae82a3 cleanup
// eh: try 0x5ae82a6..0x5ae82b0 -> pad 0x5ae8363 catch (...) [compiler noexcept guard]
// eh: try 0x5ae82d5..0x5ae82da -> pad 0x5ae82f9 cleanup
// eh: try 0x5ae82fc..0x5ae8306 -> pad 0x5ae8363 catch (...) [compiler noexcept guard]
// eh: try 0x5ae8324..0x5ae8329 -> pad 0x5ae834e cleanup
// eh: try 0x5ae8351..0x5ae835b -> pad 0x5ae8363 catch (...) [compiler noexcept guard]
// asm: 74 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae7d68: jmp 0x5ae8249
// asm:   0x5ae8258: jmp 0x5ae8264
// asm:   0x5ae825a: jmp 0x5ae8264
// asm:   0x5ae825c: jmp 0x5ae82bd
// asm:   0x5ae825e: jmp 0x5ae82bd
// asm:   0x5ae8260: jmp 0x5ae82bd
// asm:   0x5ae8262: jmp 0x5ae8264
// asm:   0x5ae8264: mov rbx, rax
// asm:   0x5ae8267: cmp edx, 1
// asm:   0x5ae826a: jne 0x5ae82a6
// asm:   0x5ae826c: mov rdi, rbx
// asm:   0x5ae826f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae8274: mov rbx, qword ptr [rax]
// asm:   0x5ae8277: mov qword ptr [rsp + 8], rbx
// asm:   0x5ae827c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae8281: lea rax, [rip + 0x17a5f58]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5ae8288: mov rsi, qword ptr [rax]
// asm:   0x5ae828b: lea rdi, [rsp + 0x20]
// asm:   0x5ae8290: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5ae8295: test rbx, rbx
// asm:   0x5ae8298: je 0x5ae8022
// asm:   0x5ae829e: jmp 0x5ae8346
// asm:   0x5ae82a3: mov rbx, rax
// asm:   0x5ae82a6: lea rdi, [rsp + 8]
// asm:   0x5ae82ab: call 0x2fd6440  ; il2cpp_runtime_helper_02fd6440()
// asm:   0x5ae82b0: jmp 0x5ae835b
// asm:   0x5ae82b5: jmp 0x5ae830c
// asm:   0x5ae82b7: jmp 0x5ae82bd
// asm:   0x5ae82b9: jmp 0x5ae82bd
// asm:   0x5ae82bb: jmp 0x5ae82bd
// asm:   0x5ae82bd: mov rbx, rax
// asm:   0x5ae82c0: cmp edx, 1
// asm:   0x5ae82c3: jne 0x5ae82fc
// asm:   0x5ae82c5: mov rdi, rbx
// asm:   0x5ae82c8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae82cd: mov rbx, qword ptr [rax]
// asm:   0x5ae82d0: mov qword ptr [rsp + 8], rbx
// asm:   0x5ae82d5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae82da: lea rax, [rip + 0x17a5eff]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5ae82e1: mov rsi, qword ptr [rax]
// asm:   0x5ae82e4: lea rdi, [rsp + 0x20]
// asm:   0x5ae82e9: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5ae82ee: test rbx, rbx
// asm:   0x5ae82f1: je 0x5ae8230
// asm:   0x5ae82f7: jmp 0x5ae8346
// asm:   0x5ae82f9: mov rbx, rax
// asm:   0x5ae82fc: lea rdi, [rsp + 8]
// asm:   0x5ae8301: call 0x2fd64a0  ; il2cpp_runtime_helper_02fd64a0()
// asm:   0x5ae8306: jmp 0x5ae835b
// asm:   0x5ae8308: jmp 0x5ae830c
// asm:   0x5ae830a: jmp 0x5ae830c
// asm:   0x5ae830c: mov rbx, rax
// asm:   0x5ae830f: cmp edx, 1
// asm:   0x5ae8312: jne 0x5ae8351
// asm:   0x5ae8314: mov rdi, rbx
// asm:   0x5ae8317: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae831c: mov rbx, qword ptr [rax]
// asm:   0x5ae831f: mov qword ptr [rsp + 8], rbx
// asm:   0x5ae8324: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae8329: lea rax, [rip + 0x17a5700]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5ae8330: mov rsi, qword ptr [rax]
// asm:   0x5ae8333: lea rdi, [rsp + 0x50]
// asm:   0x5ae8338: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ae833d: test rbx, rbx
// asm:   0x5ae8340: je 0x5ae80dd
// asm:   0x5ae8346: mov rdi, rbx
// asm:   0x5ae8349: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae834e: mov rbx, rax
// asm:   0x5ae8351: lea rdi, [rsp + 8]
// asm:   0x5ae8356: call 0x2fd6470  ; il2cpp_runtime_helper_02fd6470()
// asm:   0x5ae835b: mov rdi, rbx
// asm:   0x5ae835e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae8363: mov rdi, rax
// asm:   0x5ae8366: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
               (Il2CppObject *obj,bool recursive,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int32_t iVar5;
  void *pvVar6;
  CustomLogic_CustomLogicEvaluator_o *pCVar7;
  System_Collections_Generic_Dictionary_int__object__o *pSVar8;
  System_Collections_Generic_List_object__o *__this;
  CustomLogic_CustomLogicComponentInstance_o *instance;
  bool bVar9;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Map_MapObject_o *obj_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined7 in_register_00000031;
  Il2CppClass **ppIVar10;
  Il2CppClass *pIVar11;
  undefined1 local_90 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_80;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  CustomLogic_CustomLogicComponentInstance_o *local_68;
  undefined4 local_54;
  Il2CppClass *local_50;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  if (Il2CppMethodInitialized_07546e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObject);
    Il2CppMethodInitialized_07546e47 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_38 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar11 = obj->klass;
  bVar2 = (pIVar11->_2).typeHierarchyDepth;
  bVar3 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
  if ((bVar2 < bVar3) ||
     (ppIVar10 = (pIVar11->_2).typeHierarchy,
     ppIVar10[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
    bVar4 = (TypeInfo_Map_MapObject->_2).typeHierarchyDepth;
    if (bVar2 < bVar4) {
      return;
    }
    ppIVar10 = (pIVar11->_2).typeHierarchy;
    if (ppIVar10[(ulong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Map_MapObject) {
      return;
    }
    if (bVar3 <= bVar2) goto label_05ae7d41;
label_05ae7d48:
    bVar3 = (TypeInfo_Map_MapObject->_2).typeHierarchyDepth;
    if ((bVar2 < bVar3) ||
       (pIVar11 = (Il2CppClass *)obj, ppIVar10[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Map_MapObject))
    goto label_05ae8249;
  }
  else {
label_05ae7d41:
    if (ppIVar10[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)
    goto label_05ae7d48;
    pIVar11 = obj[3].klass;
    obj[3].klass = (Il2CppClass *)0x0;
    Il2CppCodeGenWriteBarrier(&obj[3].klass);
    if (pIVar11 == (Il2CppClass *)0x0) goto label_05ae8249;
  }
  pvVar6 = (pIVar11->_1).byval_arg.data;
  if (pvVar6 != (void *)0x0) {
    iVar5 = *(int32_t *)((long)pvVar6 + 0x20);
    if ((*(char *)&(pIVar11->_1).declaringType != '\0') && (*(char *)((long)pvVar6 + 0x2b) != '\0')) {
      if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      }
      piVar1 = &TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount;
      *piVar1 = *piVar1 + -1;
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar7 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar7->fields).IdToNetworkView,
       pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar8,iVar5,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      if (bVar9) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
           (pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar7->fields).IdToNetworkView,
           pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05ae8249;
        System_Collections_Generic_Dictionary_int__object___get_Item
                  (pSVar8,iVar5,
                   (MethodInfo_4A0F690 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                  );
        pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
           (pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar7->fields).IdToNetworkView,
           pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05ae8249;
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar8,iVar5,
                   (MethodInfo_4A10DC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_Remove);
      }
      local_54 = (undefined4)CONCAT71(in_register_00000031,recursive);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar8 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar8,iVar5,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
        local_50 = pIVar11;
        if (bVar9) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pvVar6 = (pIVar11->_1).byval_arg.data;
          if (((pvVar6 == (void *)0x0) ||
              (pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                        TypeInfo_Map_MapLoader->static_fields->IdToChildren,
              pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
             (__this_01 = (System_Collections_Generic_HashSet_int__o *)
                          System_Collections_Generic_Dictionary_int__object___get_Item
                                    (pSVar8,*(int32_t *)((long)pvVar6 + 0x20),
                                     (MethodInfo_4A0F690 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item
                                    ), __this_01 == (System_Collections_Generic_HashSet_int__o *)0x0))
          goto label_05ae8249;
          System_Collections_Generic_HashSet_int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_90,__this_01,
                     (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_68 = local_80;
          local_78 = (undefined1  [8])local_90._0_8_;
          pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_90._8_8_;
          local_90._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_90._8_8_ = local_78;
          if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                               (MethodInfo_4C3AEE0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
            if (bVar9) {
              ThrowNullReferenceException();
            }
          }
          else {
            while (bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                     ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                                      (MethodInfo_4C3AEE0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                  bVar9) {
              System_Collections_Generic_HashSet_int___Add
                        (__this_00,(int32_t)local_68,
                         (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                     (MethodInfo_4C3AED0 *)
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
        }
        __this = *(System_Collections_Generic_List_object__o **)&(local_50->_1).this_arg.bits;
        if (__this != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_90,__this,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
          local_38 = local_80;
          local_48 = (undefined1  [8])local_90._0_8_;
          pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_90._8_8_;
          local_90._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
          while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                   ), instance = local_38, bVar9) {
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if (pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            CustomLogic_CustomLogicEvaluator__RemoveComponent(pCVar7,instance,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                    );
          pIVar11 = local_50;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__DeleteObject((Map_MapObject_o *)pIVar11,(MethodInfo *)0x0);
          if ((char)local_54 != '\0') {
            if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05ae8249;
            System_Collections_Generic_HashSet_int___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_90,__this_00,
                       (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
            local_68 = local_80;
            local_78 = (undefined1  [8])local_90._0_8_;
            pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_90._8_8_;
            local_90._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_90._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_78;
            while (bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                     ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                                      (MethodInfo_4C3AEE0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                  bVar9) {
              iVar5 = (int32_t)local_68;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                (pSVar8,iVar5,
                                 (MethodInfo_4A0F950 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
              if (bVar9) {
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                obj_00 = System_Collections_Generic_Dictionary_int__object___get_Item
                                   (pSVar8,iVar5,
                                    (MethodInfo_4A0F690 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
                method_00 = extraout_RDX;
                if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin)
                  ;
                  method_00 = extraout_RDX_00;
                }
                CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
                          ((Il2CppObject *)obj_00,true,method_00);
              }
            }
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                       (MethodInfo_4C3AED0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          }
          return;
        }
      }
    }
  }
label_05ae8249:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapBuiltin$$get_HasInstantiateAvailable
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_HasInstantiateAvailable (const MethodInfo* method);
// 0x5ae8b90

bool CustomLogic_CustomLogicMapBuiltin__get_HasInstantiateAvailable(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e48 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  return TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount <
         TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_allowedInstantiateCount;
}


// CustomLogic.CustomLogicMapBuiltin$$CanSpawnRuntimeNetworkedMapObject
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__CanSpawnRuntimeNetworkedMapObject (const MethodInfo* method);
// 0x5ae8be0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae8c01: cmp byte ptr [rip + 0x1a5e240], 0
// asm:   0x5ae8c08: je 0x5ae8c9e

bool CustomLogic_CustomLogicMapBuiltin__CanSpawnRuntimeNetworkedMapObject(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  CustomLogic_CustomLogicMapBuiltin_StaticFields *pCVar3;
  
  if (Il2CppMethodInitialized_07546e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e49 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  if (Il2CppMethodInitialized_07546e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e48 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields;
    if (pCVar3->_allowedInstantiateCount <= pCVar3->_instantiateCount) {
      return false;
    }
  }
  else {
    pCVar3 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin)->static_fields;
    if (pCVar3->_allowedInstantiateCount <= pCVar3->_instantiateCount) {
      return false;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields;
  }
  if (pCVar3->_instantiateLimit == (Utility_RateLimit_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = Utility_RateLimit__Peek(pCVar3->_instantiateLimit,1,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicMapBuiltin$$TrySpawningRuntimeNetworkedObject
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject (const MethodInfo* method);
// 0x5ae89e0

void CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  CustomLogic_CustomLogicMapBuiltin_StaticFields *pCVar3;
  Il2CppClass *pIVar4;
  System_Exception_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  if (Il2CppMethodInitialized_07546e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e4a = '\x01';
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) goto label_05ae8ab3;
label_05ae8a05:
    if (Il2CppMethodInitialized_07546e48 != '\0') goto label_05ae8a12;
label_05ae8ac5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e48 = '\x01';
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) goto label_05ae8ae8;
label_05ae8a22:
    pCVar3 = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields;
    if (pCVar3->_allowedInstantiateCount <= pCVar3->_instantiateCount) {
label_05ae8b03:
      pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
      metadataPointer = &"Out of instantiations, please clean up networked objects to spawn more.";
      goto label_05ae8b5a;
    }
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor != 0) goto label_05ae8a05;
label_05ae8ab3:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    if (Il2CppMethodInitialized_07546e48 == '\0') goto label_05ae8ac5;
label_05ae8a12:
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor != 0) goto label_05ae8a22;
label_05ae8ae8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields;
    if (pCVar3->_allowedInstantiateCount <= pCVar3->_instantiateCount) goto label_05ae8b03;
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields;
  }
  if (pCVar3->_instantiateLimit == (Utility_RateLimit_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = Utility_RateLimit__Use(pCVar3->_instantiateLimit,1,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
      piVar1 = &TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount;
      *piVar1 = *piVar1 + 1;
      return;
    }
    piVar1 = &TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateCount;
    *piVar1 = *piVar1 + 1;
    return;
  }
  pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(pIVar4);
  metadataPointer = &"Spawning networked runtime map objects too fast, please slow down.";
label_05ae8b5a:
  message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  System_Exception___ctor_54fa440(__this,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapBuiltin_TrySpawningRuntimeNetworkedObject);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapBuiltin__get_ClassName (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x5ae8cf0

System_String_o *
CustomLogic_CustomLogicMapBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    Il2CppMethodInitialized_07546e4b = '\x01';
  }
  return "Map";
}


// CustomLogic.CustomLogicMapBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x5ae8d20

bool CustomLogic_CustomLogicMapBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMapBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_IsStatic (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x5ae8d30

bool CustomLogic_CustomLogicMapBuiltin__get_IsStatic
               (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMapBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x5ae8d40

bool CustomLogic_CustomLogicMapBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMapBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___cctor (const MethodInfo* method);
// 0x5ae8d50

void CustomLogic_CustomLogicMapBuiltin___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicMapBuiltin_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07546e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_07546e4c = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit = (Utility_RateLimit_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields->_instantiateLimit);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicMapBuiltin->static_fields;
  pCVar1->_instantiateCount = 0;
  pCVar1->_allowedInstantiateCount = 100;
  return;
}



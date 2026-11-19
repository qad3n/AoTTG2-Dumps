// Type: CustomLogic.CustomLogicCollideModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollideModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideModeEnum_o* CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a5aa60

CustomLogic_CustomLogicCollideModeEnum_o *
CustomLogic_CustomLogicCollideModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideModeEnum);
    Il2CppMethodInitialized_07546301 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollideModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum);
  if (Il2CppMethodInitialized_075462fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462fc = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCollideModeEnum_o *)__this;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a5ab80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCollideModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Physical");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_07546302 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Region",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Physical",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollideModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings)
    ;
    pCVar2 = CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Region
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region (const MethodInfo* method);
// 0x5a5ad10

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Region(MethodInfo *method)

{
  System_Func_CustomLogicCollideModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    Il2CppMethodInitialized_07546303 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Region_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__Physical
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical (const MethodInfo* method);
// 0x5a5adb0

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__Physical(MethodInfo *method)

{
  System_Func_CustomLogicCollideModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    Il2CppMethodInitialized_07546304 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__Physical_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o* CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x5a5ae50

CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *
CustomLogic_CustomLogicCollideModeEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicCollideModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
    Il2CppMethodInitialized_07546305 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings___CreatePropertyBinding__None_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a5aef0

void CustomLogic_CustomLogicCollideModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546306 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Physical");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Region");
    Il2CppMethodInitialized_07546306 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Region",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Physical",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCollideModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Region>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x5a5b000

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Region_g____getter_2_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754657d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_0754657d = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->static_fields + 8);
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__Physical>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x5a5b070

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__Physical_g____getter_3_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754657e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_0754657e = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->static_fields;
}


// CustomLogic.CustomLogicCollideModeEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0 (CustomLogic_CustomLogicCollideModeEnum_o* __i, const MethodInfo* method);
// 0x5a5b0e0

Il2CppObject *
CustomLogic_CustomLogicCollideModeEnum_Bindings_____CreatePropertyBinding__None_g____getter_4_0
          (CustomLogic_CustomLogicCollideModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754657f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_0754657f = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideMode->static_fields->None;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->static_fields + 0x10);
}


// CustomLogic.CustomLogicCollideModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideModeEnum___ctor (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x5a5a840

void CustomLogic_CustomLogicCollideModeEnum___ctor
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462fc = '\x01';
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


// CustomLogic.CustomLogicCollideModeEnum$$get_Region
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Region (const MethodInfo* method);
// 0x5a5a8b0

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Region(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_075462fd = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    return TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->static_fields + 8);
}


// CustomLogic.CustomLogicCollideModeEnum$$get_Physical
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_Physical (const MethodInfo* method);
// 0x5a5a920

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_Physical(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_075462fe = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    return TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->static_fields;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_None (const MethodInfo* method);
// 0x5a5a990

System_String_o * CustomLogic_CustomLogicCollideModeEnum__get_None(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_075462ff = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    return TypeInfo_Map_MapObjectCollideMode->static_fields->None;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->static_fields + 0x10)
  ;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideModeEnum__get_ClassName (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x5a5aa00

System_String_o *
CustomLogic_CustomLogicCollideModeEnum__get_ClassName
          (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CollideModeEnum");
    Il2CppMethodInitialized_07546300 = '\x01';
  }
  return "CollideModeEnum";
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x5a5aa30

bool CustomLogic_CustomLogicCollideModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_IsStatic (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x5a5aa40

bool CustomLogic_CustomLogicCollideModeEnum__get_IsStatic
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollideModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideModeEnum_o* __this, const MethodInfo* method);
// 0x5a5aa50

bool CustomLogic_CustomLogicCollideModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicCollideModeEnum_o *__this,MethodInfo *method)

{
  return true;
}



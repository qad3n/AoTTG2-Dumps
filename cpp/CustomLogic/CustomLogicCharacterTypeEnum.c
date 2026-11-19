// Type: CustomLogic.CustomLogicCharacterTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCharacterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterTypeEnum_o* CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a5a150

CustomLogic_CustomLogicCharacterTypeEnum_o *
CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075462f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum);
    Il2CppMethodInitialized_075462f6 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCharacterTypeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum);
  if (Il2CppMethodInitialized_075462f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462f1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCharacterTypeEnum_o *)__this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a5a270

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCharacterTypeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075462f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_075462f7 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Shifter",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCharacterTypeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x5a5a400

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_CustomLogicCharacterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    Il2CppMethodInitialized_075462f8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x5a5a4a0

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_CustomLogicCharacterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    Il2CppMethodInitialized_075462f9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Shifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter (const MethodInfo* method);
// 0x5a5a540

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter(MethodInfo *method)

{
  System_Func_CustomLogicCharacterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    Il2CppMethodInitialized_075462fa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a5a5e0

void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075462fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_075462fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Human",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Shifter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x5a5a6f0

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754657a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_0754657a = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    return (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Human;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->static_fields;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x5a5a760

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754657b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_0754657b = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    return (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->static_fields + 8);
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Shifter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x5a5a7d0

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754657c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_0754657c = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    return (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->static_fields + 0x10);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum___ctor (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x5a59f30

void CustomLogic_CustomLogicCharacterTypeEnum___ctor
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462f1 = '\x01';
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


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Human (const MethodInfo* method);
// 0x5a59fa0

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Human(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_075462f2 = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    return TypeInfo_GameManagers_PlayerCharacter->static_fields->Human;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->static_fields;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Titan (const MethodInfo* method);
// 0x5a5a010

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Titan(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_075462f3 = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    return TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->static_fields + 8);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Shifter
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter (const MethodInfo* method);
// 0x5a5a080

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_075462f4 = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    return TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter)->static_fields + 0x10);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x5a5a0f0

System_String_o *
CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075462f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterTypeEnum");
    Il2CppMethodInitialized_075462f5 = '\x01';
  }
  return "CharacterTypeEnum";
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x5a5a120

bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x5a5a130

bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x5a5a140

bool CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}



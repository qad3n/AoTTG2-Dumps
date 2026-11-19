// Type: CustomLogic.CustomLogicTeamEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTeamEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTeamEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTeamEnum_o* CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aaf070

CustomLogic_CustomLogicTeamEnum_o *
CustomLogic_CustomLogicTeamEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTeamEnum);
    Il2CppMethodInitialized_07546abc = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTeamEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTeamEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum);
  if (Il2CppMethodInitialized_07546ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ab5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTeamEnum_o *)__this;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aaf190

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTeamEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTeamEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Red");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_07546abd = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Blue",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Red",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTeamEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x5aaf3c0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_07546abe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Blue
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue (const MethodInfo* method);
// 0x5aaf460

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Blue(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_07546abf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Red
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red (const MethodInfo* method);
// 0x5aaf500

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Red(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_07546ac0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0,
             (MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x5aaf5a0

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_07546ac1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o* CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x5aaf640

CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *
CustomLogic_CustomLogicTeamEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_CustomLogicTeamEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTeamEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTeamEnum_object);
    Il2CppMethodInitialized_07546ac2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTeamEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTeamEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aaf6e0

void CustomLogic_CustomLogicTeamEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Red");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_07546ac3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blue",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Red",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Human",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTeamEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x5aaf830

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ca5 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->None;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 0x10);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Blue>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x5aaf8a0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Blue_g____getter_3_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ca6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ca6 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields;
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Red>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x5aaf910

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Red_g____getter_4_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ca7 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Red;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 8);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x5aaf980

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_5_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ca8 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 0x18);
}


// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0 (CustomLogic_CustomLogicTeamEnum_o* __i, const MethodInfo* method);
// 0x5aaf9f0

Il2CppObject *
CustomLogic_CustomLogicTeamEnum_Bindings_____CreatePropertyBinding__Human_g____getter_6_0
          (CustomLogic_CustomLogicTeamEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ca9 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return (Il2CppObject *)TypeInfo_GameManagers_TeamInfo->static_fields->Human;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 0x20);
}


// CustomLogic.CustomLogicTeamEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTeamEnum___ctor (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x5aaed70

void CustomLogic_CustomLogicTeamEnum___ctor(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ab5 = '\x01';
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


// CustomLogic.CustomLogicTeamEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_None (const MethodInfo* method);
// 0x5aaede0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_None(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ab6 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return TypeInfo_GameManagers_TeamInfo->static_fields->None;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 0x10);
}


// CustomLogic.CustomLogicTeamEnum$$get_Blue
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Blue (const MethodInfo* method);
// 0x5aaee50

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Blue(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ab7 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields;
}


// CustomLogic.CustomLogicTeamEnum$$get_Red
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Red (const MethodInfo* method);
// 0x5aaeec0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Red(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ab8 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return TypeInfo_GameManagers_TeamInfo->static_fields->Red;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 8);
}


// CustomLogic.CustomLogicTeamEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Titan (const MethodInfo* method);
// 0x5aaef30

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Titan(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546ab9 = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return TypeInfo_GameManagers_TeamInfo->static_fields->Titan;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 0x18);
}


// CustomLogic.CustomLogicTeamEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_Human (const MethodInfo* method);
// 0x5aaefa0

System_String_o * CustomLogic_CustomLogicTeamEnum__get_Human(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_07546aba = '\x01';
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    return TypeInfo_GameManagers_TeamInfo->static_fields->Human;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->static_fields + 0x20);
}


// CustomLogic.CustomLogicTeamEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTeamEnum__get_ClassName (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x5aaf010

System_String_o *
CustomLogic_CustomLogicTeamEnum__get_ClassName(CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TeamEnum");
    Il2CppMethodInitialized_07546abb = '\x01';
  }
  return "TeamEnum";
}


// CustomLogic.CustomLogicTeamEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsAbstract (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x5aaf040

bool CustomLogic_CustomLogicTeamEnum__get_IsAbstract
               (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTeamEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_IsStatic (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x5aaf050

bool CustomLogic_CustomLogicTeamEnum__get_IsStatic
               (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTeamEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTeamEnum_o* __this, const MethodInfo* method);
// 0x5aaf060

bool CustomLogic_CustomLogicTeamEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTeamEnum_o *__this,MethodInfo *method)

{
  return true;
}



// Type: CustomLogic.CustomLogicCharacterTypeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCharacterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterTypeEnum_o* CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3800

CustomLogic_CustomLogicCharacterTypeEnum_o *
CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434593d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum);
    Il2CppMethodInitialized_18434593d = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum);
      if (Il2CppMethodInitialized_184345938 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345938 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCharacterTypeEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCharacterTypeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f8ca30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434593e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_18434593e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_18434593f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
      Il2CppMethodInitialized_18434593f = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345940 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
        Il2CppMethodInitialized_184345940 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Shifter",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCharacterTypeEnum not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
        pMVar3 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings_CreateMemberBinding)
        ;
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345941 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
        Il2CppMethodInitialized_184345941 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4
      ;
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x181f97d40

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_CustomLogicCharacterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434593f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    Il2CppMethodInitialized_18434593f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x181f9bd50

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_CustomLogicCharacterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345940 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    Il2CppMethodInitialized_184345940 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Shifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter (const MethodInfo* method);
// 0x181f9ad10

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter(MethodInfo *method)

{
  System_Func_CustomLogicCharacterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345941 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
    Il2CppMethodInitialized_184345941 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181f9ce30

void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_184345942 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Human",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Shifter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings->static_fields->MemberNames,__this)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x181f8e960

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_184345a10 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Human;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x181f91450

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_184345a11 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Shifter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x181f90ac0

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_184345a12 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum___ctor (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x181f9fb20

void CustomLogic_CustomLogicCharacterTypeEnum___ctor
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345938 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Human (const MethodInfo* method);
// 0x181f9fba0

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Human(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345939 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_184345939 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  return TypeInfo_GameManagers_PlayerCharacter->static_fields->Human;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Titan (const MethodInfo* method);
// 0x181f9fc40

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Titan(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434593a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_18434593a = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  return TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Shifter
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter (const MethodInfo* method);
// 0x181f9fbf0

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434593b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    Il2CppMethodInitialized_18434593b = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
  }
  return TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x181f9fb70

System_String_o *
CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434593c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterTypeEnum");
    Il2CppMethodInitialized_18434593c = '\x01';
  }
  return "CharacterTypeEnum";
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract(CustomLogic_CustomLogicCharacterTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic(CustomLogic_CustomLogicCharacterTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicCharacterTypeEnum_o* __this, MethodInfo* method)

{
  return true;
}



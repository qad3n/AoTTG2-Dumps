// Type: CustomLogic.CustomLogicPlayerStatusEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicPlayerStatusEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicPlayerStatusEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerStatusEnum_o* CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a98f60

CustomLogic_CustomLogicPlayerStatusEnum_o *
CustomLogic_CustomLogicPlayerStatusEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum);
    Il2CppMethodInitialized_07546871 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPlayerStatusEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum);
  if (Il2CppMethodInitialized_0754686c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754686c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicPlayerStatusEnum_o *)__this;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a99080

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPlayerStatusEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Dead");
    il2cpp_codegen_initialize_runtime_metadata(&"Alive");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    Il2CppMethodInitialized_07546872 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Alive",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Dead",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Spectating",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPlayerStatusEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Alive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive (const MethodInfo* method);
// 0x5a99210

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Alive(MethodInfo *method)

{
  System_Func_CustomLogicPlayerStatusEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
    Il2CppMethodInitialized_07546873 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Dead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead (const MethodInfo* method);
// 0x5a992b0

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Dead(MethodInfo *method)

{
  System_Func_CustomLogicPlayerStatusEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
    Il2CppMethodInitialized_07546874 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Spectating
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o* CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating (const MethodInfo* method);
// 0x5a99350

CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings____CreatePropertyBinding__Spectating(MethodInfo *method)

{
  System_Func_CustomLogicPlayerStatusEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
    Il2CppMethodInitialized_07546875 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerStatusEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerStatusEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a993f0

void CustomLogic_CustomLogicPlayerStatusEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Dead");
    il2cpp_codegen_initialize_runtime_metadata(&"Alive");
    il2cpp_codegen_initialize_runtime_metadata(&"Spectating");
    Il2CppMethodInitialized_07546876 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Alive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dead",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Spectating",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Alive>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x5a99500

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Alive_g____getter_2_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_07546a0a = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    return (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Alive;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus)->static_fields;
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Dead>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x5a99570

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Dead_g____getter_3_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_07546a0b = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    return (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Dead;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus)->static_fields + 8);
}


// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Spectating>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0 (CustomLogic_CustomLogicPlayerStatusEnum_o* __i, const MethodInfo* method);
// 0x5a995e0

Il2CppObject *
CustomLogic_CustomLogicPlayerStatusEnum_Bindings_____CreatePropertyBinding__Spectating_g____getter_4_0
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_07546a0c = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    return (Il2CppObject *)TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus)->static_fields + 0x10);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerStatusEnum___ctor (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x5a98d40

void CustomLogic_CustomLogicPlayerStatusEnum___ctor
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754686c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754686c = '\x01';
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


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Alive
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Alive (const MethodInfo* method);
// 0x5a98db0

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Alive(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754686d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_0754686d = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    return TypeInfo_GameManagers_PlayerStatus->static_fields->Alive;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus)->static_fields;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Dead
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Dead (const MethodInfo* method);
// 0x5a98e20

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Dead(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754686e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_0754686e = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    return TypeInfo_GameManagers_PlayerStatus->static_fields->Dead;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus)->static_fields + 8);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_Spectating
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating (const MethodInfo* method);
// 0x5a98e90

System_String_o * CustomLogic_CustomLogicPlayerStatusEnum__get_Spectating(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754686f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerStatus);
    Il2CppMethodInitialized_0754686f = '\x01';
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_PlayerStatus->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus);
    return TypeInfo_GameManagers_PlayerStatus->static_fields->Spectating;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_PlayerStatus)->static_fields + 0x10);
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x5a98f00

System_String_o *
CustomLogic_CustomLogicPlayerStatusEnum__get_ClassName
          (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerStatusEnum");
    Il2CppMethodInitialized_07546870 = '\x01';
  }
  return "PlayerStatusEnum";
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x5a98f30

bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsAbstract
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x5a98f40

bool CustomLogic_CustomLogicPlayerStatusEnum__get_IsStatic
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPlayerStatusEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerStatusEnum_o* __this, const MethodInfo* method);
// 0x5a98f50

bool CustomLogic_CustomLogicPlayerStatusEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicPlayerStatusEnum_o *__this,MethodInfo *method)

{
  return true;
}



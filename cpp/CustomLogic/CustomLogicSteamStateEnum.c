// Type: CustomLogic.CustomLogicSteamStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSteamStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSteamStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSteamStateEnum_o* CustomLogic_CustomLogicSteamStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aace40

CustomLogic_CustomLogicSteamStateEnum_o *
CustomLogic_CustomLogicSteamStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSteamStateEnum);
    Il2CppMethodInitialized_07546a8f = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSteamStateEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum);
  if (Il2CppMethodInitialized_07546a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a8d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicSteamStateEnum_o *)__this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSteamStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aacf60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSteamStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicSteamStateEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"Warning");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    Il2CppMethodInitialized_07546a90 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Off",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Warning",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Damage",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSteamStateEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Off
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off (const MethodInfo* method);
// 0x5aad0f0

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off(MethodInfo *method)

{
  System_Func_CustomLogicSteamStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Off_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSteamStateEnum_object);
    Il2CppMethodInitialized_07546a91 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSteamStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Off_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Warning
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning (const MethodInfo* method);
// 0x5aad190

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning(MethodInfo *method)

{
  System_Func_CustomLogicSteamStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Warning_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSteamStateEnum_object);
    Il2CppMethodInitialized_07546a92 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSteamStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Warning_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Damage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage (const MethodInfo* method);
// 0x5aad230

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage(MethodInfo *method)

{
  System_Func_CustomLogicSteamStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Damage_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSteamStateEnum_object);
    Il2CppMethodInitialized_07546a93 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSteamStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Damage_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSteamStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aad2d0

void CustomLogic_CustomLogicSteamStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Damage");
    il2cpp_codegen_initialize_runtime_metadata(&"Warning");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    Il2CppMethodInitialized_07546a94 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Off",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Warning",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Damage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x5aad3e0

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Warning>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Warning_g____getter_3_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x5aad400

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Warning_g____getter_3_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Damage>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Damage_g____getter_4_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x5aad420

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Damage_g____getter_4_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSteamStateEnum___ctor (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x5aacd40

void CustomLogic_CustomLogicSteamStateEnum___ctor
               (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a8d = '\x01';
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


// CustomLogic.CustomLogicSteamStateEnum$$get_Off
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Off (const MethodInfo* method);
// 0x5aacdb0

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Off(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_Warning
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Warning (const MethodInfo* method);
// 0x5aacdc0

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Warning(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_Damage
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Damage (const MethodInfo* method);
// 0x5aacdd0

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Damage(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSteamStateEnum__get_ClassName (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x5aacde0

System_String_o *
CustomLogic_CustomLogicSteamStateEnum__get_ClassName
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SteamStateEnum");
    Il2CppMethodInitialized_07546a8e = '\x01';
  }
  return "SteamStateEnum";
}


// CustomLogic.CustomLogicSteamStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_IsAbstract (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x5aace10

bool CustomLogic_CustomLogicSteamStateEnum__get_IsAbstract
               (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_IsStatic (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x5aace20

bool CustomLogic_CustomLogicSteamStateEnum__get_IsStatic
               (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x5aace30

bool CustomLogic_CustomLogicSteamStateEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  return true;
}



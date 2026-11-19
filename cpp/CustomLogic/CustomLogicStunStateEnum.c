// Type: CustomLogic.CustomLogicStunStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicStunStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicStunStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStunStateEnum_o* CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aad540

CustomLogic_CustomLogicStunStateEnum_o *
CustomLogic_CustomLogicStunStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStunStateEnum);
    Il2CppMethodInitialized_07546a97 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicStunStateEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicStunStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum);
  if (Il2CppMethodInitialized_07546a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a95 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicStunStateEnum_o *)__this;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aad660

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStunStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicStunStateEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Stunned");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    Il2CppMethodInitialized_07546a98 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Stunned",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Recovering",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicStunStateEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x5aad7f0

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicStunStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    Il2CppMethodInitialized_07546a99 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Stunned
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned (const MethodInfo* method);
// 0x5aad890

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Stunned(MethodInfo *method)

{
  System_Func_CustomLogicStunStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    Il2CppMethodInitialized_07546a9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Recovering
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o* CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering (const MethodInfo* method);
// 0x5aad930

CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *
CustomLogic_CustomLogicStunStateEnum_Bindings____CreatePropertyBinding__Recovering(MethodInfo *method)

{
  System_Func_CustomLogicStunStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStunStateEnum_object);
    Il2CppMethodInitialized_07546a9b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStunStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStunStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aad9d0

void CustomLogic_CustomLogicStunStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Stunned");
    il2cpp_codegen_initialize_runtime_metadata(&"Recovering");
    Il2CppMethodInitialized_07546a9c = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stunned",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Recovering",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicStunStateEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x5aadae0

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__None_g____getter_2_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Stunned>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x5aadb00

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Stunned_g____getter_3_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0 (CustomLogic_CustomLogicStunStateEnum_o* __i, const MethodInfo* method);
// 0x5aadb20

Il2CppObject *
CustomLogic_CustomLogicStunStateEnum_Bindings_____CreatePropertyBinding__Recovering_g____getter_4_0
          (CustomLogic_CustomLogicStunStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicStunStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicStunStateEnum___ctor (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x5aad440

void CustomLogic_CustomLogicStunStateEnum___ctor
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a95 = '\x01';
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


// CustomLogic.CustomLogicStunStateEnum$$get_None
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_None (const MethodInfo* method);
// 0x5aad4b0

int32_t CustomLogic_CustomLogicStunStateEnum__get_None(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Stunned
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned (const MethodInfo* method);
// 0x5aad4c0

int32_t CustomLogic_CustomLogicStunStateEnum__get_Stunned(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicStunStateEnum$$get_Recovering
// il2cpp: int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering (const MethodInfo* method);
// 0x5aad4d0

int32_t CustomLogic_CustomLogicStunStateEnum__get_Recovering(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicStunStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStunStateEnum__get_ClassName (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x5aad4e0

System_String_o *
CustomLogic_CustomLogicStunStateEnum__get_ClassName
          (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"StunStateEnum");
    Il2CppMethodInitialized_07546a96 = '\x01';
  }
  return "StunStateEnum";
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsAbstract (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x5aad510

bool CustomLogic_CustomLogicStunStateEnum__get_IsAbstract
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicStunStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_IsStatic (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x5aad520

bool CustomLogic_CustomLogicStunStateEnum__get_IsStatic
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicStunStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicStunStateEnum_o* __this, const MethodInfo* method);
// 0x5aad530

bool CustomLogic_CustomLogicStunStateEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicStunStateEnum_o *__this,MethodInfo *method)

{
  return true;
}



// Type: CustomLogic.CustomLogicInputErenShifterEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputErenShifterEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputErenShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputErenShifterEnum_o* CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a81780

CustomLogic_CustomLogicInputErenShifterEnum_o *
CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputErenShifterEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_07546693 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputErenShifterEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  if (Il2CppMethodInitialized_0754668c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754668c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a818a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputErenShifterEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546694 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    Il2CppMethodInitialized_07546694 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputErenShifterEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x5a81a80

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546695 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_07546695 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a81b20

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546696 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_07546696 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a81bc0

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546697 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_07546697 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x5a81c60

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_CustomLogicInputErenShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
    Il2CppMethodInitialized_07546698 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputErenShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a81d00

void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546699 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    Il2CppMethodInitialized_07546699 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x5a81e30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a81e4d: cmp byte ptr [rip + 0x1ac4b48], 0
// asm:   0x5a81e54: je 0x5a81ea2

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754669a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754669a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_0754699c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754699c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue;
  }
  return *(Il2CppObject **)
          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x5a81ee0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a81efd: cmp byte ptr [rip + 0x1ac4a99], 0
// asm:   0x5a81f04: je 0x5a81f53

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754669b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754669b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_0754699d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754699d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->JumpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x5a81f90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a81fad: cmp byte ptr [rip + 0x1ac49ea], 0
// asm:   0x5a81fb4: je 0x5a82003

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754669c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754669c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_0754699e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754699e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->WalkValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x5a82040
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8205d: cmp byte ptr [rip + 0x1ac493b], 0
// asm:   0x5a82064: je 0x5a820b3

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754669d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754669d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
  }
  if (Il2CppMethodInitialized_0754699f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754699f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->AttackComboValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___ctor (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x5a81400

void CustomLogic_CustomLogicInputErenShifterEnum___ctor
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754668c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754668c = '\x01';
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


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Kick (const MethodInfo* method);
// 0x5a81470

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Kick(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754668d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754668d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue;
  }
  return *(System_String_o **)
          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Jump (const MethodInfo* method);
// 0x5a814e0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Jump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754668e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754668e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->JumpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Walk (const MethodInfo* method);
// 0x5a81550

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Walk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754668f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_0754668f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->WalkValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x5a815c0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    Il2CppMethodInitialized_07546690 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->AttackComboValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x5a81630

System_String_o *
CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546691 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputErenShifterEnum");
    Il2CppMethodInitialized_07546691 = '\x01';
  }
  return "InputErenShifterEnum";
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x5a81660

bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x5a81670

bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x5a81680

bool CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___cctor (const MethodInfo* method);
// 0x5a81690

void CustomLogic_CustomLogicInputErenShifterEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputErenShifterEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07546692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter/Jump");
    Il2CppMethodInitialized_07546692 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue = "ErenShifter/Kick";
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields->KickValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields;
  pCVar1->JumpValue = "ErenShifter/Jump";
  Il2CppCodeGenWriteBarrier(&pCVar1->JumpValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields;
  pCVar1->WalkValue = "ErenShifter/Walk";
  Il2CppCodeGenWriteBarrier(&pCVar1->WalkValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputErenShifterEnum->static_fields;
  pCVar1->AttackComboValue = "ErenShifter/AttackCombo";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackComboValue);
  return;
}



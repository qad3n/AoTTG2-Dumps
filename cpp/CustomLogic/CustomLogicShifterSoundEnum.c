// Type: CustomLogic.CustomLogicShifterSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShifterSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterSoundEnum_o* CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aa90c0

CustomLogic_CustomLogicShifterSoundEnum_o *
CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum);
    Il2CppMethodInitialized_07546a41 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterSoundEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum);
  if (Il2CppMethodInitialized_07546a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a39 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicShifterSoundEnum_o *)__this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aa91e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicShifterSoundEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam1");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam2");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieHurt");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_07546a42 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Thunder",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ErenRoar",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"AnnieRoar",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"AnnieHurt",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ColossalSteam1",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ColossalSteam2",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterSoundEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__Thunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder (const MethodInfo* method);
// 0x5aa9450

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_07546a43 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ErenRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar (const MethodInfo* method);
// 0x5aa94f0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_07546a44 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar (const MethodInfo* method);
// 0x5aa9590

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_07546a45 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieHurt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt (const MethodInfo* method);
// 0x5aa9630

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_07546a46 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1 (const MethodInfo* method);
// 0x5aa96d0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_07546a47 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2 (const MethodInfo* method);
// 0x5aa9770

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_07546a48 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aa9810

void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam1");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam2");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieHurt");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_07546a49 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thunder",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ErenRoar",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AnnieRoar",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AnnieHurt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalSteam1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalSteam2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__Thunder>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x5aa9980

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546c99 = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->Thunder;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ErenRoar>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x5aa99f0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546c9a = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->ErenRoar;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 8);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieRoar>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x5aa9a60

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546c9b = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->AnnieRoar;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x10);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieHurt>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x5aa9ad0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546c9c = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->AnnieHurt;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x18);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam1>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x5aa9b40

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546c9d = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x20);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam2>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x5aa9bb0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546c9e = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x28);
}


// CustomLogic.CustomLogicShifterSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum___ctor (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x5aa8d50

void CustomLogic_CustomLogicShifterSoundEnum___ctor
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a39 = '\x01';
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


// CustomLogic.CustomLogicShifterSoundEnum$$get_Thunder
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_Thunder (const MethodInfo* method);
// 0x5aa8dc0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_Thunder(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546a3a = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return TypeInfo_Characters_ShifterSounds->static_fields->Thunder;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ErenRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar (const MethodInfo* method);
// 0x5aa8e30

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546a3b = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return TypeInfo_Characters_ShifterSounds->static_fields->ErenRoar;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 8);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar (const MethodInfo* method);
// 0x5aa8ea0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546a3c = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return TypeInfo_Characters_ShifterSounds->static_fields->AnnieRoar;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x10)
  ;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieHurt
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt (const MethodInfo* method);
// 0x5aa8f10

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546a3d = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return TypeInfo_Characters_ShifterSounds->static_fields->AnnieHurt;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x18)
  ;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam1
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1 (const MethodInfo* method);
// 0x5aa8f80

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546a3e = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x20)
  ;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam2
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2 (const MethodInfo* method);
// 0x5aa8ff0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_07546a3f = '\x01';
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    return TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Characters_ShifterSounds)->static_fields + 0x28)
  ;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ClassName (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x5aa9060

System_String_o *
CustomLogic_CustomLogicShifterSoundEnum__get_ClassName
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterSoundEnum");
    Il2CppMethodInitialized_07546a40 = '\x01';
  }
  return "ShifterSoundEnum";
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x5aa9090

bool CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x5aa90a0

bool CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x5aa90b0

bool CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}



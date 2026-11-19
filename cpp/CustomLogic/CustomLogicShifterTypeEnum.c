// Type: CustomLogic.CustomLogicShifterTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicShifterTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShifterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterTypeEnum_o* CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aa9db0

CustomLogic_CustomLogicShifterTypeEnum_o *
CustomLogic_CustomLogicShifterTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum);
    Il2CppMethodInitialized_07546a50 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterTypeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum);
  if (Il2CppMethodInitialized_07546a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a4a = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicShifterTypeEnum_o *)__this;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aa9ed0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicShifterTypeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07546a51 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"WallColossal",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterTypeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings)
    ;
    pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x5aaa0b0

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_07546a52 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x5aaa150

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Armored(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_07546a53 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x5aaa1f0

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_07546a54 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__WallColossal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o* CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal (const MethodInfo* method);
// 0x5aaa290

CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *
CustomLogic_CustomLogicShifterTypeEnum_Bindings____CreatePropertyBinding__WallColossal(MethodInfo *method)

{
  System_Func_CustomLogicShifterTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
    Il2CppMethodInitialized_07546a55 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterTypeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterTypeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aaa330

void CustomLogic_CustomLogicShifterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07546a56 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Armored",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallColossal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x5aaa460

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_2_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    Il2CppMethodInitialized_07546a4b = '\x01';
  }
  return (Il2CppObject *)"Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x5aaa490

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_3_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07546a4c = '\x01';
  }
  return (Il2CppObject *)"Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x5aaa4c0

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_4_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    Il2CppMethodInitialized_07546a4d = '\x01';
  }
  return (Il2CppObject *)"Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__WallColossal>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0 (CustomLogic_CustomLogicShifterTypeEnum_o* __i, const MethodInfo* method);
// 0x5aaa4f0

Il2CppObject *
CustomLogic_CustomLogicShifterTypeEnum_Bindings_____CreatePropertyBinding__WallColossal_g____getter_5_0
          (CustomLogic_CustomLogicShifterTypeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_07546a4e = '\x01';
  }
  return (Il2CppObject *)"WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterTypeEnum___ctor (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x5aa9c20

void CustomLogic_CustomLogicShifterTypeEnum___ctor
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a4a = '\x01';
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


// CustomLogic.CustomLogicShifterTypeEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Annie (const MethodInfo* method);
// 0x5aa9c90

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Annie(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    Il2CppMethodInitialized_07546a4b = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Armored (const MethodInfo* method);
// 0x5aa9cc0

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Armored(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07546a4c = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_Eren (const MethodInfo* method);
// 0x5aa9cf0

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_Eren(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    Il2CppMethodInitialized_07546a4d = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_WallColossal
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal (const MethodInfo* method);
// 0x5aa9d20

System_String_o * CustomLogic_CustomLogicShifterTypeEnum__get_WallColossal(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_07546a4e = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterTypeEnum__get_ClassName (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x5aa9d50

System_String_o *
CustomLogic_CustomLogicShifterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterTypeEnum");
    Il2CppMethodInitialized_07546a4f = '\x01';
  }
  return "ShifterTypeEnum";
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x5aa9d80

bool CustomLogic_CustomLogicShifterTypeEnum__get_IsAbstract
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x5aa9d90

bool CustomLogic_CustomLogicShifterTypeEnum__get_IsStatic
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShifterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterTypeEnum_o* __this, const MethodInfo* method);
// 0x5aa9da0

bool CustomLogic_CustomLogicShifterTypeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicShifterTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}



// Type: CustomLogic.CustomLogicCameraModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicCameraModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCameraModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraModeEnum_o* CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a595c0

CustomLogic_CustomLogicCameraModeEnum_o *
CustomLogic_CustomLogicCameraModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicCameraModeEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075462e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462e6 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCameraModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  if (Il2CppMethodInitialized_075462df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462df = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a596e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCameraModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075462e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"Original");
    Il2CppMethodInitialized_075462e7 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TPS",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Original",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"FPS",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"WOW",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCameraModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__WOW
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__WOW
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__TPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS (const MethodInfo* method);
// 0x5a598c0

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__TPS(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_075462e8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__TPS_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__Original
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original (const MethodInfo* method);
// 0x5a59960

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__Original(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_075462e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__Original_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__FPS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS (const MethodInfo* method);
// 0x5a59a00

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__FPS(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_075462ea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__FPS_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$__CreatePropertyBinding__WOW
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o* CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__WOW (const MethodInfo* method);
// 0x5a59aa0

CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *
CustomLogic_CustomLogicCameraModeEnum_Bindings____CreatePropertyBinding__WOW(MethodInfo *method)

{
  System_Func_CustomLogicCameraModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075462eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
    Il2CppMethodInitialized_075462eb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings___CreatePropertyBinding__WOW_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a59b40

void CustomLogic_CustomLogicCameraModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075462ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"Original");
    Il2CppMethodInitialized_075462ec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TPS",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Original",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FPS",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WOW",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCameraModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__TPS>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x5a59c70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a59c8d: cmp byte ptr [rip + 0x1aec8e2], 0
// asm:   0x5a59c94: je 0x5a59ce2

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__TPS_g____getter_2_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462ed = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_07546576 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_07546576 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields;
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__Original>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x5a59d20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a59d3d: cmp byte ptr [rip + 0x1aec833], 0
// asm:   0x5a59d44: je 0x5a59d93

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__Original_g____getter_3_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462ee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_07546577 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_07546577 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_original;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__FPS>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x5a59dd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a59ded: cmp byte ptr [rip + 0x1aec784], 0
// asm:   0x5a59df4: je 0x5a59e43

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__FPS_g____getter_4_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462ef = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_07546578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_07546578 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_fps;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicCameraModeEnum.Bindings$$<__CreatePropertyBinding__WOW>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__WOW_g____getter_5_0 (CustomLogic_CustomLogicCameraModeEnum_o* __i, const MethodInfo* method);
// 0x5a59e80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a59e9d: cmp byte ptr [rip + 0x1aec6d5], 0
// asm:   0x5a59ea4: je 0x5a59ef3

Il2CppObject *
CustomLogic_CustomLogicCameraModeEnum_Bindings_____CreatePropertyBinding__WOW_g____getter_5_0
          (CustomLogic_CustomLogicCameraModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462f0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
  }
  if (Il2CppMethodInitialized_07546579 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_07546579 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_wow;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicCameraModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___ctor (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x5a591e0

void CustomLogic_CustomLogicCameraModeEnum___ctor
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075462df = '\x01';
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


// CustomLogic.CustomLogicCameraModeEnum$$get_TPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_TPS (const MethodInfo* method);
// 0x5a59250

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_TPS(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462e0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_Original
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_Original (const MethodInfo* method);
// 0x5a592c0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_Original(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462e1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_original;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_FPS
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_FPS (const MethodInfo* method);
// 0x5a59330

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_FPS(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462e2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_fps;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_WOW
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_WOW (const MethodInfo* method);
// 0x5a593a0

System_String_o * CustomLogic_CustomLogicCameraModeEnum__get_WOW(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075462e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462e3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCameraModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    return TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_wow;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraModeEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicCameraModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraModeEnum__get_ClassName (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x5a59410

System_String_o *
CustomLogic_CustomLogicCameraModeEnum__get_ClassName
          (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075462e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CameraModeEnum");
    Il2CppMethodInitialized_075462e4 = '\x01';
  }
  return "CameraModeEnum";
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x5a59440

bool CustomLogic_CustomLogicCameraModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_IsStatic (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x5a59450

bool CustomLogic_CustomLogicCameraModeEnum__get_IsStatic
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCameraModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCameraModeEnum_o* __this, const MethodInfo* method);
// 0x5a59460

bool CustomLogic_CustomLogicCameraModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicCameraModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCameraModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraModeEnum___cctor (const MethodInfo* method);
// 0x5a59470

void CustomLogic_CustomLogicCameraModeEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCameraModeEnum_StaticFields *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (Il2CppMethodInitialized_075462e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum);
    Il2CppMethodInitialized_075462e5 = '\x01';
  }
  SStack_28.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields->_tps);
  SStack_40.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields;
  pCVar1->_original = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_original);
  SStack_58.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields;
  pCVar1->_fps = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_fps);
  SStack_70.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicCameraModeEnum->static_fields;
  pCVar1->_wow = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_wow);
  return;
}



// Type: CustomLogic.CustomLogicFontStyleEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFontStyleEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFontStyleEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFontStyleEnum_o* CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a643c0

CustomLogic_CustomLogicFontStyleEnum_o *
CustomLogic_CustomLogicFontStyleEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075463ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFontStyleEnum);
    Il2CppMethodInitialized_075463ae = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFontStyleEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum);
  if (Il2CppMethodInitialized_075463ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicFontStyleEnum_o *)__this;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a644e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFontStyleEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicFontStyleEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075463af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Italic");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Bold");
    il2cpp_codegen_initialize_runtime_metadata(&"BoldAndItalic");
    Il2CppMethodInitialized_075463af = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Bold",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Italic",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"BoldAndItalic",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFontStyleEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x5a646c0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_075463b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Bold
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold (const MethodInfo* method);
// 0x5a64760

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Bold(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_075463b1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Italic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic (const MethodInfo* method);
// 0x5a64800

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__Italic(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_075463b2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__BoldAndItalic
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o* CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic (const MethodInfo* method);
// 0x5a648a0

CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *
CustomLogic_CustomLogicFontStyleEnum_Bindings____CreatePropertyBinding__BoldAndItalic(MethodInfo *method)

{
  System_Func_CustomLogicFontStyleEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
    Il2CppMethodInitialized_075463b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFontStyleEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFontStyleEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a64940

void CustomLogic_CustomLogicFontStyleEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075463b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Italic");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Bold");
    il2cpp_codegen_initialize_runtime_metadata(&"BoldAndItalic");
    Il2CppMethodInitialized_075463b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Bold",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Italic",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BoldAndItalic",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x5a64a70

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Bold>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x5a64a90

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Bold_g____getter_3_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Italic>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x5a64ab0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__Italic_g____getter_4_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__BoldAndItalic>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0 (CustomLogic_CustomLogicFontStyleEnum_o* __i, const MethodInfo* method);
// 0x5a64ad0

Il2CppObject *
CustomLogic_CustomLogicFontStyleEnum_Bindings_____CreatePropertyBinding__BoldAndItalic_g____getter_5_0
          (CustomLogic_CustomLogicFontStyleEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFontStyleEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFontStyleEnum___ctor (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x5a642b0

void CustomLogic_CustomLogicFontStyleEnum___ctor
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075463ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075463ac = '\x01';
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


// CustomLogic.CustomLogicFontStyleEnum$$get_Normal
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal (const MethodInfo* method);
// 0x5a64320

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Normal(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Bold
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold (const MethodInfo* method);
// 0x5a64330

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Bold(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_Italic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic (const MethodInfo* method);
// 0x5a64340

int32_t CustomLogic_CustomLogicFontStyleEnum__get_Italic(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_BoldAndItalic
// il2cpp: int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic (const MethodInfo* method);
// 0x5a64350

int32_t CustomLogic_CustomLogicFontStyleEnum__get_BoldAndItalic(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFontStyleEnum__get_ClassName (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x5a64360

System_String_o *
CustomLogic_CustomLogicFontStyleEnum__get_ClassName
          (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075463ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FontStyleEnum");
    Il2CppMethodInitialized_075463ad = '\x01';
  }
  return "FontStyleEnum";
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x5a64390

bool CustomLogic_CustomLogicFontStyleEnum__get_IsAbstract
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_IsStatic (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x5a643a0

bool CustomLogic_CustomLogicFontStyleEnum__get_IsStatic
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicFontStyleEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFontStyleEnum_o* __this, const MethodInfo* method);
// 0x5a643b0

bool CustomLogic_CustomLogicFontStyleEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicFontStyleEnum_o *__this,MethodInfo *method)

{
  return true;
}



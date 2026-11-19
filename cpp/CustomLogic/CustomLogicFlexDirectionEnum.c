// Type: CustomLogic.CustomLogicFlexDirectionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicFlexDirectionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicFlexDirectionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicFlexDirectionEnum_o* CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a635c0

CustomLogic_CustomLogicFlexDirectionEnum_o *
CustomLogic_CustomLogicFlexDirectionEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754639e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum);
    Il2CppMethodInitialized_0754639e = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFlexDirectionEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum);
  if (Il2CppMethodInitialized_0754639c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754639c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicFlexDirectionEnum_o *)__this;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a636e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicFlexDirectionEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_0754639f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"RowReverse");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"ColumnReverse");
    Il2CppMethodInitialized_0754639f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Row",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Column",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"RowReverse",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ColumnReverse",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFlexDirectionEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Row
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row (const MethodInfo* method);
// 0x5a638c0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Row(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_075463a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Row_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__Column
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column (const MethodInfo* method);
// 0x5a63960

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__Column(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_075463a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__Column_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__RowReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse (const MethodInfo* method);
// 0x5a63a00

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__RowReverse(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_075463a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__RowReverse_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$__CreatePropertyBinding__ColumnReverse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o* CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse (const MethodInfo* method);
// 0x5a63aa0

CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings____CreatePropertyBinding__ColumnReverse(MethodInfo *method)

{
  System_Func_CustomLogicFlexDirectionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075463a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
    Il2CppMethodInitialized_075463a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicFlexDirectionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings___CreatePropertyBinding__ColumnReverse_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicFlexDirectionEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a63b40

void CustomLogic_CustomLogicFlexDirectionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075463a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"RowReverse");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"ColumnReverse");
    Il2CppMethodInitialized_075463a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Row",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Column",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RowReverse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColumnReverse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicFlexDirectionEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Row>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x5a63c70

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Row_g____getter_2_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__Column>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x5a63c90

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__Column_g____getter_3_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__RowReverse>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x5a63cb0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__RowReverse_g____getter_4_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum.Bindings$$<__CreatePropertyBinding__ColumnReverse>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0 (CustomLogic_CustomLogicFlexDirectionEnum_o* __i, const MethodInfo* method);
// 0x5a63cd0

Il2CppObject *
CustomLogic_CustomLogicFlexDirectionEnum_Bindings_____CreatePropertyBinding__ColumnReverse_g____getter_5_0
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicFlexDirectionEnum___ctor (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x5a634b0

void CustomLogic_CustomLogicFlexDirectionEnum___ctor
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754639c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754639c = '\x01';
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


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Row
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row (const MethodInfo* method);
// 0x5a63520

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Row(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_Column
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column (const MethodInfo* method);
// 0x5a63530

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_Column(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_RowReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse (const MethodInfo* method);
// 0x5a63540

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_RowReverse(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ColumnReverse
// il2cpp: int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse (const MethodInfo* method);
// 0x5a63550

int32_t CustomLogic_CustomLogicFlexDirectionEnum__get_ColumnReverse(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x5a63560

System_String_o *
CustomLogic_CustomLogicFlexDirectionEnum__get_ClassName
          (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754639d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexDirectionEnum");
    Il2CppMethodInitialized_0754639d = '\x01';
  }
  return "FlexDirectionEnum";
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x5a63590

bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsAbstract
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x5a635a0

bool CustomLogic_CustomLogicFlexDirectionEnum__get_IsStatic
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicFlexDirectionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicFlexDirectionEnum_o* __this, const MethodInfo* method);
// 0x5a635b0

bool CustomLogic_CustomLogicFlexDirectionEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicFlexDirectionEnum_o *__this,MethodInfo *method)

{
  return true;
}



// Type: CustomLogic.CustomLogicTitanDeathTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicTitanDeathTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanDeathTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanDeathTypeEnum_o* CustomLogic_CustomLogicTitanDeathTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ab9970

CustomLogic_CustomLogicTitanDeathTypeEnum_o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546b94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum);
    Il2CppMethodInitialized_07546b94 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanDeathTypeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum);
  if (Il2CppMethodInitialized_07546b92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546b92 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTitanDeathTypeEnum_o *)__this;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ab9a90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546b95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    Il2CppMethodInitialized_07546b95 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Default
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Default
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Normal
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Normal
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Decapitate",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Decapitate
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Decapitate
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Knockback",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanDeathTypeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Knockback
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Knockback
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Default
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Default (const MethodInfo* method);
// 0x5ab9c70

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Default(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_07546b96 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x5ab9d10

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_07546b97 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Decapitate
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Decapitate (const MethodInfo* method);
// 0x5ab9db0

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Decapitate(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_07546b98 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Knockback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Knockback (const MethodInfo* method);
// 0x5ab9e50

CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings____CreatePropertyBinding__Knockback(MethodInfo *method)

{
  System_Func_CustomLogicTitanDeathTypeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546b99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object);
    Il2CppMethodInitialized_07546b99 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanDeathTypeEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanDeathTypeEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ab9ef0

void CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546b9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Decapitate");
    Il2CppMethodInitialized_07546b9a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Default",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Decapitate",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Knockback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_2_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x5aba020

Il2CppObject *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_2_0
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_3_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x5aba040

Il2CppObject *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_3_0
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Decapitate>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_4_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x5aba060

Il2CppObject *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Decapitate_g____getter_4_0
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Knockback>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Knockback_g____getter_5_0 (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __i, const MethodInfo* method);
// 0x5aba080

Il2CppObject *
CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_____CreatePropertyBinding__Knockback_g____getter_5_0
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanDeathTypeEnum___ctor (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x5ab9860

void CustomLogic_CustomLogicTitanDeathTypeEnum___ctor
               (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546b92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546b92 = '\x01';
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


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Default
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Default (const MethodInfo* method);
// 0x5ab98d0

int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Default(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Normal
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Normal (const MethodInfo* method);
// 0x5ab98e0

int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Normal(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Decapitate
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Decapitate (const MethodInfo* method);
// 0x5ab98f0

int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Decapitate(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Knockback
// il2cpp: int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Knockback (const MethodInfo* method);
// 0x5ab9900

int32_t CustomLogic_CustomLogicTitanDeathTypeEnum__get_Knockback(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanDeathTypeEnum__get_ClassName (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x5ab9910

System_String_o *
CustomLogic_CustomLogicTitanDeathTypeEnum__get_ClassName
          (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546b93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDeathTypeEnum");
    Il2CppMethodInitialized_07546b93 = '\x01';
  }
  return "TitanDeathTypeEnum";
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsAbstract (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x5ab9940

bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsAbstract
               (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsStatic (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x5ab9950

bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_IsStatic
               (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanDeathTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanDeathTypeEnum_o* __this, const MethodInfo* method);
// 0x5ab9960

bool CustomLogic_CustomLogicTitanDeathTypeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTitanDeathTypeEnum_o *__this,MethodInfo *method)

{
  return true;
}



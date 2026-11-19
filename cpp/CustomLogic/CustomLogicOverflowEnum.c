// Type: CustomLogic.CustomLogicOverflowEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOverflowEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicOverflowEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOverflowEnum_o* CustomLogic_CustomLogicOverflowEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a98030

CustomLogic_CustomLogicOverflowEnum_o *
CustomLogic_CustomLogicOverflowEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754685e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOverflowEnum);
    Il2CppMethodInitialized_0754685e = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicOverflowEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicOverflowEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOverflowEnum);
  if (Il2CppMethodInitialized_0754685c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754685c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicOverflowEnum_o *)__this;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOverflowEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a98150

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOverflowEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicOverflowEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_0754685f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden");
    Il2CppMethodInitialized_0754685f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Visible",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Hidden",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicOverflowEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Visible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o* CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible (const MethodInfo* method);
// 0x5a98290

CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *
CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Visible(MethodInfo *method)

{
  System_Func_CustomLogicOverflowEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOverflowEnum_object);
    Il2CppMethodInitialized_07546860 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOverflowEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Hidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o* CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden (const MethodInfo* method);
// 0x5a98330

CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *
CustomLogic_CustomLogicOverflowEnum_Bindings____CreatePropertyBinding__Hidden(MethodInfo *method)

{
  System_Func_CustomLogicOverflowEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOverflowEnum_object);
    Il2CppMethodInitialized_07546861 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOverflowEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOverflowEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOverflowEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a983d0

void CustomLogic_CustomLogicOverflowEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546862 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Hidden");
    Il2CppMethodInitialized_07546862 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Visible",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hidden",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOverflowEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Visible>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Visible_g____getter_2_0 (CustomLogic_CustomLogicOverflowEnum_o* __i, const MethodInfo* method);
// 0x5a984c0

Il2CppObject *
CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Visible_g____getter_2_0
          (CustomLogic_CustomLogicOverflowEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Hidden>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Hidden_g____getter_3_0 (CustomLogic_CustomLogicOverflowEnum_o* __i, const MethodInfo* method);
// 0x5a984e0

Il2CppObject *
CustomLogic_CustomLogicOverflowEnum_Bindings_____CreatePropertyBinding__Hidden_g____getter_3_0
          (CustomLogic_CustomLogicOverflowEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicOverflowEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOverflowEnum___ctor (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x5a97f40

void CustomLogic_CustomLogicOverflowEnum___ctor
               (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754685c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754685c = '\x01';
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


// CustomLogic.CustomLogicOverflowEnum$$get_Visible
// il2cpp: int32_t CustomLogic_CustomLogicOverflowEnum__get_Visible (const MethodInfo* method);
// 0x5a97fb0

int32_t CustomLogic_CustomLogicOverflowEnum__get_Visible(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicOverflowEnum$$get_Hidden
// il2cpp: int32_t CustomLogic_CustomLogicOverflowEnum__get_Hidden (const MethodInfo* method);
// 0x5a97fc0

int32_t CustomLogic_CustomLogicOverflowEnum__get_Hidden(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicOverflowEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOverflowEnum__get_ClassName (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x5a97fd0

System_String_o *
CustomLogic_CustomLogicOverflowEnum__get_ClassName
          (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754685d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OverflowEnum");
    Il2CppMethodInitialized_0754685d = '\x01';
  }
  return "OverflowEnum";
}


// CustomLogic.CustomLogicOverflowEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_IsAbstract (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x5a98000

bool CustomLogic_CustomLogicOverflowEnum__get_IsAbstract
               (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicOverflowEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_IsStatic (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x5a98010

bool CustomLogic_CustomLogicOverflowEnum__get_IsStatic
               (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicOverflowEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOverflowEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOverflowEnum_o* __this, const MethodInfo* method);
// 0x5a98020

bool CustomLogic_CustomLogicOverflowEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicOverflowEnum_o *__this,MethodInfo *method)

{
  return true;
}



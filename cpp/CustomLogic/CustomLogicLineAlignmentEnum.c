// Type: CustomLogic.CustomLogicLineAlignmentEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicLineAlignmentEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLineAlignmentEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLineAlignmentEnum_o* CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a94630

CustomLogic_CustomLogicLineAlignmentEnum_o *
CustomLogic_CustomLogicLineAlignmentEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum);
    Il2CppMethodInitialized_07546814 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLineAlignmentEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum);
  if (Il2CppMethodInitialized_07546812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546812 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicLineAlignmentEnum_o *)__this;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a94750

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLineAlignmentEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TransformZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Local");
    il2cpp_codegen_initialize_runtime_metadata(&"View");
    Il2CppMethodInitialized_07546815 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"View",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Local",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"TransformZ",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLineAlignmentEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__View
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View (const MethodInfo* method);
// 0x5a948e0

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__View(MethodInfo *method)

{
  System_Func_CustomLogicLineAlignmentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    Il2CppMethodInitialized_07546816 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__View_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__Local
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local (const MethodInfo* method);
// 0x5a94980

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__Local(MethodInfo *method)

{
  System_Func_CustomLogicLineAlignmentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    Il2CppMethodInitialized_07546817 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__Local_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$__CreatePropertyBinding__TransformZ
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o* CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ (const MethodInfo* method);
// 0x5a94a20

CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings____CreatePropertyBinding__TransformZ(MethodInfo *method)

{
  System_Func_CustomLogicLineAlignmentEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
    Il2CppMethodInitialized_07546818 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLineAlignmentEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings___CreatePropertyBinding__TransformZ_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLineAlignmentEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a94ac0

void CustomLogic_CustomLogicLineAlignmentEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TransformZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Local");
    il2cpp_codegen_initialize_runtime_metadata(&"View");
    Il2CppMethodInitialized_07546819 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"View",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Local",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TransformZ",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLineAlignmentEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__View>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x5a94bd0

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__View_g____getter_2_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__Local>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x5a94bf0

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__Local_g____getter_3_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum.Bindings$$<__CreatePropertyBinding__TransformZ>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0 (CustomLogic_CustomLogicLineAlignmentEnum_o* __i, const MethodInfo* method);
// 0x5a94c10

Il2CppObject *
CustomLogic_CustomLogicLineAlignmentEnum_Bindings_____CreatePropertyBinding__TransformZ_g____getter_4_0
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicLineAlignmentEnum___ctor (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x5a94530

void CustomLogic_CustomLogicLineAlignmentEnum___ctor
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546812 = '\x01';
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


// CustomLogic.CustomLogicLineAlignmentEnum$$get_View
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View (const MethodInfo* method);
// 0x5a945a0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_View(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_Local
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local (const MethodInfo* method);
// 0x5a945b0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_Local(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_TransformZ
// il2cpp: int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ (const MethodInfo* method);
// 0x5a945c0

int32_t CustomLogic_CustomLogicLineAlignmentEnum__get_TransformZ(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x5a945d0

System_String_o *
CustomLogic_CustomLogicLineAlignmentEnum__get_ClassName
          (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LineAlignmentEnum");
    Il2CppMethodInitialized_07546813 = '\x01';
  }
  return "LineAlignmentEnum";
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x5a94600

bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsAbstract
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x5a94610

bool CustomLogic_CustomLogicLineAlignmentEnum__get_IsStatic
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLineAlignmentEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers (CustomLogic_CustomLogicLineAlignmentEnum_o* __this, const MethodInfo* method);
// 0x5a94620

bool CustomLogic_CustomLogicLineAlignmentEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicLineAlignmentEnum_o *__this,MethodInfo *method)

{
  return true;
}



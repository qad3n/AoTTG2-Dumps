// Type: CustomLogic.CustomLogicOutlineModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOutlineModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicOutlineModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOutlineModeEnum_o* CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a97260

CustomLogic_CustomLogicOutlineModeEnum_o *
CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicOutlineModeEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754684d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_0754684d = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicOutlineModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  if (Il2CppMethodInitialized_07546844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546844 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a97380

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicOutlineModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_0754684e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndSilhouette");
    il2cpp_codegen_initialize_runtime_metadata(&"SilhouetteOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndLightenColor");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineHidden");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAll");
    Il2CppMethodInitialized_0754684e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"OutlineAll",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"OutlineVisible",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"OutlineHidden",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"OutlineAndSilhouette",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SilhouetteOnly",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"OutlineAndLightenColor",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicOutlineModeEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAll
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll (const MethodInfo* method);
// 0x5a975f0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754684f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_0754684f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineVisible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible (const MethodInfo* method);
// 0x5a97690

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_07546850 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineHidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden (const MethodInfo* method);
// 0x5a97730

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_07546851 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndSilhouette
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette (const MethodInfo* method);
// 0x5a977d0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette
          (MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_07546852 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__SilhouetteOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly (const MethodInfo* method);
// 0x5a97870

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_07546853 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndLightenColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor (const MethodInfo* method);
// 0x5a97910

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor
          (MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_07546854 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a979b0

void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndSilhouette");
    il2cpp_codegen_initialize_runtime_metadata(&"SilhouetteOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndLightenColor");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineHidden");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAll");
    Il2CppMethodInitialized_07546855 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineVisible",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineHidden",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineAndSilhouette",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SilhouetteOnly",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineAndLightenColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAll>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x5a97b20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a97b3d: cmp byte ptr [rip + 0x1aaeec0], 0
// asm:   0x5a97b44: je 0x5a97b92

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546856 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546856 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_07546a04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546a04 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineVisible>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x5a97bd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a97bed: cmp byte ptr [rip + 0x1aaee11], 0
// asm:   0x5a97bf4: je 0x5a97c43

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546857 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_07546a05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546a05 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineVisible;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineHidden>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x5a97c80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a97c9d: cmp byte ptr [rip + 0x1aaed62], 0
// asm:   0x5a97ca4: je 0x5a97cf3

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546858 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_07546a06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546a06 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineHidden;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndSilhouette>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x5a97d30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a97d4d: cmp byte ptr [rip + 0x1aaecb3], 0
// asm:   0x5a97d54: je 0x5a97da3

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546859 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_07546a07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546a07 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndSilhouette;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__SilhouetteOnly>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x5a97de0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a97dfd: cmp byte ptr [rip + 0x1aaec04], 0
// asm:   0x5a97e04: je 0x5a97e53

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754685a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_0754685a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_07546a08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546a08 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_silhouetteOnly;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndLightenColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x5a97e90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a97ead: cmp byte ptr [rip + 0x1aaeb55], 0
// asm:   0x5a97eb4: je 0x5a97f03

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754685b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_0754685b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_07546a09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546a09 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndLightenColor;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicOutlineModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___ctor (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x5a96d10

void CustomLogic_CustomLogicOutlineModeEnum___ctor
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546844 = '\x01';
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


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAll
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll (const MethodInfo* method);
// 0x5a96d80

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546845 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineVisible
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible (const MethodInfo* method);
// 0x5a96df0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546846 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineVisible;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineHidden
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden (const MethodInfo* method);
// 0x5a96e60

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546847 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineHidden;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndSilhouette
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette (const MethodInfo* method);
// 0x5a96ed0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546848 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndSilhouette;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_SilhouetteOnly
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly (const MethodInfo* method);
// 0x5a96f40

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_07546849 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_silhouetteOnly;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndLightenColor
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor (const MethodInfo* method);
// 0x5a96fb0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754684a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_0754684a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndLightenColor;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_ClassName (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x5a97020

System_String_o *
CustomLogic_CustomLogicOutlineModeEnum__get_ClassName
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754684b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineModeEnum");
    Il2CppMethodInitialized_0754684b = '\x01';
  }
  return "OutlineModeEnum";
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x5a97050

bool CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x5a97060

bool CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x5a97070

bool CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicOutlineModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___cctor (const MethodInfo* method);
// 0x5a97080

void CustomLogic_CustomLogicOutlineModeEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicOutlineModeEnum_StaticFields *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (Il2CppMethodInitialized_0754684c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_Mode);
    Il2CppMethodInitialized_0754684c = '\x01';
  }
  SStack_28.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll);
  SStack_40.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields;
  pCVar1->_outlineVisible = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_outlineVisible);
  SStack_58.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields;
  pCVar1->_outlineHidden = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_outlineHidden);
  SStack_70.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields;
  pCVar1->_outlineAndSilhouette = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_outlineAndSilhouette);
  SStack_88.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields;
  pCVar1->_silhouetteOnly = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_silhouetteOnly);
  SStack_a0.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields;
  pCVar1->_outlineAndLightenColor = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_outlineAndLightenColor);
  return;
}



// Type: CustomLogic.CustomLogicExperienceScoreBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicExperienceScoreBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicExperienceScoreBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicExperienceScoreBuiltin_o* CustomLogic_CustomLogicExperienceScoreBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5acb250

CustomLogic_CustomLogicExperienceScoreBuiltin_o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicExperienceScoreBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5acb2e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerIsBetter");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Unit");
    Il2CppMethodInitialized_07546d0b = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"ExperienceID",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__ExperienceID
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__ExperienceID
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Score",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Score
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Score
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Unit",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Unit
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Unit
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"LowerIsBetter",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicExperienceScoreBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__LowerIsBetter
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__LowerIsBetter
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__ExperienceID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__ExperienceID (const MethodInfo* method);
// 0x5acb4c0

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__ExperienceID
          (MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object)
    ;
    Il2CppMethodInitialized_07546d0c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__Score
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Score (const MethodInfo* method);
// 0x5acb560

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Score(MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Score_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object)
    ;
    Il2CppMethodInitialized_07546d0d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Score_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__Unit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Unit (const MethodInfo* method);
// 0x5acb600

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Unit(MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Unit_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object)
    ;
    Il2CppMethodInitialized_07546d0e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Unit_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__LowerIsBetter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__LowerIsBetter (const MethodInfo* method);
// 0x5acb6a0

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__LowerIsBetter
          (MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__LowerIsBetter_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object)
    ;
    Il2CppMethodInitialized_07546d0f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__LowerIsBetter_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5acb740

void CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerIsBetter");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Unit");
    Il2CppMethodInitialized_07546d10 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ExperienceID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Score",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowerIsBetter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__ExperienceID>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_2_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x5acb870

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_2_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  if ((__i == (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) ||
     (pSVar1 = (__i->fields)._record, pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pSVar1->fields).ExperienceID;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__Score>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Score_g____getter_3_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x5acb890

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Score_g____getter_3_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) ||
     ((__i->fields)._record == (Settings_ExperienceScoreRecord_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__Unit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Unit_g____getter_4_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x5acb8d0

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Unit_g____getter_4_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  if ((__i == (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) ||
     (pSVar1 = (__i->fields)._record, pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pSVar1->fields).Unit;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__LowerIsBetter>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__LowerIsBetter_g____getter_5_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x5acb8f0

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__LowerIsBetter_g____getter_5_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) ||
     ((__i->fields)._record == (Settings_ExperienceScoreRecord_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicExperienceScoreBuiltin___ctor (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, Settings_ExperienceScoreRecord_o* record, const MethodInfo* method);
// 0x5acb100

void CustomLogic_CustomLogicExperienceScoreBuiltin___ctor
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,
               Settings_ExperienceScoreRecord_o *record,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546d09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546d09 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._record = record;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._record);
  return;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_ExperienceID
// il2cpp: System_String_o* CustomLogic_CustomLogicExperienceScoreBuiltin__get_ExperienceID (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb170

System_String_o *
CustomLogic_CustomLogicExperienceScoreBuiltin__get_ExperienceID
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields).ExperienceID;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_Score
// il2cpp: float CustomLogic_CustomLogicExperienceScoreBuiltin__get_Score (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb190

float CustomLogic_CustomLogicExperienceScoreBuiltin__get_Score
                (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields).Score;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_Unit
// il2cpp: System_String_o* CustomLogic_CustomLogicExperienceScoreBuiltin__get_Unit (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb1b0

System_String_o *
CustomLogic_CustomLogicExperienceScoreBuiltin__get_Unit
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields).Unit;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_LowerIsBetter
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_LowerIsBetter (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb1d0

bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_LowerIsBetter
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 == (Settings_ExperienceScoreRecord_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields).LowerIsBetter;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicExperienceScoreBuiltin__get_ClassName (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb1f0

System_String_o *
CustomLogic_CustomLogicExperienceScoreBuiltin__get_ClassName
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceScore");
    Il2CppMethodInitialized_07546d0a = '\x01';
  }
  return "ExperienceScore";
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsAbstract (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb220

bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsStatic (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb230

bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsStatic
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x5acb240

bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



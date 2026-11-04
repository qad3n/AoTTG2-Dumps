// Type: CustomLogic.CustomLogicExperienceScoreBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicExperienceScoreBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicExperienceScoreBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicExperienceScoreBuiltin_o* CustomLogic_CustomLogicExperienceScoreBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182016930

CustomLogic_CustomLogicExperienceScoreBuiltin_o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicExperienceScoreBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff0d30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerIsBetter");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Unit");
    Il2CppMethodInitialized_184346308 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"ExperienceID",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346309 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
      Il2CppMethodInitialized_184346309 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Score",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434630a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Score_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
        Il2CppMethodInitialized_18434630a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Score_g____gette
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"Unit",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434630b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Unit_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
          Il2CppMethodInitialized_18434630b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Unit_g____getter
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"LowerIsBetter",(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicExperienceScoreBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
          pMVar3 = il2cpp_codegen_get_runtime_metadata
                             (&
                              MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
        }
        if ((TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434630c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__LowerIsBetter_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
          Il2CppMethodInitialized_18434630c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__LowerIsBetter_g
        ;
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__ExperienceID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__ExperienceID (const MethodInfo* method);
// 0x182004090

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__ExperienceID
          (MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346309 == '\0') {
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
    Il2CppMethodInitialized_184346309 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__ExperienceID_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__Score
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Score (const MethodInfo* method);
// 0x1820072e0

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Score(MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434630a == '\0') {
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
    Il2CppMethodInitialized_18434630a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Score_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__Unit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Unit (const MethodInfo* method);
// 0x182008640

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__Unit(MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434630b == '\0') {
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
    Il2CppMethodInitialized_18434630b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__Unit_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$__CreatePropertyBinding__LowerIsBetter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__LowerIsBetter (const MethodInfo* method);
// 0x182006070

CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings____CreatePropertyBinding__LowerIsBetter
          (MethodInfo *method)

{
  System_Func_CustomLogicExperienceScoreBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434630c == '\0') {
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
    Il2CppMethodInitialized_18434630c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicExperienceScoreBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___CreatePropertyBinding__LowerIsBetter_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicExperienceScoreBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18200aa80

void CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434630d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Score");
    il2cpp_codegen_initialize_runtime_metadata(&"LowerIsBetter");
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceID");
    il2cpp_codegen_initialize_runtime_metadata(&"Unit");
    Il2CppMethodInitialized_18434630d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ExperienceID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Score",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LowerIsBetter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__ExperienceID>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_2_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x181f62420

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__ExperienceID_g____getter_2_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) &&
     (pSVar1 = (__i->fields)._record, pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0)) {
    return (Il2CppObject *)(pSVar1->fields).ExperienceID;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__Score>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Score_g____getter_3_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x181ffe850

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Score_g____getter_3_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) &&
     (pSVar1 = (__i->fields)._record, pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0)) {
    local_res8[0] = (pSVar1->fields).Score;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__Unit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Unit_g____getter_4_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x181ffef20

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__Unit_g____getter_4_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) &&
     (pSVar1 = (__i->fields)._record, pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0)) {
    return (Il2CppObject *)(pSVar1->fields).Unit;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin.Bindings$$<__CreatePropertyBinding__LowerIsBetter>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__LowerIsBetter_g____getter_5_0 (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __i, const MethodInfo* method);
// 0x181f62290

Il2CppObject *
CustomLogic_CustomLogicExperienceScoreBuiltin_Bindings_____CreatePropertyBinding__LowerIsBetter_g____getter_5_0
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__i,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicExperienceScoreBuiltin_o *)0x0) &&
     (pSVar1 = (__i->fields)._record, pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0)) {
    local_res8[0] = (pSVar1->fields).LowerIsBetter;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicExperienceScoreBuiltin___ctor (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, Settings_ExperienceScoreRecord_o* record, const MethodInfo* method);
// 0x18200cbc0

void CustomLogic_CustomLogicExperienceScoreBuiltin___ctor
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,
               Settings_ExperienceScoreRecord_o *record,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346306 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346306 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._record = record;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._record,record);
  return;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_ExperienceID
// il2cpp: System_String_o* CustomLogic_CustomLogicExperienceScoreBuiltin__get_ExperienceID (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x181f79970

System_String_o*
CustomLogic_CustomLogicExperienceScoreBuiltin__get_ExperienceID(CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, MethodInfo* method)

{
  UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettingsBase_o *pUVar1;
  
  pUVar1 = (__this->fields)._record;
  if (pUVar1 != (UnityEngine_AdaptivePerformance_AdaptivePerformanceScalerSettingsBase_o *)0x0) {
    return (pUVar1->fields).m_Name;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_Score
// il2cpp: float CustomLogic_CustomLogicExperienceScoreBuiltin__get_Score (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x18200cc60

float CustomLogic_CustomLogicExperienceScoreBuiltin__get_Score
                (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0) {
    return (pSVar1->fields).Score;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_Unit
// il2cpp: System_String_o* CustomLogic_CustomLogicExperienceScoreBuiltin__get_Unit (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x18200cc80

System_String_o*
CustomLogic_CustomLogicExperienceScoreBuiltin__get_Unit(CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, MethodInfo* method)

{
  System_Xml_ValidatingReaderNodeData_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 != (System_Xml_ValidatingReaderNodeData_o *)0x0) {
    return (pSVar1->fields).prefix;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_LowerIsBetter
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_LowerIsBetter (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x181f79950

bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_LowerIsBetter
               (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  Settings_ExperienceScoreRecord_o *pSVar1;
  
  pSVar1 = (__this->fields)._record;
  if (pSVar1 != (Settings_ExperienceScoreRecord_o *)0x0) {
    return (pSVar1->fields).LowerIsBetter;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicExperienceScoreBuiltin__get_ClassName (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x18200cc30

System_String_o *
CustomLogic_CustomLogicExperienceScoreBuiltin__get_ClassName
          (CustomLogic_CustomLogicExperienceScoreBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ExperienceScore");
    Il2CppMethodInitialized_184346307 = '\x01';
  }
  return "ExperienceScore";
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsAbstract (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsAbstract(CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsStatic (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicExperienceScoreBuiltin__get_IsStatic(CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicExperienceScoreBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicExperienceScoreBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicExperienceScoreBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicExperienceScoreBuiltin_o* __this, MethodInfo* method)

{
  return true;
}



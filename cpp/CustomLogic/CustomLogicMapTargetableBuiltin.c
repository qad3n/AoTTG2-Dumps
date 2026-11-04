// Type: CustomLogic.CustomLogicMapTargetableBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapTargetableBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapTargetableBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapTargetableBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f082c0

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance
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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapTargetableBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ee4e90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_01;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843453f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_1843453f8 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453f9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_2
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_2
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object)
      ;
      Il2CppMethodInitialized_1843453f9 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_2
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_2
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843453fa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
        Il2CppMethodInitialized_1843453fa = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181ee512d;
    }
    bVar1 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapTargetableBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_CreateMemberBinding
                         );
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843453fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____sette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object)
      ;
      Il2CppMethodInitialized_1843453fb = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____gette
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____sette
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
label_181ee512d:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x181efe450

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  System_Action_CustomLogicMapTargetableBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
    Il2CppMethodInitialized_1843453f9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181efd230

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843453fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
    Il2CppMethodInitialized_1843453fa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x181efb9d0

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  System_Action_CustomLogicMapTargetableBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843453fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
    Il2CppMethodInitialized_1843453fb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f008d0

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843453fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_1843453fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Team",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Enabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3600

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields)._Team_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef3630

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843453fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453fd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    (pMVar1->fields)._Team_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._Team_k__BackingField,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x181ef28f0

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapTargetable_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843453f6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843453f6 = '\x01';
    }
    __this = (__i->fields)._Value_k__BackingField;
    if (__this != (Map_MapTargetable_o *)0x0) {
      pUVar3 = Map_MapTargetable__GetPosition((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x181ef17e0

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    local_res8[0] = (pMVar1->fields)._Enabled_k__BackingField;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1930

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843453fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843453fe = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    (pMVar1->fields)._Enabled_k__BackingField = bVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x1805853f0

UnityEngine_GameObject_o*
CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject(CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._GameObject_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Value
// il2cpp: Map_MapTargetable_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Value (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x180c8eec0

Map_MapTargetable_o*
CustomLogic_CustomLogicMapTargetableBuiltin__get_Value(CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields)._Value_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin___ctor (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, UnityEngine_GameObject_o* gameObject, Map_MapTargetable_o* mapTargetable, const MethodInfo* method);
// 0x181f065a0

void CustomLogic_CustomLogicMapTargetableBuiltin___ctor
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,UnityEngine_GameObject_o *gameObject,
               Map_MapTargetable_o *mapTargetable,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843453f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843453f5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._GameObject_k__BackingField = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._GameObject_k__BackingField,gameObject);
  (__this->fields)._Value_k__BackingField = mapTargetable;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,mapTargetable);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x181f06710

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Team
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    return (pMVar1->fields)._Team_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f06750

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    (pMVar1->fields)._Team_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._Team_k__BackingField,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Position (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x181f06680

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Map_MapTargetable_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843453f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843453f6 = '\x01';
  }
  __this_00 = (__this->fields)._Value_k__BackingField;
  if (__this_00 != (Map_MapTargetable_o *)0x0) {
    pUVar3 = Map_MapTargetable__GetPosition((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x181f06660

bool CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    return (pMVar1->fields)._Enabled_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f06730

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    (pMVar1->fields)._Enabled_k__BackingField = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x181f06630

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843453f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapTargetable");
    Il2CppMethodInitialized_1843453f7 = '\x01';
  }
  return "MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract(CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic(CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, MethodInfo* method)

{
  return true;
}



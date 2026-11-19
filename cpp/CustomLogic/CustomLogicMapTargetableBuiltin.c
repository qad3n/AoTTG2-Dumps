// Type: CustomLogic.CustomLogicMapTargetableBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapTargetableBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapTargetableBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMapTargetableBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59ffc00

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance
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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapTargetableBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ffc90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07545e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_07545e6f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapTargetableBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
    pCVar2 = CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x59ffe20

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  System_Action_CustomLogicMapTargetableBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e70 == '\0') {
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
    Il2CppMethodInitialized_07545e70 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x59fff00

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
    Il2CppMethodInitialized_07545e71 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Position_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x59fffa0

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_CustomLogicMapTargetableBuiltin__object__o *__this;
  System_Action_CustomLogicMapTargetableBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545e72 == '\0') {
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
    Il2CppMethodInitialized_07545e72 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMapTargetableBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicMapTargetableBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___CreatePropertyBinding__Enabled_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a00080

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    Il2CppMethodInitialized_07545e73 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Team",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Enabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x5a00190

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  if ((__i == (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 == (Map_MapTargetable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pMVar1->fields)._Team_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a001b0

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e74 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 == (Map_MapTargetable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields)._Team_k__BackingField = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._Team_k__BackingField);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x5a00240

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545e6d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545e6d = '\x01';
    }
    __this = (__i->fields)._Value_k__BackingField;
    if (__this != (Map_MapTargetable_o *)0x0) {
      value = Map_MapTargetable__GetPosition(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x5a002c0

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) ||
     ((__i->fields)._Value_k__BackingField == (Map_MapTargetable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a00300

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545e75 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) ||
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 == (Map_MapTargetable_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields)._Enabled_k__BackingField = bVar2;
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffa00

UnityEngine_GameObject_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._GameObject_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Value
// il2cpp: Map_MapTargetable_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Value (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffa10

Map_MapTargetable_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Value
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin___ctor (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, UnityEngine_GameObject_o* gameObject, Map_MapTargetable_o* mapTargetable, const MethodInfo* method);
// 0x59ffa20

void CustomLogic_CustomLogicMapTargetableBuiltin___ctor
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,UnityEngine_GameObject_o *gameObject,
               Map_MapTargetable_o *mapTargetable,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545e6c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._GameObject_k__BackingField = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._GameObject_k__BackingField);
  (__this->fields)._Value_k__BackingField = mapTargetable;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffaa0

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Team
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 == (Map_MapTargetable_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields)._Team_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59ffac0

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 == (Map_MapTargetable_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields)._Team_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._Team_k__BackingField);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Position (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffae0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545e6d = '\x01';
  }
  __this_00 = (__this->fields)._Value_k__BackingField;
  if (__this_00 == (Map_MapTargetable_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = Map_MapTargetable__GetPosition(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffb60

bool CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 == (Map_MapTargetable_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields)._Enabled_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x59ffb80

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,bool value,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 == (Map_MapTargetable_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pMVar1->fields)._Enabled_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffba0

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapTargetable");
    Il2CppMethodInitialized_07545e6e = '\x01';
  }
  return "MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffbd0

bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffbe0

bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x59ffbf0

bool CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return true;
}



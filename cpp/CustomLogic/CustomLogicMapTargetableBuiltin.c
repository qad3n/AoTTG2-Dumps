// Type: CustomLogic.CustomLogicMapTargetableBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapTargetableBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapTargetableBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicMapTargetableBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapTargetableBuiltin_o* CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ded8b0

CustomLogic_CustomLogicMapTargetableBuiltin_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicMapTargetableBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapTargetableBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ded940

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  System_Action_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_05702a86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Enabled");
    DAT_05702a86 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a87 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Team_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Team_g____setter);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
      DAT_05702a87 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
    System_Func<object__object>___ctor();
    pSVar5 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
    System_Action<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
    CustomLogic_CLPropertyBinding<object>___ctor(pCVar6,pSVar4,pSVar5,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a88 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
      DAT_05702a88 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  bVar1 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicMapTargetableBuiltin not found");
    pSVar2 = System_String__Concat(pSVar2,name,str2,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
    System_Exception___ctor(__this,pSVar2,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar3);
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702a89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Enabled_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Enabled_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
    DAT_05702a89 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
  System_Func<object__object>___ctor();
  pSVar5 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
  System_Action<object__object>___ctor();
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
  CustomLogic_CLPropertyBinding<object>___ctor(pCVar6,pSVar4,pSVar5,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x3dedad0

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Team
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this;
  
  if (DAT_05702a87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Team_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Team_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
    DAT_05702a87 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
  return __this;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x3dedbb0

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Position
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this;
  
  if (DAT_05702a88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Position_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
    DAT_05702a88 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
  return __this;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x3dedc50

CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings____CreatePropertyBinding__Enabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *__this;
  
  if (DAT_05702a89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Enabled_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Enabled_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
    DAT_05702a89 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapTargetableBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicMapTargetableBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicMapTargetableBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicMapTargetableBuilti);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicMapTargetableBuil);
  return __this;
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dedd30

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702a8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Team");
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Enabled");
    DAT_05702a8a = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Team",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Position",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Enabled",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_2_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x3dede40

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__<__CreatePropertyBinding__Team>g____getter_2_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    return (Il2CppObject *)(pMVar1->fields)._Team_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_2_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dede60

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__<__CreatePropertyBinding__Team>g____setter_2_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  System_String_o *pSVar2;
  
  if (DAT_05702a8b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a8b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_String_ConvertTo_String);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    (pMVar1->fields)._Team_k__BackingField = pSVar2;
    il2cpp_runtime_glue(&(pMVar1->fields)._Team_k__BackingField,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x3dedef0

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__<__CreatePropertyBinding__Position>g____getter_3_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Map_MapTargetable_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    if (DAT_05702a84 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_05702a84 = '\x01';
    }
    __this = (__i->fields)._Value_k__BackingField;
    if (__this != (Map_MapTargetable_o *)0x0) {
      value = Map_MapTargetable__GetPosition(__this,(MethodInfo *)0x0);
      __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, const MethodInfo* method);
// 0x3dedf70

Il2CppObject *
CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__<__CreatePropertyBinding__Enabled>g____getter_4_0
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     ((__i->fields)._Value_k__BackingField != (Map_MapTargetable_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicMapTargetableBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dedfb0

void CustomLogic_CustomLogicMapTargetableBuiltin_Bindings__<__CreatePropertyBinding__Enabled>g____setter_4_1
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  bool_conflict bVar2;
  
  if (DAT_05702a8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a8c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) &&
     (pMVar1 = (__i->fields)._Value_k__BackingField, pMVar1 != (Map_MapTargetable_o *)0x0)) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)bVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_GameObject
// il2cpp: UnityEngine_GameObject_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded6b0

UnityEngine_GameObject_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_GameObject
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._GameObject_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Value
// il2cpp: Map_MapTargetable_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Value (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded6c0

Map_MapTargetable_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Value
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin___ctor (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, UnityEngine_GameObject_o* gameObject, Map_MapTargetable_o* mapTargetable, const MethodInfo* method);
// 0x3ded6d0

void CustomLogic_CustomLogicMapTargetableBuiltin___ctor
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,
               UnityEngine_GameObject_o *gameObject,Map_MapTargetable_o *mapTargetable,
               MethodInfo *method)

{
  if (DAT_05702a83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702a83 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._GameObject_k__BackingField = gameObject;
  il2cpp_runtime_glue(&(__this->fields)._GameObject_k__BackingField,gameObject);
  (__this->fields)._Value_k__BackingField = mapTargetable;
  il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField,mapTargetable);
  return;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded750

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Team
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    return (pMVar1->fields)._Team_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3ded770

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Team
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    (pMVar1->fields)._Team_k__BackingField = value;
    il2cpp_runtime_glue(&(pMVar1->fields)._Team_k__BackingField);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_Position (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded790

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_Position
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702a84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a84 = '\x01';
  }
  __this_00 = (__this->fields)._Value_k__BackingField;
  if (__this_00 != (Map_MapTargetable_o *)0x0) {
    value = Map_MapTargetable__GetPosition(__this_00,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_01,value,(MethodInfo *)0x0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded810

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_Enabled
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pMVar1 >> 8),(char)(pMVar1->fields)._Enabled_k__BackingField);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3ded830

void CustomLogic_CustomLogicMapTargetableBuiltin__set_Enabled
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Map_MapTargetable_o *pMVar1;
  
  pMVar1 = (__this->fields)._Value_k__BackingField;
  if (pMVar1 != (Map_MapTargetable_o *)0x0) {
    *(char *)&(pMVar1->fields)._Enabled_k__BackingField = (char)value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded850

System_String_o *
CustomLogic_CustomLogicMapTargetableBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702a85 == '\0') {
    il2cpp_init_method_metadata(&"MapTargetable");
    DAT_05702a85 = '\x01';
  }
  return "MapTargetable";
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded880

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded890

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_IsStatic
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicMapTargetableBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapTargetableBuiltin_o* __this, const MethodInfo* method);
// 0x3ded8a0

bool_conflict
CustomLogic_CustomLogicMapTargetableBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicMapTargetableBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



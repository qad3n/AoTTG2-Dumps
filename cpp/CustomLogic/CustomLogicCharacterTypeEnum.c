// Type: CustomLogic.CustomLogicCharacterTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterTypeEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicCharacterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterTypeEnum_o* CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e44e70

CustomLogic_CustomLogicCharacterTypeEnum_o *
CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702ed0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterTypeEnum);
    DAT_05702ed0 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCharacterTypeEnum);
      if (DAT_05702ecb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702ecb = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCharacterTypeEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCharacterTypeEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCharacterTypeEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e44f90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_05702ed1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Shifter");
    DAT_05702ed1 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ed2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Human_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
      DAT_05702ed2 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ed3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
      DAT_05702ed3 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Shifter",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCharacterTypeEnum not found");
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
  if (DAT_05702ed4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Shifter_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
    DAT_05702ed4 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x3e45120

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this;
  
  if (DAT_05702ed2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Human_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
    DAT_05702ed2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x3e451c0

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this;
  
  if (DAT_05702ed3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
    DAT_05702ed3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Shifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter (const MethodInfo* method);
// 0x3e45260

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this;
  
  if (DAT_05702ed4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Shifter_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
    DAT_05702ed4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCharacterTypeEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e45300

void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ed5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Shifter");
    DAT_05702ed5 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Human",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Shifter",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e45410

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__<__CreatePropertyBinding__Human>g____getter_2_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057030ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    DAT_057030ff = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e45480

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__<__CreatePropertyBinding__Titan>g____getter_3_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703100 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    DAT_05703100 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Shifter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x3e454f0

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__<__CreatePropertyBinding__Shifter>g____getter_4_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703101 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    DAT_05703101 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum___ctor (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e44c50

void CustomLogic_CustomLogicCharacterTypeEnum___ctor
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ecb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702ecb = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Human (const MethodInfo* method);
// 0x3e44cc0

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Human(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ecc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    DAT_05702ecc = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Titan (const MethodInfo* method);
// 0x3e44d30

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Titan(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ecd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    DAT_05702ecd = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Shifter
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter (const MethodInfo* method);
// 0x3e44da0

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ece == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    DAT_05702ece = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e44e10

System_String_o *
CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702ecf == '\0') {
    il2cpp_init_method_metadata(&"CharacterTypeEnum");
    DAT_05702ecf = '\x01';
  }
  return "CharacterTypeEnum";
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e44e40

bool_conflict
CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e44e50

bool_conflict
CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x3e44e60

bool_conflict
CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



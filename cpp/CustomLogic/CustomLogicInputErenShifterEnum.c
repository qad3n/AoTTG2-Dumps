// Type: CustomLogic.CustomLogicInputErenShifterEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputErenShifterEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicInputErenShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputErenShifterEnum_o* CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e6bb00

CustomLogic_CustomLogicInputErenShifterEnum_o *
CustomLogic_CustomLogicInputErenShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicInputErenShifterEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_0570324c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_0570324c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicInputErenShifterEnum_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicInputErenShifterEnum);
      if (DAT_05703245 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703245 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicInputErenShifterEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicInputErenShifterEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e6bc20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  
  if (DAT_0570324d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"Kick");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Walk");
    DAT_0570324d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570324e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kick_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
      DAT_0570324e = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_0570324f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
      DAT_0570324f = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicInputErenShifterEnum not found");
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
    if (DAT_05703251 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
      DAT_05703251 = '\x01';
    }
    pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    System_Func<object__object>___ctor();
    pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    return (CustomLogic_ICLMemberBinding_o *)pCVar5;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703250 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    DAT_05703250 = '\x01';
  }
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
  System_Func<object__object>___ctor();
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x3e6be00

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Kick
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (DAT_0570324e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kick_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    DAT_0570324e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x3e6bea0

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Jump
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (DAT_0570324f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jump_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    DAT_0570324f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x3e6bf40

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__Walk
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (DAT_05703250 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Walk_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    DAT_05703250 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o* CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x3e6bfe0

CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *__this;
  
  if (DAT_05703251 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackCombo_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
    DAT_05703251 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicInputErenShifterEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputErenShifterEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicInputErenShifterEnu);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputErenShifterE);
  return __this;
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e6c080

void CustomLogic_CustomLogicInputErenShifterEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703252 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AttackCombo");
    il2cpp_init_method_metadata(&"Kick");
    il2cpp_init_method_metadata(&"Jump");
    il2cpp_init_method_metadata(&"Walk");
    DAT_05703252 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Kick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6c1b0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__<__CreatePropertyBinding__Kick>g____getter_2_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703253 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703253 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570353c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_0570353c = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6c260

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__<__CreatePropertyBinding__Jump>g____getter_3_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703254 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703254 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570353d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_0570353d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6c310

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__<__CreatePropertyBinding__Walk>g____getter_4_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703255 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703255 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570353e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_0570353e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputErenShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputErenShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputErenShifterEnum_o* __i, const MethodInfo* method);
// 0x3e6c3c0

Il2CppObject *
CustomLogic_CustomLogicInputErenShifterEnum_Bindings__<__CreatePropertyBinding__AttackCombo>g____getter_5_0
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703256 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703256 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570353f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_0570353f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___ctor (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x3e6b780

void CustomLogic_CustomLogicInputErenShifterEnum___ctor
               (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703245 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703245 = '\x01';
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


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Kick (const MethodInfo* method);
// 0x3e6b7f0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Kick(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703246 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703246 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Jump (const MethodInfo* method);
// 0x3e6b860

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703247 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703247 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_Walk (const MethodInfo* method);
// 0x3e6b8d0

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703248 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703248 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x3e6b940

System_String_o * CustomLogic_CustomLogicInputErenShifterEnum__get_AttackCombo(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703249 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    DAT_05703249 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x3e6b9b0

System_String_o *
CustomLogic_CustomLogicInputErenShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  if (DAT_0570324a == '\0') {
    il2cpp_init_method_metadata(&"InputErenShifterEnum");
    DAT_0570324a = '\x01';
  }
  return "InputErenShifterEnum";
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x3e6b9e0

bool_conflict
CustomLogic_CustomLogicInputErenShifterEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x3e6b9f0

bool_conflict
CustomLogic_CustomLogicInputErenShifterEnum__get_IsStatic
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputErenShifterEnum_o* __this, const MethodInfo* method);
// 0x3e6ba00

bool_conflict
CustomLogic_CustomLogicInputErenShifterEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputErenShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputErenShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputErenShifterEnum___cctor (const MethodInfo* method);
// 0x3e6ba10

void CustomLogic_CustomLogicInputErenShifterEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_0570324b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicInputErenShifterEnum);
    il2cpp_init_method_metadata(&"ErenShifter/Kick");
    il2cpp_init_method_metadata(&"ErenShifter/Walk");
    il2cpp_init_method_metadata(&"ErenShifter/AttackCombo");
    il2cpp_init_method_metadata(&"ErenShifter/Jump");
    DAT_0570324b = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8) = "ErenShifter/Kick";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8),"ErenShifter/Kick");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "ErenShifter/Jump";
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "ErenShifter/Walk";
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputErenShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "ErenShifter/AttackCombo";
  il2cpp_runtime_glue(lVar1 + 0x18);
  return;
}



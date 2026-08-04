// Type: CustomLogic.CustomLogicCharacterTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCharacterTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterTypeEnum_o* CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x414b140

CustomLogic_CustomLogicCharacterTypeEnum_o *
CustomLogic_CustomLogicCharacterTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar5;
  System_ArgumentException_o *pSVar6;
  System_Func_T__object__o *pSVar7;
  CustomLogic_CustomLogicCharacterTypeEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acc08 == '\0') {
    pSStack_20 = (System_String_o *)0x414b15c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCharacterTypeEnum);
    g_data_057acc08 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x414b1d7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x414b186;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCharacterTypeEnum);
    if (g_data_057acc03 == '\0') {
      pSStack_20 = (System_String_o *)0x414b19e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acc03 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x414b1bd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x414b1c7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicCharacterTypeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x414b1df;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x414b1f2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414b201;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicCharacterTypeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x414b210;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x414b220;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414b22f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x414b237;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x414b247;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x414b253;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCharacterTypeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x414b25e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acc09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    g_data_057acc09 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Human",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc0b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
        g_data_057acc0b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCharacterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Shifter",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acc0c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Shifter_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
        g_data_057acc0c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicCharacterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCharacterTypeEnum not found");
    pSVar2 = System_String__Concat_3af7150(pSVar2,(System_String_o *)pSVar6,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar6 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    System_Exception___ctor_3cf6120((System_Exception_o *)pSVar6,pSVar2,(MethodInfo *)0x0);
    uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar5 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar6,uVar4);
  }
  else {
    puVar5 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
    else {
      ppuVar9 = (undefined8 **)&uStack_18;
      pSVar6 = pSStack_28;
      pSVar2 = pSStack_20;
    }
  }
  *(System_String_o **)((long)ppuVar9 + -8) = pSVar2;
  *(System_ArgumentException_o **)((long)ppuVar9 + -0x10) = pSVar6;
  *(undefined8 **)((long)ppuVar9 + -0x18) = puVar5;
  if (g_data_057acc0a == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b409;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b415;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b421;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b42d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
    g_data_057acc0a = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b443;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b45c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b46b;
  pCVar8 = (CustomLogic_CustomLogicCharacterTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x414b485;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x414b260

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Func_T__object__o *pSVar4;
  CustomLogic_CLPropertyBinding_T__o *pCVar5;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057acc09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    g_data_057acc09 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc0b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
        g_data_057acc0b = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Shifter",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acc0c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Shifter_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
        g_data_057acc0c = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicCharacterTypeEnum not found");
    unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
    puVar2 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
    register0x00000020 = (BADSPACEBASE *)&puStack_18;
  }
  else {
    puVar2 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar2 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
  }
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar2;
  if (g_data_057acc0a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b409;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b415;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b421;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b42d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
    g_data_057acc0a = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b443;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b45c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b46b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x414b485;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x414b3f0

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this;
  
  if (g_data_057acc0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Human_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
    g_data_057acc0a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x414b490

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this;
  
  if (g_data_057acc0b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Titan_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
    g_data_057acc0b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Shifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o* CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter (const MethodInfo* method);
// 0x414b530

CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings____CreatePropertyBinding__Shifter(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *__this;
  
  if (g_data_057acc0c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Shifter_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
    g_data_057acc0c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicCharacterTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCharacterTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicCharacterTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCharacterTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x414b5d0

void CustomLogic_CustomLogicCharacterTypeEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    g_data_057acc0d = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Human",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Titan",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Shifter",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acce3 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x414b6e0

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Human_g____getter_2_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acce3 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x414b750

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_3_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acce4 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
}


// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Shifter>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0 (CustomLogic_CustomLogicCharacterTypeEnum_o* __i, const MethodInfo* method);
// 0x414b7c0

Il2CppObject *
CustomLogic_CustomLogicCharacterTypeEnum_Bindings_____CreatePropertyBinding__Shifter_g____getter_4_0
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acce5 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterTypeEnum___ctor (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x414af20

void CustomLogic_CustomLogicCharacterTypeEnum___ctor
               (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acc03 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Human (const MethodInfo* method);
// 0x414af90

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Human(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acc04 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Titan (const MethodInfo* method);
// 0x414b000

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Titan(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acc05 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_Shifter
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter (const MethodInfo* method);
// 0x414b070

System_String_o * CustomLogic_CustomLogicCharacterTypeEnum__get_Shifter(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acc06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    g_data_057acc06 = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerCharacter + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x414b0e0

System_String_o *
CustomLogic_CustomLogicCharacterTypeEnum__get_ClassName
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acc07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CharacterTypeEnum");
    g_data_057acc07 = '\x01';
  }
  return "CharacterTypeEnum";
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x414b110

bool_conflict
CustomLogic_CustomLogicCharacterTypeEnum__get_IsAbstract
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x414b120

bool_conflict
CustomLogic_CustomLogicCharacterTypeEnum__get_IsStatic
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCharacterTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterTypeEnum_o* __this, const MethodInfo* method);
// 0x414b130

bool_conflict
CustomLogic_CustomLogicCharacterTypeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCharacterTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



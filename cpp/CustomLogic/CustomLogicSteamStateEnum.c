// Type: CustomLogic.CustomLogicSteamStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSteamStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSteamStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSteamStateEnum_o* CustomLogic_CustomLogicSteamStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x419b390

CustomLogic_CustomLogicSteamStateEnum_o *
CustomLogic_CustomLogicSteamStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicSteamStateEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad350 == '\0') {
    pSStack_20 = (System_String_o *)0x419b3ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSteamStateEnum);
    g_data_057ad350 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x419b427;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x419b3d6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSteamStateEnum);
    if (g_data_057ad34e == '\0') {
      pSStack_20 = (System_String_o *)0x419b3ee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad34e = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419b40d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x419b417;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicSteamStateEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x419b42f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x419b442;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419b451;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicSteamStateEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x419b460;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x419b470;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419b47f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x419b487;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x419b497;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x419b4a3;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSteamStateEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419b4ae;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad351 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Damage");
    il2cpp_runtime_helper_023445d0(&"Warning");
    il2cpp_runtime_helper_023445d0(&"Off");
    g_data_057ad351 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Off",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Warning",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad353 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Warning_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
        g_data_057ad353 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicSteamStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Damage",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad354 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Damage_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
        g_data_057ad354 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicSteamStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSteamStateEnum not found");
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
  if (g_data_057ad352 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b659;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Off_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b665;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b671;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b67d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
    g_data_057ad352 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b693;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b6ac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b6bb;
  pCVar8 = (CustomLogic_CustomLogicSteamStateEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x419b6d5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSteamStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x419b4b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSteamStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057ad351 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Damage");
    il2cpp_runtime_helper_023445d0(&"Warning");
    il2cpp_runtime_helper_023445d0(&"Off");
    g_data_057ad351 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Off",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Warning",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad353 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Warning_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
        g_data_057ad353 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Damage",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad354 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Damage_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
        g_data_057ad354 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicSteamStateEnum not found");
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
  if (g_data_057ad352 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b659;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Off_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b665;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b671;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b67d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
    g_data_057ad352 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b693;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b6ac;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b6bb;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x419b6d5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Off
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off (const MethodInfo* method);
// 0x419b640

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Off(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this;
  
  if (g_data_057ad352 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Off_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
    g_data_057ad352 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return __this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Warning
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning (const MethodInfo* method);
// 0x419b6e0

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Warning(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this;
  
  if (g_data_057ad353 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Warning_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
    g_data_057ad353 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return __this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Damage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o* CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage (const MethodInfo* method);
// 0x419b780

CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *
CustomLogic_CustomLogicSteamStateEnum_Bindings____CreatePropertyBinding__Damage(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *__this;
  
  if (g_data_057ad354 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Damage_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicSteamStateEnum_object);
    g_data_057ad354 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicSteamStateEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSteamStateEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicSteamStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSteamStateEnum);
  return __this;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSteamStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x419b820

void CustomLogic_CustomLogicSteamStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ad355 == '\0') {
    uStack_20 = 0x419b839;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x419b845;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x419b851;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x419b85d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x419b869;
    il2cpp_runtime_helper_023445d0(&"Damage");
    uStack_20 = 0x419b875;
    il2cpp_runtime_helper_023445d0(&"Warning");
    uStack_20 = 0x419b881;
    il2cpp_runtime_helper_023445d0(&"Off");
    g_data_057ad355 = '\x01';
  }
  uStack_20 = 0x419b897;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x419b8ac;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x419b8cd;
    System_Collections_Generic_HashSet_object___Add(__this,"Off",MethodInfo_Boolean_Add);
    uStack_20 = 0x419b8e2;
    System_Collections_Generic_HashSet_object___Add(__this,"Warning",MethodInfo_Boolean_Add);
    uStack_20 = 0x419b8f7;
    System_Collections_Generic_HashSet_object___Add(__this,"Damage",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x419b929;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = uStack_20 & 0xffffffff;
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x419b930

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Warning>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Warning_g____getter_3_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x419b950

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Warning_g____getter_3_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Damage>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Damage_g____getter_4_0 (CustomLogic_CustomLogicSteamStateEnum_o* __i, const MethodInfo* method);
// 0x419b970

Il2CppObject *
CustomLogic_CustomLogicSteamStateEnum_Bindings_____CreatePropertyBinding__Damage_g____getter_4_0
          (CustomLogic_CustomLogicSteamStateEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicSteamStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSteamStateEnum___ctor (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x419b290

void CustomLogic_CustomLogicSteamStateEnum___ctor
               (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad34e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad34e = '\x01';
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


// CustomLogic.CustomLogicSteamStateEnum$$get_Off
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Off (const MethodInfo* method);
// 0x419b300

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Off(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_Warning
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Warning (const MethodInfo* method);
// 0x419b310

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Warning(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_Damage
// il2cpp: int32_t CustomLogic_CustomLogicSteamStateEnum__get_Damage (const MethodInfo* method);
// 0x419b320

int32_t CustomLogic_CustomLogicSteamStateEnum__get_Damage(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicSteamStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSteamStateEnum__get_ClassName (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x419b330

System_String_o *
CustomLogic_CustomLogicSteamStateEnum__get_ClassName
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad34f == '\0') {
    il2cpp_runtime_helper_023445d0(&"SteamStateEnum");
    g_data_057ad34f = '\x01';
  }
  return "SteamStateEnum";
}


// CustomLogic.CustomLogicSteamStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_IsAbstract (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x419b360

bool_conflict
CustomLogic_CustomLogicSteamStateEnum__get_IsAbstract
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSteamStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_IsStatic (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x419b370

bool_conflict
CustomLogic_CustomLogicSteamStateEnum__get_IsStatic
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicSteamStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSteamStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSteamStateEnum_o* __this, const MethodInfo* method);
// 0x419b380

bool_conflict
CustomLogic_CustomLogicSteamStateEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicSteamStateEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



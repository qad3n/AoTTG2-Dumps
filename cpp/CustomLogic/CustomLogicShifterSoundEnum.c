// Type: CustomLogic.CustomLogicShifterSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShifterSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterSoundEnum_o* CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4197610

CustomLogic_CustomLogicShifterSoundEnum_o *
CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicShifterSoundEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad302 == '\0') {
    pSStack_20 = (System_String_o *)0x419762c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicShifterSoundEnum);
    g_data_057ad302 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41976a7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4197656;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicShifterSoundEnum);
    if (g_data_057ad2fa == '\0') {
      pSStack_20 = (System_String_o *)0x419766e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad2fa = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x419768d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4197697;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicShifterSoundEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41976af;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41976c2;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41976d1;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicShifterSoundEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41976e0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41976f0;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41976ff;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4197707;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4197717;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4197723;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicShifterSoundEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x419772e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057ad303 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ColossalSteam1");
    il2cpp_runtime_helper_023445d0(&"ErenRoar");
    il2cpp_runtime_helper_023445d0(&"AnnieRoar");
    il2cpp_runtime_helper_023445d0(&"ColossalSteam2");
    il2cpp_runtime_helper_023445d0(&"AnnieHurt");
    il2cpp_runtime_helper_023445d0(&"Thunder");
    g_data_057ad303 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Thunder",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ErenRoar",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad305 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ErenRoar_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad305 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"AnnieRoar",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad306 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieRoar_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad306 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"AnnieHurt",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad307 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieHurt_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad307 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ColossalSteam1",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad308 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSteam1_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad308 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"ColossalSteam2",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057ad309 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSteam2_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad309 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicShifterSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicShifterSoundEnum not found");
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
  if (g_data_057ad304 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41979b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunder_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41979c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41979d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41979dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad304 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x41979f3;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4197a0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4197a1b;
  pCVar8 = (CustomLogic_CustomLogicShifterSoundEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4197a35;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4197730

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057ad303 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ColossalSteam1");
    il2cpp_runtime_helper_023445d0(&"ErenRoar");
    il2cpp_runtime_helper_023445d0(&"AnnieRoar");
    il2cpp_runtime_helper_023445d0(&"ColossalSteam2");
    il2cpp_runtime_helper_023445d0(&"AnnieHurt");
    il2cpp_runtime_helper_023445d0(&"Thunder");
    g_data_057ad303 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Thunder",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"ErenRoar",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad305 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ErenRoar_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad305 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"AnnieRoar",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad306 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieRoar_g____getter_4);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad306 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"AnnieHurt",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad307 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieHurt_g____getter_5);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad307 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ColossalSteam1",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad308 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSteam1_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad308 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"ColossalSteam2",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad309 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSteam2_g____gett);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
        g_data_057ad309 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicShifterSoundEnum not found");
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
  if (g_data_057ad304 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41979b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunder_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41979c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41979d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41979dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad304 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41979f3;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4197a0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4197a1b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4197a35;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__Thunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder (const MethodInfo* method);
// 0x41979a0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (g_data_057ad304 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thunder_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad304 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ErenRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar (const MethodInfo* method);
// 0x4197a40

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (g_data_057ad305 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ErenRoar_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad305 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar (const MethodInfo* method);
// 0x4197ae0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (g_data_057ad306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieRoar_g____getter_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad306 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieHurt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt (const MethodInfo* method);
// 0x4197b80

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (g_data_057ad307 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AnnieHurt_g____getter_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad307 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1 (const MethodInfo* method);
// 0x4197c20

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (g_data_057ad308 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSteam1_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad308 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2 (const MethodInfo* method);
// 0x4197cc0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this;
  
  if (g_data_057ad309 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ColossalSteam2_g____gett);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicShifterSoundEnum_object);
    g_data_057ad309 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterSoundEnum);
  return __this;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x4197d60

void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad30a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"ColossalSteam1");
    il2cpp_runtime_helper_023445d0(&"ErenRoar");
    il2cpp_runtime_helper_023445d0(&"AnnieRoar");
    il2cpp_runtime_helper_023445d0(&"ColossalSteam2");
    il2cpp_runtime_helper_023445d0(&"AnnieHurt");
    il2cpp_runtime_helper_023445d0(&"Thunder");
    g_data_057ad30a = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Thunder",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ErenRoar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AnnieRoar",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AnnieHurt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ColossalSteam1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"ColossalSteam2",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad44b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad44b = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__Thunder>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x4197ed0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad44b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad44b = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ErenRoar>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x4197f40

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad44c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad44c = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieRoar>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x4197fb0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad44d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad44d = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieHurt>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x4198020

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad44e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad44e = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam1>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x4198090

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad44f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad44f = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam2>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x4198100

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad450 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad450 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicShifterSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum___ctor (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x41972a0

void CustomLogic_CustomLogicShifterSoundEnum___ctor
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad2fa = '\x01';
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


// CustomLogic.CustomLogicShifterSoundEnum$$get_Thunder
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_Thunder (const MethodInfo* method);
// 0x4197310

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_Thunder(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad2fb = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ErenRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar (const MethodInfo* method);
// 0x4197380

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad2fc = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar (const MethodInfo* method);
// 0x41973f0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad2fd = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieHurt
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt (const MethodInfo* method);
// 0x4197460

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad2fe = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam1
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1 (const MethodInfo* method);
// 0x41974d0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad2ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad2ff = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam2
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2 (const MethodInfo* method);
// 0x4197540

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad300 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    g_data_057ad300 = '\x01';
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ShifterSounds + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ClassName (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x41975b0

System_String_o *
CustomLogic_CustomLogicShifterSoundEnum__get_ClassName
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad301 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ShifterSoundEnum");
    g_data_057ad301 = '\x01';
  }
  return "ShifterSoundEnum";
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x41975e0

bool_conflict
CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x41975f0

bool_conflict
CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x4197600

bool_conflict
CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



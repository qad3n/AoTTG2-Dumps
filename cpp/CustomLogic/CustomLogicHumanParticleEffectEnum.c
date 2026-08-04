// Type: CustomLogic.CustomLogicHumanParticleEffectEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanParticleEffectEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanParticleEffectEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanParticleEffectEnum_o* CustomLogic_CustomLogicHumanParticleEffectEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4161860

CustomLogic_CustomLogicHumanParticleEffectEnum_o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicHumanParticleEffectEnum_o *pCVar8;
  undefined8 **ppuVar9;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acdc1 == '\0') {
    pSStack_20 = (System_String_o *)0x416187c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanParticleEffectEnum);
    g_data_057acdc1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41618f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41618a6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanParticleEffectEnum);
    if (g_data_057acdbc == '\0') {
      pSStack_20 = (System_String_o *)0x41618be;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acdbc = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41618dd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41618e7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicHumanParticleEffectEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41618ff;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x4161912;
  pSVar2 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4161921;
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicHumanParticleEffectEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x4161930;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x4161940;
  pSVar2 = System_String__Concat_3af7150(pSVar3,pSVar2,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416194f;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x4161957;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_20 = (System_String_o *)0x4161967;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4161973;
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicHumanParticleEffectEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x416197e;
  pSVar6 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10(__this_00,uVar4);
  ppuVar9 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar2;
  if (g_data_057acdc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Buff2");
    il2cpp_runtime_helper_023445d0(&"Buff1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057acdc2 = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Buff1",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Buff2",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acdc4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Buff2_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
        g_data_057acdc4 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicHumanParticleEffectEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
      return pCVar8;
    }
    bVar1 = System_String__op_Equality((System_String_o *)pSVar6,"Fire1",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puVar5 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar5 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar5;
      if (g_data_057acdc5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fire1_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
        g_data_057acdc5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
      System_Func_object__object____ctor();
      pCVar8 = (CustomLogic_CustomLogicHumanParticleEffectEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
      return pCVar8;
    }
    pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanParticleEffectEnum not found");
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
  if (g_data_057acdc3 == '\0') {
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Buff1_g____getter_2_0);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
    g_data_057acdc3 = '\x01';
  }
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b63;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b7c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161b8b;
  pCVar8 = (CustomLogic_CustomLogicHumanParticleEffectEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  *(undefined8 *)((long)ppuVar9 + -0x20) = 0x4161ba5;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar8,pSVar7,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
  return pCVar8;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4161980

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__CreateMemberBinding
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
  
  if (g_data_057acdc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Buff2");
    il2cpp_runtime_helper_023445d0(&"Buff1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057acdc2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Buff1",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(name,"Buff2",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acdc4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Buff2_g____getter_3_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
        g_data_057acdc4 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    bVar1 = System_String__op_Equality(name,"Fire1",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acdc5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fire1_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
        g_data_057acdc5 = '\x01';
      }
      pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar5;
    }
    str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
    str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHumanParticleEffectEnum not found");
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
  if (g_data_057acdc3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Buff1_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b35;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
    g_data_057acdc3 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b63;
  pSVar4 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b7c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161b8b;
  pCVar5 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4161ba5;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar5,pSVar4,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar5;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1 (const MethodInfo* method);
// 0x4161b10

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this;
  
  if (g_data_057acdc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Buff1_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
    g_data_057acdc3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2 (const MethodInfo* method);
// 0x4161bb0

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this;
  
  if (g_data_057acdc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Buff2_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
    g_data_057acdc4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Fire1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1 (const MethodInfo* method);
// 0x4161c50

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this;
  
  if (g_data_057acdc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Fire1_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
    g_data_057acdc5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHumanParticleEffectEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHumanParticleEffectEnum);
  return __this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___cctor (const MethodInfo* method);
// 0x4161cf0

void CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acdc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Buff2");
    il2cpp_runtime_helper_023445d0(&"Buff1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057acdc6 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Buff1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Buff2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Fire1",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acdbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Buff1");
    g_data_057acdbd = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff1_g____getter_2_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x4161e00

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff1_g____getter_2_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acdbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Buff1");
    g_data_057acdbd = '\x01';
  }
  return "Buff1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff2_g____getter_3_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x4161e30

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff2_g____getter_3_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acdbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Buff2");
    g_data_057acdbe = '\x01';
  }
  return "Buff2";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Fire1>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Fire1_g____getter_4_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x4161e60

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Fire1_g____getter_4_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (g_data_057acdbf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057acdbf = '\x01';
  }
  return "Fire1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanParticleEffectEnum___ctor (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x4161700

void CustomLogic_CustomLogicHumanParticleEffectEnum___ctor
               (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acdbc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acdbc = '\x01';
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


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff1 (const MethodInfo* method);
// 0x4161770

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff1(MethodInfo *method)

{
  if (g_data_057acdbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Buff1");
    g_data_057acdbd = '\x01';
  }
  return "Buff1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff2 (const MethodInfo* method);
// 0x41617a0

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff2(MethodInfo *method)

{
  if (g_data_057acdbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Buff2");
    g_data_057acdbe = '\x01';
  }
  return "Buff2";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Fire1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Fire1 (const MethodInfo* method);
// 0x41617d0

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Fire1(MethodInfo *method)

{
  if (g_data_057acdbf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057acdbf = '\x01';
  }
  return "Fire1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_ClassName (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x4161800

System_String_o *
CustomLogic_CustomLogicHumanParticleEffectEnum__get_ClassName
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acdc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HumanParticleEffectEnum");
    g_data_057acdc0 = '\x01';
  }
  return "HumanParticleEffectEnum";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsAbstract (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x4161830

bool_conflict
CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsAbstract
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsStatic (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x4161840

bool_conflict
CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsStatic
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x4161850

bool_conflict
CustomLogic_CustomLogicHumanParticleEffectEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



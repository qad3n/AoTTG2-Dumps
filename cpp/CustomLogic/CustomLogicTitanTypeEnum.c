// Type: CustomLogic.CustomLogicTitanTypeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanTypeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTitanTypeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanTypeEnum_o* CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x41ac360

CustomLogic_CustomLogicTitanTypeEnum_o *
CustomLogic_CustomLogicTitanTypeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this_00;
  undefined8 *puVar6;
  System_ArgumentException_o *pSVar7;
  System_Func_T__object__o *pSVar8;
  CustomLogic_CustomLogicTitanTypeEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ad4bb == '\0') {
    pSStack_20 = (System_String_o *)0x41ac37c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTitanTypeEnum);
    g_data_057ad4bb = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x41ac3f7;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x41ac3a6;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTitanTypeEnum);
    if (g_data_057ad4b1 == '\0') {
      pSStack_20 = (System_String_o *)0x41ac3be;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ad4b1 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x41ac3dd;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x41ac3e7;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicTitanTypeEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x41ac3ff;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41ac412;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ac421;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicTitanTypeEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41ac430;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41ac440;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ac44f;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41ac457;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x41ac467;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41ac473;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTitanTypeEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x41ac47e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057ad4bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Punk");
    il2cpp_runtime_helper_023445d0(&"Thrower");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Jumper");
    il2cpp_runtime_helper_023445d0(&"Crawler");
    il2cpp_runtime_helper_023445d0(&"Abnormal");
    g_data_057ad4bc = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x4b058385) {
    if (uVar1 < 0x2f9f45fa) {
      if (uVar1 == 0x19dc307e) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Default",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar6;
          if (g_data_057ad4c3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Default_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
            g_data_057ad4c3 = '\x01';
          }
          pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          System_Func_object__object____ctor();
          pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          return pCVar9;
        }
      }
      else if ((uVar1 == 0x2f9f45f9) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Abnormal",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4be == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Abnormal_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          g_data_057ad4be = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x4115d182) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Random",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4c4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Random_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          g_data_057ad4c4 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x4b058384) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Thrower",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thrower_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        g_data_057ad4c1 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0x8f418f18) {
    if (uVar1 == 0x8f418f17) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Crawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057ad4c0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Crawler_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          g_data_057ad4c0 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x58de2772) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Normal",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        ppuVar10 = (undefined8 **)&uStack_18;
        pSVar7 = pSStack_28;
        pSVar3 = pSStack_20;
      }
      else {
        ppuVar10 = (undefined8 **)&uStack_18;
        pSVar7 = pSStack_28;
        pSVar3 = pSStack_20;
      }
      goto CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal;
    }
  }
  else if (uVar1 == 0xe5828b91) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Punk",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057ad4c2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Punk_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        g_data_057ad4c2 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xf331d01e) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Jumper",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057ad4bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jumper_g____getter_4_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
      g_data_057ad4bf = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTitanTypeEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057ad4bd == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac889;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac895;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac8a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac8ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4bd = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac8c3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac8dc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac8eb;
  pCVar9 = (CustomLogic_CustomLogicTitanTypeEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41ac905;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x41ac480

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  undefined8 *puVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ad4bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Punk");
    il2cpp_runtime_helper_023445d0(&"Thrower");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Jumper");
    il2cpp_runtime_helper_023445d0(&"Crawler");
    il2cpp_runtime_helper_023445d0(&"Abnormal");
    g_data_057ad4bc = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x4b058385) {
    if (uVar1 < 0x2f9f45fa) {
      if (uVar1 == 0x19dc307e) {
        bVar2 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ad4c3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Default_g____getter_8_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
            g_data_057ad4c3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2f9f45f9) &&
              (bVar2 = System_String__op_Equality(name,"Abnormal",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4be == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Abnormal_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          g_data_057ad4be = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x4115d182) {
      bVar2 = System_String__op_Equality(name,"Random",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4c4 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Random_g____getter_9_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          g_data_057ad4c4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x4b058384) &&
            (bVar2 = System_String__op_Equality(name,"Thrower",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thrower_g____getter_6_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        g_data_057ad4c1 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x8f418f18) {
    if (uVar1 == 0x8f418f17) {
      bVar2 = System_String__op_Equality(name,"Crawler",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ad4c0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Crawler_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
          g_data_057ad4c0 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x58de2772) &&
            (bVar2 = System_String__op_Equality(name,"Normal",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puVar4 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal;
    }
  }
  else if (uVar1 == 0xe5828b91) {
    bVar2 = System_String__op_Equality(name,"Punk",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ad4c2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Punk_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
        g_data_057ad4c2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xf331d01e) &&
          (bVar2 = System_String__op_Equality(name,"Jumper",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ad4bf == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jumper_g____getter_4_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
      g_data_057ad4bf = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicTitanTypeEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057ad4bd == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac889;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac895;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac8a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac8ad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4bd = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac8c3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac8dc;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac8eb;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41ac905;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Normal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal (const MethodInfo* method);
// 0x41ac870

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Normal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4bd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Normal_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4bd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Abnormal
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal (const MethodInfo* method);
// 0x41ac910

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Abnormal(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Abnormal_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4be = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Jumper
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper (const MethodInfo* method);
// 0x41ac9b0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Jumper(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jumper_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4bf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Crawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler (const MethodInfo* method);
// 0x41aca50

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Crawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Crawler_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4c0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Thrower
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower (const MethodInfo* method);
// 0x41acaf0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Thrower(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Thrower_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4c1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Punk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk (const MethodInfo* method);
// 0x41acb90

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Punk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Punk_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4c2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Default
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default (const MethodInfo* method);
// 0x41acc30

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Default(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Default_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Random
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o* CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random (const MethodInfo* method);
// 0x41accd0

CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *
CustomLogic_CustomLogicTitanTypeEnum_Bindings____CreatePropertyBinding__Random(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *__this;
  
  if (g_data_057ad4c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Random_g____getter_9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicTitanTypeEnum_object);
    g_data_057ad4c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicTitanTypeEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanTypeEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicTitanTypeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanTypeEnum);
  return __this;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor (const MethodInfo* method);
// 0x41acd70

void CustomLogic_CustomLogicTitanTypeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ad4c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"Punk");
    il2cpp_runtime_helper_023445d0(&"Thrower");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Jumper");
    il2cpp_runtime_helper_023445d0(&"Crawler");
    il2cpp_runtime_helper_023445d0(&"Abnormal");
    g_data_057ad4c5 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Normal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Abnormal",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jumper",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Crawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Thrower",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Punk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Default",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Random",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad4b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ad4b2 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41acf30

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Normal_g____getter_2_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ad4b2 = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Abnormal>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41acf60

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Abnormal_g____getter_3_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Abnormal");
    g_data_057ad4b3 = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Jumper>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41acf90

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Jumper_g____getter_4_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Jumper");
    g_data_057ad4b4 = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Crawler>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41acfc0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Crawler_g____getter_5_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Crawler");
    g_data_057ad4b5 = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Thrower>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41acff0

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Thrower_g____getter_6_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Thrower");
    g_data_057ad4b6 = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Punk>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41ad020

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Punk_g____getter_7_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Punk");
    g_data_057ad4b7 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41ad050

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Default_g____getter_8_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ad4b8 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Random>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0 (CustomLogic_CustomLogicTitanTypeEnum_o* __i, const MethodInfo* method);
// 0x41ad080

Il2CppObject *
CustomLogic_CustomLogicTitanTypeEnum_Bindings_____CreatePropertyBinding__Random_g____getter_9_0
          (CustomLogic_CustomLogicTitanTypeEnum_o *__i,MethodInfo *method)

{
  if (g_data_057ad4b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Random");
    g_data_057ad4b9 = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanTypeEnum___ctor (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x41ac110

void CustomLogic_CustomLogicTitanTypeEnum___ctor
               (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad4b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ad4b1 = '\x01';
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


// CustomLogic.CustomLogicTitanTypeEnum$$get_Normal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Normal (const MethodInfo* method);
// 0x41ac180

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Normal(MethodInfo *method)

{
  if (g_data_057ad4b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ad4b2 = '\x01';
  }
  return "Normal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Abnormal
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal (const MethodInfo* method);
// 0x41ac1b0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Abnormal(MethodInfo *method)

{
  if (g_data_057ad4b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Abnormal");
    g_data_057ad4b3 = '\x01';
  }
  return "Abnormal";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Jumper
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Jumper (const MethodInfo* method);
// 0x41ac1e0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Jumper(MethodInfo *method)

{
  if (g_data_057ad4b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Jumper");
    g_data_057ad4b4 = '\x01';
  }
  return "Jumper";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Crawler
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Crawler (const MethodInfo* method);
// 0x41ac210

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Crawler(MethodInfo *method)

{
  if (g_data_057ad4b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Crawler");
    g_data_057ad4b5 = '\x01';
  }
  return "Crawler";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Thrower
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Thrower (const MethodInfo* method);
// 0x41ac240

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Thrower(MethodInfo *method)

{
  if (g_data_057ad4b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Thrower");
    g_data_057ad4b6 = '\x01';
  }
  return "Thrower";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Punk
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Punk (const MethodInfo* method);
// 0x41ac270

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Punk(MethodInfo *method)

{
  if (g_data_057ad4b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Punk");
    g_data_057ad4b7 = '\x01';
  }
  return "Punk";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Default
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Default (const MethodInfo* method);
// 0x41ac2a0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Default(MethodInfo *method)

{
  if (g_data_057ad4b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ad4b8 = '\x01';
  }
  return "Default";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_Random
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_Random (const MethodInfo* method);
// 0x41ac2d0

System_String_o * CustomLogic_CustomLogicTitanTypeEnum__get_Random(MethodInfo *method)

{
  if (g_data_057ad4b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Random");
    g_data_057ad4b9 = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanTypeEnum__get_ClassName (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x41ac300

System_String_o *
CustomLogic_CustomLogicTitanTypeEnum__get_ClassName
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  if (g_data_057ad4ba == '\0') {
    il2cpp_runtime_helper_023445d0(&"TitanTypeEnum");
    g_data_057ad4ba = '\x01';
  }
  return "TitanTypeEnum";
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x41ac330

bool_conflict
CustomLogic_CustomLogicTitanTypeEnum__get_IsAbstract
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x41ac340

bool_conflict
CustomLogic_CustomLogicTitanTypeEnum__get_IsStatic
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanTypeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTitanTypeEnum_o* __this, const MethodInfo* method);
// 0x41ac350

bool_conflict
CustomLogic_CustomLogicTitanTypeEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanTypeEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



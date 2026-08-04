// Type: CustomLogic.CustomLogicHorseAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHorseAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHorseAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHorseAnimationEnum_o* CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x4157500

CustomLogic_CustomLogicHorseAnimationEnum_o *
CustomLogic_CustomLogicHorseAnimationEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  CustomLogic_CustomLogicHorseAnimationEnum_o *pCVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057acd1b == '\0') {
    pSStack_20 = (System_String_o *)0x415751c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHorseAnimationEnum);
    g_data_057acd1b = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x4157597;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x4157546;
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(_DAT_05577ee0);
    if (g_data_057acd12 == '\0') {
      pSStack_20 = (System_String_o *)0x415755e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057acd12 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x415757d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x4157587;
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicHorseAnimationEnum_o *)__this;
  }
  pSStack_20 = (System_String_o *)0x415759f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x41575b2;
  pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41575c1;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicHorseAnimationEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x41575d0;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x41575e0;
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x41575ef;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x41575f7;
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_20 = (System_String_o *)0x4157607;
  System_ArgumentException___ctor_3c12490(__this_00,pSVar3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x4157613;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicHorseAnimationEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x415761e;
  pSVar7 = __this_00;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this_00;
  pSStack_20 = pSVar3;
  if (g_data_057acd1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Idle2");
    il2cpp_runtime_helper_023445d0(&"Crazy");
    il2cpp_runtime_helper_023445d0(&"Idle0");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"Idle3");
    il2cpp_runtime_helper_023445d0(&"Idle1");
    g_data_057acd1c = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar7,(MethodInfo *)0x0);
  if (uVar1 < 0x2bc30014) {
    if (uVar1 == 0x22ccd730) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Walk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd23 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
          g_data_057acd23 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        return pCVar9;
      }
    }
    else if (uVar1 == 0x2ac2fe80) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd20 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle3_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
          g_data_057acd20 = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x2bc30013) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle2",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acd1f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle2_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        g_data_057acd1f = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
      return pCVar9;
    }
  }
  else if (uVar1 < 0x2dc3033a) {
    if (uVar1 == 0x2cc301a6) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar6 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar6;
        if (g_data_057acd1e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle1_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
          g_data_057acd1e = '\x01';
        }
        pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        return pCVar9;
      }
    }
    else if ((uVar1 == 0x2dc30339) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Idle0",(MethodInfo *)0x0),
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
      goto CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0;
    }
  }
  else if (uVar1 == 0x8d57e66a) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Run",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar6 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar6;
      if (g_data_057acd22 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        g_data_057acd22 = '\x01';
      }
      pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
      return pCVar9;
    }
  }
  else if ((uVar1 == 0xbbd1f9d6) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar7,"Crazy",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar6 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar6;
    if (g_data_057acd21 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Crazy_g____getter_6_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
      g_data_057acd21 = '\x01';
    }
    pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    return pCVar9;
  }
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHorseAnimationEnum not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)pSVar7,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar7,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar7,uVar5);
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar3;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar7;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar6;
  if (g_data_057acd1d == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41579b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle0_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41579c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41579d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41579dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd1d = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x41579f3;
  pSVar8 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4157a0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4157a1b;
  pCVar9 = (CustomLogic_CustomLogicHorseAnimationEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x4157a35;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar9,pSVar8,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return pCVar9;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x4157620

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

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
  
  if (g_data_057acd1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Idle2");
    il2cpp_runtime_helper_023445d0(&"Crazy");
    il2cpp_runtime_helper_023445d0(&"Idle0");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"Idle3");
    il2cpp_runtime_helper_023445d0(&"Idle1");
    g_data_057acd1c = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x2bc30014) {
    if (uVar1 == 0x22ccd730) {
      bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd23 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
          g_data_057acd23 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x2ac2fe80) {
      bVar2 = System_String__op_Equality(name,"Idle3",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd20 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle3_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
          g_data_057acd20 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x2bc30013) &&
            (bVar2 = System_String__op_Equality(name,"Idle2",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd1f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle2_g____getter_4_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        g_data_057acd1f = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x2dc3033a) {
    if (uVar1 == 0x2cc301a6) {
      bVar2 = System_String__op_Equality(name,"Idle1",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acd1e == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle1_g____getter_3_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
          g_data_057acd1e = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x2dc30339) &&
            (bVar2 = System_String__op_Equality(name,"Idle0",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puVar4 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      goto CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0;
    }
  }
  else if (uVar1 == 0x8d57e66a) {
    bVar2 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acd22 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
        g_data_057acd22 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xbbd1f9d6) &&
          (bVar2 = System_String__op_Equality(name,"Crazy",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acd21 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Crazy_g____getter_6_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
      g_data_057acd21 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicHorseAnimationEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar4 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar3);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar4;
  if (g_data_057acd1d == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41579b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle0_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41579c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41579d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41579dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd1d = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x41579f3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4157a0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4157a1b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4157a35;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle0
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0 (const MethodInfo* method);
// 0x41579a0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle0(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd1d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle0_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd1d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1 (const MethodInfo* method);
// 0x4157a40

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle1_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd1e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2 (const MethodInfo* method);
// 0x4157ae0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle2_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd1f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3 (const MethodInfo* method);
// 0x4157b80

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Idle3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Idle3_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd20 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Crazy
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy (const MethodInfo* method);
// 0x4157c20

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Crazy(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Crazy_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd21 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x4157cc0

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd22 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Run_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd22 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o* CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x4157d60

CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *__this;
  
  if (g_data_057acd23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
    g_data_057acd23 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicHorseAnimationEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicHorseAnimationEnum__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicHorseAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicHorseAnimationEnum);
  return __this;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x4157e00

void CustomLogic_CustomLogicHorseAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acd24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"Run");
    il2cpp_runtime_helper_023445d0(&"Idle2");
    il2cpp_runtime_helper_023445d0(&"Crazy");
    il2cpp_runtime_helper_023445d0(&"Idle0");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"Idle3");
    il2cpp_runtime_helper_023445d0(&"Idle1");
    g_data_057acd24 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Idle0",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Idle1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Idle2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Idle3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Crazy",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Run",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad00c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad00c = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle0>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x4157fa0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle0_g____getter_2_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad00c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad00c = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle1>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x4158010

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle1_g____getter_3_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad00d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad00d = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle2>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x4158080

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle2_g____getter_4_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad00e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad00e = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle3>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x41580f0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Idle3_g____getter_5_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad00f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad00f = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Crazy>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x4158160

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Crazy_g____getter_6_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad010 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad010 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x41581d0

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_7_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad011 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad011 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0 (CustomLogic_CustomLogicHorseAnimationEnum_o* __i, const MethodInfo* method);
// 0x4158240

Il2CppObject *
CustomLogic_CustomLogicHorseAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_8_0
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ad012 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057ad012 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHorseAnimationEnum___ctor (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x4157120

void CustomLogic_CustomLogicHorseAnimationEnum___ctor
               (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057acd12 = '\x01';
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


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle0
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0 (const MethodInfo* method);
// 0x4157190

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle0(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd13 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle1
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1 (const MethodInfo* method);
// 0x4157200

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle1(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd14 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle2
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2 (const MethodInfo* method);
// 0x4157270

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle2(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd15 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle3
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3 (const MethodInfo* method);
// 0x41572e0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Idle3(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd16 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Crazy
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy (const MethodInfo* method);
// 0x4157350

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Crazy(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd17 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Run (const MethodInfo* method);
// 0x41573c0

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Run(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd18 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_Walk (const MethodInfo* method);
// 0x4157430

System_String_o * CustomLogic_CustomLogicHorseAnimationEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acd19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057acd19 = '\x01';
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HorseAnimations + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x41574a0

System_String_o *
CustomLogic_CustomLogicHorseAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  if (g_data_057acd1a == '\0') {
    il2cpp_runtime_helper_023445d0(&"HorseAnimationEnum");
    g_data_057acd1a = '\x01';
  }
  return "HorseAnimationEnum";
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x41574d0

bool_conflict
CustomLogic_CustomLogicHorseAnimationEnum__get_IsAbstract
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x41574e0

bool_conflict
CustomLogic_CustomLogicHorseAnimationEnum__get_IsStatic
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicHorseAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHorseAnimationEnum_o* __this, const MethodInfo* method);
// 0x41574f0

bool_conflict
CustomLogic_CustomLogicHorseAnimationEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicHorseAnimationEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



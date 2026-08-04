// Type: CustomLogic.CustomLogicInputAnnieShifterEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputAnnieShifterEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputAnnieShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputAnnieShifterEnum_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x416f290

CustomLogic_CustomLogicInputAnnieShifterEnum_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  uint32_t uVar1;
  bool_conflict bVar2;
  CustomLogic_CustomLogicInputAnnieShifterEnum_o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_ArgumentException_o *__this;
  undefined8 *puVar7;
  System_ArgumentException_o *pSVar8;
  System_Func_T__object__o *pSVar9;
  undefined8 **ppuVar10;
  undefined8 *puStack_30;
  System_ArgumentException_o *pSStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057aceb0 == '\0') {
    pSStack_20 = (System_String_o *)0x416f2ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057aceb0 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    pSStack_20 = (System_String_o *)0x416f327;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pSStack_20 = (System_String_o *)0x416f2d6;
    pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicInputAnnieShifterEnum);
    if (g_data_057ace9f == '\0') {
      pSStack_20 = (System_String_o *)0x416f2ee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ace9f = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      pSStack_20 = (System_String_o *)0x416f30d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_20 = (System_String_o *)0x416f317;
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    return pCVar3;
  }
  pSStack_20 = (System_String_o *)0x416f32f;
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSStack_20 = (System_String_o *)0x416f342;
  pSVar4 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416f351;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicInputAnnieShifterEnum constructor found that takes ");
  pSStack_20 = (System_String_o *)0x416f360;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSStack_20 = (System_String_o *)0x416f370;
  pSVar4 = System_String__Concat_3af7150(pSVar5,pSVar4,str2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416f37f;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pSStack_20 = (System_String_o *)0x416f387;
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_20 = (System_String_o *)0x416f397;
  System_ArgumentException___ctor_3c12490(__this,pSVar4,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x416f3a3;
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicInputAnnieShifterEnum_CreateInstance);
  pSStack_20 = (System_String_o *)0x416f3ae;
  pSVar8 = __this;
  puStack_30 = (undefined8 *)il2cpp_runtime_helper_022b2b10();
  ppuVar10 = &puStack_30;
  pSStack_28 = __this;
  pSStack_20 = pSVar4;
  if (g_data_057aceb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackGrabMid");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottom");
    il2cpp_runtime_helper_023445d0(&"AttackBite");
    il2cpp_runtime_helper_023445d0(&"AttackHead");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHead");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFront");
    g_data_057aceb1 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar8,(MethodInfo *)0x0);
  if (uVar1 < 0x42f9ae8b) {
    if (uVar1 < 0x2cfbaa40) {
      if (uVar1 == 0xe1ef32d) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Jump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057aceb3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
            g_data_057aceb3 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          return pCVar3;
        }
      }
      else if (uVar1 == 0x22ccd730) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Walk",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057aceb4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
            g_data_057aceb4 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0x2cfbaa3f) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"Kick",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar8 = pSStack_28;
          pSVar4 = pSStack_20;
        }
        else {
          ppuVar10 = (undefined8 **)&uStack_18;
          pSVar8 = pSStack_28;
          pSVar4 = pSStack_20;
        }
        goto CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick;
      }
    }
    else if (uVar1 < 0x38122e2c) {
      if (uVar1 == 0x371c1522) {
        bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackStomp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puVar7 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          puStack_30 = puVar7;
          if (g_data_057aceb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
            g_data_057aceb7 = '\x01';
          }
          pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          System_Func_object__object____ctor();
          pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                     MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          return pCVar3;
        }
      }
      else if ((uVar1 == 0x38122e2b) &&
              (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackHead",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057aceb9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHead_g____getter_9);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb9 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x3acb63d7) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBite",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057aceb8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBite_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb8 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x42f9ae8a) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBrushFront",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acebb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFront_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057acebb = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return pCVar3;
    }
  }
  else if (uVar1 < 0x86ddd849) {
    if (uVar1 == 0x86ddd848) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabBottom",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057acebd == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottom_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057acebd = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return pCVar3;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057aceb5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb5 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x76917342) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabUp",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acebf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUp_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057acebf = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return pCVar3;
    }
  }
  else if (uVar1 < 0x93e6a9c5) {
    if (uVar1 == 0x92d2a9f1) {
      bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackSwing",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puVar7 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        puStack_30 = puVar7;
        if (g_data_057aceb6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb6 = '\x01';
        }
        pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                   MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return pCVar3;
      }
    }
    else if ((uVar1 == 0x93e6a9c4) &&
            (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBrushBack",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057aceba == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushBack_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057aceba = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return pCVar3;
    }
  }
  else if (uVar1 == 0xefa1ddf1) {
    bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackBrushHead",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puVar7 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      puStack_30 = puVar7;
      if (g_data_057acebc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHead_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057acebc = '\x01';
      }
      pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return pCVar3;
    }
  }
  else if ((uVar1 == 0xff226e93) &&
          (bVar2 = System_String__op_Equality((System_String_o *)pSVar8,"AttackGrabMid",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    puVar7 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puVar7 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    puStack_30 = puVar7;
    if (g_data_057acebe == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMid_g____gette);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      g_data_057acebe = '\x01';
    }
    pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    System_Func_object__object____ctor();
    pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
               MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    return pCVar3;
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputAnnieShifterEnum not found");
  pSVar4 = System_String__Concat_3af7150(pSVar4,(System_String_o *)pSVar8,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar6);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar8,pSVar4,(MethodInfo *)0x0);
  uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar7 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar8,uVar6);
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick:
  *(System_String_o **)((long)ppuVar10 + -8) = pSVar4;
  *(System_ArgumentException_o **)((long)ppuVar10 + -0x10) = pSVar8;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar7;
  if (g_data_057aceb2 == '\0') {
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416f9b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416f9c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416f9d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416f9dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb2 = '\x01';
  }
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416f9f3;
  pSVar9 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416fa0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416fa1b;
  pCVar3 = (CustomLogic_CustomLogicInputAnnieShifterEnum_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  *(undefined8 *)((long)ppuVar10 + -0x20) = 0x416fa35;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar3,pSVar9,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return pCVar3;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x416f3b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057aceb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"AttackGrabMid");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottom");
    il2cpp_runtime_helper_023445d0(&"AttackBite");
    il2cpp_runtime_helper_023445d0(&"AttackHead");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHead");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFront");
    g_data_057aceb1 = '\x01';
  }
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x42f9ae8b) {
    if (uVar1 < 0x2cfbaa40) {
      if (uVar1 == 0xe1ef32d) {
        bVar2 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aceb3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
            g_data_057aceb3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if (uVar1 == 0x22ccd730) {
        bVar2 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aceb4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
            g_data_057aceb4 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x2cfbaa3f) &&
              (bVar2 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puVar3 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puVar3 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        goto CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick;
      }
    }
    else if (uVar1 < 0x38122e2c) {
      if (uVar1 == 0x371c1522) {
        bVar2 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          puStack_18 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aceb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
            il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
            g_data_057aceb7 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          System_Func_object__object____ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          CustomLogic_CLPropertyBinding_object____ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x38122e2b) &&
              (bVar2 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0), (char)bVar2 != '\0'))
      {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aceb9 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHead_g____getter_9);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb9 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x3acb63d7) {
      bVar2 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aceb8 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBite_g____getter_8);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb8 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x42f9ae8a) &&
            (bVar2 = System_String__op_Equality(name,"AttackBrushFront",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acebb == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFront_g____ge);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057acebb = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x86ddd849) {
    if (uVar1 == 0x86ddd848) {
      bVar2 = System_String__op_Equality(name,"AttackGrabBottom",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057acebd == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottom_g____ge);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057acebd = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x53765479) {
      bVar2 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aceb5 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x76917342) &&
            (bVar2 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acebf == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUp_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057acebf = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x93e6a9c5) {
    if (uVar1 == 0x92d2a9f1) {
      bVar2 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        puStack_18 = &TypeInfo_Bindings;
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057aceb6 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
          g_data_057aceb6 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        System_Func_object__object____ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        CustomLogic_CLPropertyBinding_object____ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x93e6a9c4) &&
            (bVar2 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aceba == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushBack_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057aceba = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xefa1ddf1) {
    bVar2 = System_String__op_Equality(name,"AttackBrushHead",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057acebc == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHead_g____get);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
        g_data_057acebc = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      System_Func_object__object____ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xff226e93) &&
          (bVar2 = System_String__op_Equality(name,"AttackGrabMid",(MethodInfo *)0x0), (char)bVar2 != '\0')) {
    puStack_18 = &TypeInfo_Bindings;
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057acebe == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMid_g____gette);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
      g_data_057acebe = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    System_Func_object__object____ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicInputAnnieShifterEnum not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar4);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar3;
  if (g_data_057aceb2 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416f9b9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416f9c5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416f9d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416f9dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb2 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416f9f3;
  pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416fa0c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416fa1b;
  pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x416fa35;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return (CustomLogic_ICLMemberBinding_o *)pCVar6;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x416f9a0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Kick_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x416fa40

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Jump_g____getter_3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x416fae0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Walk_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x416fb80

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackCombo_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x416fc20

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackSwing_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x416fcc0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackStomp_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x416fd60

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBite_g____getter_8);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x416fe00

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackHead_g____getter_9);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceb9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x416fea0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057aceba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushBack_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057aceba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront (const MethodInfo* method);
// 0x416ff40

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057acebb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushFront_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057acebb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead (const MethodInfo* method);
// 0x416ffe0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057acebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackBrushHead_g____get);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057acebc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottom
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom (const MethodInfo* method);
// 0x4170080

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057acebd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabBottom_g____ge);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057acebd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabMid
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid (const MethodInfo* method);
// 0x4170120

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057acebe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabMid_g____gette);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057acebe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x41701c0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this;
  
  if (g_data_057acebf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__AttackGrabUp_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
    g_data_057acebf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicInputAnnieShifterEnum);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x4170260

void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057acec0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&"AttackGrabMid");
    il2cpp_runtime_helper_023445d0(&"AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AttackStomp");
    il2cpp_runtime_helper_023445d0(&"Kick");
    il2cpp_runtime_helper_023445d0(&"AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"Jump");
    il2cpp_runtime_helper_023445d0(&"AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AttackGrabBottom");
    il2cpp_runtime_helper_023445d0(&"AttackBite");
    il2cpp_runtime_helper_023445d0(&"AttackHead");
    il2cpp_runtime_helper_023445d0(&"Walk");
    il2cpp_runtime_helper_023445d0(&"AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AttackBrushHead");
    il2cpp_runtime_helper_023445d0(&"AttackBrushFront");
    g_data_057acec0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Kick",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Jump",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Walk",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackCombo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackSwing",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackStomp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBite",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushBack",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushFront",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackBrushHead",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabBottom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabMid",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"AttackGrabUp",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057acec1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0ba = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  return;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x41704e0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0ba = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170590

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0bb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170640

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0bc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x41706f0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0bd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x41707a0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0be = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170850

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0bf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170900

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x41709b0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170a60

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acec9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFront>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170b10

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057aceca = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHead>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170bc0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acecb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acecb = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottom>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170c70

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acecc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acecc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMid>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170d20

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acecd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acecd = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x4170dd0

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acece == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acece = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ad0c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057ad0c7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x416e8f0

void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ace9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057ace9f = '\x01';
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


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick (const MethodInfo* method);
// 0x416e960

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea0 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  }
  il2cpp_runtime_helper_02337ed0();
  return (System_String_o *)**(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump (const MethodInfo* method);
// 0x416e9d0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk (const MethodInfo* method);
// 0x416ea40

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea2 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x416eab0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea3 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing (const MethodInfo* method);
// 0x416eb20

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp (const MethodInfo* method);
// 0x416eb90

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite (const MethodInfo* method);
// 0x416ec00

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead (const MethodInfo* method);
// 0x416ec70

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea7 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x416ece0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea8 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushFront
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront (const MethodInfo* method);
// 0x416ed50

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acea9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acea9 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x48);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead (const MethodInfo* method);
// 0x416edc0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceaa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057aceaa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x50);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabBottom
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom (const MethodInfo* method);
// 0x416ee30

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057aceab = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x58);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabMid
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid (const MethodInfo* method);
// 0x416eea0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057aceac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057aceac = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x60);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x416ef10

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057acead == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    g_data_057acead = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) + 0x68);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x416ef80

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  if (g_data_057aceae == '\0') {
    il2cpp_runtime_helper_023445d0(&"InputAnnieShifterEnum");
    g_data_057aceae = '\x01';
  }
  return "InputAnnieShifterEnum";
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x416efb0

bool_conflict
CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x416efc0

bool_conflict
CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x416efd0

bool_conflict
CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor (const MethodInfo* method);
// 0x416efe0

void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057aceaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicInputAnnieShifterEnum);
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackCombo");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackGrabMid");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/Kick");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackHead");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackBrushHead");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackBite");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/Jump");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackBrushFront");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackGrabBottom");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackStomp");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackBrushBack");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackGrabUp");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/AttackSwing");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter/Walk");
    g_data_057aceaf = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8) = "AnnieShifter/Kick";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8),"AnnieShifter/Kick");
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "AnnieShifter/Jump";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = "AnnieShifter/Walk";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = "AnnieShifter/AttackCombo";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = "AnnieShifter/AttackSwing";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "AnnieShifter/AttackStomp";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x30) = "AnnieShifter/AttackBite";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x38) = "AnnieShifter/AttackHead";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x40) = "AnnieShifter/AttackBrushBack";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x48) = "AnnieShifter/AttackBrushFront";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x50) = "AnnieShifter/AttackBrushHead";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x58) = "AnnieShifter/AttackGrabBottom";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x60) = "AnnieShifter/AttackGrabMid";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  lVar1 = *(long *)(TypeInfo_CustomLogicInputAnnieShifterEnum + 0xb8);
  *(undefined8 *)(lVar1 + 0x68) = "AnnieShifter/AttackGrabUp";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  return;
}



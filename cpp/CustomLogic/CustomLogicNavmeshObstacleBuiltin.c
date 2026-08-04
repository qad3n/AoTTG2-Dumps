// Type: CustomLogic.CustomLogicNavmeshObstacleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNavmeshObstacleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40f4200

CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint in_EAX;
  uint32_t uVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  System_ArgumentException_o *message;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  System_ArgumentException_o *pSVar9;
  undefined8 *puVar10;
  System_Func_T__object__o *pSVar11;
  System_Action_T__object__o *pSVar12;
  System_Func_T__object____object__o *function;
  System_ArgumentException_o **ppSVar13;
  System_ArgumentException_o *pSStack_30;
  System_ArgumentException_o *pSStack_28;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ac7bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNavmeshObstacleBuiltin);
    g_data_057ac7bf = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (args->max_length == 0) {
    pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNavmeshObstacleBuiltin);
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)pCVar5,(UnityEngine_Component_o *)0x0,
               (MethodInfo *)0x0);
    return pCVar5;
  }
  il2cpp_runtime_helper_01f681a0(args);
  uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
  pSVar6 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicNavmeshObstacleBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  message = (System_ArgumentException_o *)System_String__Concat_3af7150(pSVar7,pSVar6,str2,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_ArgumentException___ctor_3c12490(__this,(System_String_o *)message,(MethodInfo *)0x0);
  il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicNavmeshObstacleBuiltin_CreateInstance);
  pSVar9 = __this;
  pSStack_30 = (System_ArgumentException_o *)il2cpp_runtime_helper_022b2b10();
  ppSVar13 = &pSStack_30;
  pSStack_28 = __this;
  if (g_data_057ac7c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ShapeCapsule");
    il2cpp_runtime_helper_023445d0(&"Scale");
    il2cpp_runtime_helper_023445d0(&"ShapeBox");
    il2cpp_runtime_helper_023445d0(&"Carving");
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"AutoScale");
    il2cpp_runtime_helper_023445d0(&"CarveOnlyStationary");
    il2cpp_runtime_helper_023445d0(&"Shape");
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057ac7c0 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)pSVar9,(MethodInfo *)0x0);
  if (uVar3 < 0x4380ddc7) {
    if (uVar3 < 0x1bd13563) {
      if (uVar3 == 0xfd70833) {
        bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"ShapeBox",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puVar10 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar10 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
            ppSVar13 = (System_ArgumentException_o **)&uStack_18;
            pSVar9 = pSStack_28;
          }
          else {
            ppSVar13 = (System_ArgumentException_o **)&uStack_18;
            pSVar9 = pSStack_28;
          }
          goto CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox;
        }
      }
      else if ((uVar3 == 0x1bd13562) &&
              (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Height",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac7c4 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Height_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c4 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x28528e11) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Scale",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac7c5 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Scale_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Scale_g____setter_6_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c5 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return pCVar5;
      }
    }
    else if (uVar3 == 0x3a8111d3) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Radius",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac7c3 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Radius_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Radius_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c3 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x4380ddc6) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Shape",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7c9 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Shape_g____getter_10_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Shape_g____setter_10_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        g_data_057ac7c9 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 < 0x4b9fbea5) {
    if (uVar3 == 0x48479f2b) {
      bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Carving",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_30 = pSStack_28;
        if (g_data_057ac7c7 == '\0') {
          pSStack_28 = message;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Carving_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Carving_g____setter_8_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c7 = '\x01';
          message = pSStack_28;
        }
        pSStack_28 = message;
        pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return pCVar5;
      }
    }
    else if ((uVar3 == 0x4b9fbea4) &&
            (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"Center",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7c6 == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Center_g____setter_7_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        g_data_057ac7c6 = '\x01';
        message = pSStack_28;
      }
      pSStack_28 = message;
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0x83a1c814) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"AutoScale",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSStack_28;
      if (g_data_057ac7ca == '\0') {
        pSStack_28 = message;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AutoScale_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7ca = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
        pSStack_28 = message;
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (function == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                ((CustomLogic_CLMethodBinding_T__o *)pCVar5,function,MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return pCVar5;
    }
  }
  else if (uVar3 == 0xf50bdc61) {
    bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"ShapeCapsule",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar9 = (System_ArgumentException_o *)&TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_02337ed0();
      }
      pSStack_30 = pSVar9;
      if (g_data_057ac7c2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShapeCapsule_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        g_data_057ac7c2 = '\x01';
      }
      pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor();
      pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
                 MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return pCVar5;
    }
  }
  else if ((uVar3 == 0x7a0c4e3c) &&
          (bVar4 = System_String__op_Equality((System_String_o *)pSVar9,"CarveOnlyStationary",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_30 = pSStack_28;
    if (g_data_057ac7c8 == '\0') {
      pSStack_28 = message;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CarveOnlyStationary_g);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CarveOnlyStationary_g____s);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      g_data_057ac7c8 = '\x01';
      message = pSStack_28;
    }
    pSStack_28 = message;
    pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    System_Func_object__object____ctor();
    pSVar12 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    System_Action_object__object____ctor();
    pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor
              ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,pSVar12,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    return pCVar5;
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicNavmeshObstacleBuiltin not found");
  message = (System_ArgumentException_o *)
            System_String__Concat_3af7150(pSVar6,(System_String_o *)pSVar9,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar9 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_Exception___ctor_3cf6120((System_Exception_o *)pSVar9,(System_String_o *)message,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar10 = (undefined8 *)il2cpp_runtime_helper_022b2b10(pSVar9,uVar8);
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox:
  *(System_ArgumentException_o **)((long)ppSVar13 + -8) = message;
  *(System_ArgumentException_o **)((long)ppSVar13 + -0x10) = pSVar9;
  *(undefined8 **)((long)ppSVar13 + -0x18) = puVar10;
  if (g_data_057ac7c1 == '\0') {
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f47c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShapeBox_g____getter_2_0);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f47d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f47e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f47ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c1 = '\x01';
  }
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f4803;
  pSVar11 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f481c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f482b;
  pCVar5 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  *(undefined8 *)((long)ppSVar13 + -0x20) = 0x40f4845;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar5,pSVar11,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return pCVar5;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x40f5a40

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac7d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac7d8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x40f5ab0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings.<>c$$<__CreateMethodBinding__AutoScale>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x40f5ac0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_____CreateMethodBinding__AutoScale_b__11_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *extraout_RAX;
  
  if (__c != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return extraout_RAX;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40f42f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar5;
  undefined8 *puVar6;
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_T__o *__this;
  System_Exception_o *unaff_RBX;
  System_String_o *unaff_R14;
  undefined8 *puStack_18;
  
  if (g_data_057ac7c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&"ShapeCapsule");
    il2cpp_runtime_helper_023445d0(&"Scale");
    il2cpp_runtime_helper_023445d0(&"ShapeBox");
    il2cpp_runtime_helper_023445d0(&"Carving");
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"AutoScale");
    il2cpp_runtime_helper_023445d0(&"CarveOnlyStationary");
    il2cpp_runtime_helper_023445d0(&"Shape");
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057ac7c0 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x4380ddc7) {
    if (uVar3 < 0x1bd13563) {
      if (uVar3 == 0xfd70833) {
        bVar4 = System_String__op_Equality(name,"ShapeBox",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          puVar6 = &TypeInfo_Bindings;
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            puVar6 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
          }
          goto CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox;
        }
      }
      else if ((uVar3 == 0x1bd13562) &&
              (bVar4 = System_String__op_Equality(name,"Height",(MethodInfo *)0x0), (char)bVar4 != '\0'))
      {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac7c4 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_5_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Height_g____setter_5_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c4 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x28528e11) {
      bVar4 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac7c5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Scale_g____getter_6_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Scale_g____setter_6_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c5 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x3a8111d3) {
      bVar4 = System_String__op_Equality(name,"Radius",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac7c3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Radius_g____getter_4_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Radius_g____setter_4_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c3 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x4380ddc6) &&
            (bVar4 = System_String__op_Equality(name,"Shape",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7c9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Shape_g____getter_10_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Shape_g____setter_10_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        g_data_057ac7c9 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0x4b9fbea5) {
    if (uVar3 == 0x48479f2b) {
      bVar4 = System_String__op_Equality(name,"Carving",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ac7c7 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Carving_g____getter_8_0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Carving_g____setter_8_1);
          il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
          g_data_057ac7c7 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        System_Func_object__object____ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        System_Action_object__object____ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x4b9fbea4) &&
            (bVar4 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7c6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_7_0);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Center_g____setter_7_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        g_data_057ac7c6 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
      System_Action_object__object____ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0x83a1c814) {
    bVar4 = System_String__op_Equality(name,"AutoScale",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7ca == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object_object);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AutoScale_b__11_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057ac7ca = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (function == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object_object);
        System_Func_object__object__object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
      }
      __this = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor(__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)__this;
    }
  }
  else if (uVar3 == 0xf50bdc61) {
    bVar4 = System_String__op_Equality(name,"ShapeCapsule",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      puStack_18 = &TypeInfo_Bindings;
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        puStack_18 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac7c2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShapeCapsule_g____getter);
        il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
        g_data_057ac7c2 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      System_Func_object__object____ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      CustomLogic_CLPropertyBinding_object____ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0x7a0c4e3c) &&
          (bVar4 = System_String__op_Equality(name,"CarveOnlyStationary",(MethodInfo *)0x0), (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac7c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CarveOnlyStationary_g);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CarveOnlyStationary_g____s);
      il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
      g_data_057ac7c8 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    System_Func_object__object____ctor();
    pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    System_Action_object__object____ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicNavmeshObstacleBuiltin not found");
  unaff_R14 = System_String__Concat_3af7150(str0,name,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  puVar6 = (undefined8 *)il2cpp_runtime_helper_022b2b10(unaff_RBX,uVar5);
  register0x00000020 = (BADSPACEBASE *)&puStack_18;
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox:
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 **)((long)register0x00000020 + -0x18) = puVar6;
  if (g_data_057ac7c1 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f47c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShapeBox_g____getter_2_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f47d5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f47e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f47ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c1 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f4803;
  pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f481c;
  System_Func_object__object____ctor();
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f482b;
  pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x40f4845;
  CustomLogic_CLPropertyBinding_object____ctor(pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar9;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeBox
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox (const MethodInfo* method);
// 0x40f47b0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeBox(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShapeBox_g____getter_2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__ShapeCapsule
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule (const MethodInfo* method);
// 0x40f4850

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__ShapeCapsule
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__ShapeCapsule_g____getter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Radius
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius (const MethodInfo* method);
// 0x40f48f0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Radius(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Radius_g____getter_4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Radius_g____setter_4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Height
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height (const MethodInfo* method);
// 0x40f49d0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Height(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Height_g____getter_5_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Height_g____setter_5_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Scale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale (const MethodInfo* method);
// 0x40f4ab0

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Scale(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Scale_g____getter_6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Scale_g____setter_6_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x40f4b90

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Center_g____getter_7_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Center_g____setter_7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Carving
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving (const MethodInfo* method);
// 0x40f4c70

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Carving(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Carving_g____getter_8_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Carving_g____setter_8_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__CarveOnlyStationary
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary (const MethodInfo* method);
// 0x40f4d50

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__CarveOnlyStationary
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__CarveOnlyStationary_g);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__CarveOnlyStationary_g____s);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreatePropertyBinding__Shape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape (const MethodInfo* method);
// 0x40f4e30

CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreatePropertyBinding__Shape(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreatePropertyBinding__Shape_g____getter_10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void___CreatePropertyBinding__Shape_g____setter_10_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
    g_data_057ac7c9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object);
  System_Func_object__object____ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_CustomLogicNavmeshObstacleBuiltin_object);
  System_Action_object__object____ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLPropertyBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNavmeshObstacleBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$__CreateMethodBinding__AutoScale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale (const MethodInfo* method);
// 0x40f4f10

CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings____CreateMethodBinding__AutoScale(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *__this;
  
  if (g_data_057ac7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object___CreateMethodBinding__AutoScale_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac7ca = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_CustomLogicNavmeshObstacleBuiltin_object_object);
    System_Func_object__object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin__o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_CLMethodBinding_CustomLogicNavmeshObstacleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNavmeshObstacleBuiltin)
  ;
  return __this;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40f5060

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings___cctor(MethodInfo *method)

{
  undefined4 uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uStack_20;
  
  if (g_data_057ac7cb == '\0') {
    uStack_20 = 0x40f507d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    uStack_20 = 0x40f5089;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    uStack_20 = 0x40f5095;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    uStack_20 = 0x40f50a1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    uStack_20 = 0x40f50ad;
    il2cpp_runtime_helper_023445d0(&"ShapeCapsule");
    uStack_20 = 0x40f50b9;
    il2cpp_runtime_helper_023445d0(&"Scale");
    uStack_20 = 0x40f50c5;
    il2cpp_runtime_helper_023445d0(&"ShapeBox");
    uStack_20 = 0x40f50d1;
    il2cpp_runtime_helper_023445d0(&"Carving");
    uStack_20 = 0x40f50dd;
    il2cpp_runtime_helper_023445d0(&"Radius");
    uStack_20 = 0x40f50e9;
    il2cpp_runtime_helper_023445d0(&"Center");
    uStack_20 = 0x40f50f5;
    il2cpp_runtime_helper_023445d0(&"AutoScale");
    uStack_20 = 0x40f5101;
    il2cpp_runtime_helper_023445d0(&"CarveOnlyStationary");
    uStack_20 = 0x40f510d;
    il2cpp_runtime_helper_023445d0(&"Shape");
    uStack_20 = 0x40f5119;
    il2cpp_runtime_helper_023445d0(&"Height");
    g_data_057ac7cb = '\x01';
  }
  uStack_20 = 0x40f512f;
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  uStack_20 = 0x40f5144;
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    uStack_20 = 0x40f5169;
    System_Collections_Generic_HashSet_object___Add(__this,"ShapeBox",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f517e;
    System_Collections_Generic_HashSet_object___Add(__this,"ShapeCapsule",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f5193;
    System_Collections_Generic_HashSet_object___Add(__this,"Radius",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f51a8;
    System_Collections_Generic_HashSet_object___Add(__this,"Height",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f51bd;
    System_Collections_Generic_HashSet_object___Add(__this,"Scale",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f51d2;
    System_Collections_Generic_HashSet_object___Add(__this,"Center",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f51e7;
    System_Collections_Generic_HashSet_object___Add(__this,"Carving",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f51fc;
    System_Collections_Generic_HashSet_object___Add(__this,"CarveOnlyStationary",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f5211;
    System_Collections_Generic_HashSet_object___Add(__this,"Shape",MethodInfo_Boolean_Add);
    uStack_20 = 0x40f5226;
    System_Collections_Generic_HashSet_object___Add(__this,"AutoScale",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
  uStack_20 = 0x40f5258;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_20 = CONCAT44(1,uVar1);
  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeBox>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f5260

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeBox_g____getter_2_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__ShapeCapsule>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f5280

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__ShapeCapsule_g____getter_3_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_8 + 4);
  return pIVar1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f52a0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____getter_4_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  Il2CppObject *extraout_RAX_05;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEF10 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EE570 *obj_02;
  long lVar8;
  MethodInfo *pMVar9;
  long lVar10;
  MethodInfo *pMVar11;
  MethodInfo_24EEB40 *pMVar12;
  MethodInfo_24EEF10 *pMVar13;
  float fVar14;
  UnityEngine_Vector3_o value;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  MethodInfo_24EEF10 *pMStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  MethodInfo *pMStack_a8;
  MethodInfo_24EEB40 *pMStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  MethodInfo *pMStack_88;
  MethodInfo *pMStack_80;
  UnityEngine_Vector3_Fields UStack_78;
  MethodInfo *pMStack_68;
  undefined8 uStack_60;
  long lStack_58;
  MethodInfo *pMStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__get_radius(__this,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar5;
  }
  lVar8 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7cc == '\0') {
    uStack_28 = 0x40f52ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40f530b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7cc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f532a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f533c;
  pMVar7 = MethodInfo_Single_ConvertTo_Single;
  pMVar9 = method;
  fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar8 != 0) &&
     (pMVar9 = (MethodInfo *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_radius
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),fVar14,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40f535d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo *)0x0) && ((pMVar9->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40f5376;
    fVar14 = UnityEngine_AI_NavMeshObstacle__get_height
                       ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar9->field7_0x38).rgctx_data,(MethodInfo *)0x0
                       );
    uStack_28 = CONCAT44(fVar14,(undefined4)uStack_28);
    pMStack_30 = (MethodInfo *)0x40f5391;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    return pIVar5;
  }
  lVar10 = 0;
  pMStack_30 = (MethodInfo *)0x40f5398;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar8;
  pMStack_30 = method;
  if (g_data_057ac7cd == '\0') {
    uStack_48 = 0x40f53bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_48 = 0x40f53cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7cd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = 0x40f53ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = 0x40f53fc;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  pMVar9 = pMVar7;
  fVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pMVar7,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar10 != 0) &&
     (pMVar9 = (MethodInfo *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_height
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),fVar14,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 0x40f541d;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  if (pMVar9 != (MethodInfo *)0x0) {
    pCVar6 = CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
                       ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)pMVar9,method_00);
    return (Il2CppObject *)pCVar6;
  }
  pMStack_50 = (MethodInfo *)0x40f5431;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  lStack_58 = lVar10;
  pMStack_50 = pMVar7;
  if (g_data_057ac7ce == '\0') {
    pMStack_68 = (MethodInfo *)0x40f545f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pMStack_68 = (MethodInfo *)0x40f546b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_68 = (MethodInfo *)0x40f548a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (MethodInfo *)0x40f549c;
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar7 = method_00;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (((pMVar9 != (MethodInfo *)0x0) && (pIVar5 != (Il2CppObject *)0x0)) &&
     (pMVar7 = (MethodInfo *)0x0, (pMVar9->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar9->field7_0x38).rgctx_data,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar5 + 3),(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  pMStack_68 = (MethodInfo *)0x40f54cc;
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar7;
  pMStack_68 = pMVar9;
  if (g_data_057ac7cf == '\0') {
    pMVar11 = (MethodInfo *)&TypeInfo_Vector3;
    pMStack_80 = (MethodInfo *)0x40f54ed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((pMVar7 != (MethodInfo *)0x0) &&
     (pMVar11 = (MethodInfo *)0x0, (pMVar7->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_80 = (MethodInfo *)0x40f5509;
    UStack_78 = (UnityEngine_Vector3_Fields)
                UnityEngine_AI_NavMeshObstacle__get_center
                          ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar7->field7_0x38).rgctx_data,
                           (MethodInfo *)0x0);
    pMStack_80 = (MethodInfo *)0x40f5525;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&UStack_78);
    return pIVar5;
  }
  pMStack_80 = (MethodInfo *)
               CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
  ;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = pMVar7;
  pMStack_80 = method_00;
  if (g_data_057ac7d0 == '\0') {
    uStack_98 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_98 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_98 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_98 = 0x40f558c;
  obj_00 = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar12 = obj;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)obj,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pMVar11 != (MethodInfo *)0x0) &&
     (pMVar12 = (MethodInfo_24EEB40 *)0x0, (pMVar11->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center
              ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar11->field7_0x38).rgctx_data,value,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  uStack_98 = 0x40f55ad;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar12 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar12->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_a0 = (MethodInfo_24EEB40 *)0x40f55c6;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar12->rgctx_data,(MethodInfo *)0x0);
    uStack_98 = CONCAT17((char)bVar2,(undefined7)uStack_98);
    pMStack_a0 = (MethodInfo_24EEB40 *)0x40f55df;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_98 + 7);
    return pIVar5;
  }
  lVar8 = 0;
  pMStack_a0 = (MethodInfo_24EEB40 *)0x40f55e6;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  pMStack_a8 = pMVar11;
  pMStack_a0 = obj;
  if (g_data_057ac7d1 == '\0') {
    uStack_b8 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_b8 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_b8 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_b8 = (code *)0x40f564c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar13 = obj_00;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar8 != 0) &&
     (pMVar13 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  uStack_b8 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_b8 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar13 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar13->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_c0 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar13->rgctx_data,(MethodInfo *)0x0);
    uStack_b8 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_b8);
    pMStack_c0 = (MethodInfo_24EEF10 *)0x40f569f;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_b8 + 7);
    return pIVar5;
  }
  lVar10 = 0;
  pMStack_c0 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_d0 = il2cpp_runtime_helper_022b2c90();
  lStack_c8 = lVar8;
  pMStack_c0 = obj_00;
  if (g_data_057ac7d2 == '\0') {
    uStack_d8 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_d8 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_d8 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_d8 = (code *)0x40f570c;
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar10 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  uStack_d8 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_d8 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_d8 = (code *)CONCAT44(iVar4,(undefined4)uStack_d8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d8 + 4);
    return pIVar5;
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_02,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar8 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),iVar4,(MethodInfo *)0x0);
    return extraout_RAX_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  pIVar5 = (Il2CppObject *)(*pcVar1)();
  return pIVar5;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Radius>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f52e0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Radius_g____setter_4_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEF10 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EE570 *obj_02;
  long lVar7;
  MethodInfo *__this_00;
  MethodInfo *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  MethodInfo_24EEF10 *pMVar10;
  long lVar11;
  float fVar12;
  UnityEngine_Vector3_o value;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  MethodInfo_24EEF10 *pMStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  MethodInfo *pMStack_a0;
  MethodInfo_24EEB40 *pMStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  MethodInfo *pMStack_80;
  MethodInfo *pMStack_78;
  UnityEngine_Vector3_Fields UStack_70;
  MethodInfo *pMStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7cc == '\0') {
    uStack_20 = 0x40f52ff;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40f530b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7cc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f532a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f533c;
  pMVar6 = MethodInfo_Single_ConvertTo_Single;
  pIVar5 = __v;
  fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar5 = (Il2CppObject *)0x0,
     __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_radius(__this,fVar12,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40f535d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5[3].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40f5376;
    fVar12 = UnityEngine_AI_NavMeshObstacle__get_height(pIVar5[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT44(fVar12,(undefined4)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40f5391;
    il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_20 + 4);
    return;
  }
  lVar7 = 0;
  pIStack_28 = (Il2CppObject *)0x40f5398;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac7cd == '\0') {
    uStack_40 = 0x40f53bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_40 = 0x40f53cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7cd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = 0x40f53ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x40f53fc;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  __this_00 = pMVar6;
  fVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     ((Il2CppObject *)pMVar6,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar7 != 0) &&
     (__this_00 = (MethodInfo *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_height
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38),fVar12,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 0x40f541d;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo *)0x0) {
    CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
              ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)__this_00,method_00);
    return;
  }
  pMStack_48 = (MethodInfo *)0x40f5431;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar7;
  pMStack_48 = pMVar6;
  if (g_data_057ac7ce == '\0') {
    pMStack_60 = (MethodInfo *)0x40f545f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pMStack_60 = (MethodInfo *)0x40f546b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_60 = (MethodInfo *)0x40f548a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_60 = (MethodInfo *)0x40f549c;
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar6 = method_00;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (((__this_00 != (MethodInfo *)0x0) && (pIVar5 != (Il2CppObject *)0x0)) &&
     (pMVar6 = (MethodInfo *)0x0, (__this_00->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              ((UnityEngine_AI_NavMeshObstacle_o *)(__this_00->field7_0x38).rgctx_data,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar5 + 3),(MethodInfo *)0x0);
    return;
  }
  pMStack_60 = (MethodInfo *)0x40f54cc;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar6;
  pMStack_60 = __this_00;
  if (g_data_057ac7cf == '\0') {
    pMVar8 = (MethodInfo *)&TypeInfo_Vector3;
    pMStack_78 = (MethodInfo *)0x40f54ed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((pMVar6 != (MethodInfo *)0x0) &&
     (pMVar8 = (MethodInfo *)0x0, (pMVar6->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_78 = (MethodInfo *)0x40f5509;
    UStack_70 = (UnityEngine_Vector3_Fields)
                UnityEngine_AI_NavMeshObstacle__get_center
                          ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar6->field7_0x38).rgctx_data,
                           (MethodInfo *)0x0);
    pMStack_78 = (MethodInfo *)0x40f5525;
    il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&UStack_70);
    return;
  }
  pMStack_78 = (MethodInfo *)
               CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
  ;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  pMStack_80 = pMVar6;
  pMStack_78 = method_00;
  if (g_data_057ac7d0 == '\0') {
    uStack_90 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_90 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_90 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_90 = 0x40f558c;
  obj_00 = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar9 = obj;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)obj,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pMVar8 != (MethodInfo *)0x0) &&
     (pMVar9 = (MethodInfo_24EEB40 *)0x0, (pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center
              ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar8->field7_0x38).rgctx_data,value,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = 0x40f55ad;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_98 = (MethodInfo_24EEB40 *)0x40f55c6;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data,(MethodInfo *)0x0);
    uStack_90 = CONCAT17((char)bVar2,(undefined7)uStack_90);
    pMStack_98 = (MethodInfo_24EEB40 *)0x40f55df;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
    return;
  }
  lVar7 = 0;
  pMStack_98 = (MethodInfo_24EEB40 *)0x40f55e6;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = pMVar8;
  pMStack_98 = obj;
  if (g_data_057ac7d1 == '\0') {
    uStack_b0 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_b0 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_b0 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_b0 = (code *)0x40f564c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar10 = obj_00;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar7 != 0) &&
     (pMVar10 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_b0 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_b0 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar10 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar10->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_b8 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar10->rgctx_data,(MethodInfo *)0x0);
    uStack_b0 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_b0);
    pMStack_b8 = (MethodInfo_24EEF10 *)0x40f569f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_b0 + 7);
    return;
  }
  lVar11 = 0;
  pMStack_b8 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  lStack_c0 = lVar7;
  pMStack_b8 = obj_00;
  if (g_data_057ac7d2 == '\0') {
    uStack_d0 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_d0 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_d0 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_d0 = (code *)0x40f570c;
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar11 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar11 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar11 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_d0 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_d0 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_d0 = (code *)CONCAT44(iVar4,(undefined4)uStack_d0);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_d0 + 4);
    return;
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_02,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar7 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38),iVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f5360

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____getter_5_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  Il2CppObject *extraout_RAX_04;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEF10 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EE570 *obj_02;
  long lVar7;
  MethodInfo *__this_00;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo_24EEB40 *pMVar10;
  MethodInfo_24EEF10 *pMVar11;
  long lVar12;
  float value;
  UnityEngine_Vector3_o value_00;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  MethodInfo_24EEF10 *pMStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  MethodInfo *pMStack_88;
  MethodInfo_24EEB40 *pMStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  UnityEngine_Vector3_Fields UStack_58;
  MethodInfo *pMStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__get_height(__this,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,auStack_4);
    return pIVar5;
  }
  lVar7 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7cd == '\0') {
    uStack_28 = 0x40f53bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_28 = 0x40f53cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7cd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = 0x40f53ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = 0x40f53fc;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  __this_00 = method;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    ((Il2CppObject *)method,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((lVar7 != 0) &&
     (__this_00 = (MethodInfo *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_height
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38),value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 0x40f541d;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (__this_00 != (MethodInfo *)0x0) {
    pCVar6 = CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
                       ((CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)__this_00,method_00);
    return (Il2CppObject *)pCVar6;
  }
  pMStack_30 = (MethodInfo *)0x40f5431;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar7;
  pMStack_30 = method;
  if (g_data_057ac7ce == '\0') {
    pMStack_48 = (MethodInfo *)0x40f545f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pMStack_48 = (MethodInfo *)0x40f546b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pMStack_48 = (MethodInfo *)0x40f548a;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_48 = (MethodInfo *)0x40f549c;
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar8 = method_00;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (((__this_00 != (MethodInfo *)0x0) && (pIVar5 != (Il2CppObject *)0x0)) &&
     (pMVar8 = (MethodInfo *)0x0, (__this_00->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              ((UnityEngine_AI_NavMeshObstacle_o *)(__this_00->field7_0x38).rgctx_data,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar5 + 3),(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  pMStack_48 = (MethodInfo *)0x40f54cc;
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar8;
  pMStack_48 = __this_00;
  if (g_data_057ac7cf == '\0') {
    pMVar9 = (MethodInfo *)&TypeInfo_Vector3;
    pMStack_60 = (MethodInfo *)0x40f54ed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((pMVar8 != (MethodInfo *)0x0) &&
     (pMVar9 = (MethodInfo *)0x0, (pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_60 = (MethodInfo *)0x40f5509;
    UStack_58 = (UnityEngine_Vector3_Fields)
                UnityEngine_AI_NavMeshObstacle__get_center
                          ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar8->field7_0x38).rgctx_data,
                           (MethodInfo *)0x0);
    pMStack_60 = (MethodInfo *)0x40f5525;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&UStack_58);
    return pIVar5;
  }
  pMStack_60 = (MethodInfo *)
               CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
  ;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pMStack_68 = pMVar8;
  pMStack_60 = method_00;
  if (g_data_057ac7d0 == '\0') {
    uStack_78 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_78 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_78 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = 0x40f558c;
  obj_00 = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar10 = obj;
  value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)obj,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pMVar9 != (MethodInfo *)0x0) &&
     (pMVar10 = (MethodInfo_24EEB40 *)0x0, (pMVar9->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center
              ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar9->field7_0x38).rgctx_data,value_00,(MethodInfo *)0x0
              );
    return extraout_RAX_01;
  }
  uStack_78 = 0x40f55ad;
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar10 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar10->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_80 = (MethodInfo_24EEB40 *)0x40f55c6;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar10->rgctx_data,(MethodInfo *)0x0);
    uStack_78 = CONCAT17((char)bVar2,(undefined7)uStack_78);
    pMStack_80 = (MethodInfo_24EEB40 *)0x40f55df;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
    return pIVar5;
  }
  lVar7 = 0;
  pMStack_80 = (MethodInfo_24EEB40 *)0x40f55e6;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  pMStack_88 = pMVar9;
  pMStack_80 = obj;
  if (g_data_057ac7d1 == '\0') {
    uStack_98 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_98 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_98 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_98 = (code *)0x40f564c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar11 = obj_00;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar7 != 0) &&
     (pMVar11 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  uStack_98 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_98 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar11 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar11->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_a0 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar11->rgctx_data,(MethodInfo *)0x0);
    uStack_98 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_98);
    pMStack_a0 = (MethodInfo_24EEF10 *)0x40f569f;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_98 + 7);
    return pIVar5;
  }
  lVar12 = 0;
  pMStack_a0 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  lStack_a8 = lVar7;
  pMStack_a0 = obj_00;
  if (g_data_057ac7d2 == '\0') {
    uStack_b8 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_b8 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_b8 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_b8 = (code *)0x40f570c;
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar12 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar12 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar12 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  uStack_b8 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_b8 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_b8 = (code *)CONCAT44(iVar4,(undefined4)uStack_b8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_b8 + 4);
    return pIVar5;
  }
  lVar7 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_02,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar7 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar7 + 0x38),iVar4,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  pIVar5 = (Il2CppObject *)(*pcVar1)();
  return pIVar5;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Height>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f53a0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Height_g____setter_5_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *pUVar1;
  code *pcVar2;
  bool_conflict bVar3;
  uint uVar4;
  int32_t iVar5;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEF10 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EE570 *obj_02;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  long lVar10;
  MethodInfo_24EEF10 *pMVar11;
  long lVar12;
  float value;
  UnityEngine_Vector3_o value_00;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  MethodInfo_24EEF10 *pMStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  MethodInfo *pMStack_80;
  MethodInfo_24EEB40 *pMStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  MethodInfo *pMStack_60;
  MethodInfo *pMStack_58;
  UnityEngine_Vector3_Fields UStack_50;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7cd == '\0') {
    uStack_20 = 0x40f53bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_ConvertTo_Single);
    uStack_20 = 0x40f53cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7cd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f53ea;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f53fc;
  method_00 = MethodInfo_Single_ConvertTo_Single;
  __this = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)__v;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_(__v,(MethodInfo_24EED20 *)MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, __this = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0,
     pUVar1 != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_height(pUVar1,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40f541d;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (__this != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale(__this,method_00);
    return;
  }
  pIStack_28 = (Il2CppObject *)0x40f5431;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac7ce == '\0') {
    pCStack_40 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f545f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pCStack_40 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f546b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_40 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f548a;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_40 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f549c;
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar7 = method_00;
  pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method_00,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (((__this != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) && (pIVar6 != (Il2CppObject *)0x0))
     && (pUVar1 = (__this->fields).Value, pMVar7 = (MethodInfo *)0x0,
        pUVar1 != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              (pUVar1,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar6 + 3),(MethodInfo *)0x0);
    return;
  }
  pCStack_40 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f54cc;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  pCStack_40 = __this;
  if (g_data_057ac7cf == '\0') {
    pMVar8 = (MethodInfo *)&TypeInfo_Vector3;
    pMStack_58 = (MethodInfo *)0x40f54ed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((pMVar7 != (MethodInfo *)0x0) &&
     (pMVar8 = (MethodInfo *)0x0, (pMVar7->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_58 = (MethodInfo *)0x40f5509;
    UStack_50 = (UnityEngine_Vector3_Fields)
                UnityEngine_AI_NavMeshObstacle__get_center
                          ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar7->field7_0x38).rgctx_data,
                           (MethodInfo *)0x0);
    pMStack_58 = (MethodInfo *)0x40f5525;
    il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&UStack_50);
    return;
  }
  pMStack_58 = (MethodInfo *)
               CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
  ;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  pMStack_60 = pMVar7;
  pMStack_58 = method_00;
  if (g_data_057ac7d0 == '\0') {
    uStack_70 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_70 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_70 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = 0x40f558c;
  obj_00 = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar9 = obj;
  value_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)obj,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pMVar8 != (MethodInfo *)0x0) &&
     (pMVar9 = (MethodInfo_24EEB40 *)0x0, (pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center
              ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar8->field7_0x38).rgctx_data,value_00,(MethodInfo *)0x0
              );
    return;
  }
  uStack_70 = 0x40f55ad;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_78 = (MethodInfo_24EEB40 *)0x40f55c6;
    bVar3 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data,(MethodInfo *)0x0);
    uStack_70 = CONCAT17((char)bVar3,(undefined7)uStack_70);
    pMStack_78 = (MethodInfo_24EEB40 *)0x40f55df;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
    return;
  }
  lVar10 = 0;
  pMStack_78 = (MethodInfo_24EEB40 *)0x40f55e6;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  pMStack_80 = pMVar8;
  pMStack_78 = obj;
  if (g_data_057ac7d1 == '\0') {
    uStack_90 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_90 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_90 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_90 = (code *)0x40f564c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar11 = obj_00;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar10 != 0) &&
     (pMVar11 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),uVar4 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_90 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar11 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar11->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_98 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar3 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar11->rgctx_data,(MethodInfo *)0x0);
    uStack_90 = (code *)CONCAT17((char)bVar3,(undefined7)uStack_90);
    pMStack_98 = (MethodInfo_24EEF10 *)0x40f569f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_90 + 7);
    return;
  }
  lVar12 = 0;
  pMStack_98 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  lStack_a0 = lVar10;
  pMStack_98 = obj_00;
  if (g_data_057ac7d2 == '\0') {
    uStack_b0 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_b0 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_b0 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_b0 = (code *)0x40f570c;
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar12 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar12 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar12 + 0x38),uVar4 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_b0 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_b0 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar5 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_b0 = (code *)CONCAT44(iVar5,(undefined4)uStack_b0);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_b0 + 4);
    return;
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_02,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar10 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),iVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f5420

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____getter_6_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  Il2CppObject *extraout_RAX_03;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEF10 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EE570 *obj_02;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  MethodInfo_24EEB40 *pMVar9;
  long lVar10;
  MethodInfo_24EEF10 *pMVar11;
  long lVar12;
  UnityEngine_Vector3_o value;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  MethodInfo_24EEF10 *pMStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  MethodInfo *pMStack_68;
  MethodInfo_24EEB40 *pMStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  MethodInfo *pMStack_48;
  MethodInfo *pMStack_40;
  UnityEngine_Vector3_Fields UStack_38;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_28;
  undefined8 uStack_20;
  
  if (__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) {
    pCVar5 = CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale(__i,method);
    return (Il2CppObject *)pCVar5;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7ce == '\0') {
    pCStack_28 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f545f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pCStack_28 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f546b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_28 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f548a;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_28 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f549c;
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pMVar7 = method;
  pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_((Il2CppObject *)method,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) && (pIVar6 != (Il2CppObject *)0x0)) &&
     (__this = (__i->fields).Value, pMVar7 = (MethodInfo *)0x0,
     __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar6 + 3),(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pCStack_28 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f54cc;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar7;
  pCStack_28 = __i;
  if (g_data_057ac7cf == '\0') {
    pMVar8 = (MethodInfo *)&TypeInfo_Vector3;
    pMStack_40 = (MethodInfo *)0x40f54ed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((pMVar7 != (MethodInfo *)0x0) &&
     (pMVar8 = (MethodInfo *)0x0, (pMVar7->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_40 = (MethodInfo *)0x40f5509;
    UStack_38 = (UnityEngine_Vector3_Fields)
                UnityEngine_AI_NavMeshObstacle__get_center
                          ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar7->field7_0x38).rgctx_data,
                           (MethodInfo *)0x0);
    pMStack_40 = (MethodInfo *)0x40f5525;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&UStack_38);
    return pIVar6;
  }
  pMStack_40 = (MethodInfo *)
               CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
  ;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pMStack_48 = pMVar7;
  pMStack_40 = method;
  if (g_data_057ac7d0 == '\0') {
    uStack_58 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_58 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_58 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = 0x40f558c;
  obj_00 = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar9 = obj;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)obj,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pMVar8 != (MethodInfo *)0x0) &&
     (pMVar9 = (MethodInfo_24EEB40 *)0x0, (pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center
              ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar8->field7_0x38).rgctx_data,value,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_58 = 0x40f55ad;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_60 = (MethodInfo_24EEB40 *)0x40f55c6;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data,(MethodInfo *)0x0);
    uStack_58 = CONCAT17((char)bVar2,(undefined7)uStack_58);
    pMStack_60 = (MethodInfo_24EEB40 *)0x40f55df;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_58 + 7);
    return pIVar6;
  }
  lVar10 = 0;
  pMStack_60 = (MethodInfo_24EEB40 *)0x40f55e6;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  pMStack_68 = pMVar8;
  pMStack_60 = obj;
  if (g_data_057ac7d1 == '\0') {
    uStack_78 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_78 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_78 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = (code *)0x40f564c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar11 = obj_00;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar10 != 0) &&
     (pMVar11 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_78 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_78 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar11 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar11->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_80 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar11->rgctx_data,(MethodInfo *)0x0);
    uStack_78 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_78);
    pMStack_80 = (MethodInfo_24EEF10 *)0x40f569f;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_78 + 7);
    return pIVar6;
  }
  lVar12 = 0;
  pMStack_80 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  lStack_88 = lVar10;
  pMStack_80 = obj_00;
  if (g_data_057ac7d2 == '\0') {
    uStack_98 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_98 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_98 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_98 = (code *)0x40f570c;
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar12 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar12 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar12 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  uStack_98 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_98 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_98 = (code *)CONCAT44(iVar4,(undefined4)uStack_98);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_98 + 4);
    return pIVar6;
  }
  lVar10 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_02,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar10 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),iVar4,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  pIVar6 = (Il2CppObject *)(*pcVar1)();
  return pIVar6;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Scale>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f5440

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Scale_g____setter_6_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  MethodInfo_24EEB40 *obj;
  MethodInfo_24EEF10 *obj_00;
  MethodInfo_24EE570 *obj_01;
  MethodInfo_24EE570 *obj_02;
  Il2CppObject *pIVar6;
  MethodInfo_24EEB40 *pMVar7;
  long lVar8;
  MethodInfo_24EEF10 *pMVar9;
  long lVar10;
  UnityEngine_Vector3_o value;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  MethodInfo_24EEF10 *pMStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  Il2CppObject *pIStack_60;
  MethodInfo_24EEB40 *pMStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  Il2CppObject *pIStack_40;
  Il2CppObject *pIStack_38;
  UnityEngine_Vector3_Fields UStack_30;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_20;
  
  if (g_data_057ac7ce == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f545f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
    pCStack_20 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f546b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7ce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f548a;
    il2cpp_runtime_helper_02337ed0();
  }
  pCStack_20 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f549c;
  obj = MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu;
  pIVar6 = __v;
  pIVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicVector3Bu);
  if (((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) && (pIVar5 != (Il2CppObject *)0x0)) &&
     (__this = (__i->fields).Value, pIVar6 = (Il2CppObject *)0x0,
     __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_size
              (__this,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar5 + 3),(MethodInfo *)0x0);
    return;
  }
  pCStack_20 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x40f54cc;
  il2cpp_runtime_helper_022b2c90();
  pIVar5 = pIVar6;
  pCStack_20 = __i;
  if (g_data_057ac7cf == '\0') {
    pIVar5 = (Il2CppObject *)&TypeInfo_Vector3;
    pIStack_38 = (Il2CppObject *)0x40f54ed;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar5 = (Il2CppObject *)0x0, pIVar6[3].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pIStack_38 = (Il2CppObject *)0x40f5509;
    UStack_30 = (UnityEngine_Vector3_Fields)
                UnityEngine_AI_NavMeshObstacle__get_center(pIVar6[3].monitor,(MethodInfo *)0x0);
    pIStack_38 = (Il2CppObject *)0x40f5525;
    il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&UStack_30);
    return;
  }
  pIStack_38 = (Il2CppObject *)
               CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
  ;
  uStack_48 = il2cpp_runtime_helper_022b2c90();
  pIStack_40 = pIVar6;
  pIStack_38 = __v;
  if (g_data_057ac7d0 == '\0') {
    uStack_50 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_50 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_50 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_50 = 0x40f558c;
  obj_00 = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar7 = obj;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)obj,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (pMVar7 = (MethodInfo_24EEB40 *)0x0, pIVar5[3].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center(pIVar5[3].monitor,value,(MethodInfo *)0x0);
    return;
  }
  uStack_50 = 0x40f55ad;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar7 != (MethodInfo_24EEB40 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar7->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_58 = (MethodInfo_24EEB40 *)0x40f55c6;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar7->rgctx_data,(MethodInfo *)0x0);
    uStack_50 = CONCAT17((char)bVar2,(undefined7)uStack_50);
    pMStack_58 = (MethodInfo_24EEB40 *)0x40f55df;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_50 + 7);
    return;
  }
  lVar8 = 0;
  pMStack_58 = (MethodInfo_24EEB40 *)0x40f55e6;
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  pIStack_60 = pIVar5;
  pMStack_58 = obj;
  if (g_data_057ac7d1 == '\0') {
    uStack_70 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_70 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_70 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_70 = (code *)0x40f564c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar9 = obj_00;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar8 != 0) &&
     (pMVar9 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_70 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_70 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar9 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_78 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar9->rgctx_data,(MethodInfo *)0x0);
    uStack_70 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_70);
    pMStack_78 = (MethodInfo_24EEF10 *)0x40f569f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_70 + 7);
    return;
  }
  lVar10 = 0;
  pMStack_78 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  lStack_80 = lVar8;
  pMStack_78 = obj_00;
  if (g_data_057ac7d2 == '\0') {
    uStack_90 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_90 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_90 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_90 = (code *)0x40f570c;
  obj_02 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_01,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar10 != 0) &&
     (obj_01 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar10 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_90 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_90 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_01 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_01->rgctx_data,(MethodInfo *)0x0);
    uStack_90 = (code *)CONCAT44(iVar4,(undefined4)uStack_90);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_90 + 4);
    return;
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_02,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar8 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),iVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f54d0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_7_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *pUVar1;
  code *pcVar2;
  bool_conflict bVar3;
  uint uVar4;
  int32_t iVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  Il2CppObject *extraout_RAX_02;
  MethodInfo_24EEF10 *obj;
  MethodInfo_24EE570 *obj_00;
  MethodInfo_24EE570 *obj_01;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCVar7;
  MethodInfo *pMVar8;
  long lVar9;
  MethodInfo_24EEF10 *pMVar10;
  long lVar11;
  UnityEngine_Vector3_o value;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  MethodInfo_24EEF10 *pMStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_48;
  MethodInfo *pMStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_28;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar7 = __i;
  if (g_data_057ac7cf == '\0') {
    pCVar7 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac7cf = '\x01';
  }
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pCVar7 = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0,
     pUVar1 != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    local_18 = (UnityEngine_Vector3_Fields)
               UnityEngine_AI_NavMeshObstacle__get_center(pUVar1,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_18);
    return pIVar6;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __i;
  if (g_data_057ac7d0 == '\0') {
    uStack_38 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_38 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_38 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_38 = 0x40f558c;
  obj = MethodInfo_Vector3_ConvertTo_Vector3;
  pMVar8 = method;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_((Il2CppObject *)method,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((pCVar7 != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (pUVar1 = (pCVar7->fields).Value, pMVar8 = (MethodInfo *)0x0,
     pUVar1 != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar1,value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_38 = 0x40f55ad;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  if ((pMVar8 != (MethodInfo *)0x0) && ((pMVar8->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_40 = (MethodInfo *)0x40f55c6;
    bVar3 = UnityEngine_AI_NavMeshObstacle__get_carving
                      ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar8->field7_0x38).rgctx_data,(MethodInfo *)0x0)
    ;
    uStack_38 = CONCAT17((char)bVar3,(undefined7)uStack_38);
    pMStack_40 = (MethodInfo *)0x40f55df;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_38 + 7);
    return pIVar6;
  }
  lVar9 = 0;
  pMStack_40 = (MethodInfo *)0x40f55e6;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pCStack_48 = pCVar7;
  pMStack_40 = method;
  if (g_data_057ac7d1 == '\0') {
    uStack_58 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_58 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_58 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58 = (code *)0x40f564c;
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar10 = obj;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar9 != 0) &&
     (pMVar10 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar9 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar9 + 0x38),uVar4 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_58 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_58 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar10 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar10->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_60 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar3 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar10->rgctx_data,(MethodInfo *)0x0);
    uStack_58 = (code *)CONCAT17((char)bVar3,(undefined7)uStack_58);
    pMStack_60 = (MethodInfo_24EEF10 *)0x40f569f;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_58 + 7);
    return pIVar6;
  }
  lVar11 = 0;
  pMStack_60 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  lStack_68 = lVar9;
  pMStack_60 = obj;
  if (g_data_057ac7d2 == '\0') {
    uStack_78 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_78 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_78 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_78 = (code *)0x40f570c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar11 != 0) &&
     (obj_00 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar11 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar11 + 0x38),uVar4 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  uStack_78 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_78 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_00->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar5 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_00->rgctx_data,(MethodInfo *)0x0);
    uStack_78 = (code *)CONCAT44(iVar5,(undefined4)uStack_78);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_78 + 4);
    return pIVar6;
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_01,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar9 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar9 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar9 + 0x38),iVar5,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar2 = (code *)swi(3);
  pIVar6 = (Il2CppObject *)(*pcVar2)();
  return pIVar6;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f5530

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Center_g____setter_7_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  MethodInfo_24EEF10 *obj;
  MethodInfo_24EE570 *obj_00;
  MethodInfo_24EE570 *obj_01;
  Il2CppObject *pIVar5;
  long lVar6;
  MethodInfo_24EEF10 *pMVar7;
  long lVar8;
  UnityEngine_Vector3_o value;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  MethodInfo_24EEF10 *pMStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7d0 == '\0') {
    uStack_20 = 0x40f554f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_ConvertTo_Vector3);
    uStack_20 = 0x40f555b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = 0x40f557a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = 0x40f558c;
  obj = MethodInfo_Vector3_ConvertTo_Vector3;
  pIVar5 = __v;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_Vector3_(__v,MethodInfo_Vector3_ConvertTo_Vector3);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar5 = (Il2CppObject *)0x0,
     __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_center(__this,value,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 0x40f55ad;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5[3].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40f55c6;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving(pIVar5[3].monitor,(MethodInfo *)0x0);
    uStack_20 = CONCAT17((char)bVar2,(undefined7)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40f55df;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  lVar6 = 0;
  pIStack_28 = (Il2CppObject *)0x40f55e6;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac7d1 == '\0') {
    uStack_40 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_40 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = (code *)0x40f564c;
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar7 = obj;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) &&
     (pMVar7 = (MethodInfo_24EEF10 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_40 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar7 != (MethodInfo_24EEF10 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)pMVar7->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pMStack_48 = (MethodInfo_24EEF10 *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)pMVar7->rgctx_data,(MethodInfo *)0x0);
    uStack_40 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_40);
    pMStack_48 = (MethodInfo_24EEF10 *)0x40f569f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_40 + 7);
    return;
  }
  lVar8 = 0;
  pMStack_48 = (MethodInfo_24EEF10 *)0x40f56a6;
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  lStack_50 = lVar6;
  pMStack_48 = obj;
  if (g_data_057ac7d2 == '\0') {
    uStack_60 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_60 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_60 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_60 = (code *)0x40f570c;
  obj_01 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar8 != 0) &&
     (obj_00 = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_60 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_60 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj_00 != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj_00->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj_00->rgctx_data,(MethodInfo *)0x0);
    uStack_60 = (code *)CONCAT44(iVar4,(undefined4)uStack_60);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_60 + 4);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_01,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar6 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),iVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f55b0

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____getter_8_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  Il2CppObject *extraout_RAX_01;
  MethodInfo_24EE570 *obj;
  MethodInfo_24EE570 *obj_00;
  long lVar6;
  MethodInfo *pMVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  MethodInfo *pMStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carving(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar5;
  }
  lVar6 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d1 == '\0') {
    uStack_28 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = (code *)0x40f564c;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  pMVar7 = method;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) &&
     (pMVar7 = (MethodInfo *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pMVar7 != (MethodInfo *)0x0) && ((pMVar7->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    pMStack_30 = (MethodInfo *)0x40f5686;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary
                      ((UnityEngine_AI_NavMeshObstacle_o *)(pMVar7->field7_0x38).rgctx_data,(MethodInfo *)0x0)
    ;
    uStack_28 = (code *)CONCAT17((char)bVar2,(undefined7)uStack_28);
    pMStack_30 = (MethodInfo *)0x40f569f;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_28 + 7);
    return pIVar5;
  }
  lVar8 = 0;
  pMStack_30 = (MethodInfo *)0x40f56a6;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = lVar6;
  pMStack_30 = method;
  if (g_data_057ac7d2 == '\0') {
    uStack_48 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_48 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_48 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_48 = (code *)0x40f570c;
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar8 != 0) &&
     (obj = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar8 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_48 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_48 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_48 = (code *)CONCAT44(iVar4,(undefined4)uStack_48);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_48 + 4);
    return pIVar5;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar6 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),iVar4,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  pIVar5 = (Il2CppObject *)(*pcVar1)();
  return pIVar5;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Carving>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f55f0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Carving_g____setter_8_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  uint uVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  MethodInfo_24EE570 *obj;
  MethodInfo_24EE570 *obj_00;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_30;
  Il2CppObject *pIStack_28;
  undefined8 uStack_20;
  
  if (g_data_057ac7d1 == '\0') {
    uStack_20 = (code *)0x40f560f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = (code *)0x40f561b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = (code *)0x40f563a;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = (code *)0x40f564c;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  pIVar5 = __v;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, pIVar5 = (Il2CppObject *)0x0,
     __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carving(__this,uVar2 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
  ;
  uStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5[3].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    pIStack_28 = (Il2CppObject *)0x40f5686;
    bVar3 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pIVar5[3].monitor,(MethodInfo *)0x0);
    uStack_20 = (code *)CONCAT17((char)bVar3,(undefined7)uStack_20);
    pIStack_28 = (Il2CppObject *)0x40f569f;
    il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_20 + 7);
    return;
  }
  lVar6 = 0;
  pIStack_28 = (Il2CppObject *)0x40f56a6;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  pCStack_30 = __i;
  pIStack_28 = __v;
  if (g_data_057ac7d2 == '\0') {
    uStack_40 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_40 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_40 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = (code *)0x40f570c;
  obj_00 = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)obj,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) &&
     (obj = (MethodInfo_24EE570 *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),uVar2 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_40 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_40 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((obj != (MethodInfo_24EE570 *)0x0) &&
     ((UnityEngine_AI_NavMeshObstacle_o *)obj->rgctx_data != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)obj->rgctx_data,(MethodInfo *)0x0);
    uStack_40 = (code *)CONCAT44(iVar4,(undefined4)uStack_40);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_40 + 4);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj_00,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar6 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),iVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f5670

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____getter_9_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *extraout_RAX_00;
  MethodInfo_24EE570 *obj;
  long lVar6;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_8;
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    uStack_8 = in_RAX;
    bVar2 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(__this,(MethodInfo *)0x0);
    uStack_8 = CONCAT17((char)bVar2,(undefined7)uStack_8);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,(long)&uStack_8 + 7);
    return pIVar5;
  }
  lVar6 = 0;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d2 == '\0') {
    uStack_28 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_28 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_28 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_28 = (code *)0x40f570c;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_((Il2CppObject *)method,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((lVar6 != 0) &&
     (method = (MethodInfo *)0x0,
     *(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),uVar3 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uStack_28 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_28 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((method != (MethodInfo *)0x0) && ((method->field7_0x38).rgctx_data != (Il2CppRGCTXData *)0x0)) {
    iVar4 = UnityEngine_AI_NavMeshObstacle__get_shape
                      ((UnityEngine_AI_NavMeshObstacle_o *)(method->field7_0x38).rgctx_data,(MethodInfo *)0x0)
    ;
    uStack_28 = (code *)CONCAT44(iVar4,(undefined4)uStack_28);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_28 + 4);
    return pIVar5;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar6 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar6 + 0x38),iVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  pIVar5 = (Il2CppObject *)(*pcVar1)();
  return pIVar5;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__CarveOnlyStationary>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f56b0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__CarveOnlyStationary_g____setter_9_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  uint uVar2;
  int32_t iVar3;
  MethodInfo_24EE570 *obj;
  long lVar4;
  undefined8 uStack_20;
  
  if (g_data_057ac7d2 == '\0') {
    uStack_20 = (code *)0x40f56cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ConvertTo_Boolean);
    uStack_20 = (code *)0x40f56db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    uStack_20 = (code *)0x40f56fa;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_20 = (code *)0x40f570c;
  obj = MethodInfo_Boolean_ConvertTo_Boolean;
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __v = (Il2CppObject *)0x0,
     __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(__this,uVar2 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = 
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0;
  uStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
  if ((__v != (Il2CppObject *)0x0) && (__v[3].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    iVar3 = UnityEngine_AI_NavMeshObstacle__get_shape(__v[3].monitor,(MethodInfo *)0x0);
    uStack_20 = (code *)CONCAT44(iVar3,(undefined4)uStack_20);
    il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_20 + 4);
    return;
  }
  lVar4 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)obj,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar4 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar4 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar4 + 0x38),iVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, const MethodInfo* method);
// 0x40f5730

Il2CppObject *
CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____getter_10_0
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  int32_t value;
  Il2CppObject *pIVar2;
  Il2CppObject *extraout_RAX;
  long lVar3;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__get_shape(__this,(MethodInfo *)0x0);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_4);
    return pIVar2;
  }
  lVar3 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)method,MethodInfo_Int32_ConvertTo_Int32);
  if ((lVar3 != 0) &&
     (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar3 + 0x38) != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape
              (*(UnityEngine_AI_NavMeshObstacle_o **)(lVar3 + 0x38),value,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  pIVar2 = (Il2CppObject *)(*pcVar1)();
  return pIVar2;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin.Bindings$$<__CreatePropertyBinding__Shape>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1 (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x40f5770

void CustomLogic_CustomLogicNavmeshObstacleBuiltin_Bindings_____CreatePropertyBinding__Shape_g____setter_10_1
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_AI_NavMeshObstacle_o *__this;
  code *pcVar1;
  int32_t value;
  
  if (g_data_057ac7d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057ac7d3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0) &&
     (__this = (__i->fields).Value, __this != (UnityEngine_AI_NavMeshObstacle_o *)0x0)) {
    UnityEngine_AI_NavMeshObstacle__set_shape(__this,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3bc0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,(UnityEngine_Component_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* owner, const MethodInfo* method);
// 0x40f3bd0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin___ctor_3ff3bd0
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *owner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Component_c *pUVar2;
  UnityEngine_Component_o *pUVar3;
  
  if (g_data_057ac7bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NavMeshObstacle_GetOrAddComponent_NavMeshObstacle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NavMeshObstacle);
    g_data_057ac7bc = '\x01';
  }
  if ((owner == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) ||
     (pMVar1 = (owner->fields).Value, pMVar1 == (Map_MapObject_o *)0x0)) {
label_040f3ca9:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  pUVar3 = (UnityEngine_Component_o *)
           CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
                     ((pMVar1->fields).GameObject,MethodInfo_NavMeshObstacle_GetOrAddComponent_NavMeshObstacle);
  CustomLogic_BuiltinComponentInstance___ctor
            ((CustomLogic_BuiltinComponentInstance_o *)__this,pUVar3,(MethodInfo *)0x0);
  (__this->fields).OwnerMapObject = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OwnerMapObject,owner);
  pMVar1 = (owner->fields).Value;
  if (pMVar1 == (Map_MapObject_o *)0x0) goto label_040f3ca9;
  (__this->fields).Owner = (pMVar1->fields).GameObject;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Owner);
  pUVar2 = TypeInfo_NavMeshObstacle;
  pUVar3 = (__this->fields).Component;
  if (pUVar3 != (UnityEngine_Component_o *)0x0) {
    if ((pUVar3->klass == TypeInfo_NavMeshObstacle) &&
       ((__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)pUVar3, pUVar3->klass == pUVar2))
    goto label_040f3c96;
    il2cpp_runtime_helper_022b2fd0(pUVar3,pUVar2);
  }
  (__this->fields).Value = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
label_040f3c96:
  il2cpp_runtime_helper_022b4080(&(__this->fields).Value);
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeBox
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox (const MethodInfo* method);
// 0x40f3cb0

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeBox(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ShapeCapsule
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule (const MethodInfo* method);
// 0x40f3cc0

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ShapeCapsule(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Radius
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3cd0

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Radius
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UnityEngine_AI_NavMeshObstacle_o *pUVar6;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  uint uVar7;
  uint uVar8;
  UnityEngine_AI_NavMeshObstacle_o *pUVar9;
  UnityEngine_AI_NavMeshObstacle_o *pUVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float fVar12;
  undefined8 extraout_XMM1_Qa;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar26;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o UStack_100;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  UnityEngine_AI_NavMeshObstacle_o *pUStack_b0;
  float extraout_XMM0_Da_09;
  
  pUVar9 = (__this->fields).Value;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar11 = UnityEngine_AI_NavMeshObstacle__get_radius(pUVar9,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_radius(pUVar9,fVar11,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar11 = UnityEngine_AI_NavMeshObstacle__get_height(pUVar9,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_height(pUVar9,fVar11,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7bd = '\x01';
  }
  pUVar10 = pUVar9[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32 = UnityEngine_AI_NavMeshObstacle__get_size(pUVar10,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    __this_01[1].klass = UVar32.fields._0_8_;
    *(float *)&__this_01[1].monitor = UVar32.fields.z;
    return UVar32.fields.z;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    pUVar6 = pUVar10 + 2;
    pUVar10 = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
    if (pUVar6->monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      UnityEngine_AI_NavMeshObstacle__set_size
                (pUVar6->monitor,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method->parameters,
                 (MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar8 = (uint)method;
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32 = UnityEngine_AI_NavMeshObstacle__get_center(pUVar10,(MethodInfo *)0x0);
    return UVar32.fields.x;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32.fields.z = (float)extraout_XMM1_Qa;
    UVar32.fields.x = (float)(int)uVar2;
    UVar32.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar10,UVar32,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar10,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar10,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar10,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar10,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar10,(MethodInfo *)0x0);
    return extraout_XMM0_Da_07;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar10,uVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da_08;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar10[2].fields.m_CachedPtr;
  pUStack_b0 = pUVar9;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_100,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar10[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar19 = 0.0;
        fVar15 = 0.0;
        auVar23._8_8_ = 0;
        auVar23._0_4_ = UStack_100.fields.m_Extents.fields.x;
        auVar23._4_4_ = UStack_100.fields.m_Extents.fields.y;
        uVar8 = *(uint *)(lVar1 + 0x18);
        fVar11 = UStack_100.fields.m_Center.fields.z;
        fVar12 = UStack_100.fields.m_Extents.fields.z;
        fVar21 = UStack_100.fields.m_Center.fields.x;
        fVar18 = UStack_100.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar14._8_8_ = 0;
          auVar14._0_4_ = UStack_100.fields.m_Extents.fields.x;
          auVar14._4_4_ = UStack_100.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar8 <= uVar7) goto label_040f4193;
            auStack_d8._0_4_ = fVar11;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_e8 = auVar23;
            fStack_c8 = fVar21;
            fStack_c4 = fVar18;
            fStack_c0 = fVar19;
            fStack_bc = fVar15;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_100,__this_00,(MethodInfo *)0x0);
            fVar11 = UStack_100.fields.m_Center.fields.x - UStack_100.fields.m_Extents.fields.x;
            fVar18 = UStack_100.fields.m_Center.fields.y - UStack_100.fields.m_Extents.fields.y;
            fVar19 = UStack_100.fields.m_Center.fields.z - UStack_100.fields.m_Extents.fields.z;
            auVar22._0_4_ = fStack_c8 - (float)auStack_e8._0_4_;
            auVar22._4_4_ = fStack_c4 - (float)auStack_e8._4_4_;
            auVar22._8_4_ = fStack_c0 - fStack_e0;
            auVar22._12_4_ = fStack_bc - fStack_dc;
            auVar25._4_4_ = fVar18;
            auVar25._0_4_ = fVar11;
            auVar25._8_8_ = 0;
            auVar23 = minps(auVar22,auVar25);
            fVar21 = (float)auStack_d8._0_4_ - fVar12;
            if (fVar19 <= (float)auStack_d8._0_4_ - fVar12) {
              fVar21 = fVar19;
            }
            auVar13._0_4_ = (float)auStack_e8._0_4_ + fStack_c8;
            auVar13._4_4_ = (float)auStack_e8._4_4_ + fStack_c4;
            auVar13._8_4_ = fStack_e0 + fStack_c0;
            auVar13._12_4_ = fStack_dc + fStack_bc;
            auVar3._4_4_ = fVar18;
            auVar3._0_4_ = fVar11;
            auVar3._8_8_ = 0;
            auVar14 = maxps(auVar13,auVar3);
            fVar11 = (float)auStack_d8._0_4_ + fVar12;
            if ((float)auStack_d8._0_4_ + fVar12 <= fVar19) {
              fVar11 = fVar19;
            }
            fVar18 = (auVar14._0_4_ - auVar23._0_4_) * 0.5;
            fVar19 = (auVar14._4_4_ - auVar23._4_4_) * 0.5;
            fVar15 = (auVar14._8_4_ - auVar23._8_4_) * 0.0;
            fVar16 = (auVar14._12_4_ - auVar23._12_4_) * 0.0;
            fVar12 = (fVar11 - fVar21) * 0.5;
            fVar20 = auVar23._0_4_ + fVar18;
            fVar26 = auVar23._4_4_ + fVar19;
            fVar27 = auVar23._8_4_ + fVar15;
            fVar28 = auVar23._12_4_ + fVar16;
            fVar30 = UStack_100.fields.m_Center.fields.x + UStack_100.fields.m_Extents.fields.x;
            fVar31 = UStack_100.fields.m_Center.fields.y + UStack_100.fields.m_Extents.fields.y;
            fVar29 = UStack_100.fields.m_Center.fields.z + UStack_100.fields.m_Extents.fields.z;
            auVar17._0_4_ = fVar20 - fVar18;
            auVar17._4_4_ = fVar26 - fVar19;
            auVar17._8_4_ = fVar27 - fVar15;
            auVar17._12_4_ = fVar28 - fVar16;
            fVar11 = (fVar21 + fVar12) - fVar12;
            auVar4._4_4_ = fVar31;
            auVar4._0_4_ = fVar30;
            auVar4._8_8_ = 0;
            auVar23 = minps(auVar17,auVar4);
            if (fVar29 <= fVar11) {
              fVar11 = fVar29;
            }
            auVar24._0_4_ = fVar20 + fVar18;
            auVar24._4_4_ = fVar26 + fVar19;
            auVar24._8_4_ = fVar27 + fVar15;
            auVar24._12_4_ = fVar28 + fVar16;
            fVar12 = fVar21 + fVar12 + fVar12;
            auVar5._4_4_ = fVar31;
            auVar5._0_4_ = fVar30;
            auVar5._8_8_ = 0;
            auVar25 = maxps(auVar24,auVar5);
            if (fVar12 <= fVar29) {
              fVar12 = fVar29;
            }
            fVar21 = (auVar25._0_4_ - auVar23._0_4_) * 0.5;
            fVar18 = (auVar25._4_4_ - auVar23._4_4_) * 0.5;
            auVar14._0_8_ = CONCAT44(fVar18,fVar21);
            auVar14._8_4_ = (auVar25._8_4_ - auVar23._8_4_) * 0.0;
            auVar14._12_4_ = (auVar25._12_4_ - auVar23._12_4_) * 0.0;
            fVar12 = (fVar12 - fVar11) * 0.5;
            fVar21 = auVar23._0_4_ + fVar21;
            fVar18 = auVar23._4_4_ + fVar18;
            fVar19 = auVar23._8_4_ + auVar14._8_4_;
            fVar15 = auVar23._12_4_ + auVar14._12_4_;
            fVar11 = fVar11 + fVar12;
            uVar7 = uVar7 + 1;
            uVar8 = *(uint *)(lVar1 + 0x18);
            auVar23._8_4_ = auVar14._8_4_;
            auVar23._0_8_ = auVar14._0_8_;
            auVar23._12_4_ = auVar14._12_4_;
          } while ((int)uVar7 < (int)uVar8);
        }
        auStack_e8._0_4_ = fVar12;
        auStack_d8 = auVar14;
        fStack_c8 = fVar21;
        fStack_c4 = fVar18;
        fStack_c0 = fVar19;
        fStack_bc = fVar15;
        if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar10[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_d8._0_4_ + (float)auStack_d8._0_4_;
            value.fields.y = (float)auStack_d8._4_4_ + (float)auStack_d8._4_4_;
            value.fields.z = (float)auStack_e8._0_4_ + (float)auStack_e8._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar10[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_c4;
              value_00.fields.x = fStack_c8;
              value_00.fields.z = fVar11;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar10[2].monitor,value_00,(MethodInfo *)0x0);
              return extraout_XMM0_Da_09;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  fVar11 = (float)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    fVar11 = (float)il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return fVar11;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Radius
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f3cf0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Radius
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UnityEngine_AI_NavMeshObstacle_o *pUVar6;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  uint uVar7;
  uint uVar8;
  UnityEngine_AI_NavMeshObstacle_o *pUVar9;
  UnityEngine_AI_NavMeshObstacle_o *pUVar10;
  float fVar11;
  float fVar12;
  undefined8 extraout_XMM1_Qa;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar26;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Bounds_o UStack_f8;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [16];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  UnityEngine_AI_NavMeshObstacle_o *pUStack_a8;
  
  pUVar9 = (__this->fields).Value;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_radius(pUVar9,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_height(pUVar9,(MethodInfo *)0x0);
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_height(pUVar9,fVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7bd = '\x01';
  }
  pUVar10 = pUVar9[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32 = UnityEngine_AI_NavMeshObstacle__get_size(pUVar10,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    __this_01[1].klass = UVar32.fields._0_8_;
    *(float *)&__this_01[1].monitor = UVar32.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    pUVar6 = pUVar10 + 2;
    pUVar10 = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
    if (pUVar6->monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      UnityEngine_AI_NavMeshObstacle__set_size
                (pUVar6->monitor,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method->parameters,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar8 = (uint)method;
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_center(pUVar10,(MethodInfo *)0x0);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32.fields.z = (float)extraout_XMM1_Qa;
    UVar32.fields.x = (float)(int)uVar2;
    UVar32.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar10,UVar32,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar10,uVar8 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar10,uVar8 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar10,uVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar10[2].fields.m_CachedPtr;
  pUStack_a8 = pUVar9;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_f8,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar10[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar19 = 0.0;
        fVar15 = 0.0;
        auVar23._8_8_ = 0;
        auVar23._0_4_ = UStack_f8.fields.m_Extents.fields.x;
        auVar23._4_4_ = UStack_f8.fields.m_Extents.fields.y;
        uVar8 = *(uint *)(lVar1 + 0x18);
        fVar11 = UStack_f8.fields.m_Center.fields.z;
        fVar12 = UStack_f8.fields.m_Extents.fields.z;
        fVar21 = UStack_f8.fields.m_Center.fields.x;
        fVar18 = UStack_f8.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar14._8_8_ = 0;
          auVar14._0_4_ = UStack_f8.fields.m_Extents.fields.x;
          auVar14._4_4_ = UStack_f8.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar8 <= uVar7) goto label_040f4193;
            auStack_d0._0_4_ = fVar11;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_e0 = auVar23;
            fStack_c0 = fVar21;
            fStack_bc = fVar18;
            fStack_b8 = fVar19;
            fStack_b4 = fVar15;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_f8,__this_00,(MethodInfo *)0x0);
            fVar11 = UStack_f8.fields.m_Center.fields.x - UStack_f8.fields.m_Extents.fields.x;
            fVar18 = UStack_f8.fields.m_Center.fields.y - UStack_f8.fields.m_Extents.fields.y;
            fVar19 = UStack_f8.fields.m_Center.fields.z - UStack_f8.fields.m_Extents.fields.z;
            auVar22._0_4_ = fStack_c0 - (float)auStack_e0._0_4_;
            auVar22._4_4_ = fStack_bc - (float)auStack_e0._4_4_;
            auVar22._8_4_ = fStack_b8 - fStack_d8;
            auVar22._12_4_ = fStack_b4 - fStack_d4;
            auVar25._4_4_ = fVar18;
            auVar25._0_4_ = fVar11;
            auVar25._8_8_ = 0;
            auVar23 = minps(auVar22,auVar25);
            fVar21 = (float)auStack_d0._0_4_ - fVar12;
            if (fVar19 <= (float)auStack_d0._0_4_ - fVar12) {
              fVar21 = fVar19;
            }
            auVar13._0_4_ = (float)auStack_e0._0_4_ + fStack_c0;
            auVar13._4_4_ = (float)auStack_e0._4_4_ + fStack_bc;
            auVar13._8_4_ = fStack_d8 + fStack_b8;
            auVar13._12_4_ = fStack_d4 + fStack_b4;
            auVar3._4_4_ = fVar18;
            auVar3._0_4_ = fVar11;
            auVar3._8_8_ = 0;
            auVar14 = maxps(auVar13,auVar3);
            fVar11 = (float)auStack_d0._0_4_ + fVar12;
            if ((float)auStack_d0._0_4_ + fVar12 <= fVar19) {
              fVar11 = fVar19;
            }
            fVar18 = (auVar14._0_4_ - auVar23._0_4_) * 0.5;
            fVar19 = (auVar14._4_4_ - auVar23._4_4_) * 0.5;
            fVar15 = (auVar14._8_4_ - auVar23._8_4_) * 0.0;
            fVar16 = (auVar14._12_4_ - auVar23._12_4_) * 0.0;
            fVar12 = (fVar11 - fVar21) * 0.5;
            fVar20 = auVar23._0_4_ + fVar18;
            fVar26 = auVar23._4_4_ + fVar19;
            fVar27 = auVar23._8_4_ + fVar15;
            fVar28 = auVar23._12_4_ + fVar16;
            fVar30 = UStack_f8.fields.m_Center.fields.x + UStack_f8.fields.m_Extents.fields.x;
            fVar31 = UStack_f8.fields.m_Center.fields.y + UStack_f8.fields.m_Extents.fields.y;
            fVar29 = UStack_f8.fields.m_Center.fields.z + UStack_f8.fields.m_Extents.fields.z;
            auVar17._0_4_ = fVar20 - fVar18;
            auVar17._4_4_ = fVar26 - fVar19;
            auVar17._8_4_ = fVar27 - fVar15;
            auVar17._12_4_ = fVar28 - fVar16;
            fVar11 = (fVar21 + fVar12) - fVar12;
            auVar4._4_4_ = fVar31;
            auVar4._0_4_ = fVar30;
            auVar4._8_8_ = 0;
            auVar23 = minps(auVar17,auVar4);
            if (fVar29 <= fVar11) {
              fVar11 = fVar29;
            }
            auVar24._0_4_ = fVar20 + fVar18;
            auVar24._4_4_ = fVar26 + fVar19;
            auVar24._8_4_ = fVar27 + fVar15;
            auVar24._12_4_ = fVar28 + fVar16;
            fVar12 = fVar21 + fVar12 + fVar12;
            auVar5._4_4_ = fVar31;
            auVar5._0_4_ = fVar30;
            auVar5._8_8_ = 0;
            auVar25 = maxps(auVar24,auVar5);
            if (fVar12 <= fVar29) {
              fVar12 = fVar29;
            }
            fVar21 = (auVar25._0_4_ - auVar23._0_4_) * 0.5;
            fVar18 = (auVar25._4_4_ - auVar23._4_4_) * 0.5;
            auVar14._0_8_ = CONCAT44(fVar18,fVar21);
            auVar14._8_4_ = (auVar25._8_4_ - auVar23._8_4_) * 0.0;
            auVar14._12_4_ = (auVar25._12_4_ - auVar23._12_4_) * 0.0;
            fVar12 = (fVar12 - fVar11) * 0.5;
            fVar21 = auVar23._0_4_ + fVar21;
            fVar18 = auVar23._4_4_ + fVar18;
            fVar19 = auVar23._8_4_ + auVar14._8_4_;
            fVar15 = auVar23._12_4_ + auVar14._12_4_;
            fVar11 = fVar11 + fVar12;
            uVar7 = uVar7 + 1;
            uVar8 = *(uint *)(lVar1 + 0x18);
            auVar23._8_4_ = auVar14._8_4_;
            auVar23._0_8_ = auVar14._0_8_;
            auVar23._12_4_ = auVar14._12_4_;
          } while ((int)uVar7 < (int)uVar8);
        }
        auStack_e0._0_4_ = fVar12;
        auStack_d0 = auVar14;
        fStack_c0 = fVar21;
        fStack_bc = fVar18;
        fStack_b8 = fVar19;
        fStack_b4 = fVar15;
        if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar10[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_d0._0_4_ + (float)auStack_d0._0_4_;
            value_00.fields.y = (float)auStack_d0._4_4_ + (float)auStack_d0._4_4_;
            value_00.fields.z = (float)auStack_e0._0_4_ + (float)auStack_e0._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar10[2].monitor,value_00,(MethodInfo *)0x0);
            if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_bc;
              value_01.fields.x = fStack_c0;
              value_01.fields.z = fVar11;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar10[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Height
// il2cpp: float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3d10

float CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Height
                (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UnityEngine_AI_NavMeshObstacle_o *pUVar6;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  uint uVar7;
  uint uVar8;
  UnityEngine_AI_NavMeshObstacle_o *pUVar9;
  UnityEngine_AI_NavMeshObstacle_o *pUVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float fVar12;
  undefined8 extraout_XMM1_Qa;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar26;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o UStack_f0;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  UnityEngine_AI_NavMeshObstacle_o *pUStack_a0;
  float extraout_XMM0_Da_08;
  
  pUVar9 = (__this->fields).Value;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar11 = UnityEngine_AI_NavMeshObstacle__get_height(pUVar9,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_height(pUVar9,fVar11,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7bd = '\x01';
  }
  pUVar10 = pUVar9[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32 = UnityEngine_AI_NavMeshObstacle__get_size(pUVar10,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    __this_01[1].klass = UVar32.fields._0_8_;
    *(float *)&__this_01[1].monitor = UVar32.fields.z;
    return UVar32.fields.z;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    pUVar6 = pUVar10 + 2;
    pUVar10 = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
    if (pUVar6->monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      UnityEngine_AI_NavMeshObstacle__set_size
                (pUVar6->monitor,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method->parameters,
                 (MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar8 = (uint)method;
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32 = UnityEngine_AI_NavMeshObstacle__get_center(pUVar10,(MethodInfo *)0x0);
    return UVar32.fields.x;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar32.fields.z = (float)extraout_XMM1_Qa;
    UVar32.fields.x = (float)(int)uVar2;
    UVar32.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar10,UVar32,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar10,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar10,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar10,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar10,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar10,(MethodInfo *)0x0);
    return extraout_XMM0_Da_06;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar10 = pUVar10[2].monitor;
  if (pUVar10 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar10,uVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da_07;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar10[2].fields.m_CachedPtr;
  pUStack_a0 = pUVar9;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_f0,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar10[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar19 = 0.0;
        fVar15 = 0.0;
        auVar23._8_8_ = 0;
        auVar23._0_4_ = UStack_f0.fields.m_Extents.fields.x;
        auVar23._4_4_ = UStack_f0.fields.m_Extents.fields.y;
        uVar8 = *(uint *)(lVar1 + 0x18);
        fVar11 = UStack_f0.fields.m_Center.fields.z;
        fVar12 = UStack_f0.fields.m_Extents.fields.z;
        fVar21 = UStack_f0.fields.m_Center.fields.x;
        fVar18 = UStack_f0.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar14._8_8_ = 0;
          auVar14._0_4_ = UStack_f0.fields.m_Extents.fields.x;
          auVar14._4_4_ = UStack_f0.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar8 <= uVar7) goto label_040f4193;
            auStack_c8._0_4_ = fVar11;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_d8 = auVar23;
            fStack_b8 = fVar21;
            fStack_b4 = fVar18;
            fStack_b0 = fVar19;
            fStack_ac = fVar15;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_f0,__this_00,(MethodInfo *)0x0);
            fVar11 = UStack_f0.fields.m_Center.fields.x - UStack_f0.fields.m_Extents.fields.x;
            fVar18 = UStack_f0.fields.m_Center.fields.y - UStack_f0.fields.m_Extents.fields.y;
            fVar19 = UStack_f0.fields.m_Center.fields.z - UStack_f0.fields.m_Extents.fields.z;
            auVar22._0_4_ = fStack_b8 - (float)auStack_d8._0_4_;
            auVar22._4_4_ = fStack_b4 - (float)auStack_d8._4_4_;
            auVar22._8_4_ = fStack_b0 - fStack_d0;
            auVar22._12_4_ = fStack_ac - fStack_cc;
            auVar25._4_4_ = fVar18;
            auVar25._0_4_ = fVar11;
            auVar25._8_8_ = 0;
            auVar23 = minps(auVar22,auVar25);
            fVar21 = (float)auStack_c8._0_4_ - fVar12;
            if (fVar19 <= (float)auStack_c8._0_4_ - fVar12) {
              fVar21 = fVar19;
            }
            auVar13._0_4_ = (float)auStack_d8._0_4_ + fStack_b8;
            auVar13._4_4_ = (float)auStack_d8._4_4_ + fStack_b4;
            auVar13._8_4_ = fStack_d0 + fStack_b0;
            auVar13._12_4_ = fStack_cc + fStack_ac;
            auVar3._4_4_ = fVar18;
            auVar3._0_4_ = fVar11;
            auVar3._8_8_ = 0;
            auVar14 = maxps(auVar13,auVar3);
            fVar11 = (float)auStack_c8._0_4_ + fVar12;
            if ((float)auStack_c8._0_4_ + fVar12 <= fVar19) {
              fVar11 = fVar19;
            }
            fVar18 = (auVar14._0_4_ - auVar23._0_4_) * 0.5;
            fVar19 = (auVar14._4_4_ - auVar23._4_4_) * 0.5;
            fVar15 = (auVar14._8_4_ - auVar23._8_4_) * 0.0;
            fVar16 = (auVar14._12_4_ - auVar23._12_4_) * 0.0;
            fVar12 = (fVar11 - fVar21) * 0.5;
            fVar20 = auVar23._0_4_ + fVar18;
            fVar26 = auVar23._4_4_ + fVar19;
            fVar27 = auVar23._8_4_ + fVar15;
            fVar28 = auVar23._12_4_ + fVar16;
            fVar30 = UStack_f0.fields.m_Center.fields.x + UStack_f0.fields.m_Extents.fields.x;
            fVar31 = UStack_f0.fields.m_Center.fields.y + UStack_f0.fields.m_Extents.fields.y;
            fVar29 = UStack_f0.fields.m_Center.fields.z + UStack_f0.fields.m_Extents.fields.z;
            auVar17._0_4_ = fVar20 - fVar18;
            auVar17._4_4_ = fVar26 - fVar19;
            auVar17._8_4_ = fVar27 - fVar15;
            auVar17._12_4_ = fVar28 - fVar16;
            fVar11 = (fVar21 + fVar12) - fVar12;
            auVar4._4_4_ = fVar31;
            auVar4._0_4_ = fVar30;
            auVar4._8_8_ = 0;
            auVar23 = minps(auVar17,auVar4);
            if (fVar29 <= fVar11) {
              fVar11 = fVar29;
            }
            auVar24._0_4_ = fVar20 + fVar18;
            auVar24._4_4_ = fVar26 + fVar19;
            auVar24._8_4_ = fVar27 + fVar15;
            auVar24._12_4_ = fVar28 + fVar16;
            fVar12 = fVar21 + fVar12 + fVar12;
            auVar5._4_4_ = fVar31;
            auVar5._0_4_ = fVar30;
            auVar5._8_8_ = 0;
            auVar25 = maxps(auVar24,auVar5);
            if (fVar12 <= fVar29) {
              fVar12 = fVar29;
            }
            fVar21 = (auVar25._0_4_ - auVar23._0_4_) * 0.5;
            fVar18 = (auVar25._4_4_ - auVar23._4_4_) * 0.5;
            auVar14._0_8_ = CONCAT44(fVar18,fVar21);
            auVar14._8_4_ = (auVar25._8_4_ - auVar23._8_4_) * 0.0;
            auVar14._12_4_ = (auVar25._12_4_ - auVar23._12_4_) * 0.0;
            fVar12 = (fVar12 - fVar11) * 0.5;
            fVar21 = auVar23._0_4_ + fVar21;
            fVar18 = auVar23._4_4_ + fVar18;
            fVar19 = auVar23._8_4_ + auVar14._8_4_;
            fVar15 = auVar23._12_4_ + auVar14._12_4_;
            fVar11 = fVar11 + fVar12;
            uVar7 = uVar7 + 1;
            uVar8 = *(uint *)(lVar1 + 0x18);
            auVar23._8_4_ = auVar14._8_4_;
            auVar23._0_8_ = auVar14._0_8_;
            auVar23._12_4_ = auVar14._12_4_;
          } while ((int)uVar7 < (int)uVar8);
        }
        auStack_d8._0_4_ = fVar12;
        auStack_c8 = auVar14;
        fStack_b8 = fVar21;
        fStack_b4 = fVar18;
        fStack_b0 = fVar19;
        fStack_ac = fVar15;
        if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar10[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_c8._0_4_ + (float)auStack_c8._0_4_;
            value.fields.y = (float)auStack_c8._4_4_ + (float)auStack_c8._4_4_;
            value.fields.z = (float)auStack_d8._0_4_ + (float)auStack_d8._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar10[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar10[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_b4;
              value_00.fields.x = fStack_b8;
              value_00.fields.z = fVar11;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar10[2].monitor,value_00,(MethodInfo *)0x0);
              return extraout_XMM0_Da_08;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  fVar11 = (float)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    fVar11 = (float)il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return fVar11;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Height
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, float value, const MethodInfo* method);
// 0x40f3d30

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Height
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,float value,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UnityEngine_AI_NavMeshObstacle_o *pUVar6;
  CustomLogic_BuiltinClassInstance_o *__this_01;
  uint uVar7;
  uint uVar8;
  UnityEngine_AI_NavMeshObstacle_o *__this_02;
  UnityEngine_AI_NavMeshObstacle_o *pUVar9;
  float fVar10;
  undefined8 extraout_XMM1_Qa;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Bounds_o UStack_e8;
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [16];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  UnityEngine_AI_NavMeshObstacle_o *pUStack_98;
  
  __this_02 = (__this->fields).Value;
  if (__this_02 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_height(__this_02,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7bd = '\x01';
  }
  pUVar9 = __this_02[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar31 = UnityEngine_AI_NavMeshObstacle__get_size(pUVar9,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this_01,(MethodInfo *)0x0);
    __this_01[1].klass = UVar31.fields._0_8_;
    *(float *)&__this_01[1].monitor = UVar31.fields.z;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    pUVar6 = pUVar9 + 2;
    pUVar9 = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
    if (pUVar6->monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      UnityEngine_AI_NavMeshObstacle__set_size
                (pUVar6->monitor,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method->parameters,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar8 = (uint)method;
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_center(pUVar9,(MethodInfo *)0x0);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar31.fields.z = (float)extraout_XMM1_Qa;
    UVar31.fields.x = (float)(int)uVar2;
    UVar31.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar9,UVar31,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar9,uVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar9[2].fields.m_CachedPtr;
  pUStack_98 = __this_02;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_e8,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar9[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar18 = 0.0;
        fVar13 = 0.0;
        auVar22._8_8_ = 0;
        auVar22._0_4_ = UStack_e8.fields.m_Extents.fields.x;
        auVar22._4_4_ = UStack_e8.fields.m_Extents.fields.y;
        uVar8 = *(uint *)(lVar1 + 0x18);
        fVar16 = UStack_e8.fields.m_Center.fields.z;
        fVar10 = UStack_e8.fields.m_Extents.fields.z;
        fVar20 = UStack_e8.fields.m_Center.fields.x;
        fVar17 = UStack_e8.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar12._8_8_ = 0;
          auVar12._0_4_ = UStack_e8.fields.m_Extents.fields.x;
          auVar12._4_4_ = UStack_e8.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar8 <= uVar7) goto label_040f4193;
            auStack_c0._0_4_ = fVar16;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_d0 = auVar22;
            fStack_b0 = fVar20;
            fStack_ac = fVar17;
            fStack_a8 = fVar18;
            fStack_a4 = fVar13;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_e8,__this_00,(MethodInfo *)0x0);
            fVar16 = UStack_e8.fields.m_Center.fields.x - UStack_e8.fields.m_Extents.fields.x;
            fVar17 = UStack_e8.fields.m_Center.fields.y - UStack_e8.fields.m_Extents.fields.y;
            fVar18 = UStack_e8.fields.m_Center.fields.z - UStack_e8.fields.m_Extents.fields.z;
            auVar21._0_4_ = fStack_b0 - (float)auStack_d0._0_4_;
            auVar21._4_4_ = fStack_ac - (float)auStack_d0._4_4_;
            auVar21._8_4_ = fStack_a8 - fStack_c8;
            auVar21._12_4_ = fStack_a4 - fStack_c4;
            auVar24._4_4_ = fVar17;
            auVar24._0_4_ = fVar16;
            auVar24._8_8_ = 0;
            auVar22 = minps(auVar21,auVar24);
            fVar20 = (float)auStack_c0._0_4_ - fVar10;
            if (fVar18 <= (float)auStack_c0._0_4_ - fVar10) {
              fVar20 = fVar18;
            }
            auVar11._0_4_ = (float)auStack_d0._0_4_ + fStack_b0;
            auVar11._4_4_ = (float)auStack_d0._4_4_ + fStack_ac;
            auVar11._8_4_ = fStack_c8 + fStack_a8;
            auVar11._12_4_ = fStack_c4 + fStack_a4;
            auVar3._4_4_ = fVar17;
            auVar3._0_4_ = fVar16;
            auVar3._8_8_ = 0;
            auVar12 = maxps(auVar11,auVar3);
            fVar16 = (float)auStack_c0._0_4_ + fVar10;
            if ((float)auStack_c0._0_4_ + fVar10 <= fVar18) {
              fVar16 = fVar18;
            }
            fVar17 = (auVar12._0_4_ - auVar22._0_4_) * 0.5;
            fVar18 = (auVar12._4_4_ - auVar22._4_4_) * 0.5;
            fVar13 = (auVar12._8_4_ - auVar22._8_4_) * 0.0;
            fVar14 = (auVar12._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar16 - fVar20) * 0.5;
            fVar19 = auVar22._0_4_ + fVar17;
            fVar25 = auVar22._4_4_ + fVar18;
            fVar26 = auVar22._8_4_ + fVar13;
            fVar27 = auVar22._12_4_ + fVar14;
            fVar29 = UStack_e8.fields.m_Center.fields.x + UStack_e8.fields.m_Extents.fields.x;
            fVar30 = UStack_e8.fields.m_Center.fields.y + UStack_e8.fields.m_Extents.fields.y;
            fVar28 = UStack_e8.fields.m_Center.fields.z + UStack_e8.fields.m_Extents.fields.z;
            auVar15._0_4_ = fVar19 - fVar17;
            auVar15._4_4_ = fVar25 - fVar18;
            auVar15._8_4_ = fVar26 - fVar13;
            auVar15._12_4_ = fVar27 - fVar14;
            fVar16 = (fVar20 + fVar10) - fVar10;
            auVar4._4_4_ = fVar30;
            auVar4._0_4_ = fVar29;
            auVar4._8_8_ = 0;
            auVar22 = minps(auVar15,auVar4);
            if (fVar28 <= fVar16) {
              fVar16 = fVar28;
            }
            auVar23._0_4_ = fVar19 + fVar17;
            auVar23._4_4_ = fVar25 + fVar18;
            auVar23._8_4_ = fVar26 + fVar13;
            auVar23._12_4_ = fVar27 + fVar14;
            fVar10 = fVar20 + fVar10 + fVar10;
            auVar5._4_4_ = fVar30;
            auVar5._0_4_ = fVar29;
            auVar5._8_8_ = 0;
            auVar24 = maxps(auVar23,auVar5);
            if (fVar10 <= fVar28) {
              fVar10 = fVar28;
            }
            fVar20 = (auVar24._0_4_ - auVar22._0_4_) * 0.5;
            fVar17 = (auVar24._4_4_ - auVar22._4_4_) * 0.5;
            auVar12._0_8_ = CONCAT44(fVar17,fVar20);
            auVar12._8_4_ = (auVar24._8_4_ - auVar22._8_4_) * 0.0;
            auVar12._12_4_ = (auVar24._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar10 - fVar16) * 0.5;
            fVar20 = auVar22._0_4_ + fVar20;
            fVar17 = auVar22._4_4_ + fVar17;
            fVar18 = auVar22._8_4_ + auVar12._8_4_;
            fVar13 = auVar22._12_4_ + auVar12._12_4_;
            fVar16 = fVar16 + fVar10;
            uVar7 = uVar7 + 1;
            uVar8 = *(uint *)(lVar1 + 0x18);
            auVar22._8_4_ = auVar12._8_4_;
            auVar22._0_8_ = auVar12._0_8_;
            auVar22._12_4_ = auVar12._12_4_;
          } while ((int)uVar7 < (int)uVar8);
        }
        auStack_d0._0_4_ = fVar10;
        auStack_c0 = auVar12;
        fStack_b0 = fVar20;
        fStack_ac = fVar17;
        fStack_a8 = fVar18;
        fStack_a4 = fVar13;
        if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar9[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_c0._0_4_ + (float)auStack_c0._0_4_;
            value_00.fields.y = (float)auStack_c0._4_4_ + (float)auStack_c0._4_4_;
            value_00.fields.z = (float)auStack_d0._0_4_ + (float)auStack_d0._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar9[2].monitor,value_00,(MethodInfo *)0x0);
            if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_ac;
              value_01.fields.x = fStack_b0;
              value_01.fields.z = fVar16;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar9[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3d50

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Scale
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UnityEngine_AI_NavMeshObstacle_o *pUVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX_00;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX_01;
  undefined4 extraout_var;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX_02;
  undefined4 extraout_var_00;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX_03;
  undefined4 extraout_var_01;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX_04;
  CustomLogic_CustomLogicVector3Builtin_o *extraout_RAX_05;
  uint uVar9;
  uint uVar10;
  UnityEngine_AI_NavMeshObstacle_o *pUVar11;
  float fVar12;
  undefined8 extraout_XMM1_Qa;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o UStack_e0;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *pCStack_90;
  
  if (g_data_057ac7bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    g_data_057ac7bd = '\x01';
  }
  pUVar11 = (__this->fields).Value;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar33 = UnityEngine_AI_NavMeshObstacle__get_size(pUVar11,(MethodInfo *)0x0);
    __this_01 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    if (g_data_057ac646 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
      g_data_057ac646 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_01,(MethodInfo *)0x0)
    ;
    (__this_01->fields).Value.fields.x = (float)(int)UVar33.fields._0_8_;
    (__this_01->fields).Value.fields.y = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
    (__this_01->fields).Value.fields.z = UVar33.fields.z;
    return __this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (method != (MethodInfo *)0x0) {
    pUVar6 = pUVar11 + 2;
    pUVar11 = (UnityEngine_AI_NavMeshObstacle_o *)0x0;
    if (pUVar6->monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      UnityEngine_AI_NavMeshObstacle__set_size
                (pUVar6->monitor,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&method->parameters,
                 (MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar10 = (uint)method;
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_center(pUVar11,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar33.fields.z = (float)extraout_XMM1_Qa;
    UVar33.fields.x = (float)(int)uVar2;
    UVar33.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar11,UVar33,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar7 = UnityEngine_AI_NavMeshObstacle__get_carving(pUVar11,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_var,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar11,uVar10 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar7 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar11,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_var_00,bVar7);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar11,uVar10 & 0xff,(MethodInfo *)0x0);
    return extraout_RAX_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    iVar8 = UnityEngine_AI_NavMeshObstacle__get_shape(pUVar11,(MethodInfo *)0x0);
    return (CustomLogic_CustomLogicVector3Builtin_o *)CONCAT44(extraout_var_01,iVar8);
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar11 = pUVar11[2].monitor;
  if (pUVar11 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar11,uVar10,(MethodInfo *)0x0);
    return extraout_RAX_04;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar11[2].fields.m_CachedPtr;
  pCStack_90 = __this;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_e0,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar11[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar20 = 0.0;
        fVar15 = 0.0;
        auVar24._8_8_ = 0;
        auVar24._0_4_ = UStack_e0.fields.m_Extents.fields.x;
        auVar24._4_4_ = UStack_e0.fields.m_Extents.fields.y;
        uVar10 = *(uint *)(lVar1 + 0x18);
        fVar18 = UStack_e0.fields.m_Center.fields.z;
        fVar12 = UStack_e0.fields.m_Extents.fields.z;
        fVar22 = UStack_e0.fields.m_Center.fields.x;
        fVar19 = UStack_e0.fields.m_Center.fields.y;
        if ((int)uVar10 < 1) {
          auVar14._8_8_ = 0;
          auVar14._0_4_ = UStack_e0.fields.m_Extents.fields.x;
          auVar14._4_4_ = UStack_e0.fields.m_Extents.fields.y;
        }
        else {
          uVar9 = 0;
          do {
            if (uVar10 <= uVar9) goto label_040f4193;
            auStack_b8._0_4_ = fVar18;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar9 * 8);
            _auStack_c8 = auVar24;
            fStack_a8 = fVar22;
            fStack_a4 = fVar19;
            fStack_a0 = fVar20;
            fStack_9c = fVar15;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_e0,__this_00,(MethodInfo *)0x0);
            fVar18 = UStack_e0.fields.m_Center.fields.x - UStack_e0.fields.m_Extents.fields.x;
            fVar19 = UStack_e0.fields.m_Center.fields.y - UStack_e0.fields.m_Extents.fields.y;
            fVar20 = UStack_e0.fields.m_Center.fields.z - UStack_e0.fields.m_Extents.fields.z;
            auVar23._0_4_ = fStack_a8 - (float)auStack_c8._0_4_;
            auVar23._4_4_ = fStack_a4 - (float)auStack_c8._4_4_;
            auVar23._8_4_ = fStack_a0 - fStack_c0;
            auVar23._12_4_ = fStack_9c - fStack_bc;
            auVar26._4_4_ = fVar19;
            auVar26._0_4_ = fVar18;
            auVar26._8_8_ = 0;
            auVar24 = minps(auVar23,auVar26);
            fVar22 = (float)auStack_b8._0_4_ - fVar12;
            if (fVar20 <= (float)auStack_b8._0_4_ - fVar12) {
              fVar22 = fVar20;
            }
            auVar13._0_4_ = (float)auStack_c8._0_4_ + fStack_a8;
            auVar13._4_4_ = (float)auStack_c8._4_4_ + fStack_a4;
            auVar13._8_4_ = fStack_c0 + fStack_a0;
            auVar13._12_4_ = fStack_bc + fStack_9c;
            auVar3._4_4_ = fVar19;
            auVar3._0_4_ = fVar18;
            auVar3._8_8_ = 0;
            auVar14 = maxps(auVar13,auVar3);
            fVar18 = (float)auStack_b8._0_4_ + fVar12;
            if ((float)auStack_b8._0_4_ + fVar12 <= fVar20) {
              fVar18 = fVar20;
            }
            fVar19 = (auVar14._0_4_ - auVar24._0_4_) * 0.5;
            fVar20 = (auVar14._4_4_ - auVar24._4_4_) * 0.5;
            fVar15 = (auVar14._8_4_ - auVar24._8_4_) * 0.0;
            fVar16 = (auVar14._12_4_ - auVar24._12_4_) * 0.0;
            fVar12 = (fVar18 - fVar22) * 0.5;
            fVar21 = auVar24._0_4_ + fVar19;
            fVar27 = auVar24._4_4_ + fVar20;
            fVar28 = auVar24._8_4_ + fVar15;
            fVar29 = auVar24._12_4_ + fVar16;
            fVar31 = UStack_e0.fields.m_Center.fields.x + UStack_e0.fields.m_Extents.fields.x;
            fVar32 = UStack_e0.fields.m_Center.fields.y + UStack_e0.fields.m_Extents.fields.y;
            fVar30 = UStack_e0.fields.m_Center.fields.z + UStack_e0.fields.m_Extents.fields.z;
            auVar17._0_4_ = fVar21 - fVar19;
            auVar17._4_4_ = fVar27 - fVar20;
            auVar17._8_4_ = fVar28 - fVar15;
            auVar17._12_4_ = fVar29 - fVar16;
            fVar18 = (fVar22 + fVar12) - fVar12;
            auVar4._4_4_ = fVar32;
            auVar4._0_4_ = fVar31;
            auVar4._8_8_ = 0;
            auVar24 = minps(auVar17,auVar4);
            if (fVar30 <= fVar18) {
              fVar18 = fVar30;
            }
            auVar25._0_4_ = fVar21 + fVar19;
            auVar25._4_4_ = fVar27 + fVar20;
            auVar25._8_4_ = fVar28 + fVar15;
            auVar25._12_4_ = fVar29 + fVar16;
            fVar12 = fVar22 + fVar12 + fVar12;
            auVar5._4_4_ = fVar32;
            auVar5._0_4_ = fVar31;
            auVar5._8_8_ = 0;
            auVar26 = maxps(auVar25,auVar5);
            if (fVar12 <= fVar30) {
              fVar12 = fVar30;
            }
            fVar22 = (auVar26._0_4_ - auVar24._0_4_) * 0.5;
            fVar19 = (auVar26._4_4_ - auVar24._4_4_) * 0.5;
            auVar14._0_8_ = CONCAT44(fVar19,fVar22);
            auVar14._8_4_ = (auVar26._8_4_ - auVar24._8_4_) * 0.0;
            auVar14._12_4_ = (auVar26._12_4_ - auVar24._12_4_) * 0.0;
            fVar12 = (fVar12 - fVar18) * 0.5;
            fVar22 = auVar24._0_4_ + fVar22;
            fVar19 = auVar24._4_4_ + fVar19;
            fVar20 = auVar24._8_4_ + auVar14._8_4_;
            fVar15 = auVar24._12_4_ + auVar14._12_4_;
            fVar18 = fVar18 + fVar12;
            uVar9 = uVar9 + 1;
            uVar10 = *(uint *)(lVar1 + 0x18);
            auVar24._8_4_ = auVar14._8_4_;
            auVar24._0_8_ = auVar14._0_8_;
            auVar24._12_4_ = auVar14._12_4_;
          } while ((int)uVar9 < (int)uVar10);
        }
        auStack_c8._0_4_ = fVar12;
        auStack_b8 = auVar14;
        fStack_a8 = fVar22;
        fStack_a4 = fVar19;
        fStack_a0 = fVar20;
        fStack_9c = fVar15;
        if (pUVar11[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar11[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar11[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_b8._0_4_ + (float)auStack_b8._0_4_;
            value.fields.y = (float)auStack_b8._4_4_ + (float)auStack_b8._4_4_;
            value.fields.z = (float)auStack_c8._0_4_ + (float)auStack_c8._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar11[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar11[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_a4;
              value_00.fields.x = fStack_a8;
              value_00.fields.z = fVar18;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar11[2].monitor,value_00,(MethodInfo *)0x0);
              return extraout_RAX_05;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return "NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Scale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x40f3e10

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Scale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  UnityEngine_AI_NavMeshObstacle_o *pUVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  undefined1 auVar28 [16];
  UnityEngine_Bounds_o UStack_b8;
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pUVar7 = (__this->fields).Value;
    __this = (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *)0x0;
    if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
      UnityEngine_AI_NavMeshObstacle__set_size
                (pUVar7,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar6 = (uint)value;
  pUVar7 = (__this->fields).Value;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_center(pUVar7,(MethodInfo *)0x0);
    return;
  }
  auVar28 = il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar7,(UnityEngine_Vector3_o)auVar28._0_12_,(MethodInfo *)0x0)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar7,uVar6 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar7,uVar6 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7,uVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar7[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_b8,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar7[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar16 = 0.0;
        fVar11 = 0.0;
        auVar28._8_8_ = 0;
        auVar28._0_4_ = UStack_b8.fields.m_Extents.fields.x;
        auVar28._4_4_ = UStack_b8.fields.m_Extents.fields.y;
        uVar6 = *(uint *)(lVar1 + 0x18);
        fVar8 = UStack_b8.fields.m_Extents.fields.z;
        fVar14 = UStack_b8.fields.m_Center.fields.z;
        fVar18 = UStack_b8.fields.m_Center.fields.x;
        fVar15 = UStack_b8.fields.m_Center.fields.y;
        if ((int)uVar6 < 1) {
          auVar10._8_8_ = 0;
          auVar10._0_4_ = UStack_b8.fields.m_Extents.fields.x;
          auVar10._4_4_ = UStack_b8.fields.m_Extents.fields.y;
        }
        else {
          uVar5 = 0;
          do {
            if (uVar6 <= uVar5) goto label_040f4193;
            auStack_90._0_4_ = fVar14;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar5 * 8);
            _auStack_a0 = auVar28;
            fStack_80 = fVar18;
            fStack_7c = fVar15;
            fStack_78 = fVar16;
            fStack_74 = fVar11;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_b8,__this_00,(MethodInfo *)0x0);
            fVar14 = UStack_b8.fields.m_Center.fields.x - UStack_b8.fields.m_Extents.fields.x;
            fVar15 = UStack_b8.fields.m_Center.fields.y - UStack_b8.fields.m_Extents.fields.y;
            fVar16 = UStack_b8.fields.m_Center.fields.z - UStack_b8.fields.m_Extents.fields.z;
            auVar19._0_4_ = fStack_80 - (float)auStack_a0._0_4_;
            auVar19._4_4_ = fStack_7c - (float)auStack_a0._4_4_;
            auVar19._8_4_ = fStack_78 - fStack_98;
            auVar19._12_4_ = fStack_74 - fStack_94;
            auVar21._4_4_ = fVar15;
            auVar21._0_4_ = fVar14;
            auVar21._8_8_ = 0;
            auVar28 = minps(auVar19,auVar21);
            fVar18 = (float)auStack_90._0_4_ - fVar8;
            if (fVar16 <= (float)auStack_90._0_4_ - fVar8) {
              fVar18 = fVar16;
            }
            auVar9._0_4_ = (float)auStack_a0._0_4_ + fStack_80;
            auVar9._4_4_ = (float)auStack_a0._4_4_ + fStack_7c;
            auVar9._8_4_ = fStack_98 + fStack_78;
            auVar9._12_4_ = fStack_94 + fStack_74;
            auVar2._4_4_ = fVar15;
            auVar2._0_4_ = fVar14;
            auVar2._8_8_ = 0;
            auVar10 = maxps(auVar9,auVar2);
            fVar14 = (float)auStack_90._0_4_ + fVar8;
            if ((float)auStack_90._0_4_ + fVar8 <= fVar16) {
              fVar14 = fVar16;
            }
            fVar15 = (auVar10._0_4_ - auVar28._0_4_) * 0.5;
            fVar16 = (auVar10._4_4_ - auVar28._4_4_) * 0.5;
            fVar11 = (auVar10._8_4_ - auVar28._8_4_) * 0.0;
            fVar12 = (auVar10._12_4_ - auVar28._12_4_) * 0.0;
            fVar8 = (fVar14 - fVar18) * 0.5;
            fVar17 = auVar28._0_4_ + fVar15;
            fVar22 = auVar28._4_4_ + fVar16;
            fVar23 = auVar28._8_4_ + fVar11;
            fVar24 = auVar28._12_4_ + fVar12;
            fVar26 = UStack_b8.fields.m_Center.fields.x + UStack_b8.fields.m_Extents.fields.x;
            fVar27 = UStack_b8.fields.m_Center.fields.y + UStack_b8.fields.m_Extents.fields.y;
            fVar25 = UStack_b8.fields.m_Center.fields.z + UStack_b8.fields.m_Extents.fields.z;
            auVar13._0_4_ = fVar17 - fVar15;
            auVar13._4_4_ = fVar22 - fVar16;
            auVar13._8_4_ = fVar23 - fVar11;
            auVar13._12_4_ = fVar24 - fVar12;
            fVar14 = (fVar18 + fVar8) - fVar8;
            auVar3._4_4_ = fVar27;
            auVar3._0_4_ = fVar26;
            auVar3._8_8_ = 0;
            auVar28 = minps(auVar13,auVar3);
            if (fVar25 <= fVar14) {
              fVar14 = fVar25;
            }
            auVar20._0_4_ = fVar17 + fVar15;
            auVar20._4_4_ = fVar22 + fVar16;
            auVar20._8_4_ = fVar23 + fVar11;
            auVar20._12_4_ = fVar24 + fVar12;
            fVar8 = fVar18 + fVar8 + fVar8;
            auVar4._4_4_ = fVar27;
            auVar4._0_4_ = fVar26;
            auVar4._8_8_ = 0;
            auVar21 = maxps(auVar20,auVar4);
            if (fVar8 <= fVar25) {
              fVar8 = fVar25;
            }
            fVar18 = (auVar21._0_4_ - auVar28._0_4_) * 0.5;
            fVar15 = (auVar21._4_4_ - auVar28._4_4_) * 0.5;
            auVar10._0_8_ = CONCAT44(fVar15,fVar18);
            auVar10._8_4_ = (auVar21._8_4_ - auVar28._8_4_) * 0.0;
            auVar10._12_4_ = (auVar21._12_4_ - auVar28._12_4_) * 0.0;
            fVar8 = (fVar8 - fVar14) * 0.5;
            fVar18 = auVar28._0_4_ + fVar18;
            fVar15 = auVar28._4_4_ + fVar15;
            fVar16 = auVar28._8_4_ + auVar10._8_4_;
            fVar11 = auVar28._12_4_ + auVar10._12_4_;
            fVar14 = fVar14 + fVar8;
            uVar5 = uVar5 + 1;
            uVar6 = *(uint *)(lVar1 + 0x18);
            auVar28._8_4_ = auVar10._8_4_;
            auVar28._0_8_ = auVar10._0_8_;
            auVar28._12_4_ = auVar10._12_4_;
          } while ((int)uVar5 < (int)uVar6);
        }
        auStack_a0._0_4_ = fVar8;
        auStack_90 = auVar10;
        fStack_80 = fVar18;
        fStack_7c = fVar15;
        fStack_78 = fVar16;
        fStack_74 = fVar11;
        if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_90._0_4_ + (float)auStack_90._0_4_;
            value_00.fields.y = (float)auStack_90._4_4_ + (float)auStack_90._4_4_;
            value_00.fields.z = (float)auStack_a0._0_4_ + (float)auStack_a0._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar7[2].monitor,value_00,(MethodInfo *)0x0);
            if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_7c;
              value_01.fields.x = fStack_80;
              value_01.fields.z = fVar14;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar7[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Center
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3e40

UnityEngine_Vector3_o
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Center
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  UnityEngine_AI_NavMeshObstacle_o *pUVar8;
  float fVar9;
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  float extraout_XMM1_Da_01;
  float extraout_XMM1_Da_02;
  float extraout_XMM1_Da_03;
  float extraout_XMM1_Da_04;
  float fVar12;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar24;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  UnityEngine_Vector3_Fields UVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o UVar37;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar38;
  undefined1 auVar39 [16];
  UnityEngine_Bounds_o UStack_b0;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auVar10 [16];
  undefined1 auVar23 [16];
  
  uVar7 = (uint)method;
  pUVar8 = (__this->fields).Value;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UVar30 = (UnityEngine_Vector3_Fields)UnityEngine_AI_NavMeshObstacle__get_center(pUVar8,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar30;
  }
  auVar39 = il2cpp_runtime_helper_022b2c90();
  auVar21._0_8_ = auVar39._8_8_;
  auVar21._8_8_ = extraout_XMM1_Qb;
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    auVar10._0_4_ = auVar39._8_4_;
    auVar10._4_12_ = auVar21._4_12_;
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar8,(UnityEngine_Vector3_o)auVar39._0_12_,(MethodInfo *)0x0)
    ;
    UVar31.fields.z = auVar10._0_4_;
    UVar31.fields.x = (float)(int)extraout_XMM0_Qa;
    UVar31.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
    return (UnityEngine_Vector3_o)UVar31.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar15 = extraout_XMM1_Da;
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar8,(MethodInfo *)0x0);
    UVar32.fields.z = fVar15;
    UVar32.fields.x = (float)(int)extraout_XMM0_Qa_00;
    UVar32.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_00 >> 0x20);
    return (UnityEngine_Vector3_o)UVar32.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar15 = extraout_XMM1_Da_00;
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar8,uVar7 & 0xff,(MethodInfo *)0x0);
    UVar33.fields.z = fVar15;
    UVar33.fields.x = (float)(int)extraout_XMM0_Qa_01;
    UVar33.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_01 >> 0x20);
    return (UnityEngine_Vector3_o)UVar33.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar15 = extraout_XMM1_Da_01;
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar8,(MethodInfo *)0x0);
    UVar34.fields.z = fVar15;
    UVar34.fields.x = (float)(int)extraout_XMM0_Qa_02;
    UVar34.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_02 >> 0x20);
    return (UnityEngine_Vector3_o)UVar34.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar15 = extraout_XMM1_Da_02;
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar8,uVar7 & 0xff,(MethodInfo *)0x0);
    UVar35.fields.z = fVar15;
    UVar35.fields.x = (float)(int)extraout_XMM0_Qa_03;
    UVar35.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_03 >> 0x20);
    return (UnityEngine_Vector3_o)UVar35.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar15 = extraout_XMM1_Da_03;
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar8,(MethodInfo *)0x0);
    UVar36.fields.z = fVar15;
    UVar36.fields.x = (float)(int)extraout_XMM0_Qa_04;
    UVar36.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_04 >> 0x20);
    return (UnityEngine_Vector3_o)UVar36.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    fVar15 = extraout_XMM1_Da_04;
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar8,uVar7,(MethodInfo *)0x0);
    UVar37.fields.z = fVar15;
    UVar37.fields.x = (float)(int)extraout_XMM0_Qa_05;
    UVar37.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_05 >> 0x20);
    return (UnityEngine_Vector3_o)UVar37.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar8[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_b0,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar8[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar17 = 0.0;
        fVar12 = 0.0;
        auVar39._8_8_ = 0;
        auVar39._0_4_ = UStack_b0.fields.m_Extents.fields.x;
        auVar39._4_4_ = UStack_b0.fields.m_Extents.fields.y;
        uVar7 = *(uint *)(lVar1 + 0x18);
        fVar9 = UStack_b0.fields.m_Extents.fields.z;
        fVar15 = UStack_b0.fields.m_Center.fields.z;
        fVar19 = UStack_b0.fields.m_Center.fields.x;
        fVar16 = UStack_b0.fields.m_Center.fields.y;
        if ((int)uVar7 < 1) {
          auVar23._8_8_ = 0;
          auVar23._0_4_ = UStack_b0.fields.m_Extents.fields.x;
          auVar23._4_4_ = UStack_b0.fields.m_Extents.fields.y;
        }
        else {
          uVar6 = 0;
          do {
            if (uVar7 <= uVar6) goto label_040f4193;
            auStack_88._0_4_ = fVar15;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar6 * 8);
            _auStack_98 = auVar39;
            fStack_78 = fVar19;
            fStack_74 = fVar16;
            fStack_70 = fVar17;
            fStack_6c = fVar12;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_b0,__this_00,(MethodInfo *)0x0);
            fVar15 = UStack_b0.fields.m_Center.fields.x - UStack_b0.fields.m_Extents.fields.x;
            fVar16 = UStack_b0.fields.m_Center.fields.y - UStack_b0.fields.m_Extents.fields.y;
            fVar17 = UStack_b0.fields.m_Center.fields.z - UStack_b0.fields.m_Extents.fields.z;
            auVar20._0_4_ = fStack_78 - (float)auStack_98._0_4_;
            auVar20._4_4_ = fStack_74 - (float)auStack_98._4_4_;
            auVar20._8_4_ = fStack_70 - fStack_90;
            auVar20._12_4_ = fStack_6c - fStack_8c;
            auVar2._4_4_ = fVar16;
            auVar2._0_4_ = fVar15;
            auVar2._8_8_ = 0;
            auVar21 = minps(auVar20,auVar2);
            fVar19 = (float)auStack_88._0_4_ - fVar9;
            if (fVar17 <= (float)auStack_88._0_4_ - fVar9) {
              fVar19 = fVar17;
            }
            auVar11._0_4_ = (float)auStack_98._0_4_ + fStack_78;
            auVar11._4_4_ = (float)auStack_98._4_4_ + fStack_74;
            auVar11._8_4_ = fStack_90 + fStack_70;
            auVar11._12_4_ = fStack_8c + fStack_6c;
            auVar3._4_4_ = fVar16;
            auVar3._0_4_ = fVar15;
            auVar3._8_8_ = 0;
            auVar39 = maxps(auVar11,auVar3);
            fVar15 = (float)auStack_88._0_4_ + fVar9;
            if ((float)auStack_88._0_4_ + fVar9 <= fVar17) {
              fVar15 = fVar17;
            }
            fVar16 = (auVar39._0_4_ - auVar21._0_4_) * 0.5;
            fVar17 = (auVar39._4_4_ - auVar21._4_4_) * 0.5;
            fVar12 = (auVar39._8_4_ - auVar21._8_4_) * 0.0;
            fVar13 = (auVar39._12_4_ - auVar21._12_4_) * 0.0;
            fVar9 = (fVar15 - fVar19) * 0.5;
            fVar18 = auVar21._0_4_ + fVar16;
            fVar24 = auVar21._4_4_ + fVar17;
            fVar25 = auVar21._8_4_ + fVar12;
            fVar26 = auVar21._12_4_ + fVar13;
            fVar28 = UStack_b0.fields.m_Center.fields.x + UStack_b0.fields.m_Extents.fields.x;
            fVar29 = UStack_b0.fields.m_Center.fields.y + UStack_b0.fields.m_Extents.fields.y;
            fVar27 = UStack_b0.fields.m_Center.fields.z + UStack_b0.fields.m_Extents.fields.z;
            auVar14._0_4_ = fVar18 - fVar16;
            auVar14._4_4_ = fVar24 - fVar17;
            auVar14._8_4_ = fVar25 - fVar12;
            auVar14._12_4_ = fVar26 - fVar13;
            fVar15 = (fVar19 + fVar9) - fVar9;
            auVar4._4_4_ = fVar29;
            auVar4._0_4_ = fVar28;
            auVar4._8_8_ = 0;
            auVar21 = minps(auVar14,auVar4);
            if (fVar27 <= fVar15) {
              fVar15 = fVar27;
            }
            auVar22._0_4_ = fVar18 + fVar16;
            auVar22._4_4_ = fVar24 + fVar17;
            auVar22._8_4_ = fVar25 + fVar12;
            auVar22._12_4_ = fVar26 + fVar13;
            fVar9 = fVar19 + fVar9 + fVar9;
            auVar5._4_4_ = fVar29;
            auVar5._0_4_ = fVar28;
            auVar5._8_8_ = 0;
            auVar39 = maxps(auVar22,auVar5);
            if (fVar9 <= fVar27) {
              fVar9 = fVar27;
            }
            fVar19 = (auVar39._0_4_ - auVar21._0_4_) * 0.5;
            fVar16 = (auVar39._4_4_ - auVar21._4_4_) * 0.5;
            auVar23._0_8_ = CONCAT44(fVar16,fVar19);
            auVar23._8_4_ = (auVar39._8_4_ - auVar21._8_4_) * 0.0;
            auVar23._12_4_ = (auVar39._12_4_ - auVar21._12_4_) * 0.0;
            fVar9 = (fVar9 - fVar15) * 0.5;
            fVar19 = auVar21._0_4_ + fVar19;
            fVar16 = auVar21._4_4_ + fVar16;
            fVar17 = auVar21._8_4_ + auVar23._8_4_;
            fVar12 = auVar21._12_4_ + auVar23._12_4_;
            fVar15 = fVar15 + fVar9;
            uVar6 = uVar6 + 1;
            uVar7 = *(uint *)(lVar1 + 0x18);
            auVar39._8_4_ = auVar23._8_4_;
            auVar39._0_8_ = auVar23._0_8_;
            auVar39._12_4_ = auVar23._12_4_;
          } while ((int)uVar6 < (int)uVar7);
        }
        auStack_98._0_4_ = fVar9;
        auStack_88 = auVar23;
        fStack_78 = fVar19;
        fStack_74 = fVar16;
        fStack_70 = fVar17;
        fStack_6c = fVar12;
        if (pUVar8[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar8[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar8[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_88._0_4_ + (float)auStack_88._0_4_;
            value.fields.y = (float)auStack_88._4_4_ + (float)auStack_88._4_4_;
            value.fields.z = (float)auStack_98._0_4_ + (float)auStack_98._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar8[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar8[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_74;
              value_00.fields.x = fStack_78;
              value_00.fields.z = fVar15;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar8[2].monitor,value_00,(MethodInfo *)0x0);
              UVar38.fields.z = fVar15;
              UVar38.fields.x = (float)(int)extraout_XMM0_Qa_06;
              UVar38.fields.y = (float)(int)((ulong)extraout_XMM0_Qa_06 >> 0x20);
              return (UnityEngine_Vector3_o)UVar38.fields;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  UVar30 = (UnityEngine_Vector3_Fields)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    UVar30 = (UnityEngine_Vector3_Fields)il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return (UnityEngine_Vector3_o)UVar30;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Center
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x40f3e60

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Center
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,UnityEngine_Vector3_o value,
               MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  UnityEngine_AI_NavMeshObstacle_o *pUVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Bounds_o UStack_a8;
  undefined1 auStack_90 [8];
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  uVar6 = (uint)method;
  pUVar7 = (__this->fields).Value;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_center(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carving(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar7,uVar6 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar7,uVar6 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7,uVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar7[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_a8,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar7[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar16 = 0.0;
        fVar11 = 0.0;
        auVar20._8_8_ = 0;
        auVar20._0_4_ = UStack_a8.fields.m_Extents.fields.x;
        auVar20._4_4_ = UStack_a8.fields.m_Extents.fields.y;
        uVar6 = *(uint *)(lVar1 + 0x18);
        fVar8 = UStack_a8.fields.m_Extents.fields.z;
        fVar14 = UStack_a8.fields.m_Center.fields.z;
        fVar18 = UStack_a8.fields.m_Center.fields.x;
        fVar15 = UStack_a8.fields.m_Center.fields.y;
        if ((int)uVar6 < 1) {
          auVar10._8_8_ = 0;
          auVar10._0_4_ = UStack_a8.fields.m_Extents.fields.x;
          auVar10._4_4_ = UStack_a8.fields.m_Extents.fields.y;
        }
        else {
          uVar5 = 0;
          do {
            if (uVar6 <= uVar5) goto label_040f4193;
            auStack_80._0_4_ = fVar14;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar5 * 8);
            _auStack_90 = auVar20;
            fStack_70 = fVar18;
            fStack_6c = fVar15;
            fStack_68 = fVar16;
            fStack_64 = fVar11;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_a8,__this_00,(MethodInfo *)0x0);
            fVar14 = UStack_a8.fields.m_Center.fields.x - UStack_a8.fields.m_Extents.fields.x;
            fVar15 = UStack_a8.fields.m_Center.fields.y - UStack_a8.fields.m_Extents.fields.y;
            fVar16 = UStack_a8.fields.m_Center.fields.z - UStack_a8.fields.m_Extents.fields.z;
            auVar19._0_4_ = fStack_70 - (float)auStack_90._0_4_;
            auVar19._4_4_ = fStack_6c - (float)auStack_90._4_4_;
            auVar19._8_4_ = fStack_68 - fStack_88;
            auVar19._12_4_ = fStack_64 - fStack_84;
            auVar22._4_4_ = fVar15;
            auVar22._0_4_ = fVar14;
            auVar22._8_8_ = 0;
            auVar20 = minps(auVar19,auVar22);
            fVar18 = (float)auStack_80._0_4_ - fVar8;
            if (fVar16 <= (float)auStack_80._0_4_ - fVar8) {
              fVar18 = fVar16;
            }
            auVar9._0_4_ = (float)auStack_90._0_4_ + fStack_70;
            auVar9._4_4_ = (float)auStack_90._4_4_ + fStack_6c;
            auVar9._8_4_ = fStack_88 + fStack_68;
            auVar9._12_4_ = fStack_84 + fStack_64;
            auVar2._4_4_ = fVar15;
            auVar2._0_4_ = fVar14;
            auVar2._8_8_ = 0;
            auVar10 = maxps(auVar9,auVar2);
            fVar14 = (float)auStack_80._0_4_ + fVar8;
            if ((float)auStack_80._0_4_ + fVar8 <= fVar16) {
              fVar14 = fVar16;
            }
            fVar15 = (auVar10._0_4_ - auVar20._0_4_) * 0.5;
            fVar16 = (auVar10._4_4_ - auVar20._4_4_) * 0.5;
            fVar11 = (auVar10._8_4_ - auVar20._8_4_) * 0.0;
            fVar12 = (auVar10._12_4_ - auVar20._12_4_) * 0.0;
            fVar8 = (fVar14 - fVar18) * 0.5;
            fVar17 = auVar20._0_4_ + fVar15;
            fVar23 = auVar20._4_4_ + fVar16;
            fVar24 = auVar20._8_4_ + fVar11;
            fVar25 = auVar20._12_4_ + fVar12;
            fVar27 = UStack_a8.fields.m_Center.fields.x + UStack_a8.fields.m_Extents.fields.x;
            fVar28 = UStack_a8.fields.m_Center.fields.y + UStack_a8.fields.m_Extents.fields.y;
            fVar26 = UStack_a8.fields.m_Center.fields.z + UStack_a8.fields.m_Extents.fields.z;
            auVar13._0_4_ = fVar17 - fVar15;
            auVar13._4_4_ = fVar23 - fVar16;
            auVar13._8_4_ = fVar24 - fVar11;
            auVar13._12_4_ = fVar25 - fVar12;
            fVar14 = (fVar18 + fVar8) - fVar8;
            auVar3._4_4_ = fVar28;
            auVar3._0_4_ = fVar27;
            auVar3._8_8_ = 0;
            auVar20 = minps(auVar13,auVar3);
            if (fVar26 <= fVar14) {
              fVar14 = fVar26;
            }
            auVar21._0_4_ = fVar17 + fVar15;
            auVar21._4_4_ = fVar23 + fVar16;
            auVar21._8_4_ = fVar24 + fVar11;
            auVar21._12_4_ = fVar25 + fVar12;
            fVar8 = fVar18 + fVar8 + fVar8;
            auVar4._4_4_ = fVar28;
            auVar4._0_4_ = fVar27;
            auVar4._8_8_ = 0;
            auVar22 = maxps(auVar21,auVar4);
            if (fVar8 <= fVar26) {
              fVar8 = fVar26;
            }
            fVar18 = (auVar22._0_4_ - auVar20._0_4_) * 0.5;
            fVar15 = (auVar22._4_4_ - auVar20._4_4_) * 0.5;
            auVar10._0_8_ = CONCAT44(fVar15,fVar18);
            auVar10._8_4_ = (auVar22._8_4_ - auVar20._8_4_) * 0.0;
            auVar10._12_4_ = (auVar22._12_4_ - auVar20._12_4_) * 0.0;
            fVar8 = (fVar8 - fVar14) * 0.5;
            fVar18 = auVar20._0_4_ + fVar18;
            fVar15 = auVar20._4_4_ + fVar15;
            fVar16 = auVar20._8_4_ + auVar10._8_4_;
            fVar11 = auVar20._12_4_ + auVar10._12_4_;
            fVar14 = fVar14 + fVar8;
            uVar5 = uVar5 + 1;
            uVar6 = *(uint *)(lVar1 + 0x18);
            auVar20._8_4_ = auVar10._8_4_;
            auVar20._0_8_ = auVar10._0_8_;
            auVar20._12_4_ = auVar10._12_4_;
          } while ((int)uVar5 < (int)uVar6);
        }
        auStack_90._0_4_ = fVar8;
        auStack_80 = auVar10;
        fStack_70 = fVar18;
        fStack_6c = fVar15;
        fStack_68 = fVar16;
        fStack_64 = fVar11;
        if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_80._0_4_ + (float)auStack_80._0_4_;
            value_00.fields.y = (float)auStack_80._4_4_ + (float)auStack_80._4_4_;
            value_00.fields.z = (float)auStack_90._0_4_ + (float)auStack_90._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar7[2].monitor,value_00,(MethodInfo *)0x0);
            if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_6c;
              value_01.fields.x = fStack_70;
              value_01.fields.z = fVar14;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar7[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Carving
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3e80

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Carving
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  int32_t iVar6;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  uint uVar7;
  uint uVar8;
  UnityEngine_AI_NavMeshObstacle_o *pUVar9;
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o UStack_a0;
  undefined1 auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  uVar8 = (uint)method;
  pUVar9 = (__this->fields).Value;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar5 = UnityEngine_AI_NavMeshObstacle__get_carving(pUVar9,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar5 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar9,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    iVar6 = UnityEngine_AI_NavMeshObstacle__get_shape(pUVar9,(MethodInfo *)0x0);
    return iVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar9,uVar8,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar9[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_a0,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar9[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar18 = 0.0;
        fVar13 = 0.0;
        auVar22._8_8_ = 0;
        auVar22._0_4_ = UStack_a0.fields.m_Extents.fields.x;
        auVar22._4_4_ = UStack_a0.fields.m_Extents.fields.y;
        uVar8 = *(uint *)(lVar1 + 0x18);
        fVar10 = UStack_a0.fields.m_Extents.fields.z;
        fVar16 = UStack_a0.fields.m_Center.fields.z;
        fVar20 = UStack_a0.fields.m_Center.fields.x;
        fVar17 = UStack_a0.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar12._8_8_ = 0;
          auVar12._0_4_ = UStack_a0.fields.m_Extents.fields.x;
          auVar12._4_4_ = UStack_a0.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar8 <= uVar7) goto label_040f4193;
            auStack_78._0_4_ = fVar16;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_88 = auVar22;
            fStack_68 = fVar20;
            fStack_64 = fVar17;
            fStack_60 = fVar18;
            fStack_5c = fVar13;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_a0,__this_00,(MethodInfo *)0x0);
            fVar16 = UStack_a0.fields.m_Center.fields.x - UStack_a0.fields.m_Extents.fields.x;
            fVar17 = UStack_a0.fields.m_Center.fields.y - UStack_a0.fields.m_Extents.fields.y;
            fVar18 = UStack_a0.fields.m_Center.fields.z - UStack_a0.fields.m_Extents.fields.z;
            auVar21._0_4_ = fStack_68 - (float)auStack_88._0_4_;
            auVar21._4_4_ = fStack_64 - (float)auStack_88._4_4_;
            auVar21._8_4_ = fStack_60 - fStack_80;
            auVar21._12_4_ = fStack_5c - fStack_7c;
            auVar24._4_4_ = fVar17;
            auVar24._0_4_ = fVar16;
            auVar24._8_8_ = 0;
            auVar22 = minps(auVar21,auVar24);
            fVar20 = (float)auStack_78._0_4_ - fVar10;
            if (fVar18 <= (float)auStack_78._0_4_ - fVar10) {
              fVar20 = fVar18;
            }
            auVar11._0_4_ = (float)auStack_88._0_4_ + fStack_68;
            auVar11._4_4_ = (float)auStack_88._4_4_ + fStack_64;
            auVar11._8_4_ = fStack_80 + fStack_60;
            auVar11._12_4_ = fStack_7c + fStack_5c;
            auVar2._4_4_ = fVar17;
            auVar2._0_4_ = fVar16;
            auVar2._8_8_ = 0;
            auVar12 = maxps(auVar11,auVar2);
            fVar16 = (float)auStack_78._0_4_ + fVar10;
            if ((float)auStack_78._0_4_ + fVar10 <= fVar18) {
              fVar16 = fVar18;
            }
            fVar17 = (auVar12._0_4_ - auVar22._0_4_) * 0.5;
            fVar18 = (auVar12._4_4_ - auVar22._4_4_) * 0.5;
            fVar13 = (auVar12._8_4_ - auVar22._8_4_) * 0.0;
            fVar14 = (auVar12._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar16 - fVar20) * 0.5;
            fVar19 = auVar22._0_4_ + fVar17;
            fVar25 = auVar22._4_4_ + fVar18;
            fVar26 = auVar22._8_4_ + fVar13;
            fVar27 = auVar22._12_4_ + fVar14;
            fVar29 = UStack_a0.fields.m_Center.fields.x + UStack_a0.fields.m_Extents.fields.x;
            fVar30 = UStack_a0.fields.m_Center.fields.y + UStack_a0.fields.m_Extents.fields.y;
            fVar28 = UStack_a0.fields.m_Center.fields.z + UStack_a0.fields.m_Extents.fields.z;
            auVar15._0_4_ = fVar19 - fVar17;
            auVar15._4_4_ = fVar25 - fVar18;
            auVar15._8_4_ = fVar26 - fVar13;
            auVar15._12_4_ = fVar27 - fVar14;
            fVar16 = (fVar20 + fVar10) - fVar10;
            auVar3._4_4_ = fVar30;
            auVar3._0_4_ = fVar29;
            auVar3._8_8_ = 0;
            auVar22 = minps(auVar15,auVar3);
            if (fVar28 <= fVar16) {
              fVar16 = fVar28;
            }
            auVar23._0_4_ = fVar19 + fVar17;
            auVar23._4_4_ = fVar25 + fVar18;
            auVar23._8_4_ = fVar26 + fVar13;
            auVar23._12_4_ = fVar27 + fVar14;
            fVar10 = fVar20 + fVar10 + fVar10;
            auVar4._4_4_ = fVar30;
            auVar4._0_4_ = fVar29;
            auVar4._8_8_ = 0;
            auVar24 = maxps(auVar23,auVar4);
            if (fVar10 <= fVar28) {
              fVar10 = fVar28;
            }
            fVar20 = (auVar24._0_4_ - auVar22._0_4_) * 0.5;
            fVar17 = (auVar24._4_4_ - auVar22._4_4_) * 0.5;
            auVar12._0_8_ = CONCAT44(fVar17,fVar20);
            auVar12._8_4_ = (auVar24._8_4_ - auVar22._8_4_) * 0.0;
            auVar12._12_4_ = (auVar24._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar10 - fVar16) * 0.5;
            fVar20 = auVar22._0_4_ + fVar20;
            fVar17 = auVar22._4_4_ + fVar17;
            fVar18 = auVar22._8_4_ + auVar12._8_4_;
            fVar13 = auVar22._12_4_ + auVar12._12_4_;
            fVar16 = fVar16 + fVar10;
            uVar7 = uVar7 + 1;
            uVar8 = *(uint *)(lVar1 + 0x18);
            auVar22._8_4_ = auVar12._8_4_;
            auVar22._0_8_ = auVar12._0_8_;
            auVar22._12_4_ = auVar12._12_4_;
          } while ((int)uVar7 < (int)uVar8);
        }
        auStack_88._0_4_ = fVar10;
        auStack_78 = auVar12;
        fStack_68 = fVar20;
        fStack_64 = fVar17;
        fStack_60 = fVar18;
        fStack_5c = fVar13;
        if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar9[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_78._0_4_ + (float)auStack_78._0_4_;
            value.fields.y = (float)auStack_78._4_4_ + (float)auStack_78._4_4_;
            value.fields.z = (float)auStack_88._0_4_ + (float)auStack_88._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar9[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_64;
              value_00.fields.x = fStack_68;
              value_00.fields.z = fVar16;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar9[2].monitor,value_00,(MethodInfo *)0x0);
              return extraout_EAX_02;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return (bool_conflict)"NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Carving
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40f3ea0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Carving
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  UnityEngine_AI_NavMeshObstacle_o *pUVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Bounds_o UStack_98;
  undefined1 auStack_80 [8];
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  pUVar7 = (__this->fields).Value;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carving(pUVar7,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar7,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar7[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_98,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar7[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar16 = 0.0;
        fVar11 = 0.0;
        auVar20._8_8_ = 0;
        auVar20._0_4_ = UStack_98.fields.m_Extents.fields.x;
        auVar20._4_4_ = UStack_98.fields.m_Extents.fields.y;
        uVar5 = *(uint *)(lVar1 + 0x18);
        fVar8 = UStack_98.fields.m_Extents.fields.z;
        fVar14 = UStack_98.fields.m_Center.fields.z;
        fVar18 = UStack_98.fields.m_Center.fields.x;
        fVar15 = UStack_98.fields.m_Center.fields.y;
        if ((int)uVar5 < 1) {
          auVar10._8_8_ = 0;
          auVar10._0_4_ = UStack_98.fields.m_Extents.fields.x;
          auVar10._4_4_ = UStack_98.fields.m_Extents.fields.y;
        }
        else {
          uVar6 = 0;
          do {
            if (uVar5 <= uVar6) goto label_040f4193;
            auStack_70._0_4_ = fVar14;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar6 * 8);
            _auStack_80 = auVar20;
            fStack_60 = fVar18;
            fStack_5c = fVar15;
            fStack_58 = fVar16;
            fStack_54 = fVar11;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_98,__this_00,(MethodInfo *)0x0);
            fVar14 = UStack_98.fields.m_Center.fields.x - UStack_98.fields.m_Extents.fields.x;
            fVar15 = UStack_98.fields.m_Center.fields.y - UStack_98.fields.m_Extents.fields.y;
            fVar16 = UStack_98.fields.m_Center.fields.z - UStack_98.fields.m_Extents.fields.z;
            auVar19._0_4_ = fStack_60 - (float)auStack_80._0_4_;
            auVar19._4_4_ = fStack_5c - (float)auStack_80._4_4_;
            auVar19._8_4_ = fStack_58 - fStack_78;
            auVar19._12_4_ = fStack_54 - fStack_74;
            auVar22._4_4_ = fVar15;
            auVar22._0_4_ = fVar14;
            auVar22._8_8_ = 0;
            auVar20 = minps(auVar19,auVar22);
            fVar18 = (float)auStack_70._0_4_ - fVar8;
            if (fVar16 <= (float)auStack_70._0_4_ - fVar8) {
              fVar18 = fVar16;
            }
            auVar9._0_4_ = (float)auStack_80._0_4_ + fStack_60;
            auVar9._4_4_ = (float)auStack_80._4_4_ + fStack_5c;
            auVar9._8_4_ = fStack_78 + fStack_58;
            auVar9._12_4_ = fStack_74 + fStack_54;
            auVar2._4_4_ = fVar15;
            auVar2._0_4_ = fVar14;
            auVar2._8_8_ = 0;
            auVar10 = maxps(auVar9,auVar2);
            fVar14 = (float)auStack_70._0_4_ + fVar8;
            if ((float)auStack_70._0_4_ + fVar8 <= fVar16) {
              fVar14 = fVar16;
            }
            fVar15 = (auVar10._0_4_ - auVar20._0_4_) * 0.5;
            fVar16 = (auVar10._4_4_ - auVar20._4_4_) * 0.5;
            fVar11 = (auVar10._8_4_ - auVar20._8_4_) * 0.0;
            fVar12 = (auVar10._12_4_ - auVar20._12_4_) * 0.0;
            fVar8 = (fVar14 - fVar18) * 0.5;
            fVar17 = auVar20._0_4_ + fVar15;
            fVar23 = auVar20._4_4_ + fVar16;
            fVar24 = auVar20._8_4_ + fVar11;
            fVar25 = auVar20._12_4_ + fVar12;
            fVar27 = UStack_98.fields.m_Center.fields.x + UStack_98.fields.m_Extents.fields.x;
            fVar28 = UStack_98.fields.m_Center.fields.y + UStack_98.fields.m_Extents.fields.y;
            fVar26 = UStack_98.fields.m_Center.fields.z + UStack_98.fields.m_Extents.fields.z;
            auVar13._0_4_ = fVar17 - fVar15;
            auVar13._4_4_ = fVar23 - fVar16;
            auVar13._8_4_ = fVar24 - fVar11;
            auVar13._12_4_ = fVar25 - fVar12;
            fVar14 = (fVar18 + fVar8) - fVar8;
            auVar3._4_4_ = fVar28;
            auVar3._0_4_ = fVar27;
            auVar3._8_8_ = 0;
            auVar20 = minps(auVar13,auVar3);
            if (fVar26 <= fVar14) {
              fVar14 = fVar26;
            }
            auVar21._0_4_ = fVar17 + fVar15;
            auVar21._4_4_ = fVar23 + fVar16;
            auVar21._8_4_ = fVar24 + fVar11;
            auVar21._12_4_ = fVar25 + fVar12;
            fVar8 = fVar18 + fVar8 + fVar8;
            auVar4._4_4_ = fVar28;
            auVar4._0_4_ = fVar27;
            auVar4._8_8_ = 0;
            auVar22 = maxps(auVar21,auVar4);
            if (fVar8 <= fVar26) {
              fVar8 = fVar26;
            }
            fVar18 = (auVar22._0_4_ - auVar20._0_4_) * 0.5;
            fVar15 = (auVar22._4_4_ - auVar20._4_4_) * 0.5;
            auVar10._0_8_ = CONCAT44(fVar15,fVar18);
            auVar10._8_4_ = (auVar22._8_4_ - auVar20._8_4_) * 0.0;
            auVar10._12_4_ = (auVar22._12_4_ - auVar20._12_4_) * 0.0;
            fVar8 = (fVar8 - fVar14) * 0.5;
            fVar18 = auVar20._0_4_ + fVar18;
            fVar15 = auVar20._4_4_ + fVar15;
            fVar16 = auVar20._8_4_ + auVar10._8_4_;
            fVar11 = auVar20._12_4_ + auVar10._12_4_;
            fVar14 = fVar14 + fVar8;
            uVar6 = uVar6 + 1;
            uVar5 = *(uint *)(lVar1 + 0x18);
            auVar20._8_4_ = auVar10._8_4_;
            auVar20._0_8_ = auVar10._0_8_;
            auVar20._12_4_ = auVar10._12_4_;
          } while ((int)uVar6 < (int)uVar5);
        }
        auStack_80._0_4_ = fVar8;
        auStack_70 = auVar10;
        fStack_60 = fVar18;
        fStack_5c = fVar15;
        fStack_58 = fVar16;
        fStack_54 = fVar11;
        if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_70._0_4_ + (float)auStack_70._0_4_;
            value_00.fields.y = (float)auStack_70._4_4_ + (float)auStack_70._4_4_;
            value_00.fields.z = (float)auStack_80._0_4_ + (float)auStack_80._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar7[2].monitor,value_00,(MethodInfo *)0x0);
            if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_5c;
              value_01.fields.x = fStack_60;
              value_01.fields.z = fVar14;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar7[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_CarveOnlyStationary
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3ec0

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_CarveOnlyStationary
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  int32_t iVar6;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  uint uVar7;
  uint uVar8;
  UnityEngine_AI_NavMeshObstacle_o *pUVar9;
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o UStack_90;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar8 = (uint)method;
  pUVar9 = (__this->fields).Value;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    bVar5 = UnityEngine_AI_NavMeshObstacle__get_carveOnlyStationary(pUVar9,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar9,uVar8 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    iVar6 = UnityEngine_AI_NavMeshObstacle__get_shape(pUVar9,(MethodInfo *)0x0);
    return iVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = pUVar9[2].monitor;
  if (pUVar9 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar9,uVar8,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar9[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_90,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar9[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar18 = 0.0;
        fVar13 = 0.0;
        auVar22._8_8_ = 0;
        auVar22._0_4_ = UStack_90.fields.m_Extents.fields.x;
        auVar22._4_4_ = UStack_90.fields.m_Extents.fields.y;
        uVar8 = *(uint *)(lVar1 + 0x18);
        fVar10 = UStack_90.fields.m_Extents.fields.z;
        fVar16 = UStack_90.fields.m_Center.fields.z;
        fVar20 = UStack_90.fields.m_Center.fields.x;
        fVar17 = UStack_90.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar12._8_8_ = 0;
          auVar12._0_4_ = UStack_90.fields.m_Extents.fields.x;
          auVar12._4_4_ = UStack_90.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar8 <= uVar7) goto label_040f4193;
            auStack_68._0_4_ = fVar16;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_78 = auVar22;
            fStack_58 = fVar20;
            fStack_54 = fVar17;
            fStack_50 = fVar18;
            fStack_4c = fVar13;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_90,__this_00,(MethodInfo *)0x0);
            fVar16 = UStack_90.fields.m_Center.fields.x - UStack_90.fields.m_Extents.fields.x;
            fVar17 = UStack_90.fields.m_Center.fields.y - UStack_90.fields.m_Extents.fields.y;
            fVar18 = UStack_90.fields.m_Center.fields.z - UStack_90.fields.m_Extents.fields.z;
            auVar21._0_4_ = fStack_58 - (float)auStack_78._0_4_;
            auVar21._4_4_ = fStack_54 - (float)auStack_78._4_4_;
            auVar21._8_4_ = fStack_50 - fStack_70;
            auVar21._12_4_ = fStack_4c - fStack_6c;
            auVar24._4_4_ = fVar17;
            auVar24._0_4_ = fVar16;
            auVar24._8_8_ = 0;
            auVar22 = minps(auVar21,auVar24);
            fVar20 = (float)auStack_68._0_4_ - fVar10;
            if (fVar18 <= (float)auStack_68._0_4_ - fVar10) {
              fVar20 = fVar18;
            }
            auVar11._0_4_ = (float)auStack_78._0_4_ + fStack_58;
            auVar11._4_4_ = (float)auStack_78._4_4_ + fStack_54;
            auVar11._8_4_ = fStack_70 + fStack_50;
            auVar11._12_4_ = fStack_6c + fStack_4c;
            auVar2._4_4_ = fVar17;
            auVar2._0_4_ = fVar16;
            auVar2._8_8_ = 0;
            auVar12 = maxps(auVar11,auVar2);
            fVar16 = (float)auStack_68._0_4_ + fVar10;
            if ((float)auStack_68._0_4_ + fVar10 <= fVar18) {
              fVar16 = fVar18;
            }
            fVar17 = (auVar12._0_4_ - auVar22._0_4_) * 0.5;
            fVar18 = (auVar12._4_4_ - auVar22._4_4_) * 0.5;
            fVar13 = (auVar12._8_4_ - auVar22._8_4_) * 0.0;
            fVar14 = (auVar12._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar16 - fVar20) * 0.5;
            fVar19 = auVar22._0_4_ + fVar17;
            fVar25 = auVar22._4_4_ + fVar18;
            fVar26 = auVar22._8_4_ + fVar13;
            fVar27 = auVar22._12_4_ + fVar14;
            fVar29 = UStack_90.fields.m_Center.fields.x + UStack_90.fields.m_Extents.fields.x;
            fVar30 = UStack_90.fields.m_Center.fields.y + UStack_90.fields.m_Extents.fields.y;
            fVar28 = UStack_90.fields.m_Center.fields.z + UStack_90.fields.m_Extents.fields.z;
            auVar15._0_4_ = fVar19 - fVar17;
            auVar15._4_4_ = fVar25 - fVar18;
            auVar15._8_4_ = fVar26 - fVar13;
            auVar15._12_4_ = fVar27 - fVar14;
            fVar16 = (fVar20 + fVar10) - fVar10;
            auVar3._4_4_ = fVar30;
            auVar3._0_4_ = fVar29;
            auVar3._8_8_ = 0;
            auVar22 = minps(auVar15,auVar3);
            if (fVar28 <= fVar16) {
              fVar16 = fVar28;
            }
            auVar23._0_4_ = fVar19 + fVar17;
            auVar23._4_4_ = fVar25 + fVar18;
            auVar23._8_4_ = fVar26 + fVar13;
            auVar23._12_4_ = fVar27 + fVar14;
            fVar10 = fVar20 + fVar10 + fVar10;
            auVar4._4_4_ = fVar30;
            auVar4._0_4_ = fVar29;
            auVar4._8_8_ = 0;
            auVar24 = maxps(auVar23,auVar4);
            if (fVar10 <= fVar28) {
              fVar10 = fVar28;
            }
            fVar20 = (auVar24._0_4_ - auVar22._0_4_) * 0.5;
            fVar17 = (auVar24._4_4_ - auVar22._4_4_) * 0.5;
            auVar12._0_8_ = CONCAT44(fVar17,fVar20);
            auVar12._8_4_ = (auVar24._8_4_ - auVar22._8_4_) * 0.0;
            auVar12._12_4_ = (auVar24._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar10 - fVar16) * 0.5;
            fVar20 = auVar22._0_4_ + fVar20;
            fVar17 = auVar22._4_4_ + fVar17;
            fVar18 = auVar22._8_4_ + auVar12._8_4_;
            fVar13 = auVar22._12_4_ + auVar12._12_4_;
            fVar16 = fVar16 + fVar10;
            uVar7 = uVar7 + 1;
            uVar8 = *(uint *)(lVar1 + 0x18);
            auVar22._8_4_ = auVar12._8_4_;
            auVar22._0_8_ = auVar12._0_8_;
            auVar22._12_4_ = auVar12._12_4_;
          } while ((int)uVar7 < (int)uVar8);
        }
        auStack_78._0_4_ = fVar10;
        auStack_68 = auVar12;
        fStack_58 = fVar20;
        fStack_54 = fVar17;
        fStack_50 = fVar18;
        fStack_4c = fVar13;
        if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar9[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_68._0_4_ + (float)auStack_68._0_4_;
            value.fields.y = (float)auStack_68._4_4_ + (float)auStack_68._4_4_;
            value.fields.z = (float)auStack_78._0_4_ + (float)auStack_78._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar9[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar9[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_54;
              value_00.fields.x = fStack_58;
              value_00.fields.z = fVar16;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar9[2].monitor,value_00,(MethodInfo *)0x0);
              return extraout_EAX_01;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return (bool_conflict)"NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_CarveOnlyStationary
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x40f3ee0

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_CarveOnlyStationary
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  UnityEngine_AI_NavMeshObstacle_o *pUVar7;
  float fVar8;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Bounds_o UStack_88;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pUVar7 = (__this->fields).Value;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_carveOnlyStationary(pUVar7,value & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__get_shape(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[2].monitor;
  if (pUVar7 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar7[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_88,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar7[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar16 = 0.0;
        fVar11 = 0.0;
        auVar20._8_8_ = 0;
        auVar20._0_4_ = UStack_88.fields.m_Extents.fields.x;
        auVar20._4_4_ = UStack_88.fields.m_Extents.fields.y;
        uVar5 = *(uint *)(lVar1 + 0x18);
        fVar8 = UStack_88.fields.m_Extents.fields.z;
        fVar14 = UStack_88.fields.m_Center.fields.z;
        fVar18 = UStack_88.fields.m_Center.fields.x;
        fVar15 = UStack_88.fields.m_Center.fields.y;
        if ((int)uVar5 < 1) {
          auVar10._8_8_ = 0;
          auVar10._0_4_ = UStack_88.fields.m_Extents.fields.x;
          auVar10._4_4_ = UStack_88.fields.m_Extents.fields.y;
        }
        else {
          uVar6 = 0;
          do {
            if (uVar5 <= uVar6) goto label_040f4193;
            auStack_60._0_4_ = fVar14;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar6 * 8);
            _auStack_70 = auVar20;
            fStack_50 = fVar18;
            fStack_4c = fVar15;
            fStack_48 = fVar16;
            fStack_44 = fVar11;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_88,__this_00,(MethodInfo *)0x0);
            fVar14 = UStack_88.fields.m_Center.fields.x - UStack_88.fields.m_Extents.fields.x;
            fVar15 = UStack_88.fields.m_Center.fields.y - UStack_88.fields.m_Extents.fields.y;
            fVar16 = UStack_88.fields.m_Center.fields.z - UStack_88.fields.m_Extents.fields.z;
            auVar19._0_4_ = fStack_50 - (float)auStack_70._0_4_;
            auVar19._4_4_ = fStack_4c - (float)auStack_70._4_4_;
            auVar19._8_4_ = fStack_48 - fStack_68;
            auVar19._12_4_ = fStack_44 - fStack_64;
            auVar22._4_4_ = fVar15;
            auVar22._0_4_ = fVar14;
            auVar22._8_8_ = 0;
            auVar20 = minps(auVar19,auVar22);
            fVar18 = (float)auStack_60._0_4_ - fVar8;
            if (fVar16 <= (float)auStack_60._0_4_ - fVar8) {
              fVar18 = fVar16;
            }
            auVar9._0_4_ = (float)auStack_70._0_4_ + fStack_50;
            auVar9._4_4_ = (float)auStack_70._4_4_ + fStack_4c;
            auVar9._8_4_ = fStack_68 + fStack_48;
            auVar9._12_4_ = fStack_64 + fStack_44;
            auVar2._4_4_ = fVar15;
            auVar2._0_4_ = fVar14;
            auVar2._8_8_ = 0;
            auVar10 = maxps(auVar9,auVar2);
            fVar14 = (float)auStack_60._0_4_ + fVar8;
            if ((float)auStack_60._0_4_ + fVar8 <= fVar16) {
              fVar14 = fVar16;
            }
            fVar15 = (auVar10._0_4_ - auVar20._0_4_) * 0.5;
            fVar16 = (auVar10._4_4_ - auVar20._4_4_) * 0.5;
            fVar11 = (auVar10._8_4_ - auVar20._8_4_) * 0.0;
            fVar12 = (auVar10._12_4_ - auVar20._12_4_) * 0.0;
            fVar8 = (fVar14 - fVar18) * 0.5;
            fVar17 = auVar20._0_4_ + fVar15;
            fVar23 = auVar20._4_4_ + fVar16;
            fVar24 = auVar20._8_4_ + fVar11;
            fVar25 = auVar20._12_4_ + fVar12;
            fVar27 = UStack_88.fields.m_Center.fields.x + UStack_88.fields.m_Extents.fields.x;
            fVar28 = UStack_88.fields.m_Center.fields.y + UStack_88.fields.m_Extents.fields.y;
            fVar26 = UStack_88.fields.m_Center.fields.z + UStack_88.fields.m_Extents.fields.z;
            auVar13._0_4_ = fVar17 - fVar15;
            auVar13._4_4_ = fVar23 - fVar16;
            auVar13._8_4_ = fVar24 - fVar11;
            auVar13._12_4_ = fVar25 - fVar12;
            fVar14 = (fVar18 + fVar8) - fVar8;
            auVar3._4_4_ = fVar28;
            auVar3._0_4_ = fVar27;
            auVar3._8_8_ = 0;
            auVar20 = minps(auVar13,auVar3);
            if (fVar26 <= fVar14) {
              fVar14 = fVar26;
            }
            auVar21._0_4_ = fVar17 + fVar15;
            auVar21._4_4_ = fVar23 + fVar16;
            auVar21._8_4_ = fVar24 + fVar11;
            auVar21._12_4_ = fVar25 + fVar12;
            fVar8 = fVar18 + fVar8 + fVar8;
            auVar4._4_4_ = fVar28;
            auVar4._0_4_ = fVar27;
            auVar4._8_8_ = 0;
            auVar22 = maxps(auVar21,auVar4);
            if (fVar8 <= fVar26) {
              fVar8 = fVar26;
            }
            fVar18 = (auVar22._0_4_ - auVar20._0_4_) * 0.5;
            fVar15 = (auVar22._4_4_ - auVar20._4_4_) * 0.5;
            auVar10._0_8_ = CONCAT44(fVar15,fVar18);
            auVar10._8_4_ = (auVar22._8_4_ - auVar20._8_4_) * 0.0;
            auVar10._12_4_ = (auVar22._12_4_ - auVar20._12_4_) * 0.0;
            fVar8 = (fVar8 - fVar14) * 0.5;
            fVar18 = auVar20._0_4_ + fVar18;
            fVar15 = auVar20._4_4_ + fVar15;
            fVar16 = auVar20._8_4_ + auVar10._8_4_;
            fVar11 = auVar20._12_4_ + auVar10._12_4_;
            fVar14 = fVar14 + fVar8;
            uVar6 = uVar6 + 1;
            uVar5 = *(uint *)(lVar1 + 0x18);
            auVar20._8_4_ = auVar10._8_4_;
            auVar20._0_8_ = auVar10._0_8_;
            auVar20._12_4_ = auVar10._12_4_;
          } while ((int)uVar6 < (int)uVar5);
        }
        auStack_70._0_4_ = fVar8;
        auStack_60 = auVar10;
        fStack_50 = fVar18;
        fStack_4c = fVar15;
        fStack_48 = fVar16;
        fStack_44 = fVar11;
        if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar7[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_60._0_4_ + (float)auStack_60._0_4_;
            value_00.fields.y = (float)auStack_60._4_4_ + (float)auStack_60._4_4_;
            value_00.fields.z = (float)auStack_70._0_4_ + (float)auStack_70._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar7[2].monitor,value_00,(MethodInfo *)0x0);
            if (pUVar7[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_4c;
              value_01.fields.x = fStack_50;
              value_01.fields.z = fVar14;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar7[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_Shape
// il2cpp: int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3f00

int32_t CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_Shape
                  (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int32_t iVar5;
  int32_t extraout_EAX;
  uint uVar6;
  int32_t extraout_EAX_00;
  uint uVar7;
  UnityEngine_AI_NavMeshObstacle_o *pUVar8;
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar24;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o UStack_80;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  iVar5 = (int32_t)method;
  pUVar8 = (__this->fields).Value;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    iVar5 = UnityEngine_AI_NavMeshObstacle__get_shape(pUVar8,(MethodInfo *)0x0);
    return iVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(pUVar8,iVar5,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = pUVar8[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_80,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = pUVar8[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar17 = 0.0;
        fVar12 = 0.0;
        auVar21._8_8_ = 0;
        auVar21._0_4_ = UStack_80.fields.m_Extents.fields.x;
        auVar21._4_4_ = UStack_80.fields.m_Extents.fields.y;
        uVar6 = *(uint *)(lVar1 + 0x18);
        fVar9 = UStack_80.fields.m_Extents.fields.z;
        fVar15 = UStack_80.fields.m_Center.fields.z;
        fVar19 = UStack_80.fields.m_Center.fields.x;
        fVar16 = UStack_80.fields.m_Center.fields.y;
        if ((int)uVar6 < 1) {
          auVar11._8_8_ = 0;
          auVar11._0_4_ = UStack_80.fields.m_Extents.fields.x;
          auVar11._4_4_ = UStack_80.fields.m_Extents.fields.y;
        }
        else {
          uVar7 = 0;
          do {
            if (uVar6 <= uVar7) goto label_040f4193;
            auStack_58._0_4_ = fVar15;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar7 * 8);
            _auStack_68 = auVar21;
            fStack_48 = fVar19;
            fStack_44 = fVar16;
            fStack_40 = fVar17;
            fStack_3c = fVar12;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_80,__this_00,(MethodInfo *)0x0);
            fVar15 = UStack_80.fields.m_Center.fields.x - UStack_80.fields.m_Extents.fields.x;
            fVar16 = UStack_80.fields.m_Center.fields.y - UStack_80.fields.m_Extents.fields.y;
            fVar17 = UStack_80.fields.m_Center.fields.z - UStack_80.fields.m_Extents.fields.z;
            auVar20._0_4_ = fStack_48 - (float)auStack_68._0_4_;
            auVar20._4_4_ = fStack_44 - (float)auStack_68._4_4_;
            auVar20._8_4_ = fStack_40 - fStack_60;
            auVar20._12_4_ = fStack_3c - fStack_5c;
            auVar23._4_4_ = fVar16;
            auVar23._0_4_ = fVar15;
            auVar23._8_8_ = 0;
            auVar21 = minps(auVar20,auVar23);
            fVar19 = (float)auStack_58._0_4_ - fVar9;
            if (fVar17 <= (float)auStack_58._0_4_ - fVar9) {
              fVar19 = fVar17;
            }
            auVar10._0_4_ = (float)auStack_68._0_4_ + fStack_48;
            auVar10._4_4_ = (float)auStack_68._4_4_ + fStack_44;
            auVar10._8_4_ = fStack_60 + fStack_40;
            auVar10._12_4_ = fStack_5c + fStack_3c;
            auVar2._4_4_ = fVar16;
            auVar2._0_4_ = fVar15;
            auVar2._8_8_ = 0;
            auVar11 = maxps(auVar10,auVar2);
            fVar15 = (float)auStack_58._0_4_ + fVar9;
            if ((float)auStack_58._0_4_ + fVar9 <= fVar17) {
              fVar15 = fVar17;
            }
            fVar16 = (auVar11._0_4_ - auVar21._0_4_) * 0.5;
            fVar17 = (auVar11._4_4_ - auVar21._4_4_) * 0.5;
            fVar12 = (auVar11._8_4_ - auVar21._8_4_) * 0.0;
            fVar13 = (auVar11._12_4_ - auVar21._12_4_) * 0.0;
            fVar9 = (fVar15 - fVar19) * 0.5;
            fVar18 = auVar21._0_4_ + fVar16;
            fVar24 = auVar21._4_4_ + fVar17;
            fVar25 = auVar21._8_4_ + fVar12;
            fVar26 = auVar21._12_4_ + fVar13;
            fVar28 = UStack_80.fields.m_Center.fields.x + UStack_80.fields.m_Extents.fields.x;
            fVar29 = UStack_80.fields.m_Center.fields.y + UStack_80.fields.m_Extents.fields.y;
            fVar27 = UStack_80.fields.m_Center.fields.z + UStack_80.fields.m_Extents.fields.z;
            auVar14._0_4_ = fVar18 - fVar16;
            auVar14._4_4_ = fVar24 - fVar17;
            auVar14._8_4_ = fVar25 - fVar12;
            auVar14._12_4_ = fVar26 - fVar13;
            fVar15 = (fVar19 + fVar9) - fVar9;
            auVar3._4_4_ = fVar29;
            auVar3._0_4_ = fVar28;
            auVar3._8_8_ = 0;
            auVar21 = minps(auVar14,auVar3);
            if (fVar27 <= fVar15) {
              fVar15 = fVar27;
            }
            auVar22._0_4_ = fVar18 + fVar16;
            auVar22._4_4_ = fVar24 + fVar17;
            auVar22._8_4_ = fVar25 + fVar12;
            auVar22._12_4_ = fVar26 + fVar13;
            fVar9 = fVar19 + fVar9 + fVar9;
            auVar4._4_4_ = fVar29;
            auVar4._0_4_ = fVar28;
            auVar4._8_8_ = 0;
            auVar23 = maxps(auVar22,auVar4);
            if (fVar9 <= fVar27) {
              fVar9 = fVar27;
            }
            fVar19 = (auVar23._0_4_ - auVar21._0_4_) * 0.5;
            fVar16 = (auVar23._4_4_ - auVar21._4_4_) * 0.5;
            auVar11._0_8_ = CONCAT44(fVar16,fVar19);
            auVar11._8_4_ = (auVar23._8_4_ - auVar21._8_4_) * 0.0;
            auVar11._12_4_ = (auVar23._12_4_ - auVar21._12_4_) * 0.0;
            fVar9 = (fVar9 - fVar15) * 0.5;
            fVar19 = auVar21._0_4_ + fVar19;
            fVar16 = auVar21._4_4_ + fVar16;
            fVar17 = auVar21._8_4_ + auVar11._8_4_;
            fVar12 = auVar21._12_4_ + auVar11._12_4_;
            fVar15 = fVar15 + fVar9;
            uVar7 = uVar7 + 1;
            uVar6 = *(uint *)(lVar1 + 0x18);
            auVar21._8_4_ = auVar11._8_4_;
            auVar21._0_8_ = auVar11._0_8_;
            auVar21._12_4_ = auVar11._12_4_;
          } while ((int)uVar7 < (int)uVar6);
        }
        auStack_68._0_4_ = fVar9;
        auStack_58 = auVar11;
        fStack_48 = fVar19;
        fStack_44 = fVar16;
        fStack_40 = fVar17;
        fStack_3c = fVar12;
        if (pUVar8[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar8[2].monitor,1,(MethodInfo *)0x0);
          if (pUVar8[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)auStack_58._0_4_ + (float)auStack_58._0_4_;
            value.fields.y = (float)auStack_58._4_4_ + (float)auStack_58._4_4_;
            value.fields.z = (float)auStack_68._0_4_ + (float)auStack_68._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar8[2].monitor,value,(MethodInfo *)0x0);
            if (pUVar8[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_44;
              value_00.fields.x = fStack_48;
              value_00.fields.z = fVar15;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar8[2].monitor,value_00,(MethodInfo *)0x0);
              return extraout_EAX_00;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return (int32_t)"NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$set_Shape
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x40f3f20

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__set_Shape
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Collider_o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  UnityEngine_AI_NavMeshObstacle_o *__this_01;
  float fVar7;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Bounds_o UStack_78;
  undefined1 auStack_60 [8];
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  __this_01 = (__this->fields).Value;
  if (__this_01 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
    UnityEngine_AI_NavMeshObstacle__set_shape(__this_01,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar1 = __this_01[2].fields.m_CachedPtr;
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x18) == 0) goto label_040f4193;
    if (*(UnityEngine_Collider_o **)(lVar1 + 0x20) != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds
                (&UStack_78,*(UnityEngine_Collider_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
      lVar1 = __this_01[2].fields.m_CachedPtr;
      if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x48), lVar1 != 0)) {
        fVar15 = 0.0;
        fVar10 = 0.0;
        auVar19._8_8_ = 0;
        auVar19._0_4_ = UStack_78.fields.m_Extents.fields.x;
        auVar19._4_4_ = UStack_78.fields.m_Extents.fields.y;
        uVar5 = *(uint *)(lVar1 + 0x18);
        fVar7 = UStack_78.fields.m_Extents.fields.z;
        fVar13 = UStack_78.fields.m_Center.fields.z;
        fVar17 = UStack_78.fields.m_Center.fields.x;
        fVar14 = UStack_78.fields.m_Center.fields.y;
        if ((int)uVar5 < 1) {
          auVar9._8_8_ = 0;
          auVar9._0_4_ = UStack_78.fields.m_Extents.fields.x;
          auVar9._4_4_ = UStack_78.fields.m_Extents.fields.y;
        }
        else {
          uVar6 = 0;
          do {
            if (uVar5 <= uVar6) goto label_040f4193;
            auStack_50._0_4_ = fVar13;
            __this_00 = *(UnityEngine_Collider_o **)(lVar1 + 0x20 + (long)(int)uVar6 * 8);
            _auStack_60 = auVar19;
            fStack_40 = fVar17;
            fStack_3c = fVar14;
            fStack_38 = fVar15;
            fStack_34 = fVar10;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&UStack_78,__this_00,(MethodInfo *)0x0);
            fVar13 = UStack_78.fields.m_Center.fields.x - UStack_78.fields.m_Extents.fields.x;
            fVar14 = UStack_78.fields.m_Center.fields.y - UStack_78.fields.m_Extents.fields.y;
            fVar15 = UStack_78.fields.m_Center.fields.z - UStack_78.fields.m_Extents.fields.z;
            auVar18._0_4_ = fStack_40 - (float)auStack_60._0_4_;
            auVar18._4_4_ = fStack_3c - (float)auStack_60._4_4_;
            auVar18._8_4_ = fStack_38 - fStack_58;
            auVar18._12_4_ = fStack_34 - fStack_54;
            auVar21._4_4_ = fVar14;
            auVar21._0_4_ = fVar13;
            auVar21._8_8_ = 0;
            auVar19 = minps(auVar18,auVar21);
            fVar17 = (float)auStack_50._0_4_ - fVar7;
            if (fVar15 <= (float)auStack_50._0_4_ - fVar7) {
              fVar17 = fVar15;
            }
            auVar8._0_4_ = (float)auStack_60._0_4_ + fStack_40;
            auVar8._4_4_ = (float)auStack_60._4_4_ + fStack_3c;
            auVar8._8_4_ = fStack_58 + fStack_38;
            auVar8._12_4_ = fStack_54 + fStack_34;
            auVar2._4_4_ = fVar14;
            auVar2._0_4_ = fVar13;
            auVar2._8_8_ = 0;
            auVar9 = maxps(auVar8,auVar2);
            fVar13 = (float)auStack_50._0_4_ + fVar7;
            if ((float)auStack_50._0_4_ + fVar7 <= fVar15) {
              fVar13 = fVar15;
            }
            fVar14 = (auVar9._0_4_ - auVar19._0_4_) * 0.5;
            fVar15 = (auVar9._4_4_ - auVar19._4_4_) * 0.5;
            fVar10 = (auVar9._8_4_ - auVar19._8_4_) * 0.0;
            fVar11 = (auVar9._12_4_ - auVar19._12_4_) * 0.0;
            fVar7 = (fVar13 - fVar17) * 0.5;
            fVar16 = auVar19._0_4_ + fVar14;
            fVar22 = auVar19._4_4_ + fVar15;
            fVar23 = auVar19._8_4_ + fVar10;
            fVar24 = auVar19._12_4_ + fVar11;
            fVar26 = UStack_78.fields.m_Center.fields.x + UStack_78.fields.m_Extents.fields.x;
            fVar27 = UStack_78.fields.m_Center.fields.y + UStack_78.fields.m_Extents.fields.y;
            fVar25 = UStack_78.fields.m_Center.fields.z + UStack_78.fields.m_Extents.fields.z;
            auVar12._0_4_ = fVar16 - fVar14;
            auVar12._4_4_ = fVar22 - fVar15;
            auVar12._8_4_ = fVar23 - fVar10;
            auVar12._12_4_ = fVar24 - fVar11;
            fVar13 = (fVar17 + fVar7) - fVar7;
            auVar3._4_4_ = fVar27;
            auVar3._0_4_ = fVar26;
            auVar3._8_8_ = 0;
            auVar19 = minps(auVar12,auVar3);
            if (fVar25 <= fVar13) {
              fVar13 = fVar25;
            }
            auVar20._0_4_ = fVar16 + fVar14;
            auVar20._4_4_ = fVar22 + fVar15;
            auVar20._8_4_ = fVar23 + fVar10;
            auVar20._12_4_ = fVar24 + fVar11;
            fVar7 = fVar17 + fVar7 + fVar7;
            auVar4._4_4_ = fVar27;
            auVar4._0_4_ = fVar26;
            auVar4._8_8_ = 0;
            auVar21 = maxps(auVar20,auVar4);
            if (fVar7 <= fVar25) {
              fVar7 = fVar25;
            }
            fVar17 = (auVar21._0_4_ - auVar19._0_4_) * 0.5;
            fVar14 = (auVar21._4_4_ - auVar19._4_4_) * 0.5;
            auVar9._0_8_ = CONCAT44(fVar14,fVar17);
            auVar9._8_4_ = (auVar21._8_4_ - auVar19._8_4_) * 0.0;
            auVar9._12_4_ = (auVar21._12_4_ - auVar19._12_4_) * 0.0;
            fVar7 = (fVar7 - fVar13) * 0.5;
            fVar17 = auVar19._0_4_ + fVar17;
            fVar14 = auVar19._4_4_ + fVar14;
            fVar15 = auVar19._8_4_ + auVar9._8_4_;
            fVar10 = auVar19._12_4_ + auVar9._12_4_;
            fVar13 = fVar13 + fVar7;
            uVar6 = uVar6 + 1;
            uVar5 = *(uint *)(lVar1 + 0x18);
            auVar19._8_4_ = auVar9._8_4_;
            auVar19._0_8_ = auVar9._0_8_;
            auVar19._12_4_ = auVar9._12_4_;
          } while ((int)uVar6 < (int)uVar5);
        }
        auStack_60._0_4_ = fVar7;
        auStack_50 = auVar9;
        fStack_40 = fVar17;
        fStack_3c = fVar14;
        fStack_38 = fVar15;
        fStack_34 = fVar10;
        if (__this_01[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(__this_01[2].monitor,1,(MethodInfo *)0x0);
          if (__this_01[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value_00.fields.x = (float)auStack_50._0_4_ + (float)auStack_50._0_4_;
            value_00.fields.y = (float)auStack_50._4_4_ + (float)auStack_50._4_4_;
            value_00.fields.z = (float)auStack_60._0_4_ + (float)auStack_60._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(__this_01[2].monitor,value_00,(MethodInfo *)0x0);
            if (__this_01[2].monitor != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_01.fields.y = fStack_3c;
              value_01.fields.x = fStack_40;
              value_01.fields.z = fVar13;
              UnityEngine_AI_NavMeshObstacle__set_center(__this_01[2].monitor,value_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$AutoScale
// il2cpp: void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f3f40

void CustomLogic_CustomLogicNavmeshObstacleBuiltin__AutoScale
               (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_AI_NavMeshObstacle_o *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Bounds_o local_70;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pCVar1 = (__this->fields).OwnerMapObject;
  if (((pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar2 = (pCVar1->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) &&
     (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
    if ((int)pUVar3->max_length == 0) goto label_040f4193;
    if (pUVar3->m_Items[0] != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__get_bounds(&local_70,pUVar3->m_Items[0],(MethodInfo *)0x0);
      pCVar1 = (__this->fields).OwnerMapObject;
      if (((pCVar1 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
          (pMVar2 = (pCVar1->fields).Value, pMVar2 != (Map_MapObject_o *)0x0)) &&
         (pUVar3 = (pMVar2->fields).colliderCache, pUVar3 != (UnityEngine_Collider_array *)0x0)) {
        fVar18 = 0.0;
        fVar13 = 0.0;
        auVar22._8_8_ = 0;
        auVar22._0_4_ = local_70.fields.m_Extents.fields.x;
        auVar22._4_4_ = local_70.fields.m_Extents.fields.y;
        uVar8 = (uint)pUVar3->max_length;
        fVar10 = local_70.fields.m_Extents.fields.z;
        fVar16 = local_70.fields.m_Center.fields.z;
        fVar20 = local_70.fields.m_Center.fields.x;
        fVar17 = local_70.fields.m_Center.fields.y;
        if ((int)uVar8 < 1) {
          auVar12._8_8_ = 0;
          auVar12._0_4_ = local_70.fields.m_Extents.fields.x;
          auVar12._4_4_ = local_70.fields.m_Extents.fields.y;
        }
        else {
          uVar9 = 0;
          do {
            if (uVar8 <= uVar9) goto label_040f4193;
            local_48._0_4_ = fVar16;
            _local_58 = auVar22;
            local_38 = fVar20;
            fStack_34 = fVar17;
            fStack_30 = fVar18;
            fStack_2c = fVar13;
            if (pUVar3->m_Items[(int)uVar9] == (UnityEngine_Collider_o *)0x0) goto label_040f418e;
            UnityEngine_Collider__get_bounds(&local_70,pUVar3->m_Items[(int)uVar9],(MethodInfo *)0x0);
            fVar16 = local_70.fields.m_Center.fields.x - local_70.fields.m_Extents.fields.x;
            fVar17 = local_70.fields.m_Center.fields.y - local_70.fields.m_Extents.fields.y;
            fVar18 = local_70.fields.m_Center.fields.z - local_70.fields.m_Extents.fields.z;
            auVar21._0_4_ = local_38 - (float)local_58._0_4_;
            auVar21._4_4_ = fStack_34 - (float)local_58._4_4_;
            auVar21._8_4_ = fStack_30 - fStack_50;
            auVar21._12_4_ = fStack_2c - fStack_4c;
            auVar24._4_4_ = fVar17;
            auVar24._0_4_ = fVar16;
            auVar24._8_8_ = 0;
            auVar22 = minps(auVar21,auVar24);
            fVar20 = (float)local_48._0_4_ - fVar10;
            if (fVar18 <= (float)local_48._0_4_ - fVar10) {
              fVar20 = fVar18;
            }
            auVar11._0_4_ = (float)local_58._0_4_ + local_38;
            auVar11._4_4_ = (float)local_58._4_4_ + fStack_34;
            auVar11._8_4_ = fStack_50 + fStack_30;
            auVar11._12_4_ = fStack_4c + fStack_2c;
            auVar5._4_4_ = fVar17;
            auVar5._0_4_ = fVar16;
            auVar5._8_8_ = 0;
            auVar12 = maxps(auVar11,auVar5);
            fVar16 = (float)local_48._0_4_ + fVar10;
            if ((float)local_48._0_4_ + fVar10 <= fVar18) {
              fVar16 = fVar18;
            }
            fVar17 = (auVar12._0_4_ - auVar22._0_4_) * 0.5;
            fVar18 = (auVar12._4_4_ - auVar22._4_4_) * 0.5;
            fVar13 = (auVar12._8_4_ - auVar22._8_4_) * 0.0;
            fVar14 = (auVar12._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar16 - fVar20) * 0.5;
            fVar19 = auVar22._0_4_ + fVar17;
            fVar25 = auVar22._4_4_ + fVar18;
            fVar26 = auVar22._8_4_ + fVar13;
            fVar27 = auVar22._12_4_ + fVar14;
            fVar29 = local_70.fields.m_Center.fields.x + local_70.fields.m_Extents.fields.x;
            fVar30 = local_70.fields.m_Center.fields.y + local_70.fields.m_Extents.fields.y;
            fVar28 = local_70.fields.m_Center.fields.z + local_70.fields.m_Extents.fields.z;
            auVar15._0_4_ = fVar19 - fVar17;
            auVar15._4_4_ = fVar25 - fVar18;
            auVar15._8_4_ = fVar26 - fVar13;
            auVar15._12_4_ = fVar27 - fVar14;
            fVar16 = (fVar20 + fVar10) - fVar10;
            auVar6._4_4_ = fVar30;
            auVar6._0_4_ = fVar29;
            auVar6._8_8_ = 0;
            auVar22 = minps(auVar15,auVar6);
            if (fVar28 <= fVar16) {
              fVar16 = fVar28;
            }
            auVar23._0_4_ = fVar19 + fVar17;
            auVar23._4_4_ = fVar25 + fVar18;
            auVar23._8_4_ = fVar26 + fVar13;
            auVar23._12_4_ = fVar27 + fVar14;
            fVar10 = fVar20 + fVar10 + fVar10;
            auVar7._4_4_ = fVar30;
            auVar7._0_4_ = fVar29;
            auVar7._8_8_ = 0;
            auVar24 = maxps(auVar23,auVar7);
            if (fVar10 <= fVar28) {
              fVar10 = fVar28;
            }
            fVar20 = (auVar24._0_4_ - auVar22._0_4_) * 0.5;
            fVar17 = (auVar24._4_4_ - auVar22._4_4_) * 0.5;
            auVar12._0_8_ = CONCAT44(fVar17,fVar20);
            auVar12._8_4_ = (auVar24._8_4_ - auVar22._8_4_) * 0.0;
            auVar12._12_4_ = (auVar24._12_4_ - auVar22._12_4_) * 0.0;
            fVar10 = (fVar10 - fVar16) * 0.5;
            fVar20 = auVar22._0_4_ + fVar20;
            fVar17 = auVar22._4_4_ + fVar17;
            fVar18 = auVar22._8_4_ + auVar12._8_4_;
            fVar13 = auVar22._12_4_ + auVar12._12_4_;
            fVar16 = fVar16 + fVar10;
            uVar9 = uVar9 + 1;
            uVar8 = (uint)pUVar3->max_length;
            auVar22._8_4_ = auVar12._8_4_;
            auVar22._0_8_ = auVar12._0_8_;
            auVar22._12_4_ = auVar12._12_4_;
          } while ((int)uVar9 < (int)uVar8);
        }
        local_58._0_4_ = fVar10;
        pUVar4 = (__this->fields).Value;
        local_48 = auVar12;
        local_38 = fVar20;
        fStack_34 = fVar17;
        fStack_30 = fVar18;
        fStack_2c = fVar13;
        if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
          UnityEngine_AI_NavMeshObstacle__set_shape(pUVar4,1,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).Value;
          if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
            value.fields.x = (float)local_48._0_4_ + (float)local_48._0_4_;
            value.fields.y = (float)local_48._4_4_ + (float)local_48._4_4_;
            value.fields.z = (float)local_58._0_4_ + (float)local_58._0_4_;
            UnityEngine_AI_NavMeshObstacle__set_size(pUVar4,value,(MethodInfo *)0x0);
            pUVar4 = (__this->fields).Value;
            if (pUVar4 != (UnityEngine_AI_NavMeshObstacle_o *)0x0) {
              value_00.fields.y = fStack_34;
              value_00.fields.x = local_38;
              value_00.fields.z = fVar16;
              UnityEngine_AI_NavMeshObstacle__set_center(pUVar4,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_040f418e:
  il2cpp_runtime_helper_022b2c90();
label_040f4193:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f41a0

System_String_o *
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_ClassName
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac7be == '\0') {
    il2cpp_runtime_helper_023445d0(&"NavmeshObstacleBuiltin");
    g_data_057ac7be = '\x01';
  }
  return "NavmeshObstacleBuiltin";
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f41d0

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f41e0

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_IsStatic
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNavmeshObstacleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o* __this, const MethodInfo* method);
// 0x40f41f0

bool_conflict
CustomLogic_CustomLogicNavmeshObstacleBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicNavmeshObstacleBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


